module AXI_Connector(
    input wire clk,
    input wire rst,
    // input wire arestn,
    input wire MemWrite,
    input wire MemRead, 
    input wire[31:0] MemData,
    input wire[31:0] MemAddr,
    output reg axi_stall,
    output reg [31:0]mem_rdata,
    // input wire init_calib_complete,
    // AXI Interface
    output reg [3:0] axi_awid,
    output reg [31:0] axi_awaddr,
    output reg [7:0] axi_awlen,
    output reg [2:0] axi_awsize,
    output reg [1:0] axi_awburst,
    output reg axi_awvalid,
    input wire axi_awready,

    output reg [31:0] axi_wdata,
    output reg [3:0] axi_wstrb,
    output reg axi_wlast,
    output reg axi_wvalid,
    input wire axi_wready,

    input wire [3:0] axi_bid,
    input wire [1:0] axi_bresp,
    input wire axi_bvalid,
    output reg axi_bready,

    /* Read Address Channel */
    output reg [3 : 0] axi_arid,
    output reg [31 : 0] axi_araddr,
    output reg [7 : 0] axi_arlen,
    output reg [2 : 0] axi_arsize,
    output reg [1 : 0] axi_arburst,

    output reg  axi_arvalid,
    input wire  axi_arready,

    /* Read Data Channel */
    input wire [3 : 0] axi_rid,
    input wire [31 : 0] axi_rdata,
    input wire [1 : 0] axi_rresp,
    input wire  axi_rlast,
    input wire  axi_rvalid,
    output reg  axi_rready 
);
 
reg axi_stall_read,axi_stall_write;
// Wstate definitions
parameter WRITE_IDLE = 2'b000;
parameter WRITE_ADDRESS = 2'b001;
parameter WRITE_DATA = 2'b010;
parameter WAIT_RESPONSE = 2'b011;
parameter RESET_WRITE_COMPLETE = 3'b100;
// Rstate definitions
parameter READ_IDLE = 2'b00;
parameter READ_ADDRESS = 2'b01;
parameter READ_DATA = 2'b10;
parameter RESET_READ_COMPLETE = 2'b11;



reg [2:0] Wstate, next_Wstate;
reg [2:0] Rstate, next_Rstate;

always @(posedge clk or negedge rst) begin
    if (rst) begin
        Wstate <= WRITE_IDLE;
        Rstate <= READ_IDLE;
        axi_awvalid <= 0;
        axi_wvalid <= 0;
        axi_bready <= 0;
        axi_stall <= 0;
        axi_arvalid <= 0;
        axi_rready <= 0;

    end else begin
        Wstate <= next_Wstate;
        Rstate <= next_Rstate;

        // if (Wstate == RESET_WRITE_COMPLETE && Rstate == RESET_READ_COMPLETE) begin
        //     axi_stall = 1'b0;
        // end else begin
        //     axi_stall = (axi_stall_write || axi_stall_read);
        // end
        
    end
end



reg write_complete = 0;
always @(*) begin
    // 默认值
    next_Wstate = Wstate;
    axi_wlast = 1'b0;
    axi_wvalid = 0;
    axi_bready = 0;
    axi_awid = 4'b0000;
    case (Wstate)
    WRITE_IDLE: begin
            axi_awvalid = 0;
           
            write_complete <= 1'b0;
            if (MemWrite) begin                
                axi_stall = 1'b1; 
                axi_wdata =  MemData;
                // if (init_calib_complete == 1'b1) begin
                    next_Wstate = WRITE_ADDRESS;
                    axi_awlen = 8'b0;  // 单次传输
                    axi_awsize = 3'b100;  // 4 bytes = 64 bits
                    axi_awburst = 2'b01;  // 增量突发
                    axi_awvalid = 1'b1;
                    
                    axi_awaddr = MemAddr;
                // end
            end
        end
        WRITE_ADDRESS: begin

            if (axi_awready) begin
                next_Wstate = WRITE_DATA;
            end

        end
        WRITE_DATA: begin
            axi_bready = 1'b1;
            axi_awvalid = 0;
            axi_wvalid = 1'b1;  // 当awready_detected为高时才激活wvalid
              // 假设MemData对齐到最低的32位
            axi_wstrb =  4'b1111;  // 只写最低的32位
            axi_wlast = 1'b1; 
            axi_bready = 1'b1;
            if (axi_wready) begin
                next_Wstate = WAIT_RESPONSE;
            end
        end

        WAIT_RESPONSE: begin
            axi_bready <= 1'b1;
            if (axi_bvalid) begin
                write_complete <= 1'b1;
                next_Wstate = RESET_WRITE_COMPLETE;
            end
        end

        RESET_WRITE_COMPLETE: begin
            axi_stall = 1'b0;
            if (~MemWrite) begin
                
                next_Wstate = WRITE_IDLE;
            end

            
        end
    endcase
    // write_complete = 1'b0;
end



// parameter RESET_WRITE_COMPLETE = 3'b100;

