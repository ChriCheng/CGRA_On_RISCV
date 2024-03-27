// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->testbench__DOT__DataOrReg));
        bufp->chgBit(oldp+1,(vlSelf->testbench__DOT__reset));
        bufp->chgIData(oldp+2,(vlSelf->testbench__DOT__outfile),32);
        bufp->chgIData(oldp+3,(vlSelf->testbench__DOT__stall),32);
        bufp->chgIData(oldp+4,(vlSelf->testbench__DOT__flush),32);
        bufp->chgIData(oldp+5,(vlSelf->testbench__DOT__idx),32);
        bufp->chgIData(oldp+6,(vlSelf->testbench__DOT__k),32);
        bufp->chgIData(oldp+7,(vlSelf->testbench__DOT__err),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+8,(vlSelf->testbench__DOT__easter_egg),3);
        bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__CPU__DOT__flag));
        bufp->chgBit(oldp+10,(vlSelf->testbench__DOT__CPU__DOT__easter_flag));
        bufp->chgCData(oldp+11,(vlSelf->testbench__DOT__CPU__DOT__egg1),8);
        bufp->chgCData(oldp+12,(vlSelf->testbench__DOT__CPU__DOT__egg2),8);
        bufp->chgCData(oldp+13,(vlSelf->testbench__DOT__CPU__DOT__egg3),8);
        bufp->chgCData(oldp+14,(vlSelf->testbench__DOT__CPU__DOT__easter_counter),3);
        bufp->chgCData(oldp+15,((7U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter))
                                        : (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))),3);
        bufp->chgIData(oldp+16,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i),32);
        bufp->chgCData(oldp+18,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad),2);
        bufp->chgCData(oldp+19,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1),2);
        bufp->chgCData(oldp+20,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read),8);
        bufp->chgCData(oldp+21,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read),6);
        bufp->chgBit(oldp+22,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag));
        bufp->chgCData(oldp+23,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter),2);
        bufp->chgCData(oldp+24,((3U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                        : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)))),2);
        bufp->chgCData(oldp+25,(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address),6);
        bufp->chgCData(oldp+26,((0x3fU & ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address))
                                           : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address)))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+27,(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in),10);
        bufp->chgIData(oldp+28,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o),32);
        bufp->chgBit(oldp+29,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o));
        bufp->chgCData(oldp+30,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o),2);
        bufp->chgCData(oldp+31,(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o),3);
        bufp->chgCData(oldp+32,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o),5);
        bufp->chgCData(oldp+33,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o),5);
        bufp->chgIData(oldp+34,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o),32);
        bufp->chgIData(oldp+35,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o),32);
        bufp->chgIData(oldp+36,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o),32);
        bufp->chgIData(oldp+37,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o),32);
        bufp->chgIData(oldp+38,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o),32);
        bufp->chgIData(oldp+39,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o),32);
        bufp->chgBit(oldp+40,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o));
        bufp->chgBit(oldp+41,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o));
        bufp->chgIData(oldp+42,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o),32);
        bufp->chgBit(oldp+43,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o));
        bufp->chgBit(oldp+44,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o));
        bufp->chgBit(oldp+45,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o));
        bufp->chgIData(oldp+46,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o),32);
        bufp->chgIData(oldp+47,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o),32);
        bufp->chgBit(oldp+48,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o));
        bufp->chgIData(oldp+49,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o),32);
        bufp->chgIData(oldp+50,(vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o),32);
        bufp->chgBit(oldp+51,((0x57U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o))));
        bufp->chgCData(oldp+52,(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o),3);
        bufp->chgBit(oldp+53,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o));
        bufp->chgIData(oldp+54,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o),32);
        bufp->chgIData(oldp+55,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o),32);
        bufp->chgBit(oldp+56,(vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o));
        bufp->chgIData(oldp+57,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o),32);
        bufp->chgBit(oldp+58,(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+59,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                                 + (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                    << 1U))),32);
        bufp->chgIData(oldp+60,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o),32);
        bufp->chgIData(oldp+61,((vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                 << 1U)),32);
        bufp->chgSData(oldp+62,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o),12);
        bufp->chgIData(oldp+63,(vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o),32);
        bufp->chgBit(oldp+64,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
                               == (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                                   << 1U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+65,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__i),32);
        bufp->chgIData(oldp+66,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0]),32);
        bufp->chgIData(oldp+67,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[1]),32);
        bufp->chgIData(oldp+68,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[2]),32);
        bufp->chgIData(oldp+69,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[3]),32);
        bufp->chgIData(oldp+70,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[4]),32);
        bufp->chgIData(oldp+71,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[5]),32);
        bufp->chgIData(oldp+72,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[6]),32);
        bufp->chgIData(oldp+73,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[7]),32);
        bufp->chgIData(oldp+74,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[8]),32);
        bufp->chgIData(oldp+75,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[9]),32);
        bufp->chgIData(oldp+76,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[10]),32);
        bufp->chgIData(oldp+77,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[11]),32);
        bufp->chgIData(oldp+78,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[12]),32);
        bufp->chgIData(oldp+79,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[13]),32);
        bufp->chgIData(oldp+80,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[14]),32);
        bufp->chgIData(oldp+81,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[15]),32);
        bufp->chgIData(oldp+82,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[16]),32);
        bufp->chgIData(oldp+83,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[17]),32);
        bufp->chgIData(oldp+84,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[18]),32);
        bufp->chgIData(oldp+85,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[19]),32);
        bufp->chgIData(oldp+86,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[20]),32);
        bufp->chgIData(oldp+87,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[21]),32);
        bufp->chgIData(oldp+88,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[22]),32);
        bufp->chgIData(oldp+89,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[23]),32);
        bufp->chgIData(oldp+90,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[24]),32);
        bufp->chgIData(oldp+91,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[25]),32);
        bufp->chgIData(oldp+92,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[26]),32);
        bufp->chgIData(oldp+93,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[27]),32);
        bufp->chgIData(oldp+94,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[28]),32);
        bufp->chgIData(oldp+95,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[29]),32);
        bufp->chgIData(oldp+96,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[30]),32);
        bufp->chgIData(oldp+97,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[31]),32);
        bufp->chgCData(oldp+98,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0]),4);
        bufp->chgCData(oldp+99,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[1]),4);
        bufp->chgCData(oldp+100,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[2]),4);
        bufp->chgCData(oldp+101,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[3]),4);
        bufp->chgCData(oldp+102,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[4]),4);
        bufp->chgCData(oldp+103,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[5]),4);
        bufp->chgCData(oldp+104,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[6]),4);
        bufp->chgCData(oldp+105,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[7]),4);
        bufp->chgCData(oldp+106,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[8]),4);
        bufp->chgCData(oldp+107,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[9]),4);
        bufp->chgCData(oldp+108,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[10]),4);
        bufp->chgCData(oldp+109,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[11]),4);
        bufp->chgCData(oldp+110,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[12]),4);
        bufp->chgCData(oldp+111,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[13]),4);
        bufp->chgCData(oldp+112,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[14]),4);
        bufp->chgCData(oldp+113,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[15]),4);
        bufp->chgCData(oldp+114,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[16]),4);
        bufp->chgCData(oldp+115,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[17]),4);
        bufp->chgCData(oldp+116,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[18]),4);
        bufp->chgCData(oldp+117,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[19]),4);
        bufp->chgCData(oldp+118,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[20]),4);
        bufp->chgCData(oldp+119,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[21]),4);
        bufp->chgCData(oldp+120,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[22]),4);
        bufp->chgCData(oldp+121,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[23]),4);
        bufp->chgCData(oldp+122,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[24]),4);
        bufp->chgCData(oldp+123,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[25]),4);
        bufp->chgCData(oldp+124,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[26]),4);
        bufp->chgCData(oldp+125,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[27]),4);
        bufp->chgCData(oldp+126,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[28]),4);
        bufp->chgCData(oldp+127,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[29]),4);
        bufp->chgCData(oldp+128,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[30]),4);
        bufp->chgCData(oldp+129,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[31]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+130,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[0]),4);
        bufp->chgCData(oldp+131,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[1]),4);
        bufp->chgCData(oldp+132,(vlSelf->testbench__DOT__CPU__DOT__vector_signed[2]),4);
        bufp->chgCData(oldp+133,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0]),8);
        bufp->chgCData(oldp+134,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[1]),8);
        bufp->chgCData(oldp+135,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[2]),8);
        bufp->chgCData(oldp+136,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[3]),8);
        bufp->chgCData(oldp+137,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[4]),8);
        bufp->chgCData(oldp+138,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[5]),8);
        bufp->chgCData(oldp+139,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[6]),8);
        bufp->chgCData(oldp+140,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[7]),8);
        bufp->chgCData(oldp+141,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[8]),8);
        bufp->chgCData(oldp+142,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[9]),8);
        bufp->chgCData(oldp+143,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[10]),8);
        bufp->chgCData(oldp+144,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[11]),8);
        bufp->chgCData(oldp+145,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[12]),8);
        bufp->chgCData(oldp+146,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[13]),8);
        bufp->chgCData(oldp+147,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[14]),8);
        bufp->chgCData(oldp+148,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[15]),8);
        bufp->chgCData(oldp+149,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[16]),8);
        bufp->chgCData(oldp+150,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[17]),8);
        bufp->chgCData(oldp+151,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[18]),8);
        bufp->chgCData(oldp+152,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[19]),8);
        bufp->chgCData(oldp+153,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[20]),8);
        bufp->chgCData(oldp+154,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[21]),8);
        bufp->chgCData(oldp+155,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[22]),8);
        bufp->chgCData(oldp+156,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[23]),8);
        bufp->chgCData(oldp+157,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[24]),8);
        bufp->chgCData(oldp+158,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[25]),8);
        bufp->chgCData(oldp+159,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[26]),8);
        bufp->chgCData(oldp+160,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[27]),8);
        bufp->chgCData(oldp+161,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[28]),8);
        bufp->chgCData(oldp+162,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[29]),8);
        bufp->chgCData(oldp+163,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[30]),8);
        bufp->chgCData(oldp+164,(vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[31]),8);
        bufp->chgCData(oldp+165,(vlSelf->testbench__DOT__CPU__DOT__vector_signed
                                 [1U]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+166,(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits),4);
        bufp->chgIData(oldp+167,(vlSelf->testbench__DOT__CPU__DOT__inst_addr),32);
        bufp->chgIData(oldp+168,(((IData)(4U) + vlSelf->testbench__DOT__CPU__DOT__inst_addr)),32);
        bufp->chgBit(oldp+169,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o));
        bufp->chgCData(oldp+170,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o),5);
        bufp->chgIData(oldp+171,(vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o),32);
        bufp->chgBit(oldp+172,(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o));
        bufp->chgIData(oldp+173,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o),32);
        bufp->chgIData(oldp+174,(vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o),32);
        bufp->chgIData(oldp+175,(vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o),32);
        bufp->chgBit(oldp+176,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o));
        bufp->chgCData(oldp+177,(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o),5);
        bufp->chgCData(oldp+178,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o),2);
        bufp->chgCData(oldp+179,(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o),2);
        bufp->chgBit(oldp+180,((vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                == vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o)));
        bufp->chgCData(oldp+181,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o),5);
        bufp->chgBit(oldp+182,(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o));
        bufp->chgIData(oldp+183,(vlSelf->testbench__DOT__CPU__DOT__VALU_v_o),32);
        bufp->chgCData(oldp+184,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1),8);
        bufp->chgCData(oldp+185,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2),8);
        bufp->chgCData(oldp+186,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3),8);
        bufp->chgCData(oldp+187,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4),8);
        bufp->chgCData(oldp+188,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1),8);
        bufp->chgCData(oldp+189,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2),8);
        bufp->chgCData(oldp+190,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3),8);
        bufp->chgCData(oldp+191,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4),8);
        bufp->chgCData(oldp+192,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5),8);
        bufp->chgCData(oldp+193,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6),8);
        bufp->chgCData(oldp+194,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7),8);
        bufp->chgCData(oldp+195,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8),8);
        bufp->chgSData(oldp+196,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                             >> 7U)))) 
                                              << 8U)) 
                                  | (0xffU & vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o))),16);
        bufp->chgSData(oldp+197,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                             >> 7U)))) 
                                              << 8U)) 
                                  | (0xffU & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))),16);
        bufp->chgSData(oldp+198,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                             >> 0xfU)))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                              >> 8U)))),16);
        bufp->chgSData(oldp+199,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                             >> 0xfU)))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                              >> 8U)))),16);
        bufp->chgSData(oldp+200,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                             >> 0x17U)))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                              >> 0x10U)))),16);
        bufp->chgSData(oldp+201,(((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                             >> 0x17U)))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                              >> 0x10U)))),16);
        bufp->chgSData(oldp+202,(((0xff00U & ((- (IData)(
                                                         (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0x1fU))) 
                                              << 8U)) 
                                  | (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                     >> 0x18U))),16);
        bufp->chgSData(oldp+203,(((0xff00U & ((- (IData)(
                                                         (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                          >> 0x1fU))) 
                                              << 8U)) 
                                  | (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                     >> 0x18U))),16);
        bufp->chgSData(oldp+204,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1),16);
        bufp->chgSData(oldp+205,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2),16);
        bufp->chgSData(oldp+206,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3),16);
        bufp->chgSData(oldp+207,(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+208,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                   ? 0U : (0x1fU & 
                                           (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                            >> 7U)))),5);
        bufp->chgCData(oldp+209,(((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                                   ? 0U : (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o))),2);
        bufp->chgBit(oldp+210,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o))));
        bufp->chgBit(oldp+211,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o))));
        bufp->chgBit(oldp+212,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o))));
        bufp->chgBit(oldp+213,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o))));
        bufp->chgBit(oldp+214,(((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
                                & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+215,(vlSelf->testbench__DOT__CPU__DOT__inst),32);
        bufp->chgSData(oldp+216,(vlSelf->testbench__DOT__CPU__DOT__pcIm),12);
        bufp->chgSData(oldp+217,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                              >> 7U)))),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+218,((0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o))));
        bufp->chgIData(oldp+219,(vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o),32);
        bufp->chgBit(oldp+220,(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o));
        bufp->chgIData(oldp+221,(((IData)(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o)
                                   ? (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                         >> 7U))))
                                   : (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                   >> 0x14U)))),32);
        bufp->chgCData(oldp+222,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o),2);
        bufp->chgBit(oldp+223,(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o));
        bufp->chgBit(oldp+224,(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o));
        bufp->chgBit(oldp+225,(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o));
        bufp->chgBit(oldp+226,(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o));
        bufp->chgBit(oldp+227,(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o));
        bufp->chgCData(oldp+228,((0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o)),7);
        bufp->chgCData(oldp+229,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+230,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+231,((0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                           >> 7U))),5);
        bufp->chgSData(oldp+232,((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+233,(((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                              >> 7U)))),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+234,(vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o),32);
        bufp->chgIData(oldp+235,(vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o),32);
        bufp->chgBit(oldp+236,((vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
                                == vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o)));
        bufp->chgBit(oldp+237,(vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select));
    }
    bufp->chgBit(oldp+238,(vlSelf->testbench__DOT__Clk));
    bufp->chgCData(oldp+239,(vlSelf->testbench__DOT__address),5);
    bufp->chgCData(oldp+240,(vlSelf->testbench__DOT__instr_i),8);
    bufp->chgCData(oldp+241,(vlSelf->testbench__DOT__vout_addr),2);
    bufp->chgCData(oldp+242,((0xffU & ((2U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                        ? ((1U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                            ? ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                ? (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 0x18U)
                                                : (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 0x18U))
                                            : ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                ? (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 0x10U)
                                                : (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 0x10U)))
                                        : ((1U & (IData)(vlSelf->testbench__DOT__vout_addr))
                                            ? ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                ? (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 8U)
                                                : (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 8U))
                                            : ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                ? vlSelf->testbench__DOT__CPU__DOT__reg_o
                                                : vlSelf->testbench__DOT__CPU__DOT__data_mem_o))))),8);
    bufp->chgBit(oldp+243,((1U & (vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos
                                  [vlSelf->testbench__DOT__address] 
                                  >> (IData)(vlSelf->testbench__DOT__vout_addr)))));
    bufp->chgIData(oldp+244,(vlSelf->testbench__DOT__counter),32);
    bufp->chgIData(oldp+245,(vlSelf->testbench__DOT__j),32);
    bufp->chgIData(oldp+246,(vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o),32);
    bufp->chgIData(oldp+247,(((4U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
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
    bufp->chgIData(oldp+248,(((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o)
                               ? ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                   [(0x1fU & ((IData)(3U) 
                                              + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                   << 0x18U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                 [(0x1fU 
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
    bufp->chgIData(oldp+249,(vlSelf->testbench__DOT__CPU__DOT__data_mem_o),32);
    bufp->chgIData(oldp+250,(vlSelf->testbench__DOT__CPU__DOT__reg_o),32);
    bufp->chgCData(oldp+251,(vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos
                             [vlSelf->testbench__DOT__address]),4);
    bufp->chgBit(oldp+252,(vlSelf->testbench__DOT__CPU__DOT__start_i));
    bufp->chgBit(oldp+253,(((0xaaU == (IData)(vlSelf->testbench__DOT__instr_i)) 
                            | ((7U != (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)) 
                               & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)))));
    bufp->chgIData(oldp+254,(((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
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
    bufp->chgBit(oldp+255,(((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
                            | ((0xffU != (IData)(vlSelf->testbench__DOT__instr_i)) 
                               & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)))));
    bufp->chgBit(oldp+256,(((0xf8U == vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o) 
                            | (IData)(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag))));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
