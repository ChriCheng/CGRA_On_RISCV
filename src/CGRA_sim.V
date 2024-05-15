module CGRA_sim(
    input wire clk,
    input wire rst,
    input wire [3 : 0] axi_awid_CGRA,
    input wire [31 : 0] axi_awaddr_CGRA,
    input wire [7 : 0] axi_awlen_CGRA,
    input wire [2 : 0] axi_awsize_CGRA,
    input wire [1 : 0] axi_awburst_CGRA,
    input wire axi_awvalid_CGRA,
    output wire axi_awready_CGRA,
    input wire [31 : 0] axi_wdata_CGRA,
    input wire [3 : 0] axi_wstrb_CGRA,
    input wire axi_wlast_CGRA,
    input wire axi_wvalid_CGRA,
    output wire axi_wready_CGRA,
    output wire [3 : 0] axi_bid_CGRA,
    output wire [1 : 0] axi_bresp_CGRA,
    output wire axi_bvalid_CGRA,
    input wire axi_bready_CGRA,
    input wire [3 : 0] axi_arid_CGRA,
    input wire [31 : 0] axi_araddr_CGRA,
    input wire [7 : 0] axi_arlen_CGRA,
    input wire [2 : 0] axi_arsize_CGRA,
    input wire [1 : 0] axi_arburst_CGRA,
    input wire axi_arvalid_CGRA,

    output wire axi_arready_CGRA,
    output wire [3 : 0] axi_rid_CGRA,
    output wire [31 : 0] axi_rdata_CGRA,
    output wire [1 : 0] axi_rresp_CGRA,
    output wire axi_rlast_CGRA,
    output wire axi_rvalid_CGRA,
    input wire axi_rready_CGRAy,

    input  wire Start,
    output   reg Done,
    output   reg  [1:0] Error
);

// wire [31:0]axi_wdata;
// CGRA_bram CGRA_bram (
// //   .rsta_busy(rsta_busy),          // output wire rsta_busy
// //   .rstb_busy(rstb_busy),          // output wire rstb_busy
//   .s_aclk(clk),                // input wire s_aclk
//   .s_aresetn(~rst),          // input wire s_aresetn
//   .s_axi_awid(axi_awid_CGRA),        // input wire [3 : 0] s_axi_awid
//   .s_axi_awaddr(axi_awaddr_CGRA),    // input wire [31 : 0] s_axi_awaddr
//   .s_axi_awlen(axi_awlen_CGRA),      // input wire [7 : 0] s_axi_awlen
//   .s_axi_awsize(axi_awsize_CGRA),    // input wire [2 : 0] s_axi_awsize
//   .s_axi_awburst(axi_awburst_CGRA),  // input wire [1 : 0] s_axi_awburst
//   .s_axi_awvalid(axi_awvalid_CGRA),  // input wire s_axi_awvalid
//   .s_axi_awready(axi_awready_CGRA),  // output wire s_axi_awready
//   .s_axi_wdata(axi_wdata),      // input wire [31 : 0] s_axi_wdata
//   .s_axi_wstrb(axi_wstrb_CGRA),      // input wire [3 : 0] s_axi_wstrb
//   .s_axi_wlast(axi_wlast_CGRA),      // input wire s_axi_wlast
//   .s_axi_wvalid(axi_wvalid_CGRA),    // input wire s_axi_wvalid
//   .s_axi_wready(axi_wready_CGRA),    // output wire s_axi_wready
//   .s_axi_bid(axi_bid_CGRA),          // output wire [3 : 0] s_axi_bid
//   .s_axi_bresp(axi_bresp_CGRA),      // output wire [1 : 0] s_axi_bresp
//   .s_axi_bvalid(axi_bvalid_CGRA),    // output wire s_axi_bvalid
//   .s_axi_bready(axi_bready_CGRA),    // input wire s_axi_bready
//   .s_axi_arid(axi_arid_CGRA),        // input wire [3 : 0] s_axi_arid
//   .s_axi_araddr(axi_araddr_CGRA),    // input wire [31 : 0] s_axi_araddr
//   .s_axi_arlen(axi_arlen_CGRA),      // input wire [7 : 0] s_axi_arlen
//   .s_axi_arsize(axi_arsize_CGRA),    // input wire [2 : 0] s_axi_arsize
//   .s_axi_arburst(axi_arburst_CGRA),  // input wire [1 : 0] s_axi_arburst
//   .s_axi_arvalid(axi_arvalid_CGRA),  // input wire s_axi_arvalid
//   .s_axi_arready(axi_arready_CGRA),  // output wire s_axi_arready
//   .s_axi_rid(axi_rid_CGRA),          // output wire [3 : 0] s_axi_rid
//   .s_axi_rdata(axi_rdata_CGRA),      // output wire [31 : 0] s_axi_rdata
//   .s_axi_rresp(axi_rresp_CGRA),      // output wire [1 : 0] s_axi_rresp
//   .s_axi_rlast(axi_rlast_CGRA),      // output wire s_axi_rlast
//   .s_axi_rvalid(axi_rvalid_CGRA),    // output wire s_axi_rvalid
//   .s_axi_rready(axi_rready_CGRA)    // input wire s_axi_rready
// );

// assign axi_wdata = axi_wdata_CGRA+1;

integer Count=0;
always @(posedge clk) begin
    if (Start) begin
        if (Count >10) begin
            Error <= 2'b11;
            Done <= 1'b1;
            Count=0;
        end
        else begin
            if (Done) begin
                Done <= 0;
                Error <= 2'b00;
            end
            else begin
                Count <= Count + 1;
            end
            
        end
    end
end
endmodule