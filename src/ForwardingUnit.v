module ForwardingUnit
(   
    /* -----------Write enable----------- */
    EX_MEM_RegWrite_i,
    MEM_WB_RegWrite_i,
    ID_EX_RegWrite_i,
    /* -----------preread RS & RT----------- */
    ID_EX_RS_i,
    ID_EX_RT_i,
    /* -----------RD of different stage ------------- */
    
    EX_MEM_RD_i,
    MEM_WB_RD_i,
    ID_EX_RD_i,
    /* -----------Forward result----------------- */
    ForwardA_o,
    ForwardB_o,
    /* -----------Branch Forwarding--------------- */
    Branch_RSaddr,
    Branch_RTaddr,
    Forward_Branch_RS,
    Forward_Branch_RT
);

input			    EX_MEM_RegWrite_i, MEM_WB_RegWrite_i,ID_EX_RegWrite_i;
input	    [4:0]	ID_EX_RS_i, ID_EX_RT_i, EX_MEM_RD_i, MEM_WB_RD_i,Branch_RSaddr,Branch_RTaddr,ID_EX_RD_i;
output reg	[1:0]	ForwardA_o, ForwardB_o;
output reg  [1:0]   Forward_Branch_RS,Forward_Branch_RT;

always@(*)begin
    ForwardA_o = 2'b00;

    if(EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i != 5'b00000) && 
    (EX_MEM_RD_i == ID_EX_RS_i)) ForwardA_o = 2'b10;

    else if(MEM_WB_RegWrite_i &&
    (MEM_WB_RD_i != 5'b00000) &&
    MEM_WB_RD_i == ID_EX_RS_i)  ForwardA_o = 2'b11;

    ForwardB_o = 2'b00;

    if(EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i != 5'b00000) && 
    (EX_MEM_RD_i == ID_EX_RT_i)) ForwardB_o = 2'b10;

    else if(MEM_WB_RegWrite_i &&
    (MEM_WB_RD_i != 5'b00000) &&
    MEM_WB_RD_i == ID_EX_RT_i)  ForwardB_o = 2'b11;

    /* --------------------Branch part ------------------- */
    if (ID_EX_RegWrite_i &&
    ID_EX_RD_i == Branch_RSaddr) begin
        Forward_Branch_RS = 2'b01;
    end
    else if (EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i == Branch_RSaddr)) begin
        Forward_Branch_RS = 2'b10;
    end
    else if(MEM_WB_RegWrite_i &&
        MEM_WB_RD_i == Branch_RSaddr)  Forward_Branch_RS = 2'b11;
    else begin
        Forward_Branch_RS = 2'b00;
    end
    
    if (ID_EX_RegWrite_i &&
    ID_EX_RD_i == Branch_RTaddr) begin
        Forward_Branch_RT = 2'b01;
    end
    else if(EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i == Branch_RTaddr)) Forward_Branch_RT = 2'b10;

    else if(MEM_WB_RegWrite_i &&
        MEM_WB_RD_i == Branch_RTaddr)  Forward_Branch_RT = 2'b11;
    else begin
        Forward_Branch_RT = 2'b00;
    end

end
endmodule