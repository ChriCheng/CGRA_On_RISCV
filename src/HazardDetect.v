module HazardDetect(
    input ID_EX_MemRead_i,axi_stall,
    input [4:0] IF_IDrs1_i, IF_IDrs2_i, ID_EXrd_i,
    // output Hazard_o,
    // output  reg stallF, stallD,arestn,
    output   stallF, stallD,arestn,
    output  stallE, stallM
    // output wire flushF, flushD, flushE, flushM, flushW
);



// assign Hazard_o = ((ID_EX_MemRead_i && (ID_EXrd_i == IF_IDrs1_i || ID_EXrd_i == IF_IDrs2_i))? 1'b1 : 1'b0);
// always @(*) begin
    
    
//     if(ID_EX_MemRead_i && (ID_EXrd_i == IF_IDrs1_i || ID_EXrd_i == IF_IDrs2_i))
//     begin
//         stallF = 1'b1;
//         stallD = 1'b1;
//         arestn = 1'b1;
//     end
//     else begin
//         stallF = axi_stall;
//         stallD = axi_stall;
//     end
// end
assign stallF = axi_stall;
assign stallD = axi_stall;
assign stallE = axi_stall;
assign stallM = axi_stall;
endmodule
