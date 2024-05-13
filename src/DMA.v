module DMA(
    input wire clk,
    input wire rst,
    // input wire arestn,
    input wire MemWrite,
    input wire MemRead, 
    input wire[31:0] MemData,
    input wire[31:0] MemAddr,
    input wire [4:0] Length,
    output  axi_stall,
    output reg [31:0]mem_rdata,
    input wire [1:0] DMACtrl, 
    /* -----signal for CGRA----- */
    output  wire Start,
    input   wire Done,
    input   wire [1:0] Error,
    input   wire [4:0]RS,RD,
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

reg [991:0] WriteTemp = {992{1'b0}};
reg [991:0] ReadFromCGRA = {992{1'b0}};

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



reg [2:0] Wstate;
reg [2:0] Rstate;
integer   WriteCount,ReadCount;
always @(posedge clk or negedge rst) begin
    if (rst) begin
        Wstate <= WRITE_IDLE;
        Rstate <= READ_IDLE;
        axi_awvalid <= 0;
        axi_wvalid <= 0;
        axi_bready <= 0;
        // axi_stall <= 0;
        axi_arvalid <= 0;
        axi_rready <= 0;
        WriteCount <= 0;

    end else begin
        // Wstate <= next_Wstate;
        // Rstate <= next_Rstate;        
    end
end

assign axi_stall = rst? 1'b0:
                    
                // (MemWrite&&(Wstate == WRITE_IDLE))? 1'b1:   //Whether there is a write request and write idle
                // (Wstate == RESET_WRITE_COMPLETE) ? 1'b0:    //Whether it has been written
                // (MemRead && (Rstate == READ_IDLE)) ? 1'b1:     //Whether there is a read request without write request(reading wait writing)
                // (Rstate == RESET_READ_COMPLETE) ? 1'b0:     // Whether it has been read
                // ((Rstate ==READ_IDLE)&&(Wstate == WRITE_IDLE))? 1'b0: 1'b1;  //Whether there are no requests  and other situations keep active

always @(posedge clk) begin
    // 默认值
    // next_Wstate <= Wstate;
    axi_wlast <= 1'b0;
    axi_wvalid <= 0;
    axi_bready <= 0;
    axi_awid <= 4'b0000;
    case (Wstate)
    WRITE_IDLE: begin
            axi_awvalid <= 0;
           
            if (MemWrite) begin                
                // axi_stall <= 1'b1; 
                axi_wdata <=  MemData;
                WriteCount <= 0;
                // if (init_calib_complete == 1'b1) begin
                Wstate <= WRITE_ADDRESS;
                axi_awlen <= (Length-1);  // 单次传输
                axi_awsize <= 3'b100;  // 4 bytes = 32 bits
                axi_awburst <= 2'b01;  // 增量突发
                axi_awvalid <= 1'b1;
                axi_awaddr <= WRITE_ADDRESS;
                // end
            end
        end
        WRITE_ADDRESS: begin
            if (axi_awready) begin
                axi_awvalid <= 0;
                Wstate <= WRITE_DATA;
            end

        end
        WRITE_DATA: begin
            axi_bready <= 1'b1;
            
            axi_wstrb <= 4'b1111;
            if(WriteCount < Length)begin
                if (axi_wready&&axi_wvalid) begin 
                    WriteCount <= WriteCount; 
                    axi_wvalid <= 0;
                    axi_wdata <= 0;
                    // WriteCount <= 0;
                    Wstate <= WRITE_DATA;
                end 
                else begin /* 突发传输循环 */
                    axi_wvalid <= 1;
                    WriteCount <= WriteCount +1;
                    axi_wdata <= (WriteTemp >> (WriteCount * 32)) & 32'hFFFFFFFF;
                    Wstate <= WRITE_DATA;
                end
            end
            else begin
                if (axi_wready&&axi_wvalid) begin
                    axi_wvalid <= 0;
                    axi_wlast <= 0;
                    axi_wdata <= 0;
                    Wstate <= WAIT_RESPONSE;
                end
                else begin
                    axi_wvalid <= 1;
                    axi_wlast <= 1;
                    WriteCount <= WriteCount +1;
                    axi_wdata <= (WriteTemp >> (WriteCount * 32)) & 32'hFFFFFFFF;
                    Wstate <= WRITE_DATA;
                end
            end
            
            // next_Wstate <= WAIT_RESPONSE;
            // axi_wvalid <= 1'b1;  // 当awready_detected为高时才激活wvalid
            // axi_wstrb <=  4'b1111;  // 只写最低的32位
            // axi_wlast <= 1'b1; 
            // axi_bready <= 1'b1;
            
        end

        WAIT_RESPONSE: begin
            
            if (axi_bvalid) begin
                axi_bready <= 1'b0;
                Wstate <= RESET_WRITE_COMPLETE;
            end
        end

        RESET_WRITE_COMPLETE: begin
            // axi_stall <= 1'b0;
            // if (~MemWrite) begin
                Wstate <= WRITE_IDLE;
            // end

            
        end
    endcase
end




always @(posedge clk) begin
    // 默认值
    // next_Rstate <= Rstate;
    axi_arvalid <= 0;
    
   
    axi_arid <= 4'b0000;
    case (Rstate)
    READ_IDLE: begin
        axi_rready <= 0;
            if (MemRead && (Wstate == WRITE_IDLE)) begin
                ReadCount <= 0;
                // axi_stall <= 1'b1; 
                // if (init_calib_complete == 1'b1) begin
                Rstate <= WRITE_ADDRESS;
                    axi_arlen <= (Length-1);  // 单次传输
                    axi_arsize <= 3'b100;  // 4 bytes = 32 bits
                    axi_arburst <= 2'b01;  // 增量突发
                    axi_arvalid <= 1'b1;
                    axi_rready <= 1'b1; 
                    axi_araddr <= MemAddr;
                // end
            end
    end
    READ_ADDRESS: begin
        
            if (axi_arready) begin
                Rstate <= READ_DATA;
                axi_arvalid <= 1'b0;
            end

     end
     READ_DATA: begin
        
        if (axi_rvalid && axi_rready) begin
            if (axi_rlast) begin
                ReadFromCGRA <= (ReadFromCGRA >> 32) | (axi_rdata << (160-32));
                Rstate <= RESET_READ_COMPLETE;
            end
            else begin
                ReadFromCGRA <= (ReadFromCGRA >> 32) | (axi_rdata << (160-32));
                ReadCount <= ReadCount + 1;
                Rstate <= READ_DATA;
            end
            axi_rready <= 1'b0;
        end
        else begin
            axi_rready <= 1'b1;
            Rstate <= READ_DATA;
        end
    end
    

        RESET_READ_COMPLETE: begin
            // axi_rready <= 1'b0;  // 接收好数据
            // axi_stall <= 1'b0;
            // if (~MemRead) begin
                Rstate <= READ_IDLE;
            // end

            
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
