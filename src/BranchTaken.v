module Branch(
    input clk,
    input start_i,
    input is_Branch,
    input [2:0]Branch_Op,
    input [31:0]Branch_RS,
    input [31:0]Branch_RT,
    output reg PC_Branch_Select
);

always@(*)begin
    if(~start_i)begin
        PC_Branch_Select <= 1'b0;
    end
    else begin
        case(Branch_Op)
            3'b000: PC_Branch_Select <= (Branch_RS == Branch_RT)&&is_Branch; //BEQ
            3'b001: PC_Branch_Select <= (Branch_RS != Branch_RT)&&is_Branch; //BNE
            3'b100: PC_Branch_Select <= ($signed(Branch_RS) < $signed(Branch_RT))&&is_Branch; //BLT
            3'b101: PC_Branch_Select <= ($signed(Branch_RS) >= $signed(Branch_RT))&&is_Branch; //BGE
            3'b110: PC_Branch_Select <= (Branch_RS < Branch_RT)&&is_Branch; //BLTU
            3'b111:  PC_Branch_Select <= (Branch_RS >= Branch_RT)&&is_Branch;//BGEU
        endcase
    end
end

endmodule