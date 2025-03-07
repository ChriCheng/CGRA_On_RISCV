module MUX_Control(
    Stall, 
    RegDst_i,  
    ALUOp_i, 
    ALUSrc_i,  
    RegWrite_i, 
    MemToReg_i, 
    MemRead_i,
    MemWrite_i,
    RegDst_o,  
    ALUOp_o, 
    ALUSrc_o,  
    RegWrite_o, 
    MemToReg_o, 
    MemRead_o,
    MemWrite_o,  
);
input	[1:0]	ALUOp_i;
input 	[4:0]	RegDst_i;
input	Stall, ALUSrc_i, RegWrite_i, MemToReg_i, MemRead_i, MemWrite_i; 

output	reg [1:0]	ALUOp_o;
output 	reg [4:0]	RegDst_o;
output	reg ALUSrc_o, RegWrite_o, MemToReg_o, MemRead_o, MemWrite_o; 

always@(*)begin
    if(~Stall) begin
        RegDst_o <= RegDst_i;  
        ALUOp_o <= ALUOp_i;
        ALUSrc_o <= ALUSrc_i; 
        RegWrite_o <= RegWrite_i;
        MemToReg_o <= MemToReg_i;
        MemRead_o <= MemRead_i;
        MemWrite_o <= MemWrite_i;
    end

end
endmodule