           
`timescale 1ns/10ps
`define CYCLE_TIME 10.0          	  // Modify your clock period here
`define SDFFILE    "WIN.sdf"	  // Modify your sdf file name
`define End_CYCLE  300             // Modify cycle times once your design need more cycle times!
// `include "arch_package.sv"
// `include "interface.sv"
// `include "ddr4_model.sv"



`ifdef XILINX_SIMULATOR
module short(in1, in1);
inout in1;
endmodule
`endif

module testbench;


// import arch_package::*;
// parameter UTYPE_density CONFIGURED_DENSITY = _4G;
// reg                Clk;
// reg                Start;
// reg                DataOrReg;
// reg [4:0]          address;
// reg                reset;//used to initalize memorys and registers
// reg [7:0]          instr_store[0:(64*4+1)];
// reg [1:0]             vout_addr;
// wire[7:0]               value_o;
// wire          is_positive;
// wire [2:0]        easter_egg;
// integer            i, outfile, counter;
// integer            stall, flush,idx;
// integer j,k;
// integer err;
// integer  addr;
// reg  [7:0] golden [0:63];

reg  clk,rst;
reg [9:0]address;
// wire [31:0] value_o;
// wire clk_p;
// wire clk_n;
initial begin
    clk = 1'b1;
end
always #(`CYCLE_TIME/2) clk =  ~clk; 
// assign clk_p = clk;
// assign clk_n = ~clk;
    
wire                 c0_ddr4_act_n;
wire  [16:0]          c0_ddr4_adr;
wire  [1:0]          c0_ddr4_ba;
wire  [0:0]    c0_ddr4_bg;
wire  [0:0]           c0_ddr4_cke;
wire  [0:0]           c0_ddr4_odt;
wire  [0:0]            c0_ddr4_cs_n;


wire    c0_ddr4_ck_t;
wire    c0_ddr4_ck_c;

wire                 c0_ddr4_reset_n;

wire  [7:0]          c0_ddr4_dm_dbi_n;
wire  [63:0]          c0_ddr4_dq;
wire  [7:0]          c0_ddr4_dqs_c;
wire  [7:0]          c0_ddr4_dqs_t;

wire  [0:0]  c0_ddr4_ck_t_int;
wire  [0:0]  c0_ddr4_ck_c_int;

Top MyTop(
    .clk                   ( clk                   ),
    .rst                   ( rst                   )

    // .ddr4_adr              ( c0_ddr4_adr              ),
    // .ddr4_ba               ( c0_ddr4_ba               ),
    // .ddr4_cke              ( c0_ddr4_cke              ),
    // .ddr4_cs_n             ( c0_ddr4_cs_n             ),
    // .ddr4_dm_dbi_n ( c0_ddr4_dm_dbi_n ),
    // .ddr4_dq       ( c0_ddr4_dq       ),
    // .ddr4_dqs_c    ( c0_ddr4_dqs_c    ),
    // .ddr4_dqs_t    (  c0_ddr4_dqs_t    ),
    // .ddr4_odt              ( c0_ddr4_odt              ),
    // .ddr4_bg               ( c0_ddr4_bg               ),
    // .ddr4_reset_n          ( c0_ddr4_reset_n          ),
    // .ddr4_act_n            ( c0_ddr4_act_n            ),
    // .ddr4_ck_c             ( c0_ddr4_ck_c_int             ),
    // .ddr4_ck_t             ( c0_ddr4_ck_t_int             )
);

localparam ADDR_WIDTH                    = 17;
localparam DQ_WIDTH                      = 64;
localparam DQS_WIDTH                     = 8;
localparam DM_WIDTH                      = 8;
localparam DRAM_WIDTH                    = 16;
localparam tCK                           = 833 ; //DDR4 interface clock period in ps
localparam real SYSCLK_PERIOD            = tCK; 
localparam NUM_PHYSICAL_PARTS = (DQ_WIDTH/DRAM_WIDTH) ;
localparam           CLAMSHELL_PARTS = (NUM_PHYSICAL_PARTS/2);
localparam           ODD_PARTS = ((CLAMSHELL_PARTS*2) < NUM_PHYSICAL_PARTS) ? 1 : 0;
parameter RANK_WIDTH                       = 1;
parameter CS_WIDTH                       = 1;
parameter ODT_WIDTH                      = 1;
parameter CA_MIRROR                      = "OFF";


