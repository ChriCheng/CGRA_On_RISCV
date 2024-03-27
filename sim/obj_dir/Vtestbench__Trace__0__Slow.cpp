// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("testbench ");
    tracep->declBit(c+239,"Clk", false,-1);
    tracep->declBit(c+258,"Start", false,-1);
    tracep->declBit(c+1,"DataOrReg", false,-1);
    tracep->declBus(c+240,"address", false,-1, 4,0);
    tracep->declBus(c+241,"instr_i", false,-1, 7,0);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+242,"vout_addr", false,-1, 1,0);
    tracep->declBus(c+243,"value_o", false,-1, 7,0);
    tracep->declBit(c+244,"is_positive", false,-1);
    tracep->declBus(c+9,"easter_egg", false,-1, 2,0);
    tracep->declBus(c+259,"i", false,-1, 31,0);
    tracep->declBus(c+3,"outfile", false,-1, 31,0);
    tracep->declBus(c+245,"counter", false,-1, 31,0);
    tracep->declBus(c+4,"stall", false,-1, 31,0);
    tracep->declBus(c+5,"flush", false,-1, 31,0);
    tracep->declBus(c+6,"idx", false,-1, 31,0);
    tracep->declBus(c+246,"j", false,-1, 31,0);
    tracep->declBus(c+7,"k", false,-1, 31,0);
    tracep->declBus(c+8,"err", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+1,"DataOrReg", false,-1);
    tracep->declBus(c+240,"address", false,-1, 4,0);
    tracep->declBus(c+241,"instr_i", false,-1, 7,0);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+242,"vout_addr", false,-1, 1,0);
    tracep->declBus(c+243,"value_o", false,-1, 7,0);
    tracep->declBit(c+244,"is_positive", false,-1);
    tracep->declBus(c+9,"easter_egg", false,-1, 2,0);
    tracep->declBus(c+167,"vector_signed_bits", false,-1, 3,0);
    tracep->declBus(c+260,"op_selection", false,-1, 31,0);
    tracep->declBus(c+168,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+216,"inst", false,-1, 31,0);
    tracep->declBus(c+169,"addPC", false,-1, 31,0);
    tracep->declBus(c+261,"aluData", false,-1, 31,0);
    tracep->declBus(c+262,"RSD", false,-1, 31,0);
    tracep->declBus(c+263,"RTD", false,-1, 31,0);
    tracep->declBus(c+264,"signExData", false,-1, 31,0);
    tracep->declBus(c+265,"MUXop", false,-1, 31,0);
    tracep->declBus(c+28,"ALUfunct_in", false,-1, 9,0);
    tracep->declBus(c+266,"alu_ctrl_wire", false,-1, 2,0);
    tracep->declBus(c+217,"pcIm", false,-1, 11,0);
    tracep->declBus(c+218,"swIm", false,-1, 11,0);
    tracep->declBit(c+219,"isBranch", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+60,"AddSum_data_o", false,-1, 31,0);
    tracep->declBus(c+247,"pcSelect_data_o", false,-1, 31,0);
    tracep->declBit(c+170,"HazradDetect_Hazard_o", false,-1);
    tracep->declBus(c+61,"IF_ID_pc_o", false,-1, 31,0);
    tracep->declBus(c+62,"shiftLeft_data_o", false,-1, 31,0);
    tracep->declBus(c+63,"IF_ID_pcIm_o", false,-1, 11,0);
    tracep->declBus(c+220,"IF_ID_inst_o", false,-1, 31,0);
    tracep->declBus(c+171,"MEM_WB_RDaddr_o", false,-1, 4,0);
    tracep->declBus(c+172,"memToReg_data_o", false,-1, 31,0);
    tracep->declBit(c+173,"MEM_WB_RegWrite_o", false,-1);
    tracep->declBit(c+221,"Control_immSelect_o", false,-1);
    tracep->declBus(c+64,"PCImmExtend_data_o", false,-1, 31,0);
    tracep->declBus(c+235,"Registers_RSdata_o", false,-1, 31,0);
    tracep->declBus(c+236,"Registers_RTdata_o", false,-1, 31,0);
    tracep->declBus(c+222,"Sign_Extend_data_o", false,-1, 31,0);
    tracep->declBus(c+209,"MUX_Control_RegDst_o", false,-1, 4,0);
    tracep->declBus(c+210,"MUX_Control_ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+211,"MUX_Control_ALUSrc_o", false,-1);
    tracep->declBit(c+212,"MUX_Control_RegWrite_o", false,-1);
    tracep->declBit(c+213,"MUX_Control_MemToReg_o", false,-1);
    tracep->declBit(c+214,"MUX_Control_MemRead_o", false,-1);
    tracep->declBit(c+215,"MUX_Control_MemWrite_o", false,-1);
    tracep->declBus(c+174,"ForwardToData2_data_o", false,-1, 31,0);
    tracep->declBus(c+29,"ID_EX_SignExtended_o", false,-1, 31,0);
    tracep->declBit(c+30,"ID_EX_ALUSrc_o", false,-1);
    tracep->declBus(c+31,"ID_EX_ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+175,"ForwardToData1_data_o", false,-1, 31,0);
    tracep->declBus(c+176,"MUX_ALUSrc_data_o", false,-1, 31,0);
    tracep->declBus(c+32,"ALU_Control_ALUCtrl_o", false,-1, 2,0);
    tracep->declBit(c+170,"ID_EX_MemRead_o", false,-1);
    tracep->declBus(c+223,"Control_ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+224,"Control_ALUSrc_o", false,-1);
    tracep->declBit(c+225,"Control_RegWrite_o", false,-1);
    tracep->declBit(c+226,"Control_MemToReg_o", false,-1);
    tracep->declBit(c+227,"Control_MemRd_o", false,-1);
    tracep->declBit(c+228,"Control_MemWr_o", false,-1);
    tracep->declBit(c+177,"EX_MEM_RegWrite_o", false,-1);
    tracep->declBus(c+178,"EX_MEM_RDaddr_o", false,-1, 4,0);
    tracep->declBus(c+33,"ID_EX_RSaddr_o", false,-1, 4,0);
    tracep->declBus(c+34,"ID_EX_RTaddr_o", false,-1, 4,0);
    tracep->declBus(c+179,"ForwardingUnit_ForwardA_o", false,-1, 1,0);
    tracep->declBus(c+35,"ID_EX_RDData0_o", false,-1, 31,0);
    tracep->declBus(c+36,"ID_EX_inst_o", false,-1, 31,0);
    tracep->declBus(c+37,"EX_MEM_instr_o", false,-1, 31,0);
    tracep->declBus(c+38,"EX_MEM_ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+180,"ForwardingUnit_ForwardB_o", false,-1, 1,0);
    tracep->declBus(c+39,"ID_EX_RDData1_o", false,-1, 31,0);
    tracep->declBus(c+40,"ID_EX_pc_o", false,-1, 31,0);
    tracep->declBit(c+181,"ALU_Zero_o", false,-1);
    tracep->declBus(c+248,"ALU_data_o", false,-1, 31,0);
    tracep->declBus(c+182,"ID_EX_RegDst_o", false,-1, 4,0);
    tracep->declBit(c+183,"ID_EX_RegWrite_o", false,-1);
    tracep->declBit(c+41,"ID_EX_MemToReg_o", false,-1);
    tracep->declBit(c+42,"ID_EX_MemWrite_o", false,-1);
    tracep->declBus(c+43,"EX_MEM_RDData_o", false,-1, 31,0);
    tracep->declBit(c+44,"EX_MEM_MemWrite_o", false,-1);
    tracep->declBit(c+45,"EX_MEM_MemRead_o", false,-1);
    tracep->declBit(c+46,"EX_MEM_MemToReg_o", false,-1);
    tracep->declBus(c+47,"MEM_WB_ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+48,"MEM_WB_DataMemReadData_o", false,-1, 31,0);
    tracep->declBit(c+49,"MEM_WB_MemToReg_o", false,-1);
    tracep->declBus(c+249,"Data_Memory_data_o", false,-1, 31,0);
    tracep->declBus(c+250,"data_mem_o", false,-1, 31,0);
    tracep->declBus(c+251,"reg_o", false,-1, 31,0);
    tracep->declBit(c+237,"RegEqual", false,-1);
    tracep->declBit(c+238,"PC_Branch_Select", false,-1);
    tracep->declBus(c+184,"VALU_v_o", false,-1, 31,0);
    tracep->declBus(c+50,"EX_MEM_VALUResult_o", false,-1, 31,0);
    tracep->declBus(c+51,"aluToDM_data_o", false,-1, 31,0);
    tracep->declBit(c+52,"toDataMemory", false,-1);
    tracep->declBus(c+53,"VALU_Control_VALUCtrl_o", false,-1, 2,0);
    tracep->declBus(c+252,"is_positive_line", false,-1, 3,0);
    tracep->declBit(c+10,"flag", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+131+i*1,"vector_signed", true,(i+0), 3,0);
    }
    tracep->declBit(c+11,"easter_flag", false,-1);
    tracep->declBit(c+254,"easter_flag_next", false,-1);
    tracep->declBus(c+12,"egg1", false,-1, 7,0);
    tracep->declBus(c+13,"egg2", false,-1, 7,0);
    tracep->declBus(c+14,"egg3", false,-1, 7,0);
    tracep->declBus(c+15,"easter_counter", false,-1, 2,0);
    tracep->declBus(c+16,"easter_counter_next", false,-1, 2,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+175,"data1_i", false,-1, 31,0);
    tracep->declBus(c+176,"data2_i", false,-1, 31,0);
    tracep->declBus(c+32,"ALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+248,"data_o", false,-1, 31,0);
    tracep->declBit(c+181,"Zero_o", false,-1);
    tracep->declBus(c+267,"SUM", false,-1, 2,0);
    tracep->declBus(c+268,"SUB", false,-1, 2,0);
    tracep->declBus(c+269,"AND", false,-1, 2,0);
    tracep->declBus(c+270,"OR", false,-1, 2,0);
    tracep->declBus(c+271,"XOR", false,-1, 2,0);
    tracep->declBus(c+272,"MUL", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+28,"funct_i", false,-1, 9,0);
    tracep->declBus(c+31,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+32,"ALUCtrl_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("AddSum ");
    tracep->declBus(c+61,"data1_i", false,-1, 31,0);
    tracep->declBus(c+62,"data2_i", false,-1, 31,0);
    tracep->declBus(c+267,"ALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+60,"data_o", false,-1, 31,0);
    tracep->declBit(c+65,"Zero_o", false,-1);
    tracep->declBus(c+267,"SUM", false,-1, 2,0);
    tracep->declBus(c+268,"SUB", false,-1, 2,0);
    tracep->declBus(c+269,"AND", false,-1, 2,0);
    tracep->declBus(c+270,"OR", false,-1, 2,0);
    tracep->declBus(c+271,"XOR", false,-1, 2,0);
    tracep->declBus(c+272,"MUL", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Add_PC ");
    tracep->declBus(c+168,"data1_in", false,-1, 31,0);
    tracep->declBus(c+273,"data2_in", false,-1, 31,0);
    tracep->declBus(c+169,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Control ");
    tracep->declBus(c+229,"Op_i", false,-1, 6,0);
    tracep->declBus(c+223,"ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+224,"ALUSrc_o", false,-1);
    tracep->declBit(c+221,"immSelect_o", false,-1);
    tracep->declBit(c+225,"RegWrite_o", false,-1);
    tracep->declBit(c+227,"MemRd_o", false,-1);
    tracep->declBit(c+228,"MemWr_o", false,-1);
    tracep->declBit(c+226,"MemToReg_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Data_Memory ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+240,"op_addr", false,-1, 4,0);
    tracep->declBus(c+51,"addr_i", false,-1, 31,0);
    tracep->declBus(c+43,"data_i", false,-1, 31,0);
    tracep->declBit(c+44,"MemWrite_i", false,-1);
    tracep->declBit(c+45,"MemRead_i", false,-1);
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->declBus(c+249,"data_o", false,-1, 31,0);
    tracep->declBus(c+250,"data_mem_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+134+i*1,"memory", true,(i+0), 7,0);
    }
    tracep->declBus(c+255,"op", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+181,"zero_i", false,-1);
    tracep->declBit(c+183,"RegWrite_i", false,-1);
    tracep->declBit(c+41,"MemToReg_i", false,-1);
    tracep->declBit(c+170,"MemRead_i", false,-1);
    tracep->declBit(c+42,"MemWrite_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+40,"pc_i", false,-1, 31,0);
    tracep->declBus(c+248,"ALUResult_i", false,-1, 31,0);
    tracep->declBus(c+174,"RDData_i", false,-1, 31,0);
    tracep->declBus(c+184,"VALUResult_i", false,-1, 31,0);
    tracep->declBus(c+182,"RDaddr_i", false,-1, 4,0);
    tracep->declBus(c+36,"instr_i", false,-1, 31,0);
    tracep->declBus(c+37,"instr_o", false,-1, 31,0);
    tracep->declBit(c+54,"zero_o", false,-1);
    tracep->declBit(c+177,"RegWrite_o", false,-1);
    tracep->declBit(c+46,"MemToReg_o", false,-1);
    tracep->declBit(c+45,"MemRead_o", false,-1);
    tracep->declBit(c+44,"MemWrite_o", false,-1);
    tracep->declBus(c+55,"pc_o", false,-1, 31,0);
    tracep->declBus(c+38,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+43,"RDData_o", false,-1, 31,0);
    tracep->declBus(c+50,"VALUResult_o", false,-1, 31,0);
    tracep->declBus(c+178,"RDaddr_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardToData1 ");
    tracep->declBus(c+179,"select_i", false,-1, 1,0);
    tracep->declBus(c+35,"data_i", false,-1, 31,0);
    tracep->declBus(c+38,"EX_MEM_i", false,-1, 31,0);
    tracep->declBus(c+172,"MEM_WB_i", false,-1, 31,0);
    tracep->declBus(c+175,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardToData2 ");
    tracep->declBus(c+180,"select_i", false,-1, 1,0);
    tracep->declBus(c+39,"data_i", false,-1, 31,0);
    tracep->declBus(c+38,"EX_MEM_i", false,-1, 31,0);
    tracep->declBus(c+172,"MEM_WB_i", false,-1, 31,0);
    tracep->declBus(c+174,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBit(c+177,"EX_MEM_RegWrite_i", false,-1);
    tracep->declBit(c+173,"MEM_WB_RegWrite_i", false,-1);
    tracep->declBus(c+33,"ID_EX_RS_i", false,-1, 4,0);
    tracep->declBus(c+34,"ID_EX_RT_i", false,-1, 4,0);
    tracep->declBus(c+178,"EX_MEM_RD_i", false,-1, 4,0);
    tracep->declBus(c+171,"MEM_WB_RD_i", false,-1, 4,0);
    tracep->declBus(c+179,"ForwardA_o", false,-1, 1,0);
    tracep->declBus(c+180,"ForwardB_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HazradDetect ");
    tracep->declBit(c+170,"ID_EX_MemRead_i", false,-1);
    tracep->declBus(c+230,"IF_IDrs1_i", false,-1, 4,0);
    tracep->declBus(c+231,"IF_IDrs2_i", false,-1, 4,0);
    tracep->declBus(c+231,"ID_EXrd_i", false,-1, 4,0);
    tracep->declBit(c+170,"Hazard_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+211,"ALUSrc_i", false,-1);
    tracep->declBit(c+212,"RegWrite_i", false,-1);
    tracep->declBit(c+213,"MemToReg_i", false,-1);
    tracep->declBit(c+214,"MemRead_i", false,-1);
    tracep->declBit(c+215,"MemWrite_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+220,"inst_i", false,-1, 31,0);
    tracep->declBus(c+61,"pc_i", false,-1, 31,0);
    tracep->declBus(c+235,"RDData0_i", false,-1, 31,0);
    tracep->declBus(c+236,"RDData1_i", false,-1, 31,0);
    tracep->declBus(c+222,"SignExtended_i", false,-1, 31,0);
    tracep->declBus(c+210,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+209,"RegDst_i", false,-1, 4,0);
    tracep->declBus(c+231,"RSaddr_i", false,-1, 4,0);
    tracep->declBus(c+230,"RTaddr_i", false,-1, 4,0);
    tracep->declBus(c+64,"pcEx_i", false,-1, 31,0);
    tracep->declBit(c+238,"PC_branch_select_i", false,-1);
    tracep->declBit(c+30,"ALUSrc_o", false,-1);
    tracep->declBit(c+183,"RegWrite_o", false,-1);
    tracep->declBit(c+41,"MemToReg_o", false,-1);
    tracep->declBit(c+170,"MemRead_o", false,-1);
    tracep->declBit(c+42,"MemWrite_o", false,-1);
    tracep->declBus(c+36,"inst_o", false,-1, 31,0);
    tracep->declBus(c+40,"pc_o", false,-1, 31,0);
    tracep->declBus(c+35,"RDData0_o", false,-1, 31,0);
    tracep->declBus(c+39,"RDData1_o", false,-1, 31,0);
    tracep->declBus(c+29,"SignExtended_o", false,-1, 31,0);
    tracep->declBus(c+31,"ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+182,"RegDst_o", false,-1, 4,0);
    tracep->declBus(c+33,"RSaddr_o", false,-1, 4,0);
    tracep->declBus(c+34,"RTaddr_o", false,-1, 4,0);
    tracep->declBus(c+56,"pcEx_o", false,-1, 31,0);
    tracep->declBit(c+57,"PC_branch_select_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+170,"hazard_i", false,-1);
    tracep->declBit(c+238,"flush_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+216,"inst_i", false,-1, 31,0);
    tracep->declBus(c+168,"pc_i", false,-1, 31,0);
    tracep->declBus(c+217,"pcIm_i", false,-1, 11,0);
    tracep->declBus(c+63,"pcIm_o", false,-1, 11,0);
    tracep->declBus(c+61,"pc_o", false,-1, 31,0);
    tracep->declBus(c+220,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instruction_Memory ");
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->declBit(c+239,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+168,"addr_i", false,-1, 31,0);
    tracep->declBus(c+241,"instr_i", false,-1, 7,0);
    tracep->declBus(c+216,"instr_o", false,-1, 31,0);
    tracep->declBus(c+19,"quad", false,-1, 1,0);
    tracep->declBus(c+20,"quad_d1", false,-1, 1,0);
    tracep->declBus(c+21,"instr_read", false,-1, 7,0);
    tracep->declBus(c+22,"address_read", false,-1, 5,0);
    tracep->declBit(c+23,"flag", false,-1);
    tracep->declBit(c+256,"flag_next", false,-1);
    tracep->declBus(c+24,"counter", false,-1, 1,0);
    tracep->declBus(c+25,"counter_next", false,-1, 1,0);
    tracep->declBus(c+26,"instr_wr_address", false,-1, 5,0);
    tracep->declBus(c+27,"instr_wr_address_next", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+177,"RegWrite_i", false,-1);
    tracep->declBit(c+46,"MemToReg_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+51,"ALUResult_i", false,-1, 31,0);
    tracep->declBus(c+43,"RDData_i", false,-1, 31,0);
    tracep->declBus(c+249,"DataMemReadData_i", false,-1, 31,0);
    tracep->declBus(c+178,"RDaddr_i", false,-1, 4,0);
    tracep->declBit(c+173,"RegWrite_o", false,-1);
    tracep->declBit(c+49,"MemToReg_o", false,-1);
    tracep->declBus(c+47,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+58,"RDData_o", false,-1, 31,0);
    tracep->declBus(c+48,"DataMemReadData_o", false,-1, 31,0);
    tracep->declBus(c+171,"RDaddr_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_ALUSrc ");
    tracep->declBus(c+174,"data1_i", false,-1, 31,0);
    tracep->declBus(c+29,"data2_i", false,-1, 31,0);
    tracep->declBit(c+30,"select_i", false,-1);
    tracep->declBus(c+176,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_Control ");
    tracep->declBus(c+223,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+232,"RegDst_i", false,-1, 4,0);
    tracep->declBit(c+170,"Hazard_i", false,-1);
    tracep->declBit(c+224,"ALUSrc_i", false,-1);
    tracep->declBit(c+225,"RegWrite_i", false,-1);
    tracep->declBit(c+226,"MemToReg_i", false,-1);
    tracep->declBit(c+227,"MemRead_i", false,-1);
    tracep->declBit(c+228,"MemWrite_i", false,-1);
    tracep->declBus(c+210,"ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+209,"RegDst_o", false,-1, 4,0);
    tracep->declBit(c+211,"ALUSrc_o", false,-1);
    tracep->declBit(c+212,"RegWrite_o", false,-1);
    tracep->declBit(c+213,"MemToReg_o", false,-1);
    tracep->declBit(c+214,"MemRead_o", false,-1);
    tracep->declBit(c+215,"MemWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBit(c+170,"hazardpc_i", false,-1);
    tracep->declBus(c+247,"pc_i", false,-1, 31,0);
    tracep->declBus(c+168,"pc_o", false,-1, 31,0);
    tracep->declBit(c+59,"flag", false,-1);
    tracep->declBit(c+257,"flag_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCImmExtend ");
    tracep->declBus(c+63,"data0_i", false,-1, 11,0);
    tracep->declBus(c+274,"data1_i", false,-1, 11,0);
    tracep->declBit(c+275,"select_i", false,-1);
    tracep->declBus(c+64,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Registers ");
    tracep->declBus(c+66,"i", false,-1, 31,0);
    tracep->declBit(c+239,"clk_i", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+240,"op_address", false,-1, 4,0);
    tracep->declBus(c+231,"RSaddr_i", false,-1, 4,0);
    tracep->declBus(c+230,"RTaddr_i", false,-1, 4,0);
    tracep->declBus(c+171,"RDaddr_i", false,-1, 4,0);
    tracep->declBus(c+172,"RDdata_i", false,-1, 31,0);
    tracep->declBit(c+173,"RegWrite_i", false,-1);
    tracep->declBus(c+166,"is_pos_i", false,-1, 3,0);
    tracep->declBus(c+235,"RSdata_o", false,-1, 31,0);
    tracep->declBus(c+236,"RTdata_o", false,-1, 31,0);
    tracep->declBus(c+251,"reg_o", false,-1, 31,0);
    tracep->declBus(c+252,"pos_o", false,-1, 3,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+67+i*1,"register", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+99+i*1,"pos", true,(i+0), 3,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Sign_Extend ");
    tracep->declBus(c+233,"data0_i", false,-1, 11,0);
    tracep->declBus(c+234,"data1_i", false,-1, 11,0);
    tracep->declBit(c+221,"select_i", false,-1);
    tracep->declBus(c+222,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("VALU ");
    tracep->declBus(c+175,"v1_i", false,-1, 31,0);
    tracep->declBus(c+176,"v2_i", false,-1, 31,0);
    tracep->declBus(c+53,"VALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+184,"v_o", false,-1, 31,0);
    tracep->declBus(c+167,"over", false,-1, 3,0);
    tracep->declBus(c+185,"e1", false,-1, 7,0);
    tracep->declBus(c+186,"e2", false,-1, 7,0);
    tracep->declBus(c+187,"e3", false,-1, 7,0);
    tracep->declBus(c+188,"e4", false,-1, 7,0);
    tracep->declBus(c+189,"b1", false,-1, 7,0);
    tracep->declBus(c+190,"b2", false,-1, 7,0);
    tracep->declBus(c+191,"b3", false,-1, 7,0);
    tracep->declBus(c+192,"b4", false,-1, 7,0);
    tracep->declBus(c+193,"b5", false,-1, 7,0);
    tracep->declBus(c+194,"b6", false,-1, 7,0);
    tracep->declBus(c+195,"b7", false,-1, 7,0);
    tracep->declBus(c+196,"b8", false,-1, 7,0);
    tracep->declBus(c+197,"a1", false,-1, 15,0);
    tracep->declBus(c+198,"a2", false,-1, 15,0);
    tracep->declBus(c+199,"a3", false,-1, 15,0);
    tracep->declBus(c+200,"a4", false,-1, 15,0);
    tracep->declBus(c+201,"a5", false,-1, 15,0);
    tracep->declBus(c+202,"a6", false,-1, 15,0);
    tracep->declBus(c+203,"a7", false,-1, 15,0);
    tracep->declBus(c+204,"a8", false,-1, 15,0);
    tracep->declBus(c+205,"s1", false,-1, 15,0);
    tracep->declBus(c+206,"s2", false,-1, 15,0);
    tracep->declBus(c+207,"s3", false,-1, 15,0);
    tracep->declBus(c+208,"s4", false,-1, 15,0);
    tracep->declBus(c+268,"VSUM", false,-1, 2,0);
    tracep->declBus(c+272,"VSUB", false,-1, 2,0);
    tracep->declBus(c+267,"VDP", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("VALU_Control ");
    tracep->declBus(c+28,"vfunct_i", false,-1, 9,0);
    tracep->declBus(c+53,"VALUCtrl_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluToDM ");
    tracep->declBus(c+38,"data1_i", false,-1, 31,0);
    tracep->declBus(c+50,"data2_i", false,-1, 31,0);
    tracep->declBit(c+52,"select_i", false,-1);
    tracep->declBus(c+51,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memToReg ");
    tracep->declBus(c+47,"data1_i", false,-1, 31,0);
    tracep->declBus(c+48,"data2_i", false,-1, 31,0);
    tracep->declBit(c+49,"select_i", false,-1);
    tracep->declBus(c+172,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcSelect ");
    tracep->declBus(c+169,"data1_i", false,-1, 31,0);
    tracep->declBus(c+60,"data2_i", false,-1, 31,0);
    tracep->declBit(c+219,"select_i", false,-1);
    tracep->declBus(c+247,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shiftLeft ");
    tracep->declBus(c+64,"data_i", false,-1, 31,0);
    tracep->declBus(c+62,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtestbench___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->testbench__DOT__DataOrReg));
    bufp->fullBit(oldp+2,(vlSelf->testbench__DOT__reset));
    bufp->fullIData(oldp+3,(vlSelf->testbench__DOT__outfile),32);
    bufp->fullIData(oldp+4,(vlSelf->testbench__DOT__stall),32);
    bufp->fullIData(oldp+5,(vlSelf->testbench__DOT__flush),32);
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__idx),32);
    bufp->fullIData(oldp+7,(vlSelf->testbench__DOT__k),32);
    bufp->fullIData(oldp+8,(vlSelf->testbench__DOT__err),32);
    bufp->fullCData(oldp+9,(vlSelf->testbench__DOT__easter_egg),3);
    bufp->fullBit(oldp+10,(vlSelf->testbench__DOT__CPU__DOT__flag));
    bufp->fullBit(oldp+11,(vlSelf->testbench__DOT__CPU__DOT__easter_flag));
    bufp->fullCData(oldp+12,(vlSelf->testbench__DOT__CPU__DOT__egg1),8);
    bufp->fullCData(oldp+13,(vlSelf->testbench__DOT__CPU__DOT__egg2),8);
    bufp->fullCData(oldp+14,(vlSelf->testbench__DOT__CPU__DOT__egg3),8);
    bufp->fullCData(oldp+15,(vlSelf->testbench__DOT__CPU__DOT__easter_counter),3);
    bufp->fullCData(oldp+16,((7U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter))
                                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))),3);
    bufp->fullIData(oldp+17,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__i),32);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i),32);
    bufp->fullCData(oldp+19,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad),2);
    bufp->fullCData(oldp+20,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1),2);
    bufp->fullCData(oldp+21,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read),8);
    bufp->fullCData(oldp+22,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read),6);
    bufp->fullBit(oldp+23,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag));
    bufp->fullCData(oldp+24,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter),2);
    bufp->fullCData(oldp+25,((3U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)))),2);
    bufp->fullCData(oldp+26,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address),6);
    bufp->fullCData(oldp+27,((0x3fU & ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address))
                                        : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address)))),6);
    bufp->fullSData(oldp+28,(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in),10);
    bufp->fullIData(oldp+29,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o),32);
    bufp->fullBit(oldp+30,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o));
    bufp->fullCData(oldp+31,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o),2);
    bufp->fullCData(oldp+32,(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o),3);
    bufp->fullCData(oldp+33,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o),5);
    bufp->fullCData(oldp+34,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o),5);
    bufp->fullIData(oldp+35,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o),32);
    bufp->fullIData(oldp+36,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o),32);
    bufp->fullIData(oldp+37,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o),32);
    bufp->fullIData(oldp+38,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o),32);
    bufp->fullIData(oldp+39,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o),32);
    bufp->fullIData(oldp+40,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o),32);
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o));
    bufp->fullBit(oldp+42,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o));
    bufp->fullIData(oldp+43,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o),32);
    bufp->fullBit(oldp+44,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o));
    bufp->fullBit(oldp+45,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o));
    bufp->fullBit(oldp+46,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o));
    bufp->fullIData(oldp+47,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o),32);
    bufp->fullIData(oldp+48,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o),32);
    bufp->fullBit(oldp+49,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o));
    bufp->fullIData(oldp+50,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o),32);
    bufp->fullIData(oldp+51,(vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o),32);
    bufp->fullBit(oldp+52,((0x57U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o))));
    bufp->fullCData(oldp+53,(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o),3);
    bufp->fullBit(oldp+54,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o));
    bufp->fullIData(oldp+55,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o),32);
    bufp->fullIData(oldp+56,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o),32);
    bufp->fullBit(oldp+57,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o));
    bufp->fullIData(oldp+58,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o),32);
    bufp->fullBit(oldp+59,(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag));
    bufp->fullIData(oldp+60,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                              + (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                 << 1U))),32);
    bufp->fullIData(oldp+61,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o),32);
    bufp->fullIData(oldp+62,((vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                              << 1U)),32);
    bufp->fullSData(oldp+63,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o),12);
    bufp->fullIData(oldp+64,(vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o),32);
    bufp->fullBit(oldp+65,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                            == (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                << 1U))));
    bufp->fullIData(oldp+66,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__i),32);
    bufp->fullIData(oldp+67,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0]),32);
    bufp->fullIData(oldp+68,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[1]),32);
    bufp->fullIData(oldp+69,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[2]),32);
    bufp->fullIData(oldp+70,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[3]),32);
    bufp->fullIData(oldp+71,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[4]),32);
    bufp->fullIData(oldp+72,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[5]),32);
    bufp->fullIData(oldp+73,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[6]),32);
    bufp->fullIData(oldp+74,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[7]),32);
    bufp->fullIData(oldp+75,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[8]),32);
    bufp->fullIData(oldp+76,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[9]),32);
    bufp->fullIData(oldp+77,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[10]),32);
    bufp->fullIData(oldp+78,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[11]),32);
    bufp->fullIData(oldp+79,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[12]),32);
    bufp->fullIData(oldp+80,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[13]),32);
    bufp->fullIData(oldp+81,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[14]),32);
    bufp->fullIData(oldp+82,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[15]),32);
    bufp->fullIData(oldp+83,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[16]),32);
    bufp->fullIData(oldp+84,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[17]),32);
    bufp->fullIData(oldp+85,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[18]),32);
    bufp->fullIData(oldp+86,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[19]),32);
    bufp->fullIData(oldp+87,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[20]),32);
    bufp->fullIData(oldp+88,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[21]),32);
    bufp->fullIData(oldp+89,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[22]),32);
    bufp->fullIData(oldp+90,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[23]),32);
    bufp->fullIData(oldp+91,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[24]),32);
    bufp->fullIData(oldp+92,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[25]),32);
    bufp->fullIData(oldp+93,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[26]),32);
    bufp->fullIData(oldp+94,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[27]),32);
    bufp->fullIData(oldp+95,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[28]),32);
    bufp->fullIData(oldp+96,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[29]),32);
    bufp->fullIData(oldp+97,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[30]),32);
    bufp->fullIData(oldp+98,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[31]),32);
    bufp->fullCData(oldp+99,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0]),4);
    bufp->fullCData(oldp+100,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[1]),4);
    bufp->fullCData(oldp+101,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[2]),4);
    bufp->fullCData(oldp+102,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[3]),4);
    bufp->fullCData(oldp+103,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[4]),4);
    bufp->fullCData(oldp+104,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[5]),4);
    bufp->fullCData(oldp+105,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[6]),4);
    bufp->fullCData(oldp+106,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[7]),4);
    bufp->fullCData(oldp+107,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[8]),4);
    bufp->fullCData(oldp+108,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[9]),4);
    bufp->fullCData(oldp+109,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[10]),4);
    bufp->fullCData(oldp+110,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[11]),4);
    bufp->fullCData(oldp+111,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[12]),4);
    bufp->fullCData(oldp+112,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[13]),4);
    bufp->fullCData(oldp+113,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[14]),4);
    bufp->fullCData(oldp+114,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[15]),4);
    bufp->fullCData(oldp+115,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[16]),4);
    bufp->fullCData(oldp+116,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[17]),4);
    bufp->fullCData(oldp+117,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[18]),4);
    bufp->fullCData(oldp+118,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[19]),4);
    bufp->fullCData(oldp+119,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[20]),4);
    bufp->fullCData(oldp+120,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[21]),4);
    bufp->fullCData(oldp+121,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[22]),4);
    bufp->fullCData(oldp+122,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[23]),4);
    bufp->fullCData(oldp+123,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[24]),4);
    bufp->fullCData(oldp+124,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[25]),4);
    bufp->fullCData(oldp+125,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[26]),4);
    bufp->fullCData(oldp+126,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[27]),4);
    bufp->fullCData(oldp+127,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[28]),4);
    bufp->fullCData(oldp+128,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[29]),4);
    bufp->fullCData(oldp+129,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[30]),4);
    bufp->fullCData(oldp+130,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[31]),4);
    bufp->fullCData(oldp+131,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[0]),4);
    bufp->fullCData(oldp+132,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[1]),4);
    bufp->fullCData(oldp+133,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[2]),4);
    bufp->fullCData(oldp+134,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0]),8);
    bufp->fullCData(oldp+135,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[1]),8);
    bufp->fullCData(oldp+136,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[2]),8);
    bufp->fullCData(oldp+137,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[3]),8);
    bufp->fullCData(oldp+138,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[4]),8);
    bufp->fullCData(oldp+139,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[5]),8);
    bufp->fullCData(oldp+140,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[6]),8);
    bufp->fullCData(oldp+141,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[7]),8);
    bufp->fullCData(oldp+142,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[8]),8);
    bufp->fullCData(oldp+143,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[9]),8);
    bufp->fullCData(oldp+144,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[10]),8);
    bufp->fullCData(oldp+145,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[11]),8);
    bufp->fullCData(oldp+146,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[12]),8);
    bufp->fullCData(oldp+147,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[13]),8);
    bufp->fullCData(oldp+148,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[14]),8);
    bufp->fullCData(oldp+149,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[15]),8);
    bufp->fullCData(oldp+150,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[16]),8);
    bufp->fullCData(oldp+151,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[17]),8);
    bufp->fullCData(oldp+152,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[18]),8);
    bufp->fullCData(oldp+153,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[19]),8);
    bufp->fullCData(oldp+154,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[20]),8);
    bufp->fullCData(oldp+155,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[21]),8);
    bufp->fullCData(oldp+156,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[22]),8);
    bufp->fullCData(oldp+157,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[23]),8);
    bufp->fullCData(oldp+158,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[24]),8);
    bufp->fullCData(oldp+159,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[25]),8);
    bufp->fullCData(oldp+160,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[26]),8);
    bufp->fullCData(oldp+161,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[27]),8);
    bufp->fullCData(oldp+162,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[28]),8);
    bufp->fullCData(oldp+163,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[29]),8);
    bufp->fullCData(oldp+164,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[30]),8);
    bufp->fullCData(oldp+165,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[31]),8);
    bufp->fullCData(oldp+166,(vlSelf->testbench__DOT__CPU__DOT__vector_signed
                              [1U]),4);
    bufp->fullCData(oldp+167,(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits),4);
    bufp->fullIData(oldp+168,(vlSelf->testbench__DOT__CPU__DOT__inst_addr),32);
    bufp->fullIData(oldp+169,(((IData)(4U) + vlSelf->testbench__DOT__CPU__DOT__inst_addr)),32);
    bufp->fullBit(oldp+170,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o));
    bufp->fullCData(oldp+171,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o),5);
    bufp->fullIData(oldp+172,(vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o),32);
    bufp->fullBit(oldp+173,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o));
    bufp->fullIData(oldp+174,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o),32);
    bufp->fullIData(oldp+175,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o),32);
    bufp->fullIData(oldp+176,(vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o),32);
    bufp->fullBit(oldp+177,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o));
    bufp->fullCData(oldp+178,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o),5);
    bufp->fullCData(oldp+179,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o),2);
    bufp->fullCData(oldp+180,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o),2);
    bufp->fullBit(oldp+181,((vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             == vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)));
    bufp->fullCData(oldp+182,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o),5);
    bufp->fullBit(oldp+183,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o));
    bufp->fullIData(oldp+184,(vlSelf->testbench__DOT__CPU__DOT__VALU_v_o),32);
    bufp->fullCData(oldp+185,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1),8);
    bufp->fullCData(oldp+186,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2),8);
    bufp->fullCData(oldp+187,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3),8);
    bufp->fullCData(oldp+188,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4),8);
    bufp->fullCData(oldp+189,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1),8);
    bufp->fullCData(oldp+190,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2),8);
    bufp->fullCData(oldp+191,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3),8);
    bufp->fullCData(oldp+192,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4),8);
    bufp->fullCData(oldp+193,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5),8);
    bufp->fullCData(oldp+194,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6),8);
    bufp->fullCData(oldp+195,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7),8);
    bufp->fullCData(oldp+196,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8),8);
    bufp->fullSData(oldp+197,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                               | (0xffU & vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o))),16);
    bufp->fullSData(oldp+198,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                               | (0xffU & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))),16);
    bufp->fullSData(oldp+199,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 8U)))),16);
    bufp->fullSData(oldp+200,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                           >> 8U)))),16);
    bufp->fullSData(oldp+201,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 0x10U)))),16);
    bufp->fullSData(oldp+202,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                           >> 0x10U)))),16);
    bufp->fullSData(oldp+203,(((0xff00U & ((- (IData)(
                                                      (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                       >> 0x1fU))) 
                                           << 8U)) 
                               | (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                  >> 0x18U))),16);
    bufp->fullSData(oldp+204,(((0xff00U & ((- (IData)(
                                                      (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                       >> 0x1fU))) 
                                           << 8U)) 
                               | (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                  >> 0x18U))),16);
    bufp->fullSData(oldp+205,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1),16);
    bufp->fullSData(oldp+206,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2),16);
    bufp->fullSData(oldp+207,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3),16);
    bufp->fullSData(oldp+208,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4),16);
    bufp->fullCData(oldp+209,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                ? 0U : (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                 >> 7U)))),5);
    bufp->fullCData(oldp+210,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                ? 0U : (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o))),2);
    bufp->fullBit(oldp+211,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o))));
    bufp->fullBit(oldp+212,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o))));
    bufp->fullBit(oldp+213,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o))));
    bufp->fullBit(oldp+214,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o))));
    bufp->fullBit(oldp+215,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o))));
    bufp->fullIData(oldp+216,(vlSelf->testbench__DOT__CPU__DOT__inst),32);
    bufp->fullSData(oldp+217,(vlSelf->testbench__DOT__CPU__DOT__pcIm),12);
    bufp->fullSData(oldp+218,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                           >> 7U)))),12);
    bufp->fullBit(oldp+219,((0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o))));
    bufp->fullIData(oldp+220,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o),32);
    bufp->fullBit(oldp+221,(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o));
    bufp->fullIData(oldp+222,(((IData)(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o)
                                ? (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                      >> 7U))))
                                : (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                >> 0x14U)))),32);
    bufp->fullCData(oldp+223,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o),2);
    bufp->fullBit(oldp+224,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o));
    bufp->fullBit(oldp+225,(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o));
    bufp->fullBit(oldp+226,(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o));
    bufp->fullBit(oldp+227,(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o));
    bufp->fullBit(oldp+228,(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o));
    bufp->fullCData(oldp+229,((0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o)),7);
    bufp->fullCData(oldp+230,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+231,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+232,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 7U))),5);
    bufp->fullSData(oldp+233,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+234,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+235,(vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o),32);
    bufp->fullIData(oldp+236,(vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o),32);
    bufp->fullBit(oldp+237,((vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
                             == vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o)));
    bufp->fullBit(oldp+238,(vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select));
    bufp->fullBit(oldp+239,(vlSelf->testbench__DOT__Clk));
    bufp->fullCData(oldp+240,(vlSelf->testbench__DOT__address),5);
    bufp->fullCData(oldp+241,(vlSelf->testbench__DOT__instr_i),8);
    bufp->fullCData(oldp+242,(vlSelf->testbench__DOT__vout_addr),2);
    bufp->fullCData(oldp+243,((0xffU & ((2U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                         ? ((1U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                             ? ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                 ? 
                                                (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                 >> 0x18U))
                                             : ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                 ? 
                                                (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                 >> 0x10U)))
                                         : ((1U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                             ? ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                 ? 
                                                (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                 >> 8U)
                                                 : 
                                                (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                 >> 8U))
                                             : ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                 ? vlSelf->testbench__DOT__CPU__DOT__reg_o
                                                 : vlSelf->testbench__DOT__CPU__DOT__data_mem_o))))),8);
    bufp->fullBit(oldp+244,((1U & (vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos
                                   [vlSelf->testbench__DOT__address] 
                                   >> (IData)(vlSelf->testbench__DOT__vout_addr)))));
    bufp->fullIData(oldp+245,(vlSelf->testbench__DOT__counter),32);
    bufp->fullIData(oldp+246,(vlSelf->testbench__DOT__j),32);
    bufp->fullIData(oldp+247,(vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o),32);
    bufp->fullIData(oldp+248,(((4U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                ? ((2U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                    ? ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                        ? vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o
                                        : (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           * vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))
                                    : ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                        ? (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           ^ vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)
                                        : (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           | vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)))
                                : ((2U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                    ? ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                        ? (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)
                                        : (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           - vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))
                                    : ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
                                        ? (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           + vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)
                                        : vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o)))),32);
    bufp->fullIData(oldp+249,(((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o)
                                ? ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                    [(0x1fU & ((IData)(3U) 
                                               + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                    << 0x18U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                                  << 0x10U) 
                                                 | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                                     << 8U) 
                                                    | vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                    [
                                                    (0x1fU 
                                                     & vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o)])))
                                : 0U)),32);
    bufp->fullIData(oldp+250,(vlSelf->testbench__DOT__CPU__DOT__data_mem_o),32);
    bufp->fullIData(oldp+251,(vlSelf->testbench__DOT__CPU__DOT__reg_o),32);
    bufp->fullCData(oldp+252,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos
                              [vlSelf->testbench__DOT__address]),4);
    bufp->fullBit(oldp+253,(vlSelf->testbench__DOT__CPU__DOT__start_i));
    bufp->fullBit(oldp+254,(((0xaaU == (IData)(vlSelf->testbench__DOT__instr_i)) 
                             | ((7U != (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)))));
    bufp->fullIData(oldp+255,(((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                [(0x1fU & ((IData)(3U) 
                                           + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                << 0x18U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                              [(0x1fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                              << 0x10U) 
                                             | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                 [(0x1fU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                                 << 8U) 
                                                | vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                [(0x1fU 
                                                  & vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o)])))),32);
    bufp->fullBit(oldp+256,(((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
                             | ((0xffU != (IData)(vlSelf->testbench__DOT__instr_i)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)))));
    bufp->fullBit(oldp+257,(((0xf8U == vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o) 
                             | (IData)(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag))));
    bufp->fullBit(oldp+258,(vlSelf->testbench__DOT__Start));
    bufp->fullIData(oldp+259,(vlSelf->testbench__DOT__i),32);
    bufp->fullIData(oldp+260,(vlSelf->testbench__DOT__CPU__DOT__op_selection),32);
    bufp->fullIData(oldp+261,(vlSelf->testbench__DOT__CPU__DOT__aluData),32);
    bufp->fullIData(oldp+262,(vlSelf->testbench__DOT__CPU__DOT__RSD),32);
    bufp->fullIData(oldp+263,(vlSelf->testbench__DOT__CPU__DOT__RTD),32);
    bufp->fullIData(oldp+264,(vlSelf->testbench__DOT__CPU__DOT__signExData),32);
    bufp->fullIData(oldp+265,(vlSelf->testbench__DOT__CPU__DOT__MUXop),32);
    bufp->fullCData(oldp+266,(vlSelf->testbench__DOT__CPU__DOT__alu_ctrl_wire),3);
    bufp->fullCData(oldp+267,(1U),3);
    bufp->fullCData(oldp+268,(2U),3);
    bufp->fullCData(oldp+269,(3U),3);
    bufp->fullCData(oldp+270,(4U),3);
    bufp->fullCData(oldp+271,(5U),3);
    bufp->fullCData(oldp+272,(6U),3);
    bufp->fullIData(oldp+273,(4U),32);
    bufp->fullSData(oldp+274,(0U),12);
    bufp->fullBit(oldp+275,(0U));
}
