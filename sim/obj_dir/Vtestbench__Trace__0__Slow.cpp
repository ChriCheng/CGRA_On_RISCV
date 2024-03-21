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
    tracep->declBit(c+238,"Clk", false,-1);
    tracep->declBit(c+258,"Start", false,-1);
    tracep->declBit(c+1,"DataOrReg", false,-1);
    tracep->declBus(c+239,"address", false,-1, 4,0);
    tracep->declBus(c+240,"instr_i", false,-1, 7,0);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+241,"vout_addr", false,-1, 1,0);
    tracep->declBus(c+242,"value_o", false,-1, 7,0);
    tracep->declBit(c+243,"is_positive", false,-1);
    tracep->declBus(c+8,"easter_egg", false,-1, 2,0);
    tracep->declBus(c+259,"i", false,-1, 31,0);
    tracep->declBus(c+3,"outfile", false,-1, 31,0);
    tracep->declBus(c+244,"counter", false,-1, 31,0);
    tracep->declBus(c+4,"stall", false,-1, 31,0);
    tracep->declBus(c+5,"flush", false,-1, 31,0);
    tracep->declBus(c+6,"idx", false,-1, 31,0);
    tracep->declBus(c+245,"j", false,-1, 31,0);
    tracep->declBus(c+7,"k", false,-1, 31,0);
    tracep->declBus(c+246,"err", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+1,"DataOrReg", false,-1);
    tracep->declBus(c+239,"address", false,-1, 4,0);
    tracep->declBus(c+240,"instr_i", false,-1, 7,0);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+241,"vout_addr", false,-1, 1,0);
    tracep->declBus(c+242,"value_o", false,-1, 7,0);
    tracep->declBit(c+243,"is_positive", false,-1);
    tracep->declBus(c+8,"easter_egg", false,-1, 2,0);
    tracep->declBus(c+166,"vector_signed_bits", false,-1, 3,0);
    tracep->declBus(c+260,"op_selection", false,-1, 31,0);
    tracep->declBus(c+167,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+215,"inst", false,-1, 31,0);
    tracep->declBus(c+168,"addPC", false,-1, 31,0);
    tracep->declBus(c+261,"aluData", false,-1, 31,0);
    tracep->declBus(c+262,"RSD", false,-1, 31,0);
    tracep->declBus(c+263,"RTD", false,-1, 31,0);
    tracep->declBus(c+264,"signExData", false,-1, 31,0);
    tracep->declBus(c+265,"MUXop", false,-1, 31,0);
    tracep->declBus(c+27,"ALUfunct_in", false,-1, 9,0);
    tracep->declBus(c+266,"alu_ctrl_wire", false,-1, 2,0);
    tracep->declBus(c+216,"pcIm", false,-1, 11,0);
    tracep->declBus(c+217,"swIm", false,-1, 11,0);
    tracep->declBit(c+218,"isBranch", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+59,"AddSum_data_o", false,-1, 31,0);
    tracep->declBus(c+247,"pcSelect_data_o", false,-1, 31,0);
    tracep->declBit(c+169,"HazradDetect_Hazard_o", false,-1);
    tracep->declBus(c+60,"IF_ID_pc_o", false,-1, 31,0);
    tracep->declBus(c+61,"shiftLeft_data_o", false,-1, 31,0);
    tracep->declBus(c+62,"IF_ID_pcIm_o", false,-1, 11,0);
    tracep->declBus(c+219,"IF_ID_inst_o", false,-1, 31,0);
    tracep->declBus(c+170,"MEM_WB_RDaddr_o", false,-1, 4,0);
    tracep->declBus(c+171,"memToReg_data_o", false,-1, 31,0);
    tracep->declBit(c+172,"MEM_WB_RegWrite_o", false,-1);
    tracep->declBit(c+220,"Control_immSelect_o", false,-1);
    tracep->declBus(c+63,"PCImmExtend_data_o", false,-1, 31,0);
    tracep->declBus(c+234,"Registers_RSdata_o", false,-1, 31,0);
    tracep->declBus(c+235,"Registers_RTdata_o", false,-1, 31,0);
    tracep->declBus(c+221,"Sign_Extend_data_o", false,-1, 31,0);
    tracep->declBus(c+208,"MUX_Control_RegDst_o", false,-1, 4,0);
    tracep->declBus(c+209,"MUX_Control_ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+210,"MUX_Control_ALUSrc_o", false,-1);
    tracep->declBit(c+211,"MUX_Control_RegWrite_o", false,-1);
    tracep->declBit(c+212,"MUX_Control_MemToReg_o", false,-1);
    tracep->declBit(c+213,"MUX_Control_MemRead_o", false,-1);
    tracep->declBit(c+214,"MUX_Control_MemWrite_o", false,-1);
    tracep->declBus(c+173,"ForwardToData2_data_o", false,-1, 31,0);
    tracep->declBus(c+28,"ID_EX_SignExtended_o", false,-1, 31,0);
    tracep->declBit(c+29,"ID_EX_ALUSrc_o", false,-1);
    tracep->declBus(c+30,"ID_EX_ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+174,"ForwardToData1_data_o", false,-1, 31,0);
    tracep->declBus(c+175,"MUX_ALUSrc_data_o", false,-1, 31,0);
    tracep->declBus(c+31,"ALU_Control_ALUCtrl_o", false,-1, 2,0);
    tracep->declBit(c+169,"ID_EX_MemRead_o", false,-1);
    tracep->declBus(c+222,"Control_ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+223,"Control_ALUSrc_o", false,-1);
    tracep->declBit(c+224,"Control_RegWrite_o", false,-1);
    tracep->declBit(c+225,"Control_MemToReg_o", false,-1);
    tracep->declBit(c+226,"Control_MemRd_o", false,-1);
    tracep->declBit(c+227,"Control_MemWr_o", false,-1);
    tracep->declBit(c+176,"EX_MEM_RegWrite_o", false,-1);
    tracep->declBus(c+177,"EX_MEM_RDaddr_o", false,-1, 4,0);
    tracep->declBus(c+32,"ID_EX_RSaddr_o", false,-1, 4,0);
    tracep->declBus(c+33,"ID_EX_RTaddr_o", false,-1, 4,0);
    tracep->declBus(c+178,"ForwardingUnit_ForwardA_o", false,-1, 1,0);
    tracep->declBus(c+34,"ID_EX_RDData0_o", false,-1, 31,0);
    tracep->declBus(c+35,"ID_EX_inst_o", false,-1, 31,0);
    tracep->declBus(c+36,"EX_MEM_instr_o", false,-1, 31,0);
    tracep->declBus(c+37,"EX_MEM_ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+179,"ForwardingUnit_ForwardB_o", false,-1, 1,0);
    tracep->declBus(c+38,"ID_EX_RDData1_o", false,-1, 31,0);
    tracep->declBus(c+39,"ID_EX_pc_o", false,-1, 31,0);
    tracep->declBit(c+180,"ALU_Zero_o", false,-1);
    tracep->declBus(c+248,"ALU_data_o", false,-1, 31,0);
    tracep->declBus(c+181,"ID_EX_RegDst_o", false,-1, 4,0);
    tracep->declBit(c+182,"ID_EX_RegWrite_o", false,-1);
    tracep->declBit(c+40,"ID_EX_MemToReg_o", false,-1);
    tracep->declBit(c+41,"ID_EX_MemWrite_o", false,-1);
    tracep->declBus(c+42,"EX_MEM_RDData_o", false,-1, 31,0);
    tracep->declBit(c+43,"EX_MEM_MemWrite_o", false,-1);
    tracep->declBit(c+44,"EX_MEM_MemRead_o", false,-1);
    tracep->declBit(c+45,"EX_MEM_MemToReg_o", false,-1);
    tracep->declBus(c+46,"MEM_WB_ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+47,"MEM_WB_DataMemReadData_o", false,-1, 31,0);
    tracep->declBit(c+48,"MEM_WB_MemToReg_o", false,-1);
    tracep->declBus(c+249,"Data_Memory_data_o", false,-1, 31,0);
    tracep->declBus(c+250,"data_mem_o", false,-1, 31,0);
    tracep->declBus(c+251,"reg_o", false,-1, 31,0);
    tracep->declBit(c+236,"RegEqual", false,-1);
    tracep->declBit(c+237,"PC_Branch_Select", false,-1);
    tracep->declBus(c+183,"VALU_v_o", false,-1, 31,0);
    tracep->declBus(c+49,"EX_MEM_VALUResult_o", false,-1, 31,0);
    tracep->declBus(c+50,"aluToDM_data_o", false,-1, 31,0);
    tracep->declBit(c+51,"toDataMemory", false,-1);
    tracep->declBus(c+52,"VALU_Control_VALUCtrl_o", false,-1, 2,0);
    tracep->declBus(c+252,"is_positive_line", false,-1, 3,0);
    tracep->declBit(c+9,"flag", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+130+i*1,"vector_signed", true,(i+0), 3,0);
    }
    tracep->declBit(c+10,"easter_flag", false,-1);
    tracep->declBit(c+254,"easter_flag_next", false,-1);
    tracep->declBus(c+11,"egg1", false,-1, 7,0);
    tracep->declBus(c+12,"egg2", false,-1, 7,0);
    tracep->declBus(c+13,"egg3", false,-1, 7,0);
    tracep->declBus(c+14,"easter_counter", false,-1, 2,0);
    tracep->declBus(c+15,"easter_counter_next", false,-1, 2,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+174,"data1_i", false,-1, 31,0);
    tracep->declBus(c+175,"data2_i", false,-1, 31,0);
    tracep->declBus(c+31,"ALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+248,"data_o", false,-1, 31,0);
    tracep->declBit(c+180,"Zero_o", false,-1);
    tracep->declBus(c+267,"SUM", false,-1, 2,0);
    tracep->declBus(c+268,"SUB", false,-1, 2,0);
    tracep->declBus(c+269,"AND", false,-1, 2,0);
    tracep->declBus(c+270,"OR", false,-1, 2,0);
    tracep->declBus(c+271,"XOR", false,-1, 2,0);
    tracep->declBus(c+272,"MUL", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+27,"funct_i", false,-1, 9,0);
    tracep->declBus(c+30,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+31,"ALUCtrl_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("AddSum ");
    tracep->declBus(c+60,"data1_i", false,-1, 31,0);
    tracep->declBus(c+61,"data2_i", false,-1, 31,0);
    tracep->declBus(c+267,"ALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+59,"data_o", false,-1, 31,0);
    tracep->declBit(c+64,"Zero_o", false,-1);
    tracep->declBus(c+267,"SUM", false,-1, 2,0);
    tracep->declBus(c+268,"SUB", false,-1, 2,0);
    tracep->declBus(c+269,"AND", false,-1, 2,0);
    tracep->declBus(c+270,"OR", false,-1, 2,0);
    tracep->declBus(c+271,"XOR", false,-1, 2,0);
    tracep->declBus(c+272,"MUL", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Add_PC ");
    tracep->declBus(c+167,"data1_in", false,-1, 31,0);
    tracep->declBus(c+273,"data2_in", false,-1, 31,0);
    tracep->declBus(c+168,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Control ");
    tracep->declBus(c+228,"Op_i", false,-1, 6,0);
    tracep->declBus(c+222,"ALUOp_o", false,-1, 1,0);
    tracep->declBit(c+223,"ALUSrc_o", false,-1);
    tracep->declBit(c+220,"immSelect_o", false,-1);
    tracep->declBit(c+224,"RegWrite_o", false,-1);
    tracep->declBit(c+226,"MemRd_o", false,-1);
    tracep->declBit(c+227,"MemWr_o", false,-1);
    tracep->declBit(c+225,"MemToReg_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Data_Memory ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+239,"op_addr", false,-1, 4,0);
    tracep->declBus(c+50,"addr_i", false,-1, 31,0);
    tracep->declBus(c+42,"data_i", false,-1, 31,0);
    tracep->declBit(c+43,"MemWrite_i", false,-1);
    tracep->declBit(c+44,"MemRead_i", false,-1);
    tracep->declBus(c+16,"i", false,-1, 31,0);
    tracep->declBus(c+249,"data_o", false,-1, 31,0);
    tracep->declBus(c+250,"data_mem_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+133+i*1,"memory", true,(i+0), 7,0);
    }
    tracep->declBus(c+255,"op", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+180,"zero_i", false,-1);
    tracep->declBit(c+182,"RegWrite_i", false,-1);
    tracep->declBit(c+40,"MemToReg_i", false,-1);
    tracep->declBit(c+169,"MemRead_i", false,-1);
    tracep->declBit(c+41,"MemWrite_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+39,"pc_i", false,-1, 31,0);
    tracep->declBus(c+248,"ALUResult_i", false,-1, 31,0);
    tracep->declBus(c+173,"RDData_i", false,-1, 31,0);
    tracep->declBus(c+183,"VALUResult_i", false,-1, 31,0);
    tracep->declBus(c+181,"RDaddr_i", false,-1, 4,0);
    tracep->declBus(c+35,"instr_i", false,-1, 31,0);
    tracep->declBus(c+36,"instr_o", false,-1, 31,0);
    tracep->declBit(c+53,"zero_o", false,-1);
    tracep->declBit(c+176,"RegWrite_o", false,-1);
    tracep->declBit(c+45,"MemToReg_o", false,-1);
    tracep->declBit(c+44,"MemRead_o", false,-1);
    tracep->declBit(c+43,"MemWrite_o", false,-1);
    tracep->declBus(c+54,"pc_o", false,-1, 31,0);
    tracep->declBus(c+37,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+42,"RDData_o", false,-1, 31,0);
    tracep->declBus(c+49,"VALUResult_o", false,-1, 31,0);
    tracep->declBus(c+177,"RDaddr_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardToData1 ");
    tracep->declBus(c+178,"select_i", false,-1, 1,0);
    tracep->declBus(c+34,"data_i", false,-1, 31,0);
    tracep->declBus(c+37,"EX_MEM_i", false,-1, 31,0);
    tracep->declBus(c+171,"MEM_WB_i", false,-1, 31,0);
    tracep->declBus(c+174,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardToData2 ");
    tracep->declBus(c+179,"select_i", false,-1, 1,0);
    tracep->declBus(c+38,"data_i", false,-1, 31,0);
    tracep->declBus(c+37,"EX_MEM_i", false,-1, 31,0);
    tracep->declBus(c+171,"MEM_WB_i", false,-1, 31,0);
    tracep->declBus(c+173,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBit(c+176,"EX_MEM_RegWrite_i", false,-1);
    tracep->declBit(c+172,"MEM_WB_RegWrite_i", false,-1);
    tracep->declBus(c+32,"ID_EX_RS_i", false,-1, 4,0);
    tracep->declBus(c+33,"ID_EX_RT_i", false,-1, 4,0);
    tracep->declBus(c+177,"EX_MEM_RD_i", false,-1, 4,0);
    tracep->declBus(c+170,"MEM_WB_RD_i", false,-1, 4,0);
    tracep->declBus(c+178,"ForwardA_o", false,-1, 1,0);
    tracep->declBus(c+179,"ForwardB_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HazradDetect ");
    tracep->declBit(c+169,"ID_EX_MemRead_i", false,-1);
    tracep->declBus(c+229,"IF_IDrs1_i", false,-1, 4,0);
    tracep->declBus(c+230,"IF_IDrs2_i", false,-1, 4,0);
    tracep->declBus(c+230,"ID_EXrd_i", false,-1, 4,0);
    tracep->declBit(c+169,"Hazard_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+210,"ALUSrc_i", false,-1);
    tracep->declBit(c+211,"RegWrite_i", false,-1);
    tracep->declBit(c+212,"MemToReg_i", false,-1);
    tracep->declBit(c+213,"MemRead_i", false,-1);
    tracep->declBit(c+214,"MemWrite_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+219,"inst_i", false,-1, 31,0);
    tracep->declBus(c+60,"pc_i", false,-1, 31,0);
    tracep->declBus(c+234,"RDData0_i", false,-1, 31,0);
    tracep->declBus(c+235,"RDData1_i", false,-1, 31,0);
    tracep->declBus(c+221,"SignExtended_i", false,-1, 31,0);
    tracep->declBus(c+209,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+208,"RegDst_i", false,-1, 4,0);
    tracep->declBus(c+230,"RSaddr_i", false,-1, 4,0);
    tracep->declBus(c+229,"RTaddr_i", false,-1, 4,0);
    tracep->declBus(c+63,"pcEx_i", false,-1, 31,0);
    tracep->declBit(c+237,"PC_branch_select_i", false,-1);
    tracep->declBit(c+29,"ALUSrc_o", false,-1);
    tracep->declBit(c+182,"RegWrite_o", false,-1);
    tracep->declBit(c+40,"MemToReg_o", false,-1);
    tracep->declBit(c+169,"MemRead_o", false,-1);
    tracep->declBit(c+41,"MemWrite_o", false,-1);
    tracep->declBus(c+35,"inst_o", false,-1, 31,0);
    tracep->declBus(c+39,"pc_o", false,-1, 31,0);
    tracep->declBus(c+34,"RDData0_o", false,-1, 31,0);
    tracep->declBus(c+38,"RDData1_o", false,-1, 31,0);
    tracep->declBus(c+28,"SignExtended_o", false,-1, 31,0);
    tracep->declBus(c+30,"ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+181,"RegDst_o", false,-1, 4,0);
    tracep->declBus(c+32,"RSaddr_o", false,-1, 4,0);
    tracep->declBus(c+33,"RTaddr_o", false,-1, 4,0);
    tracep->declBus(c+55,"pcEx_o", false,-1, 31,0);
    tracep->declBit(c+56,"PC_branch_select_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+169,"hazard_i", false,-1);
    tracep->declBit(c+237,"flush_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+215,"inst_i", false,-1, 31,0);
    tracep->declBus(c+167,"pc_i", false,-1, 31,0);
    tracep->declBus(c+216,"pcIm_i", false,-1, 11,0);
    tracep->declBus(c+62,"pcIm_o", false,-1, 11,0);
    tracep->declBus(c+60,"pc_o", false,-1, 31,0);
    tracep->declBus(c+219,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instruction_Memory ");
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->declBit(c+238,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+167,"addr_i", false,-1, 31,0);
    tracep->declBus(c+240,"instr_i", false,-1, 7,0);
    tracep->declBus(c+215,"instr_o", false,-1, 31,0);
    tracep->declBus(c+18,"quad", false,-1, 1,0);
    tracep->declBus(c+19,"quad_d1", false,-1, 1,0);
    tracep->declBus(c+20,"instr_read", false,-1, 7,0);
    tracep->declBus(c+21,"address_read", false,-1, 5,0);
    tracep->declBit(c+22,"flag", false,-1);
    tracep->declBit(c+256,"flag_next", false,-1);
    tracep->declBus(c+23,"counter", false,-1, 1,0);
    tracep->declBus(c+24,"counter_next", false,-1, 1,0);
    tracep->declBus(c+25,"instr_wr_address", false,-1, 5,0);
    tracep->declBus(c+26,"instr_wr_address_next", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+176,"RegWrite_i", false,-1);
    tracep->declBit(c+45,"MemToReg_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBus(c+50,"ALUResult_i", false,-1, 31,0);
    tracep->declBus(c+42,"RDData_i", false,-1, 31,0);
    tracep->declBus(c+249,"DataMemReadData_i", false,-1, 31,0);
    tracep->declBus(c+177,"RDaddr_i", false,-1, 4,0);
    tracep->declBit(c+172,"RegWrite_o", false,-1);
    tracep->declBit(c+48,"MemToReg_o", false,-1);
    tracep->declBus(c+46,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+57,"RDData_o", false,-1, 31,0);
    tracep->declBus(c+47,"DataMemReadData_o", false,-1, 31,0);
    tracep->declBus(c+170,"RDaddr_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_ALUSrc ");
    tracep->declBus(c+173,"data1_i", false,-1, 31,0);
    tracep->declBus(c+28,"data2_i", false,-1, 31,0);
    tracep->declBit(c+29,"select_i", false,-1);
    tracep->declBus(c+175,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_Control ");
    tracep->declBus(c+222,"ALUOp_i", false,-1, 1,0);
    tracep->declBus(c+231,"RegDst_i", false,-1, 4,0);
    tracep->declBit(c+169,"Hazard_i", false,-1);
    tracep->declBit(c+223,"ALUSrc_i", false,-1);
    tracep->declBit(c+224,"RegWrite_i", false,-1);
    tracep->declBit(c+225,"MemToReg_i", false,-1);
    tracep->declBit(c+226,"MemRead_i", false,-1);
    tracep->declBit(c+227,"MemWrite_i", false,-1);
    tracep->declBus(c+209,"ALUOp_o", false,-1, 1,0);
    tracep->declBus(c+208,"RegDst_o", false,-1, 4,0);
    tracep->declBit(c+210,"ALUSrc_o", false,-1);
    tracep->declBit(c+211,"RegWrite_o", false,-1);
    tracep->declBit(c+212,"MemToReg_o", false,-1);
    tracep->declBit(c+213,"MemRead_o", false,-1);
    tracep->declBit(c+214,"MemWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+253,"start_i", false,-1);
    tracep->declBit(c+169,"hazardpc_i", false,-1);
    tracep->declBus(c+247,"pc_i", false,-1, 31,0);
    tracep->declBus(c+167,"pc_o", false,-1, 31,0);
    tracep->declBit(c+58,"flag", false,-1);
    tracep->declBit(c+257,"flag_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCImmExtend ");
    tracep->declBus(c+62,"data0_i", false,-1, 11,0);
    tracep->declBus(c+274,"data1_i", false,-1, 11,0);
    tracep->declBit(c+275,"select_i", false,-1);
    tracep->declBus(c+63,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Registers ");
    tracep->declBus(c+65,"i", false,-1, 31,0);
    tracep->declBit(c+238,"clk_i", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+239,"op_address", false,-1, 4,0);
    tracep->declBus(c+230,"RSaddr_i", false,-1, 4,0);
    tracep->declBus(c+229,"RTaddr_i", false,-1, 4,0);
    tracep->declBus(c+170,"RDaddr_i", false,-1, 4,0);
    tracep->declBus(c+171,"RDdata_i", false,-1, 31,0);
    tracep->declBit(c+172,"RegWrite_i", false,-1);
    tracep->declBus(c+165,"is_pos_i", false,-1, 3,0);
    tracep->declBus(c+234,"RSdata_o", false,-1, 31,0);
    tracep->declBus(c+235,"RTdata_o", false,-1, 31,0);
    tracep->declBus(c+251,"reg_o", false,-1, 31,0);
    tracep->declBus(c+252,"pos_o", false,-1, 3,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+66+i*1,"register", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+98+i*1,"pos", true,(i+0), 3,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Sign_Extend ");
    tracep->declBus(c+232,"data0_i", false,-1, 11,0);
    tracep->declBus(c+233,"data1_i", false,-1, 11,0);
    tracep->declBit(c+220,"select_i", false,-1);
    tracep->declBus(c+221,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("VALU ");
    tracep->declBus(c+174,"v1_i", false,-1, 31,0);
    tracep->declBus(c+175,"v2_i", false,-1, 31,0);
    tracep->declBus(c+52,"VALUCtrl_i", false,-1, 2,0);
    tracep->declBus(c+183,"v_o", false,-1, 31,0);
    tracep->declBus(c+166,"over", false,-1, 3,0);
    tracep->declBus(c+184,"e1", false,-1, 7,0);
    tracep->declBus(c+185,"e2", false,-1, 7,0);
    tracep->declBus(c+186,"e3", false,-1, 7,0);
    tracep->declBus(c+187,"e4", false,-1, 7,0);
    tracep->declBus(c+188,"b1", false,-1, 7,0);
    tracep->declBus(c+189,"b2", false,-1, 7,0);
    tracep->declBus(c+190,"b3", false,-1, 7,0);
    tracep->declBus(c+191,"b4", false,-1, 7,0);
    tracep->declBus(c+192,"b5", false,-1, 7,0);
    tracep->declBus(c+193,"b6", false,-1, 7,0);
    tracep->declBus(c+194,"b7", false,-1, 7,0);
    tracep->declBus(c+195,"b8", false,-1, 7,0);
    tracep->declBus(c+196,"a1", false,-1, 15,0);
    tracep->declBus(c+197,"a2", false,-1, 15,0);
    tracep->declBus(c+198,"a3", false,-1, 15,0);
    tracep->declBus(c+199,"a4", false,-1, 15,0);
    tracep->declBus(c+200,"a5", false,-1, 15,0);
    tracep->declBus(c+201,"a6", false,-1, 15,0);
    tracep->declBus(c+202,"a7", false,-1, 15,0);
    tracep->declBus(c+203,"a8", false,-1, 15,0);
    tracep->declBus(c+204,"s1", false,-1, 15,0);
    tracep->declBus(c+205,"s2", false,-1, 15,0);
    tracep->declBus(c+206,"s3", false,-1, 15,0);
    tracep->declBus(c+207,"s4", false,-1, 15,0);
    tracep->declBus(c+268,"VSUM", false,-1, 2,0);
    tracep->declBus(c+272,"VSUB", false,-1, 2,0);
    tracep->declBus(c+267,"VDP", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("VALU_Control ");
    tracep->declBus(c+27,"vfunct_i", false,-1, 9,0);
    tracep->declBus(c+52,"VALUCtrl_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluToDM ");
    tracep->declBus(c+37,"data1_i", false,-1, 31,0);
    tracep->declBus(c+49,"data2_i", false,-1, 31,0);
    tracep->declBit(c+51,"select_i", false,-1);
    tracep->declBus(c+50,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memToReg ");
    tracep->declBus(c+46,"data1_i", false,-1, 31,0);
    tracep->declBus(c+47,"data2_i", false,-1, 31,0);
    tracep->declBit(c+48,"select_i", false,-1);
    tracep->declBus(c+171,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcSelect ");
    tracep->declBus(c+168,"data1_i", false,-1, 31,0);
    tracep->declBus(c+59,"data2_i", false,-1, 31,0);
    tracep->declBit(c+218,"select_i", false,-1);
    tracep->declBus(c+247,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shiftLeft ");
    tracep->declBus(c+63,"data_i", false,-1, 31,0);
    tracep->declBus(c+61,"data_o", false,-1, 31,0);
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
    bufp->fullCData(oldp+8,(vlSelf->testbench__DOT__easter_egg),3);
    bufp->fullBit(oldp+9,(vlSelf->testbench__DOT__CPU__DOT__flag));
    bufp->fullBit(oldp+10,(vlSelf->testbench__DOT__CPU__DOT__easter_flag));
    bufp->fullCData(oldp+11,(vlSelf->testbench__DOT__CPU__DOT__egg1),8);
    bufp->fullCData(oldp+12,(vlSelf->testbench__DOT__CPU__DOT__egg2),8);
    bufp->fullCData(oldp+13,(vlSelf->testbench__DOT__CPU__DOT__egg3),8);
    bufp->fullCData(oldp+14,(vlSelf->testbench__DOT__CPU__DOT__easter_counter),3);
    bufp->fullCData(oldp+15,((7U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter))
                                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))),3);
    bufp->fullIData(oldp+16,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__i),32);
    bufp->fullIData(oldp+17,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i),32);
    bufp->fullCData(oldp+18,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad),2);
    bufp->fullCData(oldp+19,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1),2);
    bufp->fullCData(oldp+20,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read),8);
    bufp->fullCData(oldp+21,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read),6);
    bufp->fullBit(oldp+22,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag));
    bufp->fullCData(oldp+23,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter),2);
    bufp->fullCData(oldp+24,((3U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)))),2);
    bufp->fullCData(oldp+25,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address),6);
    bufp->fullCData(oldp+26,((0x3fU & ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address))
                                        : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address)))),6);
    bufp->fullSData(oldp+27,(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in),10);
    bufp->fullIData(oldp+28,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o),32);
    bufp->fullBit(oldp+29,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o));
    bufp->fullCData(oldp+30,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o),2);
    bufp->fullCData(oldp+31,(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o),3);
    bufp->fullCData(oldp+32,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o),5);
    bufp->fullCData(oldp+33,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o),5);
    bufp->fullIData(oldp+34,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o),32);
    bufp->fullIData(oldp+35,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o),32);
    bufp->fullIData(oldp+36,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o),32);
    bufp->fullIData(oldp+37,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o),32);
    bufp->fullIData(oldp+38,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o),32);
    bufp->fullIData(oldp+39,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o),32);
    bufp->fullBit(oldp+40,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o));
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o));
    bufp->fullIData(oldp+42,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o),32);
    bufp->fullBit(oldp+43,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o));
    bufp->fullBit(oldp+44,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o));
    bufp->fullBit(oldp+45,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o));
    bufp->fullIData(oldp+46,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o),32);
    bufp->fullIData(oldp+47,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o),32);
    bufp->fullBit(oldp+48,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o));
    bufp->fullIData(oldp+49,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o),32);
    bufp->fullIData(oldp+50,(vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o),32);
    bufp->fullBit(oldp+51,((0x57U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o))));
    bufp->fullCData(oldp+52,(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o),3);
    bufp->fullBit(oldp+53,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o));
    bufp->fullIData(oldp+54,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o),32);
    bufp->fullIData(oldp+55,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o),32);
    bufp->fullBit(oldp+56,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o));
    bufp->fullIData(oldp+57,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o),32);
    bufp->fullBit(oldp+58,(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag));
    bufp->fullIData(oldp+59,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                              + (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                 << 1U))),32);
    bufp->fullIData(oldp+60,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o),32);
    bufp->fullIData(oldp+61,((vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                              << 1U)),32);
    bufp->fullSData(oldp+62,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o),12);
    bufp->fullIData(oldp+63,(vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o),32);
    bufp->fullBit(oldp+64,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                            == (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                << 1U))));
    bufp->fullIData(oldp+65,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__i),32);
    bufp->fullIData(oldp+66,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0]),32);
    bufp->fullIData(oldp+67,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[1]),32);
    bufp->fullIData(oldp+68,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[2]),32);
    bufp->fullIData(oldp+69,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[3]),32);
    bufp->fullIData(oldp+70,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[4]),32);
    bufp->fullIData(oldp+71,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[5]),32);
    bufp->fullIData(oldp+72,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[6]),32);
    bufp->fullIData(oldp+73,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[7]),32);
    bufp->fullIData(oldp+74,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[8]),32);
    bufp->fullIData(oldp+75,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[9]),32);
    bufp->fullIData(oldp+76,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[10]),32);
    bufp->fullIData(oldp+77,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[11]),32);
    bufp->fullIData(oldp+78,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[12]),32);
    bufp->fullIData(oldp+79,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[13]),32);
    bufp->fullIData(oldp+80,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[14]),32);
    bufp->fullIData(oldp+81,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[15]),32);
    bufp->fullIData(oldp+82,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[16]),32);
    bufp->fullIData(oldp+83,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[17]),32);
    bufp->fullIData(oldp+84,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[18]),32);
    bufp->fullIData(oldp+85,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[19]),32);
    bufp->fullIData(oldp+86,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[20]),32);
    bufp->fullIData(oldp+87,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[21]),32);
    bufp->fullIData(oldp+88,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[22]),32);
    bufp->fullIData(oldp+89,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[23]),32);
    bufp->fullIData(oldp+90,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[24]),32);
    bufp->fullIData(oldp+91,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[25]),32);
    bufp->fullIData(oldp+92,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[26]),32);
    bufp->fullIData(oldp+93,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[27]),32);
    bufp->fullIData(oldp+94,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[28]),32);
    bufp->fullIData(oldp+95,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[29]),32);
    bufp->fullIData(oldp+96,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[30]),32);
    bufp->fullIData(oldp+97,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[31]),32);
    bufp->fullCData(oldp+98,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0]),4);
    bufp->fullCData(oldp+99,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[1]),4);
    bufp->fullCData(oldp+100,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[2]),4);
    bufp->fullCData(oldp+101,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[3]),4);
    bufp->fullCData(oldp+102,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[4]),4);
    bufp->fullCData(oldp+103,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[5]),4);
    bufp->fullCData(oldp+104,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[6]),4);
    bufp->fullCData(oldp+105,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[7]),4);
    bufp->fullCData(oldp+106,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[8]),4);
    bufp->fullCData(oldp+107,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[9]),4);
    bufp->fullCData(oldp+108,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[10]),4);
    bufp->fullCData(oldp+109,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[11]),4);
    bufp->fullCData(oldp+110,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[12]),4);
    bufp->fullCData(oldp+111,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[13]),4);
    bufp->fullCData(oldp+112,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[14]),4);
    bufp->fullCData(oldp+113,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[15]),4);
    bufp->fullCData(oldp+114,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[16]),4);
    bufp->fullCData(oldp+115,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[17]),4);
    bufp->fullCData(oldp+116,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[18]),4);
    bufp->fullCData(oldp+117,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[19]),4);
    bufp->fullCData(oldp+118,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[20]),4);
    bufp->fullCData(oldp+119,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[21]),4);
    bufp->fullCData(oldp+120,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[22]),4);
    bufp->fullCData(oldp+121,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[23]),4);
    bufp->fullCData(oldp+122,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[24]),4);
    bufp->fullCData(oldp+123,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[25]),4);
    bufp->fullCData(oldp+124,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[26]),4);
    bufp->fullCData(oldp+125,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[27]),4);
    bufp->fullCData(oldp+126,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[28]),4);
    bufp->fullCData(oldp+127,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[29]),4);
    bufp->fullCData(oldp+128,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[30]),4);
    bufp->fullCData(oldp+129,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[31]),4);
    bufp->fullCData(oldp+130,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[0]),4);
    bufp->fullCData(oldp+131,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[1]),4);
    bufp->fullCData(oldp+132,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[2]),4);
    bufp->fullCData(oldp+133,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0]),8);
    bufp->fullCData(oldp+134,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[1]),8);
    bufp->fullCData(oldp+135,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[2]),8);
    bufp->fullCData(oldp+136,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[3]),8);
    bufp->fullCData(oldp+137,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[4]),8);
    bufp->fullCData(oldp+138,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[5]),8);
    bufp->fullCData(oldp+139,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[6]),8);
    bufp->fullCData(oldp+140,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[7]),8);
    bufp->fullCData(oldp+141,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[8]),8);
    bufp->fullCData(oldp+142,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[9]),8);
    bufp->fullCData(oldp+143,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[10]),8);
    bufp->fullCData(oldp+144,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[11]),8);
    bufp->fullCData(oldp+145,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[12]),8);
    bufp->fullCData(oldp+146,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[13]),8);
    bufp->fullCData(oldp+147,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[14]),8);
    bufp->fullCData(oldp+148,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[15]),8);
    bufp->fullCData(oldp+149,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[16]),8);
    bufp->fullCData(oldp+150,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[17]),8);
    bufp->fullCData(oldp+151,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[18]),8);
    bufp->fullCData(oldp+152,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[19]),8);
    bufp->fullCData(oldp+153,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[20]),8);
    bufp->fullCData(oldp+154,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[21]),8);
    bufp->fullCData(oldp+155,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[22]),8);
    bufp->fullCData(oldp+156,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[23]),8);
    bufp->fullCData(oldp+157,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[24]),8);
    bufp->fullCData(oldp+158,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[25]),8);
    bufp->fullCData(oldp+159,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[26]),8);
    bufp->fullCData(oldp+160,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[27]),8);
    bufp->fullCData(oldp+161,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[28]),8);
    bufp->fullCData(oldp+162,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[29]),8);
    bufp->fullCData(oldp+163,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[30]),8);
    bufp->fullCData(oldp+164,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[31]),8);
    bufp->fullCData(oldp+165,(vlSelf->testbench__DOT__CPU__DOT__vector_signed
                              [1U]),4);
    bufp->fullCData(oldp+166,(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits),4);
    bufp->fullIData(oldp+167,(vlSelf->testbench__DOT__CPU__DOT__inst_addr),32);
    bufp->fullIData(oldp+168,(((IData)(4U) + vlSelf->testbench__DOT__CPU__DOT__inst_addr)),32);
    bufp->fullBit(oldp+169,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o));
    bufp->fullCData(oldp+170,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o),5);
    bufp->fullIData(oldp+171,(vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o),32);
    bufp->fullBit(oldp+172,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o));
    bufp->fullIData(oldp+173,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o),32);
    bufp->fullIData(oldp+174,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o),32);
    bufp->fullIData(oldp+175,(vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o),32);
    bufp->fullBit(oldp+176,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o));
    bufp->fullCData(oldp+177,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o),5);
    bufp->fullCData(oldp+178,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o),2);
    bufp->fullCData(oldp+179,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o),2);
    bufp->fullBit(oldp+180,((vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             == vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)));
    bufp->fullCData(oldp+181,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o),5);
    bufp->fullBit(oldp+182,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o));
    bufp->fullIData(oldp+183,(vlSelf->testbench__DOT__CPU__DOT__VALU_v_o),32);
    bufp->fullCData(oldp+184,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1),8);
    bufp->fullCData(oldp+185,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2),8);
    bufp->fullCData(oldp+186,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3),8);
    bufp->fullCData(oldp+187,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4),8);
    bufp->fullCData(oldp+188,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1),8);
    bufp->fullCData(oldp+189,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2),8);
    bufp->fullCData(oldp+190,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3),8);
    bufp->fullCData(oldp+191,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4),8);
    bufp->fullCData(oldp+192,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5),8);
    bufp->fullCData(oldp+193,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6),8);
    bufp->fullCData(oldp+194,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7),8);
    bufp->fullCData(oldp+195,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8),8);
    bufp->fullSData(oldp+196,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                               | (0xffU & vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o))),16);
    bufp->fullSData(oldp+197,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                               | (0xffU & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))),16);
    bufp->fullSData(oldp+198,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 8U)))),16);
    bufp->fullSData(oldp+199,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                           >> 8U)))),16);
    bufp->fullSData(oldp+200,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 0x10U)))),16);
    bufp->fullSData(oldp+201,(((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                           >> 0x10U)))),16);
    bufp->fullSData(oldp+202,(((0xff00U & ((- (IData)(
                                                      (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                       >> 0x1fU))) 
                                           << 8U)) 
                               | (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                  >> 0x18U))),16);
    bufp->fullSData(oldp+203,(((0xff00U & ((- (IData)(
                                                      (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                       >> 0x1fU))) 
                                           << 8U)) 
                               | (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                  >> 0x18U))),16);
    bufp->fullSData(oldp+204,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1),16);
    bufp->fullSData(oldp+205,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2),16);
    bufp->fullSData(oldp+206,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3),16);
    bufp->fullSData(oldp+207,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4),16);
    bufp->fullCData(oldp+208,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                ? 0U : (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                 >> 7U)))),5);
    bufp->fullCData(oldp+209,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                ? 0U : (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o))),2);
    bufp->fullBit(oldp+210,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o))));
    bufp->fullBit(oldp+211,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o))));
    bufp->fullBit(oldp+212,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o))));
    bufp->fullBit(oldp+213,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o))));
    bufp->fullBit(oldp+214,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                             & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o))));
    bufp->fullIData(oldp+215,(vlSelf->testbench__DOT__CPU__DOT__inst),32);
    bufp->fullSData(oldp+216,(vlSelf->testbench__DOT__CPU__DOT__pcIm),12);
    bufp->fullSData(oldp+217,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                           >> 7U)))),12);
    bufp->fullBit(oldp+218,((0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o))));
    bufp->fullIData(oldp+219,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o),32);
    bufp->fullBit(oldp+220,(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o));
    bufp->fullIData(oldp+221,(((IData)(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o)
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
    bufp->fullCData(oldp+222,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o),2);
    bufp->fullBit(oldp+223,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o));
    bufp->fullBit(oldp+224,(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o));
    bufp->fullBit(oldp+225,(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o));
    bufp->fullBit(oldp+226,(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o));
    bufp->fullBit(oldp+227,(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o));
    bufp->fullCData(oldp+228,((0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o)),7);
    bufp->fullCData(oldp+229,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+230,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+231,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                        >> 7U))),5);
    bufp->fullSData(oldp+232,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+233,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+234,(vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o),32);
    bufp->fullIData(oldp+235,(vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o),32);
    bufp->fullBit(oldp+236,((vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
                             == vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o)));
    bufp->fullBit(oldp+237,(vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select));
    bufp->fullBit(oldp+238,(vlSelf->testbench__DOT__Clk));
    bufp->fullCData(oldp+239,(vlSelf->testbench__DOT__address),5);
    bufp->fullCData(oldp+240,(vlSelf->testbench__DOT__instr_i),8);
    bufp->fullCData(oldp+241,(vlSelf->testbench__DOT__vout_addr),2);
    bufp->fullCData(oldp+242,((0xffU & ((2U & (IData)(vlSelf->testbench__DOT__vout_addr))
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
    bufp->fullBit(oldp+243,((1U & (vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos
                                   [vlSelf->testbench__DOT__address] 
                                   >> (IData)(vlSelf->testbench__DOT__vout_addr)))));
    bufp->fullIData(oldp+244,(vlSelf->testbench__DOT__counter),32);
    bufp->fullIData(oldp+245,(vlSelf->testbench__DOT__j),32);
    bufp->fullIData(oldp+246,(vlSelf->testbench__DOT__err),32);
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