reg read_complete = 0;
always @(*) begin
    // 默认值
    next_Rstate = Rstate;
    axi_arvalid = 0;
    
   
    axi_arid = 4'b0000;
    case (Rstate)
    READ_IDLE: begin
        axi_rready = 0;
            if (MemRead && (next_Wstate == WRITE_IDLE)) begin
                axi_stall = 1'b1; 
                // if (init_calib_complete == 1'b1) begin
                    next_Rstate = WRITE_ADDRESS;
                    axi_arlen = 8'b0;  // 单次传输
                    axi_arsize = 3'b100;  // 4 bytes = 32 bits
                    axi_arburst = 2'b01;  // 增量突发
                    axi_arvalid = 1'b1;
                    axi_rready = 1'b1; 
                    axi_araddr = MemAddr;
                // end
            end
    end
    READ_ADDRESS: begin
        
            if (axi_arready) begin
                next_Rstate = READ_DATA;
                 // 准备好接收数据
                axi_arvalid = 1'b0;
            end

            axi_stall = 1'b1;  // 暂停处理器
     end
     READ_DATA: begin
        axi_awvalid = 0;
        
        if (axi_rvalid && axi_rready) begin
            if (axi_rlast) begin
                
                mem_rdata <= axi_rdata;
                next_Rstate = RESET_READ_COMPLETE;
            end
        end
        axi_stall = 1'b1;  // 暂停处理器
    end
    

        RESET_READ_COMPLETE: begin
            axi_rready = 1'b0;  // 接收好数据
            axi_stall = 1'b0;
            if (~MemRead) begin
                next_Rstate = READ_IDLE;
            end
            else begin
                
                
            end
            
        end
    endcase
    
end
endmodule







// // assign axi_stall = ({MemWrite,MemRead} != 2'b00);
// // assign axi_awvalid = ({MemWrite,MemRead} == 2'b10) ;
// // assign axi_awaddr = MemAddr[30:0];
// // assign axi_wstrb = {4'b1,60*{1'b0}};

// // assign axi_awid = 4'h0;
// // assign axi_bid = 4'h0;


   
// parameter DDR3_BURST_LENGTH = 8'd00000001;                                                                              //  MAX_BURST_LENGTH        64*4=256BB    
    
// /////////////////////////////////////////////////////////           DDR3        ////////////////////////////////////////////////    
// reg         [19:0]          ddr3_awaddr, ddr3_araddr;                  //  (DDR3_BURST_LENGTH * (256/8)) == 256B =  1_0000_0000(b)
// reg         [31:0]        ddr3_wdata; 
// reg                            ddr3_awvalid, ddr3_wvalid, ddr3_wlast, ddr3_arvalid; 
// reg                            ddr3_bready, ddr3_rready;  
// reg         [3:0]            ddr3_awid, ddr3_arid;
// wire       [31:0]        ddr3_rdata;   
// wire        [7:0]           ddr3_len;
// wire                          ddr3_awready, ddr3_wready, ddr3_bvalid, ddr3_arready, ddr3_rvalid, ddr3_rlast;    
// wire       [3:0]            ddr3_rid;  
// reg         [7:0]          ddr3_wr_cnt;
// reg         [7:0]          ddr3_rd_cnt;

//     assign axi_awburst = 2'd01; 
//     // assign m0_axi_awlock  = 1'b0;
//     assign axi_awsize  = 3'b110;
//     // assign m0_axi_awprot  = 3'd0;
//     // assign m0_axi_awcache = 4'd3; 
//     // assign m0_axi_awqos   = 4'd0;
//     assign axi_awlen   = (DDR3_BURST_LENGTH - 1);
//     assign axi_wstrb   = { 60'b0,4'b1};
//     assign axi_awid    = ddr3_awid;      
//     assign axi_awvalid = ddr3_awvalid;
//     assign axi_awaddr  = MemAddr[30:0];                   
//     assign ddr3_awready   = axi_awready;    
    
//     assign axi_wvalid  = ddr3_wvalid;
//     assign axi_wlast   = ddr3_wlast;
//     assign axi_wdata   = {480'b0, MemData};
//     assign ddr3_wready    = axi_wready;
    
//     assign axi_bready  = ddr3_bready;    
//     assign ddr3_bvalid    = axi_bvalid;
    
//     // assign m0_axi_arburst = 2'd1;
//     // assign m0_axi_arlock  = 1'b0;
//     // assign m0_axi_arsize  = 3'd2;
//     // assign m0_axi_arprot  = 3'd0;
//     // assign m0_axi_arcache = 4'd3; 
//     // assign m0_axi_arqos   = 4'd0;
//     // assign m0_axi_arlen   = (DDR3_BURST_LENGTH - 1);
//     // assign m0_axi_arid    = ddr3_arid;
//     // assign m0_axi_arvalid = ddr3_arvalid;
//     // assign m0_axi_araddr  = {ddr3_araddr,8'd0};
//     // assign ddr3_arready   = m0_axi_arready;
        