localparam MRS                           = 3'b000;
localparam REF                           = 3'b001;
localparam PRE                           = 3'b010;
localparam ACT                           = 3'b011;
localparam WR                            = 3'b100;
localparam RD                            = 3'b101;
localparam ZQC                           = 3'b110;
localparam NOP                           = 3'b111;





  reg  [16:0]            c0_ddr4_adr_sdram[1:0];
  reg  [1:0]           c0_ddr4_ba_sdram[1:0];
  reg  [0:0]           c0_ddr4_bg_sdram[1:0];






  wire                 c0_init_calib_complete;
  wire                 c0_data_compare_error;


  reg  [31:0] cmdName;
  reg  en_model;
  tri        model_enable = en_model;
  initial begin
    rst = 1;
    #10 
    rst = 0;
    en_model = 1'b0; 
    #10 en_model = 1'b1;
    #5000
    $finish;
end

//   assign c0_ddr4_ck_t = c0_ddr4_ck_t_int[0];
//   assign c0_ddr4_ck_c = c0_ddr4_ck_c_int[0];

//    always @( * ) begin
//      c0_ddr4_adr_sdram[0]   <=  c0_ddr4_adr;
//      c0_ddr4_adr_sdram[1]   <=  (CA_MIRROR == "ON") ?
//                                        {c0_ddr4_adr[ADDR_WIDTH-1:14],
//                                         c0_ddr4_adr[11], c0_ddr4_adr[12],
//                                         c0_ddr4_adr[13], c0_ddr4_adr[10:9],
//                                         c0_ddr4_adr[7], c0_ddr4_adr[8],
//                                         c0_ddr4_adr[5], c0_ddr4_adr[6],
//                                         c0_ddr4_adr[3], c0_ddr4_adr[4],
//                                         c0_ddr4_adr[2:0]} :
//                                         c0_ddr4_adr;
//      c0_ddr4_ba_sdram[0]    <=  c0_ddr4_ba;
//      c0_ddr4_ba_sdram[1]    <=  (CA_MIRROR == "ON") ?
//                                         {c0_ddr4_ba[0],
//                                          c0_ddr4_ba[1]} :
//                                          c0_ddr4_ba;
//      c0_ddr4_bg_sdram[0]    <=  c0_ddr4_bg;
//       c0_ddr4_bg_sdram[1]    <=  c0_ddr4_bg;
//     end

//     reg [ADDR_WIDTH-1:0] DDR4_ADRMOD[RANK_WIDTH-1:0];

//     always @(*)
//     if (c0_ddr4_cs_n == 4'b1111)
//       cmdName = "DSEL";
//     else
//     if (c0_ddr4_act_n)
//       casez (DDR4_ADRMOD[0][16:14])
//        MRS:     cmdName = "MRS";
//        REF:     cmdName = "REF";
//        PRE:     cmdName = "PRE";
//        WR:      cmdName = "WR";
//        RD:      cmdName = "RD";
//        ZQC:     cmdName = "ZQC";
//        NOP:     cmdName = "NOP";
//       default:  cmdName = "***";
//       endcase
//     else
//       cmdName = "ACT";

//       reg wr_en ;
//       always@(posedge c0_ddr4_ck_t)begin
//         if(!c0_ddr4_reset_n)begin
//           wr_en <= #100 1'b0 ;
//         end else begin
//           if(cmdName == "WR")begin
//             wr_en <= #100 1'b1 ;
//           end else if (cmdName == "RD")begin
//             wr_en <= #100 1'b0 ;
//           end
//         end
//       end
// /* -----------simulate sram read/write----------- */
//       genvar rnk;
//       generate
//       for (rnk = 0; rnk < CS_WIDTH; rnk = rnk +1) begin:rankup
//        always @(*)
//           if (c0_ddr4_act_n)
//             casez (c0_ddr4_adr_sdram[0][16:14])
//             WR, RD: begin
//               DDR4_ADRMOD[rnk] = c0_ddr4_adr_sdram[rnk] & 18'h1C7FF;
//             end
//             default: begin
//               DDR4_ADRMOD[rnk] = c0_ddr4_adr_sdram[rnk];
//             end
//             endcase
//           else begin
//             DDR4_ADRMOD[rnk] = c0_ddr4_adr_sdram[rnk];
//           end
//       end
//       endgenerate
    



