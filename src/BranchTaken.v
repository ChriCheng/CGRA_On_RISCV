module Branch(
    input clk,
    input start_i,
    input is_Branch,
    input [31:0]Branch_RS,
    input [31:0]Branch_RT,
    output reg PC_Branch_Select
);

always@(*)begin
    if(~start_i)begin
        PC_Branch_Select <= 1'b0;
    end
    else begin
        PC_Branch_Select <= (Branch_RS == Branch_RT)&&is_Branch;
    end
end

endmodule