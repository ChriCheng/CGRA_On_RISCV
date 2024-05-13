module Control(
    Op_i       ,
    ALUOp_o    , //Determines the operations that the alu performs
    ALUSrc_o   ,
    RegWrite_o ,
    MemRd_o,
    MemWr_o,
    MemToReg_o,
    immSelect_o,
    isBranch
);

//ports

input [6:0]     Op_i;
output reg[1:0]     ALUOp_o;
output  reg      ALUSrc_o,immSelect_o;
output  reg    RegWrite_o ,MemRd_o,MemWr_o,MemToReg_o;
output  reg isBranch;  // Branch



always@(*)begin

  case(Op_i)

  7'b0010011 : begin //addi
  ALUOp_o = 2'b11;
  ALUSrc_o = 1'b1;
  RegWrite_o = 1'b1;
  MemRd_o = 1'b0;
  MemWr_o = 1'b0;
  MemToReg_o = 1'b0;
  immSelect_o = 1'b0;
  isBranch = 1'b0;

  end
  
  7'b0110011 : begin //R-type
  ALUOp_o = 2'b10;
  ALUSrc_o = 1'b0;
  RegWrite_o = 1'b1;
  MemRd_o = 1'b0;
  MemWr_o = 1'b0;
  MemToReg_o = 1'b0;
  immSelect_o = 1'b0;
  isBranch = 1'b0;
 
  end

  7'b1100011 : begin //B-type
  ALUOp_o = 2'b01;
  ALUSrc_o = 1'b1;
  RegWrite_o = 1'b0;
  MemRd_o = 1'b0;
  MemWr_o = 1'b0;
  MemToReg_o = 1'b0;
  immSelect_o = 1'b0;
  isBranch = 1'b1;

  end

  7'b0000011 : begin //lw
  ALUOp_o = 2'b00;
  ALUSrc_o = 1'b1;
  MemRd_o = 1'b1;
  MemWr_o = 1'b0;
  MemToReg_o = 1'b1;
  RegWrite_o = 1'b1;
  immSelect_o = 1'b0;
  isBranch = 1'b0;
  end

  7'b0100011 : begin //sw
  ALUOp_o = 2'b00;
  ALUSrc_o = 1'b1;
  MemRd_o = 1'b0;
  MemWr_o = 1'b1;
  RegWrite_o = 1'b0;
  MemToReg_o = 1'b0;
  immSelect_o = 1'b1;
  isBranch = 1'b0;

  end

7'b0001011:begin/* STC */
    ALUOp_o = 2'b11;  //  make ALU add
    ALUSrc_o = 1'b1;  // choose rs2 rather than SignExtend
    RegWrite_o = 1'b0; // don't write to regfiles
    MemRd_o = 1'b0; // don't read mem
    MemWr_o = 1'b0; // don't lw mem
    MemToReg_o = 1'b0; // don't lw data from mem to regfiles
    immSelect_o = 1'b0; // don't select imm
    isBranch = 1'b0; // is not a branch instruction

end

  //---------NEW-----------
  7'b1010111: begin //vector
  ALUOp_o = 2'b00; //useless
  ALUSrc_o = 1'b0;
  RegWrite_o = 1'b1;
  MemRd_o = 1'b0;
  MemWr_o = 1'b0;
  MemToReg_o = 1'b0;
  immSelect_o = 1'b0;
  isBranch = 1'b0;
  end

  //---------NEW-----------

  default : begin
  ALUOp_o = 2'b11;  //  make ALU add
  ALUSrc_o = 1'b1;  // choose rs2 rather than SignExtend
  RegWrite_o = 1'b0; // don't write to regfiles
  MemRd_o = 1'b0; // don't read mem
  MemWr_o = 1'b0; // don't lw mem
  MemToReg_o = 1'b0; // don't lw data from mem to regfiles
  immSelect_o = 1'b0; // don't select imm
  isBranch = 1'b0; // is not a branch instruction
  end
  endcase
end
endmodule