// genvar i;
// genvar r;
// genvar s;

// generate
//     begin: mem_model_x16

//         if (DQ_WIDTH/16) begin: mem
  
//         DDR4_if #(.CONFIGURED_DQ_BITS (16)) iDDR4[0:(RANK_WIDTH*NUM_PHYSICAL_PARTS)-1]();
  
//           for (r = 0; r < RANK_WIDTH; r++) begin:memModels_Ri2
//             for (i = 0; i < NUM_PHYSICAL_PARTS; i++) begin:memModel2
//               ddr4_model  #
//               (
//                .CONFIGURED_DQ_BITS (16),
//                .CONFIGURED_DENSITY (CONFIGURED_DENSITY)
//                )  ddr4_model(
//                   .model_enable (model_enable),
//                   .iDDR4        (iDDR4[(r*NUM_PHYSICAL_PARTS)+i])
//               );
//             end
//           end
  
//           for (r = 0; r < RANK_WIDTH; r++) begin:tranDQ3
//             for (i = 0; i < NUM_PHYSICAL_PARTS; i++) begin:tranDQ13
//               for (s = 0; s < 16; s++) begin:tranDQ2
//                 `ifdef XILINX_SIMULATOR
//                 short bidiDQ(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQ[s], c0_ddr4_dq[s+i*16]);
//                 `else
//                 tran bidiDQ(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQ[s], c0_ddr4_dq[s+i*16]);
//                 `endif
//               end
//             end
//           end
  
//           for (r = 0; r < RANK_WIDTH; r++) begin:tranDQS3
//             for (i = 0; i < NUM_PHYSICAL_PARTS; i++) begin:tranDQS13
//             `ifdef XILINX_SIMULATOR
//               short bidiDQS0(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_t[0], c0_ddr4_dqs_t[(2*i)]);
//               short bidiDQS0_(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_c[0], c0_ddr4_dqs_c[(2*i)]);
//               short bidiDM0(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DM_n[0], c0_ddr4_dm_dbi_n[(2*i)]);
//               short bidiDQS1(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_t[1], c0_ddr4_dqs_t[((2*i)+1)]);
//               short bidiDQS1_(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_c[1], c0_ddr4_dqs_c[((2*i)+1)]);
//               short bidiDM1(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DM_n[1], c0_ddr4_dm_dbi_n[((2*i)+1)]);
  
//             `else
//               tran bidiDQS0(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_t[0], c0_ddr4_dqs_t[(2*i)]);
//               tran bidiDQS0_(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_c[0], c0_ddr4_dqs_c[(2*i)]);
//               tran bidiDM0(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DM_n[0], c0_ddr4_dm_dbi_n[(2*i)]);
//               tran bidiDQS1(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_t[1], c0_ddr4_dqs_t[((2*i)+1)]);
//               tran bidiDQS1_(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DQS_c[1], c0_ddr4_dqs_c[((2*i)+1)]);
//               tran bidiDM1(iDDR4[(r*NUM_PHYSICAL_PARTS)+i].DM_n[1], c0_ddr4_dm_dbi_n[((2*i)+1)]);
//             `endif
//           end
//         end
  
//          for (r = 0; r < RANK_WIDTH; r++) begin:tranADCTL_RANKS
//            for (i = 0; i < NUM_PHYSICAL_PARTS; i++) begin:tranADCTL
  
//              assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].BG        = c0_ddr4_bg_sdram[r];
//              assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].BA        = c0_ddr4_ba_sdram[r];
//              assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].ADDR_17 = (ADDR_WIDTH == 18) ? DDR4_ADRMOD[r][ADDR_WIDTH-1] : 1'b0;
//              assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].ADDR      = DDR4_ADRMOD[r][13:0];
//              assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].CS_n = c0_ddr4_cs_n[r];
  
//            end
//          end
  
