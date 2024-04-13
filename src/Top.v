module Top(
    input               clk,
    input               rst,
    input               DataOrReg,
    input [4:0]         address,
    input [1:0]        vout_addr,//00:ouput 8,i.e. [7:0] LSB; 01: [15:8] 
    output reg[7:0]        value_o,
    output  is_positive,
    output  reg[2:0] easter_egg
);
wire [31:0] douta,pc,instr,mem_rdata,mem_wdata;
wire [9:0] mem_addr;
wire data_mem_wea;
CPU CPU
(
    .clk_i(clk) ,
    .DataOrReg(),
    .address(),
    .reset(rst),
    .vout_addr(),
    .value_o(),
    .is_positive(),
    .easter_egg(),
    .inst_addr(pc),
    .instr(instr),
    .data_mem_wea(data_mem_wea),
    .mem_addr(mem_addr),
    .mem_wdata(mem_wdata),
    .mem_rdata(mem_rdata)
    );

// IMemory InstructionMemory (
//   .rsta_busy(rsta_busy),          // output wire rsta_busy
//   .rstb_busy(rstb_busy),          // output wire rstb_busy
//   .s_aclk(clk),                // input wire s_aclk
//   .s_aresetn(reset),          // input wire s_aresetn
//   /* ------Write Address Channel Interface Signals-------*/
//   .s_axi_awaddr(s_axi_awaddr),    // input wire [31 : 0] s_axi_awaddr
//   .s_axi_awvalid(s_axi_awvalid),  // input wire s_axi_awvalid master
//   .s_axi_awready(s_axi_awready),  // output wire s_axi_awready slave
//   /* ------Write Data Channel Interface Signals--------- */ 
//   .s_axi_wdata(s_axi_wdata),      // input wire [31 : 0] s_axi_wdata
//   .s_axi_wstrb(s_axi_wstrb),      // input wire [3 : 0] s_axi_wstrb
//   .s_axi_wvalid(s_axi_wvalid),    // input wire s_axi_wvalid master
//   .s_axi_wready(s_axi_wready),    // output wire s_axi_wready slave
//   .s_axi_bresp(s_axi_bresp),      // output wire [1 : 0] s_axi_bres
  
//   .s_axi_bvalid(s_axi_bvalid),    // output wire s_axi_bvalid slave
//   .s_axi_bready(s_axi_bready),    // input wire s_axi_bready master
//     /* ------AXI4-Lite Read Channel Interface Signals------ */
//   .s_axi_araddr(s_axi_araddr),    // input wire [31 : 0] s_axi_araddr
//   .s_axi_arvalid(s_axi_arvalid),  // input wire s_axi_arvalid
//   .s_axi_arready(s_axi_arready),  // output wire s_axi_arready
//   .s_axi_rdata(s_axi_rdata),      // output wire [31 : 0] s_axi_rdata
//   .s_axi_rresp(s_axi_rresp),      // output wire [1 : 0] s_axi_rresp
//   .s_axi_rvalid(s_axi_rvalid),    // output wire s_axi_rvalid
//   .s_axi_rready(s_axi_rready)    // input wire s_axi_rready
// ); 



IMemory inst_rom (
  .clka(clk),    // input wire clka
  .ena(1'b1),      // input wire ena
  .addra(pc[9:0]),  // input wire [9 : 0] addra
  .douta(instr)  // output wire [31 : 0] douta
);

Dmemery data_ram (
  .clka(clk),    // input wire clka
  .ena(1'b1),      // input wire ena
  .wea(data_mem_wea),      // input wire [0 : 0] wea
  .addra(mem_addr),  // input wire [9 : 0] addra
  .dina(mem_wdata),    // input wire [31 : 0] dina
  .douta(mem_rdata)  // output wire [31 : 0] douta
);
endmodule