`include "MUX32.v"
`include "PC.v"
`include "Adder.v"
`include "Instruction_Memory.v"
`include "ALU.v"
`include "shift1.v"
`include "Sign_Extend.v"
`include "Stage_IF_ID.v"
`include "Control.v"
`include "Registers.v"
`include "Stage_ID_EX.v"
`include "ALU_Control.v"
`include "HazardDetect.v"
`include "MUX_Control.v"
`include "ForwardingUnit.v"
`include "ForwardingMUX.v"
`include "Stage_EX_MEM.v"
`include "DataMemory.v"
`include "Stage_MEM_WB.v"
`include "BranchTaken.v"
`include "AXI_Connector.v"
`include "VALU.v" //NEW
`include "VALU_ctrl.v" //NEW


module CPU
(
    input               clk_i, 
    // input               DataOrReg, // choose value_o from reg or mem
    // input [9:0]         address, //for tb read specific reg/mem
    // input  [7:0]        instr_i, 
    input               reset, 
    // input [1:0]         vout_addr, // choose one of four bytes of value
    // output reg[31:0]value_o,     // for tb test
    // output is_positive,  // reg is positive or not
    // output  reg[2:0]easter_egg,
    /* --------------INSTR MEM----------------- */
    output wire [31:0]inst_addr,
    input wire[31:0]instr,
    /* --------------DATA MEM----------------- */
    // output wire data_mem_wea,
    // output wire [9:0] mem_addr,
    // output wire [31:0] mem_wdata,
    // input wire [31:0] mem_rdata,
    // input wire init_calib_complete,
    /* ---------------AXI INTERFACE------------ */
    /* Write Address Channel */
    output wire [3 : 0] axi_awid,
    output wire [31 : 0] axi_awaddr,
    output wire [7 : 0] axi_awlen,
    output wire [2 : 0] axi_awsize,
    output wire [1 : 0] axi_awburst,
    output wire  axi_awlock,
    output wire [3 : 0] axi_awcache,
    output wire [2 : 0] axi_awprot,
    output wire [3 : 0] axi_awregion,
    output wire [3 : 0] axi_awqos,
    output wire  axi_awvalid,
    input wire  axi_awready,
    output wire axi_stall,
    /* Write Data Channel */
    output wire [31 : 0] axi_wdata,
    output wire [3 : 0] axi_wstrb,
    output wire  axi_wlast,
    output wire  axi_wvalid,
    input wire  axi_wready,
    /* Write Response Channel */
    input wire [3 : 0] axi_bid,
    input wire [1 : 0] axi_bresp,
    input wire  axi_bvalid,
    output wire  axi_bready,
        /* Read Address Channel */
    output wire [3 : 0] axi_arid,
    output wire [31 : 0] axi_araddr,
    output wire [7 : 0] axi_arlen,
    output wire [2 : 0] axi_arsize,
    output wire [1 : 0] axi_arburst,
    output wire  axi_arvalid,
    input wire  axi_arready,

    /* Read Data Channel */
    input wire [3 : 0] axi_rid,
    input wire [32 : 0] axi_rdata,
    input wire [1 : 0] axi_rresp,
    input wire  axi_rlast,
    input wire  axi_rvalid,
    output wire  axi_rready 
);

//------------------------- Wire&Reg -------------------------------//
wire atestn;
wire [3:0] vector_signed_bits;
wire [31:0] op_selection,mem_rdata;
// wire [31:0]inst;
wire[31:0]addPC,aluData,RSD,RTD,signExData,MUXop;
wire [9:0] ALUfunct_in;
wire [2:0] alu_ctrl_wire;
wire [11:0] pcIm,swIm;
// wire isBranch;
wire rst;
wire [31:0] AddSum_data_o;
wire [31:0] pcSelect_data_o;
// wire        HazradDetect_Hazard_o;
wire [31:0] IF_ID_pc_o;
wire [31:0] shiftLeft_data_o;
wire [11:0] IF_ID_pcIm_o;
wire [31:0] IF_ID_inst_o;
wire [4:0]  MEM_WB_RDaddr_o;
wire [31:0] memToReg_data_o;
wire        MEM_WB_RegWrite_o;
wire        Control_immSelect_o;
wire        Control_isBranch_o;
wire [31:0] PCImmExtend_data_o;
wire [31:0] Registers_RSdata_o;
wire [31:0] Registers_RTdata_o;
wire [31:0] Sign_Extend_data_o;
wire [4:0]  MUX_Control_RegDst_o;
wire [1:0]  MUX_Control_ALUOp_o;
wire        MUX_Control_ALUSrc_o;
wire        MUX_Control_RegWrite_o;
wire        MUX_Control_MemToReg_o;
wire        MUX_Control_MemRead_o;
wire        MUX_Control_MemWrite_o;
wire [31:0] ForwardToData2_data_o;
wire [31:0] ID_EX_SignExtended_o;
wire        ID_EX_ALUSrc_o;
wire [1:0]  ID_EX_ALUOp_o;
wire [31:0] ForwardToData1_data_o;
wire [31:0] MUX_ALUSrc_data_o;
wire [2:0]  ALU_Control_ALUCtrl_o;
wire        ID_EX_MemRead_o;
wire [1:0]  Control_ALUOp_o;
wire        Control_ALUSrc_o;
wire        Control_RegWrite_o;
wire        Control_MemToReg_o;
wire        Control_MemRd_o;
wire        Control_MemWr_o;
wire        EX_MEM_RegWrite_o;
wire [4:0]  EX_MEM_RDaddr_o;
wire [4:0]  ID_EX_RSaddr_o;
wire [4:0]  ID_EX_RTaddr_o;
wire [1:0]  ForwardingUnit_ForwardA_o;
wire [31:0] ID_EX_RDData0_o;
wire [31:0] ID_EX_inst_o;
wire [31:0] EX_MEM_instr_o;
wire [31:0] EX_MEM_ALUResult_o;
wire [1:0]  ForwardingUnit_ForwardB_o;
wire [31:0] ID_EX_RDData1_o;
wire [31:0] ID_EX_pc_o;
wire        ALU_Zero_o;
wire [31:0] ALU_data_o;
wire [4:0]  ID_EX_RDaddr_o;
wire        ID_EX_RegWrite_o;
wire        ID_EX_MemToReg_o;
wire        ID_EX_MemWrite_o;
wire [31:0] EX_MEM_RDData_o;
wire        EX_MEM_MemWrite_o;
wire        EX_MEM_MemRead_o;
wire        EX_MEM_MemToReg_o;
wire [31:0] MEM_WB_ALUResult_o;
wire [31:0] MEM_WB_DataMemReadData_o;
wire        MEM_WB_MemToReg_o;
wire [31:0] Data_Memory_data_o;
wire [31:0] data_mem_o,reg_o;
wire RegEqual;
wire PC_Branch_Select;//in IF stage
wire [31:0] VALU_v_o, EX_MEM_VALUResult_o, aluToDM_data_o; //NEW
wire toDataMemory; //NEW: used in MUX32 aluToDM
wire [2:0] VALU_Control_VALUCtrl_o;
// wire [3:0] is_positive_line;
wire [31:0] Branch_RS,Branch_RT;
wire [1:0] Forward_Branch_RS,Forward_Branch_RT;
// wire axi_stall;
wire stallF, stallD, stallE, stallM, stallW;



reg               flag;
wire               start_i;
reg [3:0] vector_signed [0:2];
// reg easter_flag,easter_flag_next;
// reg [2:0] easter_counter,easter_counter_next;
//------------------------- continuous assginment -------------------------------//

assign ALUfunct_in = {ID_EX_inst_o[31:25],ID_EX_inst_o[14:12]};
assign pcIm = {instr[31],instr[7],instr[30:25],instr[11:8]};
assign swIm = {instr[31:25],instr[11:7]};
assign rst = reset;
assign toDataMemory = (EX_MEM_instr_o[6:0] == 7'b1010111)? 1 : 0; //NEW

//------------------------- Sequentail Part -------------------------------//
assign start_i = ~reset;
always@(posedge clk_i or posedge reset )begin
    if(reset)begin
        flag    <= 0;
        vector_signed[0] <= 0;
        vector_signed[1] <= 0;
    end
    else begin
        vector_signed[0] <= vector_signed_bits;
        vector_signed[1] <= vector_signed[0];
    end
end

// always@(*)begin
//     value_o = reg_o;        // testbench需要完善
// end


MUX32 pcSelect(
    .data1_i    (addPC),
    .data2_i    (AddSum_data_o),//branch value
    .select_i   (PC_Branch_Select),
    .data_o     (pcSelect_data_o)
);
// wire [31:0]PcSelf,PcIn;
// assign PcSelf = pcSelect_data_o - 4;
// MUX32 pcInput
// (
//     .data1_i    (pcSelect_data_o),
//     .data2_i    (PcSelf),
//     .select_i   (stallF),
//     .data_o     (PcIn)
// );

PC  PC(
    .clk_i      (clk_i),
    .start_i    (start_i),
    .pc_i       (pcSelect_data_o),
    .hazardpc_i (stallF),
    .pc_o       (inst_addr)
);

Adder Add_PC(
    .data1_in   (inst_addr),
    .data2_in   (32'd4),
    .data_o     (addPC)              //to Stage_IF_ID.v.pc_i
);

//AddSum was in EX stage initally, but moved to IF stage.
ALU AddSum(
    .data1_i    (IF_ID_pc_o),
    .data2_i    (shiftLeft_data_o),
    .ALUCtrl_i  (3'b001),
    .data_o     (AddSum_data_o),
    .Zero_o     ()
);

//the following two function is for branch judgement
Shift1 shiftLeft(
    .data_i (PCImmExtend_data_o),
    .data_o(shiftLeft_data_o)
);

Sign_Extend PCImmExtend(
    .select_i   (1'b0),
    .data0_i     (IF_ID_pcIm_o),
    .data1_i     (12'b0),
    .data_o     (PCImmExtend_data_o)  //to ID_EX.pcEx_i
);
//

IF_ID IF_ID(
    .clk_i  (clk_i),
    .start_i    (start_i),
    .pc_i   (inst_addr),
    .inst_i (instr), 
    .Stall   (stallF),
    .flush_i    (PC_Branch_Select),
    .pcIm_i (pcIm),
    .pcIm_o (IF_ID_pcIm_o),
    .pc_o   (IF_ID_pc_o),     //to ID_EX.pc_i
    .inst_o (IF_ID_inst_o)      //to ID_EX.inst_i
);

Control Control(
    .Op_i       (IF_ID_inst_o[6:0]),
    .ALUOp_o    (Control_ALUOp_o),             //to ID_EX.ALUOp_i
    .ALUSrc_o   (Control_ALUSrc_o),             //to ID_EX.ALUSrc_i
    .RegWrite_o (Control_RegWrite_o),             //to ID_EX.RegWrite_i
    .MemRd_o    (Control_MemRd_o),             //to ID_EX.MemRead_i
    .MemWr_o    (Control_MemWr_o),             //to ID_EX.MemWrite_i
    .MemToReg_o   (Control_MemToReg_o),              //to ID_EX.MemToReg_i
    .immSelect_o  (Control_immSelect_o),           //to Sign_Extend.select_i
    .isBranch (Control_isBranch_o)
);




Registers Registers(
    .clk_i      (clk_i),
    .reset      (rst),
    // .op_address (address), /* dbg */
    .RSaddr_i   (IF_ID_inst_o[19:15]), /* rs1 */    
    .RTaddr_i   (IF_ID_inst_o[24:20]), /* rs2 */
    .RDaddr_i   (MEM_WB_RDaddr_o),  /* rd */
    .RDdata_i   (memToReg_data_o),
    .RegWrite_i (MEM_WB_RegWrite_o), 
    .is_pos_i   (vector_signed[1]),
    .RSdata_o   (Registers_RSdata_o),                  //to ID_EX.RDData0_i
    .RTdata_o   (Registers_RTdata_o),                  //to ID_EX.RDData1_i
    .reg_o      (reg_o) /* dbg */
    // .pos_o      (is_positive_line) /* dbg */
);

Branch Branch(
    .clk       ( clk       ),
    .start_i   ( start_i   ),
    .is_Branch ( Control_isBranch_o ),
    .Branch_Op ( IF_ID_inst_o[14:12]),
    .Branch_RS ( Branch_RS ),
    .Branch_RT ( Branch_RT ),
    .PC_Branch_Select  ( PC_Branch_Select  )
);

Sign_Extend Sign_Extend(
    .select_i   (Control_immSelect_o), //select=1 for sw,0 for others
    .data0_i     (IF_ID_inst_o[31:20]),
    .data1_i     ({IF_ID_inst_o[31:25],IF_ID_inst_o[11:7]}),
    .data_o     (Sign_Extend_data_o)   // to ID_EX.SignExtended_i
);

ID_EX ID_EX(
    .clk_i  (clk_i),
    .start_i    (start_i),
    .inst_i (IF_ID_inst_o),
    .pc_i   (IF_ID_pc_o),
    .pcEx_i(PCImmExtend_data_o),//useless for now
    .RDData0_i  (Registers_RSdata_o),
    .RDData1_i  (Registers_RTdata_o),
    .SignExtended_i (Sign_Extend_data_o),
    .RegDst_i   (MUX_Control_RegDst_o),
    .ALUOp_i    (MUX_Control_ALUOp_o),
    .ALUSrc_i   (MUX_Control_ALUSrc_o),
    .RegWrite_i (MUX_Control_RegWrite_o),
    .MemToReg_i (MUX_Control_MemToReg_o),
    .MemRead_i  (MUX_Control_MemRead_o),
    .MemWrite_i  (MUX_Control_MemWrite_o),
    // .PC_branch_select_i (PC_Branch_Select),
    .RSaddr_i   (IF_ID_inst_o[19:15]),     
    .RTaddr_i   (IF_ID_inst_o[24:20]),
    .inst_o (ID_EX_inst_o),     
    .pc_o   (ID_EX_pc_o),             //to EX_MEM.pc_i
    .pcEx_o (),             //to shiftLeft.data_i
    .RDData0_o  (ID_EX_RDData0_o),         //to RS Forwarding
    .RDData1_o  (ID_EX_RDData1_o),         //to RT Forwarding
    .SignExtended_o (ID_EX_SignExtended_o),     //to MEX_ALUSrc.data2_i
    .RegDst_o   (ID_EX_RDaddr_o),         //to EX_MEM.RDaddr_i
    .ALUOp_o    (ID_EX_ALUOp_o),         //to ALU_Control.ALUOp_i
    .ALUSrc_o   (ID_EX_ALUSrc_o),         //to ALUSrc.select_i
    .RegWrite_o (ID_EX_RegWrite_o),         //to EX_MEM.RegWrite_i
    .MemToReg_o (ID_EX_MemToReg_o),         //to EX_MEM.MemToReg_i
    .MemRead_o  (ID_EX_MemRead_o),         //to EX_MEM..MemRead_i
    .MemWrite_o (ID_EX_MemWrite_o),         //to EX_MEM.MemWrite_i
    .PC_branch_select_o (),
    .RSaddr_o(ID_EX_RSaddr_o),
    .RTaddr_o(ID_EX_RTaddr_o),
    .Stall(stallD)
);

MUX32 MUX_ALUSrc(
    .data1_i    (ForwardToData2_data_o),
    .data2_i    (ID_EX_SignExtended_o),
    .select_i   (ID_EX_ALUSrc_o),
    .data_o     (MUX_ALUSrc_data_o)
);

ALU_Control ALU_Control(
    .funct_i    (ALUfunct_in), //For R-type
    .ALUOp_i    (ID_EX_ALUOp_o),
    .ALUCtrl_o  (ALU_Control_ALUCtrl_o) //For controling ALU
);

ALU ALU(
    .data1_i    (ForwardToData1_data_o),/* rs1 */
    .data2_i    (MUX_ALUSrc_data_o),/* rs2 */
    .ALUCtrl_i  (ALU_Control_ALUCtrl_o),
    .data_o     (ALU_data_o),         //to EX_MEM.ALUResult_i    &    EX_MEM.RDaddr_i
    .Zero_o     (ALU_Zero_o)          //to EX_MEM.zero_i
);

HazardDetect HazardDetect(
    .IF_IDrs1_i  (IF_ID_inst_o[24:20]),
    .IF_IDrs2_i  (IF_ID_inst_o[19:15]),
    .ID_EXrd_i  (IF_ID_inst_o[19:15]),
    .ID_EX_MemRead_i    (ID_EX_MemRead_o),
    // .Hazard_o   (HazradDetect_Hazard_o),
/* ------------------AXI----------------- */
    .axi_stall(axi_stall),
    .stallF(stallF),
    .stallD(stallD),
    .stallE(stallE),
    .stallM(stallM),
    .arestn(arestn)
);

MUX_Control MUX_Control(
    .Stall   (stallD), 
    .RegDst_i   (IF_ID_inst_o[11:7]),  
    .ALUOp_i    (Control_ALUOp_o), 
    .ALUSrc_i   (Control_ALUSrc_o),  
    .RegWrite_i (Control_RegWrite_o), 
    .MemToReg_i     (Control_MemToReg_o), 
    .MemRead_i  (Control_MemRd_o),
    .MemWrite_i     (Control_MemWr_o),
    .RegDst_o   (MUX_Control_RegDst_o),  // RD addr
    .ALUOp_o    (MUX_Control_ALUOp_o),   // distinguish different Instruction Types
    .ALUSrc_o   (MUX_Control_ALUSrc_o),  // select rs2 for alu
    .RegWrite_o     (MUX_Control_RegWrite_o), //write back to regfile or not  
    .MemToReg_o     (MUX_Control_MemToReg_o), //select a forwarddata from MEM_WE regfile
    .MemRead_o  (MUX_Control_MemRead_o), // read data from mem
    .MemWrite_o     (MUX_Control_MemWrite_o)  // write data into mem
);

ForwardingUnit ForwardingUnit(
    .EX_MEM_RegWrite_i (EX_MEM_RegWrite_o),
    .ID_EX_RS_i        (ID_EX_RSaddr_o),
    .ID_EX_RT_i        (ID_EX_RTaddr_o),
    .MEM_WB_RegWrite_i (MEM_WB_RegWrite_o),
    .ID_EX_RegWrite_i  (ID_EX_RegWrite_o),
    .EX_MEM_RD_i       (EX_MEM_RDaddr_o),
    .MEM_WB_RD_i       (MEM_WB_RDaddr_o),
    .ForwardA_o        (ForwardingUnit_ForwardA_o),
    .ForwardB_o        (ForwardingUnit_ForwardB_o),
    .ID_EX_RD_i (ID_EX_RDaddr_o),
    /* -------------Branch Forward-------------- */
    .Branch_RSaddr     (IF_ID_inst_o[19:15]),
    .Branch_RTaddr     (IF_ID_inst_o[24:20]),
    .Forward_Branch_RS (Forward_Branch_RS),
    .Forward_Branch_RT (Forward_Branch_RT)

);

ForwardingMUX ForwardToData1(
    .select_i (ForwardingUnit_ForwardA_o),
    .data_i   (ID_EX_RDData0_o),
    .EX_MEM_i (EX_MEM_ALUResult_o),
    .MEM_WB_i (memToReg_data_o),
    .data_o   (ForwardToData1_data_o)
);

ForwardingMUX ForwardToData2(
    .select_i (ForwardingUnit_ForwardB_o),
    .data_i   (ID_EX_RDData1_o),
    .EX_MEM_i (EX_MEM_ALUResult_o),
    .MEM_WB_i (memToReg_data_o),
    .data_o   (ForwardToData2_data_o)
);

/* ---------------------Branch ForwardMux--------------------- */
ForwardingMUX BranchForWardRS(
    .select_i (Forward_Branch_RS),
    .data_i   (Registers_RSdata_o),
    // .EX_MEM_i (EX_MEM_ALUResult_o),
    .ID_EX_i(ALU_data_o),
    .EX_MEM_i (EX_MEM_ALUResult_o),
    .MEM_WB_i (memToReg_data_o),
    .data_o   (Branch_RS)
);
ForwardingMUX BranchForWardRT(
    .select_i (Forward_Branch_RT),
    .data_i   (Registers_RTdata_o),
    // .EX_MEM_i (EX_MEM_ALUResult_o),
    .ID_EX_i(ALU_data_o),
    .EX_MEM_i (EX_MEM_ALUResult_o),
    .MEM_WB_i (memToReg_data_o),
    .data_o   (Branch_RT)
);



EX_MEM EX_MEM(
    .clk_i  (clk_i),
    .start_i    (start_i),
    .pc_i   (ID_EX_pc_o),
    .zero_i (ALU_Zero_o),
    .ALUResult_i    (ALU_data_o),
    .VALUResult_i (VALU_v_o), //NEW
    .RDData_i   (ForwardToData2_data_o),//Reg read data2
    .RDaddr_i   (ID_EX_RDaddr_o),//from IF_ID.inst_o[11:7]
    .RegWrite_i (ID_EX_RegWrite_o),
    .MemToReg_i (ID_EX_MemToReg_o),
    .MemRead_i  (ID_EX_MemRead_o),
    .MemWrite_i (ID_EX_MemWrite_o),
    .instr_i(ID_EX_inst_o),
    .instr_o(EX_MEM_instr_o),
    .pc_o   (),
    .zero_o (),
    .ALUResult_o    (EX_MEM_ALUResult_o),
    .VALUResult_o (EX_MEM_VALUResult_o), //NEW         //to MEM_WB.ALUResult_i
    .RDData_o   (EX_MEM_RDData_o),             //to MEM_WB.RDData_i
    .RDaddr_o   (EX_MEM_RDaddr_o),             //to MEM_WB.RDaddr_i 
    .RegWrite_o (EX_MEM_RegWrite_o),             //to MEM_WB.RegWrite_i
    .MemToReg_o (EX_MEM_MemToReg_o),             //to MEM_WB.MemToReg_i
    .MemRead_o  (EX_MEM_MemRead_o),             //to Data_Memory.MemRead_i
    .MemWrite_o (EX_MEM_MemWrite_o),              //to Data_Memory.MemWrite_i
    .Stall(stallE)
    );



// assign mem_addr = aluToDM_data_o;
// assign mem_wdata = EX_MEM_RDData_o;
// assign data_mem_wea = ({EX_MEM_MemWrite_o, EX_MEM_MemRead_o} == 2'b10);

    /* 按照框架来说会有instr/data MEM
    目前用这个测试（接入instr/data MEM） */
AXI_Connector AXI_Connector(
    .clk(clk_i),
    // .arestn(arestn),
    .rst(rst),
    .MemWrite(EX_MEM_MemWrite_o),
    .MemRead(EX_MEM_MemRead_o),                                                                               
    .MemData(EX_MEM_RDData_o),                                                                                
    .MemAddr(aluToDM_data_o),
    .mem_rdata(mem_rdata),                                                                                
    .axi_stall(axi_stall),
    .Length(5'b00101),                                                                              
    // .init_calib_complete(init_calib_complete),
    /* ---------------AXI INTERFACE------------ */ 
    /* Write Address Channel */
    .axi_awid(axi_awid),    
    .axi_awaddr(axi_awaddr),
    .axi_awlen(axi_awlen),
    .axi_awsize(axi_awsize),
    .axi_awburst(axi_awburst),                                             
    .axi_awvalid(axi_awvalid),                                                                
    .axi_awready(axi_awready),                                                                
    /* Write Data Channel */     
    .axi_wdata(axi_wdata),                                               
    .axi_wstrb(axi_wstrb),                                                                
    .axi_wlast(axi_wlast),                                                                
    .axi_wvalid(axi_wvalid),                                                               
    .axi_wready(axi_wready),                                                               
    /* Write Response Channel */                                              
    .axi_bid(axi_bid),    
    .axi_bresp(axi_bresp),                                                                 
    .axi_bvalid(axi_bvalid),                                                                
    .axi_bready(axi_bready),
        /* Read Address Channel */
    .axi_arid(axi_arid),
    .axi_araddr(axi_araddr),
    .axi_arlen(axi_arlen),
    .axi_arsize(axi_arsize),
    .axi_arburst(axi_arburst),

    .axi_arvalid(axi_arvalid),
    .axi_arready(axi_arready),

    /* Read Data Channel */
    .axi_rid(axi_rid),
    .axi_rdata(axi_rdata),
    .axi_rresp(axi_rresp),
    .axi_rlast(axi_rlast),
    .axi_rvalid(axi_rvalid),
    .axi_rready(axi_rready) 
                                                                               
);

MEM_WB MEM_WB(
    .clk_i  (clk_i),
    .start_i    (start_i),
    //.ALUResult_i    (EX_MEM_ALUResult_o),
    .ALUResult_i    (aluToDM_data_o),
    .RDData_i   (EX_MEM_RDData_o),
    .RDaddr_i   (EX_MEM_RDaddr_o),
    .RegWrite_i (EX_MEM_RegWrite_o),
    .MemToReg_i (EX_MEM_MemToReg_o),
    // .DataMemReadData_i(mem_rdata),
    .ALUResult_o    (MEM_WB_ALUResult_o),
    .RDData_o   (),         //to memToReg.data1_i
    .RDaddr_o   (MEM_WB_RDaddr_o),         
    .RegWrite_o (MEM_WB_RegWrite_o),         //to Registera.RegWrite_i
    .MemToReg_o (MEM_WB_MemToReg_o),          //to memToReg.select_i
    // .DataMemReadData_o(MEM_WB_DataMemReadData_o),
    .Stall(stallM)
);

MUX32 memToReg(
    .data1_i    (MEM_WB_ALUResult_o),
    .data2_i    (mem_rdata),
    .select_i   (MEM_WB_MemToReg_o),//MemToReg control
    .data_o     (memToReg_data_o)
);

MUX32 aluToDM( //NEW module: to decide if addr_i in Data_Memory comes from ALU or VALU
    .data1_i(EX_MEM_ALUResult_o),
    .data2_i(EX_MEM_VALUResult_o),
    .select_i(toDataMemory), //NEW, no change in MUX32.v
    .data_o(aluToDM_data_o) //to Data_Memory Data_Memory
);

VALU VALU( //NEW module
    .v1_i(ForwardToData1_data_o),
    .v2_i(MUX_ALUSrc_data_o),
    .VALUCtrl_i(VALU_Control_VALUCtrl_o),
    .v_o(VALU_v_o),
    .over(vector_signed_bits)
);

VALU_ctrl VALU_Control( //NEW module
    .vfunct_i(ALUfunct_in),
    .VALUCtrl_o(VALU_Control_VALUCtrl_o)
);

endmodule