//       for (r = 0; r < RANK_WIDTH; r++) begin:tranADCTL_RANKS1
//         for (i = 0; i < NUM_PHYSICAL_PARTS; i++) begin:tranADCTL1
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].CK = {c0_ddr4_ck_t, c0_ddr4_ck_c};
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].ACT_n     = c0_ddr4_act_n;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].RAS_n_A16 = DDR4_ADRMOD[r][16];
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].CAS_n_A15 = DDR4_ADRMOD[r][15];
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].WE_n_A14  = DDR4_ADRMOD[r][14];
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].CKE       = c0_ddr4_cke[r];
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].ODT       = c0_ddr4_odt[r];
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].PARITY  = 1'b0;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].TEN     = 1'b0;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].ZQ      = 1'b1;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].PWR     = 1'b1;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].VREF_CA = 1'b1;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].VREF_DQ = 1'b1;
//             assign iDDR4[(r*NUM_PHYSICAL_PARTS)+ i].RESET_n = c0_ddr4_reset_n;
//             end
//           end
//         end
  
//         if (DQ_WIDTH%16) begin: mem_extra_bits
//          // DDR4 X16 dual rank is not supported
//           DDR4_if #(.CONFIGURED_DQ_BITS (16)) iDDR4[(DQ_WIDTH/DRAM_WIDTH):(DQ_WIDTH/DRAM_WIDTH)]();
  
//           ddr4_model  #
//             (
//              .CONFIGURED_DQ_BITS (16),
//              .CONFIGURED_DENSITY (CONFIGURED_DENSITY)
//              )  ddr4_model(
//               .model_enable (model_enable),
//               .iDDR4        (iDDR4[(DQ_WIDTH/DRAM_WIDTH)])
//           );
  
//           for (i = (DQ_WIDTH/DRAM_WIDTH)*16; i < DQ_WIDTH; i=i+1) begin:tranDQ
//             `ifdef XILINX_SIMULATOR
//             short bidiDQ(iDDR4[i/16].DQ[i%16], c0_ddr4_dq[i]);
//             short bidiDQ_msb(iDDR4[i/16].DQ[(i%16)+8], c0_ddr4_dq[i]);
//             `else
//             tran bidiDQ(iDDR4[i/16].DQ[i%16], c0_ddr4_dq[i]);
//             tran bidiDQ_msb(iDDR4[i/16].DQ[(i%16)+8], c0_ddr4_dq[i]);
//             `endif
//           end
  
//           `ifdef XILINX_SIMULATOR
//           short bidiDQS0(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_t[0], c0_ddr4_dqs_t[DQS_WIDTH-1]);
//           short bidiDQS0_(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_c[0], c0_ddr4_dqs_c[DQS_WIDTH-1]);
//           short bidiDM0(iDDR4[DQ_WIDTH/DRAM_WIDTH].DM_n[0], c0_ddr4_dm_dbi_n[DM_WIDTH-1]);
//           short bidiDQS1(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_t[1], c0_ddr4_dqs_t[DQS_WIDTH-1]);
//           short bidiDQS1_(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_c[1], c0_ddr4_dqs_c[DQS_WIDTH-1]);
//           short bidiDM1(iDDR4[DQ_WIDTH/DRAM_WIDTH].DM_n[1], c0_ddr4_dm_dbi_n[DM_WIDTH-1]);
//           `else
//           tran bidiDQS0(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_t[0], c0_ddr4_dqs_t[DQS_WIDTH-1]);
//           tran bidiDQS0_(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_c[0], c0_ddr4_dqs_c[DQS_WIDTH-1]);
//           tran bidiDM0(iDDR4[DQ_WIDTH/DRAM_WIDTH].DM_n[0], c0_ddr4_dm_dbi_n[DM_WIDTH-1]);
//           tran bidiDQS1(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_t[1], c0_ddr4_dqs_t[DQS_WIDTH-1]);
//           tran bidiDQS1_(iDDR4[DQ_WIDTH/DRAM_WIDTH].DQS_c[1], c0_ddr4_dqs_c[DQS_WIDTH-1]);
//           tran bidiDM1(iDDR4[DQ_WIDTH/DRAM_WIDTH].DM_n[1], c0_ddr4_dm_dbi_n[DM_WIDTH-1]);
//           `endif
  
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].CK = {c0_ddr4_ck_t, c0_ddr4_ck_c};
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].ACT_n = c0_ddr4_act_n;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].RAS_n_A16 = DDR4_ADRMOD[0][16];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].CAS_n_A15 = DDR4_ADRMOD[0][15];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].WE_n_A14 = DDR4_ADRMOD[0][14];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].CKE = c0_ddr4_cke[0];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].ODT = c0_ddr4_odt[0];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].BG = c0_ddr4_bg_sdram[0];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].BA = c0_ddr4_ba_sdram[0];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].ADDR_17 = (ADDR_WIDTH == 18) ? DDR4_ADRMOD[0][ADDR_WIDTH-1] : 1'b0;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].ADDR = DDR4_ADRMOD[0][13:0];
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].RESET_n = c0_ddr4_reset_n;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].TEN     = 1'b0;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].ZQ      = 1'b1;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].PWR     = 1'b1;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].VREF_CA = 1'b1;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].VREF_DQ = 1'b1;
//           assign iDDR4[DQ_WIDTH/DRAM_WIDTH].CS_n = c0_ddr4_cs_n[0];
//         end
//       end
//     endgenerate


