module DMA_Control(
    input [9:0] funct_i    ,
    output reg [1:0] DMACtrl_o 
);

always @(*) begin
    case (funct_i)
        10'b0000000001: begin
            DMACtrl_o = 2'b01; //STC
        end 
        10'b0000000010: begin
            DMACtrl_o = 2'b10; //LFC
        end
        10'b0000000011: begin
            DMACtrl_o = 2'b11; //SCA
        end

        default: begin
            DMACtrl_o = 2'b00; 
        end
    endcase
end



endmodule