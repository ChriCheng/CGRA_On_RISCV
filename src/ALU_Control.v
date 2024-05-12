`timescale 1ns/10ps
module ALU_Control(
    funct_i    ,
    ALUOp_i    ,
    ALUCtrl_o 
);

input [9:0] funct_i;//funct7[9:3]+funct3[2:0]
input [1:0] ALUOp_i;//00 for addi
output reg[2:0] ALUCtrl_o;

always@(*)begin

  case(ALUOp_i)

    2'b11 : begin
        ALUCtrl_o = 3'b001;//add
    end

    2'b10 : begin
        case(funct_i)

            10'b0000000000 : begin
                ALUCtrl_o = 3'b001;//add
            end
            10'b0100000000 : begin
                ALUCtrl_o = 3'b010;//sub
            end
            10'b0000001000 : begin
                ALUCtrl_o = 3'b110;//MUL
            end
            10'b0000000110 : begin
                ALUCtrl_o = 3'b100;//OR
            end
            10'b0000000111 : begin
                ALUCtrl_o = 3'b011;//AND
            end
            default : begin
                ALUCtrl_o = 3'b001;
            end
        endcase
    end

    2'b01 : begin //beq,ALU do subtraction
    ALUCtrl_o = 3'b010;//sub
    end
    default : begin
        ALUCtrl_o = 3'b001;
    end
endcase

end

endmodule
/* I believe JasonLin use ALUOP_i to distinguish different Instruction Types, But it look a little bit weird */