// initial begin
//     // counter = 0;
//     // stall = 0;
//     // flush = 0;
//     // idx = 0;
//     // address = 10'd0;
//     // err = 0;
//     // for(k=0;k < (64*4+1) ;k=k+1) instr_store[k] = 0;
//     // Load instructions into instruction memory
//     // $readmemb("../dat/instruction2.txt", instr_store);
//     // $readmemh("../dat/golden.dat",golden);
//     // Open output file
//     // outfile = $fopen("../dat/output.txt");
//     // if (outfile == 0) begin
//     // Handle error, e.g., print an error message
//     // $display("Error: failed to open output file.");
//     // Optionally, set outfile to a default value or terminate the simulation
//     // $finish;
//     clk = 1;

//     // reset = 0;
//     // reset = 1;
//     // #(`CYCLE_TIME)
//     rst = 1; 
//     #10
//     rst = 0;
//     #5000
//     // for(addr = 0; addr < 32; addr =addr +1)
//     // begin
//     //     address = addr;
//     //     $display("Time: %t | Register[%0d] = %0h", $time, address, value_o);
//     // end
//     $finish;
// end
    



initial begin
    $dumpfile("CPU.vcd");
    $dumpvars(0, testbench);
end

/* always@(posedge clk) begin
    if(counter<256)begin
        #(`CYCLE_TIME/4)
        instr_i = instr_store[counter];
    end
    else instr_i = 0;
end */
//8'b1111_1110 = start
//8'b1111_1111 = end
/* initial begin
    j =0 ;
     $display("--------------------------- [ Simulation Starts !! ] ---------------------------");
        #(`CYCLE_TIME*234);
        for(j=0;j<64;j=j+1)begin
            if((j%4==0)&&(j!=0))address = address + 5'd1;
            @(posedge Clk);
            vout_addr = vout_addr - 2'b1;
            if(value_o !== golden[j])begin
                 err = err + 1;
                 $display("pattern%d is wrong:output %h != expected %h",j,value_o,golden[j]);
            end
            else begin
                 $display("pattern%d is correct:output %h == expected %h",j,value_o,golden[j]);
            end
        end
        #(`CYCLE_TIME*2); 
     $display("--------------------------- Simulation Stops !!---------------------------");
     if (err!=0) begin 
     	$display("============================================================================");
		$display("             ▄▄▄▄▄▄▄ "); 
		$display("         ▄▀▀▀       ▀▄"); 
		$display("       ▄▀            ▀▄ 		ERROR FOUND!!"); 
		$display("      ▄▀          ▄▀▀▄▀▄"); 
		$display("    ▄▀          ▄▀  ██▄▀▄"); 
		$display("   ▄▀  ▄▀▀▀▄    █   ▀▀ █▀▄ 	There are"); 
		$display("   █  █▄▄   █   ▀▄     ▐ █  %d errors in total.", err); 
		$display("  ▐▌  █▀▀  ▄▀     ▀▄▄▄▄▀  █ "); 
		$display("  ▐▌  █   ▄▀              █"); 
		$display("  ▐▌   ▀▀▀                ▐▌"); 
		$display("  ▐▌               ▄      ▐▌ "); 
		$display("  ▐▌         ▄     █      ▐▌ "); 
		$display("   █         ▀█▄  ▄█      ▐▌ "); 
		$display("   ▐▌          ▀▀▀▀       ▐▌ "); 
		$display("    █                     █ "); 
		$display("    ▐▌▀▄                 ▐▌"); 
		$display("     █  ▀                ▀ "); 
        $display("============================================================================");
	end
     else begin 

        $display("============================================================================");
        $display("\033[1;36mrrrrrrrr\033[m    \033[38;5;208mRCCCCCCCCC\033[0m                                                                                      \033[38;5;208mrrrr           riscv\033[0m      ");
        $display("\033[1;36mrsssssssir\033[m  \033[38;5;208mrCCCCCCCCR\033[0m        \033[1;36mrrsssssssssssssssssir   ssi   iisssssssssssssssss    riisssssssssssssss\033[m        \033[38;5;208mvCSc          iSCI\033[0m       ");
        $display("\033[1;36mrssssssssr\033[m  \033[38;5;208mrCCCCCCCr\033[0m         \033[1;36mrrssr             rssr  ssi  issr                  risi\033[m                         \033[38;5;208mrCCR        cSCi\033[0m        ");
        $display("\033[1;36mrsr\033[m         \033[38;5;208mICCCCCs\033[0m           \033[1;36mrrssiiiiiiiiiiiiiiisr   ssi   ssiiiiiiiiiiiiiirr   iss\033[m                   \033[38;5;208mvvvvvv   ICSr     RCC\033[0m          ");
        $display("\033[1;36mrsi\033[m     \033[38;5;208mrivSCCCCS\033[0m    \033[1;36mri        rssr         isss      ssi                   isi  rssr\033[m                            \033[38;5;208mcCSc  rSCI\033[0m           ");
        $display("\033[1;36mrssir\033[m    \033[38;5;208mvCCCCCi\033[0m   \033[1;36mrris        rss            ssir    ssi  rrrrrrrrrrrrrrrrriss   rssirrrrrrrrrrrrrrr\033[m             \033[38;5;208mrCCRcSCc\033[0m            ");
        $display("\033[1;36mrssssir\033[m    \033[38;5;208mSCc\033[0m   \033[1;36mrrisss        rss             rssr   ssi  issssssssssssssssi         sssssssssssssss\033[m               \033[38;5;208mRCCC\033[0m              ");
        $display("\033[1;36mrssssssir\033[m       \033[1;36mrisssss\033[m                                                                                                               ");
        $display("\033[1;36mrssssssssi\033[m     \033[1;36mrissssss\033[m   ");
        $display("============================================================================");
        $finish;
                                                                                   
	end
$finish; 
 
end */

