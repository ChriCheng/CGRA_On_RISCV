module Top
(
    clk_i, 
    DataOrReg,
    address,
    instr_i,
    reset,
    vout_addr,
    value_o,
    is_positive,
    easter_egg
);

//------------------------- I/O Ports -------------------------------//

input               clk_i;
input               DataOrReg;
input [4:0]         address;
input  [7:0]        instr_i;
input               reset;
input [1:0]        vout_addr;//00:ouput 8,i.e. [7:0] LSB; 01: [15:8] 
output reg[7:0]        value_o;
output  is_positive;
output  reg[2:0] easter_egg;

wire clk_out1;
wire clk_out2;
wire clk_out3;
wire clk_out4;


clk_wiz_0 clk_wiz
  (
   // Clock out ports
   .clk_out1(clk_out1),     // output 100MHZ
   .clk_out2(clk_out2),     // output 75MHZ
   .clk_out3(clk_out3),     // output 50MHZ
   .clk_out4(clk_out4),     // output 25MHZ
   // Status and control signals
   .reset(~reset), // input reset
  // Clock in ports
   .clk_in1(Clk));      // input clk_in1
 
   CPU CPU(
    .clk_i  (clk_out1),
    .DataOrReg(DataOrReg),
    .address(address),
    .instr_i(instr_i),
    .reset(reset),
    .vout_addr(vout_addr),
    .value_o(value_o),
    .is_positive(is_positive),
    .easter_egg(easter_egg)
);

endmodule