//     // assign m0_axi_rready  = ddr3_rready;
//     // assign ddr3_rvalid    = m0_axi_rvalid;
//     // assign ddr3_rlast     = m0_axi_rlast;
//     // assign ddr3_rdata     = m0_axi_rdata;
//     // assign ddr3_rid       = m0_axi_rid; 
    
//     // wire            vio_ctr;
//     // vio_0 vio_ddr_inst (
//     //     .clk(clk),                // input wire clk
//     //     .probe_out0(vio_ctr)  // output wire [0 : 0] probe_out0
//     // );                       
    
//     reg         [3:0]           DDR3_WR_STATE;
//     parameter DDR3_WR_S0 = 4'b0000;
//     parameter DDR3_WR_S1 = 4'b0001;
//     parameter DDR3_WR_S2 = 4'b0010;
//     parameter DDR3_WR_S3 = 4'b0011;
//     parameter DDR3_WR_S4 = 4'b0100;    
//     parameter DDR3_WR_S5 = 4'b0101;    
//     parameter DDR3_WR_S6 = 4'b0110;
//     parameter DDR3_WR_S7 = 4'b0111;    
//     parameter DDR3_WR_S8 = 4'b1000;          
//     parameter DDR3_WR_S9 = 4'b1001;
//     parameter DDR3_WR_S10 = 4'b1010;    
//     parameter DDR3_WR_S11 = 4'b1011;   
    
//     always @ (posedge clk) begin
//         ddr3_bready = ~ddr3_bvalid;  
//     end
    
//     always @ (posedge clk) begin
//         if (rst) begin
//             ddr3_awvalid <= 0;
//             ddr3_awaddr <= 0;
//             ddr3_awid <= 0;
//             ddr3_wdata <= 0;
//             ddr3_wvalid <= 0;
//             ddr3_wlast <= 0;
//             ddr3_wr_cnt <= 0;
//             DDR3_WR_STATE <= DDR3_WR_S0;
//         end else case (DDR3_WR_STATE)
        
//             DDR3_WR_S0 : begin
//                 if (MemWrite) begin  
//                 ddr3_awvalid <= 0;
//                 ddr3_awaddr <= ddr3_awaddr;
//                 ddr3_wdata <= 0;
//                 ddr3_wvalid <= 0;
//                 ddr3_wlast <= 0;
//                 ddr3_wr_cnt <= 0;
//                 // if (init_calib_complete) begin
//                 //     DDR3_WR_STATE <= DDR3_WR_S4;
//                 // end else begin            
//                     DDR3_WR_STATE <= DDR3_WR_S0;
//                 // end 
                
//             end
//             end     
            
//             DDR3_WR_S4 : begin 
//                 ddr3_awaddr <= ddr3_awaddr + 1;
//                 DDR3_WR_STATE <= DDR3_WR_S1;
//             end                         
                        
//             DDR3_WR_S1 : begin 
//                 if (ddr3_awready && ddr3_awvalid)begin 
//                     ddr3_awvalid <= 0;             
//                     DDR3_WR_STATE <= DDR3_WR_S2;
//                 end else begin
//                     ddr3_awvalid <= 1;
//                     DDR3_WR_STATE <= DDR3_WR_S1;
//                 end
//             end          

//             DDR3_WR_S2 : begin
//                 if (ddr3_wr_cnt < (DDR3_BURST_LENGTH - 1)) begin
//                     if (ddr3_wready && ddr3_wvalid) begin
//                         ddr3_wr_cnt <= ddr3_wr_cnt + 1;
//                         ddr3_wvalid <= 0;
//                         ddr3_wdata <= 0;
//                         DDR3_WR_STATE <= DDR3_WR_S2;
//                     end else begin
//                         ddr3_wr_cnt <= ddr3_wr_cnt;
//                         ddr3_wvalid <= 1;
//                         ddr3_wdata <= ddr3_wr_cnt;
//                         DDR3_WR_STATE <= DDR3_WR_S2;
//                     end
//                 end else begin
//                     if (ddr3_wready && ddr3_wvalid) begin
//                         ddr3_wr_cnt <= 0;
//                         ddr3_wvalid <= 0;
//                         ddr3_wlast <= 0;
//                         ddr3_wdata <= 0;
//                         DDR3_WR_STATE <= DDR3_WR_S3;
//                     end else begin
//                         ddr3_wr_cnt <= ddr3_wr_cnt;
//                         ddr3_wvalid <= 1;
//                         ddr3_wlast <= 1;
//                         ddr3_wdata <= ddr3_wr_cnt;
//                         DDR3_WR_STATE <= DDR3_WR_S2;
//                     end
//                 end
//             end       
            
//             DDR3_WR_S3 : begin                       
//                 if (ddr3_bvalid) begin
//                     DDR3_WR_STATE <= DDR3_WR_S0;
//                 end else begin                            
//                     DDR3_WR_STATE <= DDR3_WR_S3;
//                 end                 
//             end                                                                                                                     
                          
//            default : begin
//                 DDR3_WR_STATE <= DDR3_WR_S0;
//            end
                                                     
//           endcase                         
//     end 