/* initial begin
    j =0 ;
     $display("--------------------------- [ Simulation Starts !! ] ---------------------------");
        // #(`CYCLE_TIME*234);
        for(j=0;j<264;j=j+1)begin
            if((j%4==0)&&(j!=0))address = address + 5'd1;
            @(posedge Clk);
            vout_addr = vout_addr - 2'b1;
            $display("%d instruction is %h, correct instruction is %h , address is %h , value_o is %h , correct pattern is %h, vout_addr is %h, counter is %d,",j,instr_i,instr_store[j],address,value_o,golden[j],vout_addr,counter);
            // $display("%d address is %h , value_o is %h , correct pattern is %h, vout_addr is %h, counter is %d,",j,address,value_o,golden[j],vout_addr,counter);
            // $display("goden[%d] is %h",j,golden[j]);
            // if(value_o !== golden[j])begin
            //      err = err + 1;
            //      $display("pattern%d is wrong:output %h != expected %h",j,value_o,golden[j]);
            // end
            // else begin
            //      $display("pattern%d is correct:output %h == expected %h",j,value_o,golden[j]);
            // end
        end
        #(`CYCLE_TIME*2); 
     $display("--------------------------- Simulation Stops !!---------------------------");
end

always@(posedge Clk) begin
    if(counter == 300)    // stop after 240 cycles
        $finish;
    
    counter = counter + 1;
    
      
end */

  
endmodule
