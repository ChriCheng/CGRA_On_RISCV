// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VL_ATTR_COLD VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__2(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__Clk 
        = vlSelf->testbench__DOT__Clk;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset 
        = vlSelf->testbench__DOT__reset;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__CPU__DOT__start_i 
        = vlSelf->testbench__DOT__CPU__DOT__start_i;
}

VL_ATTR_COLD VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("--------------------------- [ Simulation Starts !! ] ---------------------------\n");
    vlSelf->testbench__DOT__j = 0U;
    while (VL_GTS_III(32, 0x108U, vlSelf->testbench__DOT__j)) {
        if (((0U == VL_MODDIVS_III(32, vlSelf->testbench__DOT__j, (IData)(4U))) 
             & (0U != vlSelf->testbench__DOT__j))) {
            vlSelf->testbench__DOT__address = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->testbench__DOT__address)));
        }
        co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 160);
        vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                                   - (IData)(1U)));
        VL_WRITEF("%11d instruction is %x, correct instruction is %x , address is %x , value_o is %x , correct pattern is %x, vout_addr is %x, counter is %11d,\n",
                  32,vlSelf->testbench__DOT__j,8,(IData)(vlSelf->testbench__DOT__instr_i),
                  8,((0x101U >= (0x1ffU & vlSelf->testbench__DOT__j))
                      ? vlSelf->testbench__DOT__instr_store
                     [(0x1ffU & vlSelf->testbench__DOT__j)]
                      : 0U),5,(IData)(vlSelf->testbench__DOT__address),
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[
                  (0x3fU & vlSelf->testbench__DOT__j)],
                  2,vlSelf->testbench__DOT__vout_addr,
                  32,vlSelf->testbench__DOT__counter);
        vlSelf->testbench__DOT__j = ((IData)(1U) + vlSelf->testbench__DOT__j);
    }
    co_await vlSelf->__VdlySched.delay(0x7d0U, "../src/../src/testbench.v", 173);
    VL_WRITEF("--------------------------- Simulation Stops !!---------------------------\n");
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtestbench___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../src/../src/testbench.v", 8, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtestbench___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 128> Vtestbench__ConstPool__TABLE_h3e4d3314_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h115bd3f6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h2209a98b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h9cbb4b03_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h7df60976_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->testbench__DOT__CPU__DOT__easter_counter_next 
        = (7U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)
                  ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter))
                  : (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next 
        = ((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((0xffU != (IData)(vlSelf->testbench__DOT__instr_i)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter_next 
        = (3U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)
                  ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                  : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address_next 
        = (0x3fU & ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                     ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address))
                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address)));
    vlSelf->testbench__DOT__CPU__DOT__easter_flag_next 
        = ((0xaaU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((7U != (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)));
    vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o 
        = ((0x57U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o))
            ? vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o
            : vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o);
    vlSelf->testbench__DOT__CPU__DOT__inst = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
        [(0x3fU & (vlSelf->testbench__DOT__CPU__DOT__inst_addr 
                   >> 2U))];
    vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
        = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [(0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                   >> 0xfU))];
    vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o 
        = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [(0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                   >> 0x14U))];
    vlSelf->testbench__DOT__CPU__DOT__reg_o = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [vlSelf->testbench__DOT__address];
    vlSelf->testbench__DOT__CPU__DOT__data_mem_o = 
        ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
          [(0x1fU & ((IData)(3U) + (IData)(vlSelf->testbench__DOT__address)))] 
          << 0x18U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                        [(0x1fU & ((IData)(2U) + (IData)(vlSelf->testbench__DOT__address)))] 
                        << 0x10U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                      [(0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->testbench__DOT__address)))] 
                                      << 8U) | vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                     [vlSelf->testbench__DOT__address])));
    vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
        = (((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o));
    __Vtableidx1 = (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o);
    vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o 
        = Vtestbench__ConstPool__TABLE_h3e4d3314_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o 
        = Vtestbench__ConstPool__TABLE_h115bd3f6_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o 
        = Vtestbench__ConstPool__TABLE_h2209a98b_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o 
        = Vtestbench__ConstPool__TABLE_h9cbb4b03_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o 
        = Vtestbench__ConstPool__TABLE_h7df60976_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o 
        = Vtestbench__ConstPool__TABLE_h9cbb4b03_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o 
        = Vtestbench__ConstPool__TABLE_h7df60976_0[__Vtableidx1];
    vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in = 
        ((0x3f8U & (vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o 
                    >> 0x16U)) | (7U & (vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o 
                                        >> 0xcU)));
    vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o = 0U;
    if ((((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o) 
          & (0U != (IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o))) 
         & ((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o) 
            == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o)))) {
        vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o = 2U;
    } else if ((((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o) 
                 & (0U != (IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o))) 
                & ((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o) 
                   == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o)))) {
        vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o = 1U;
    }
    vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o = 0U;
    if ((((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o) 
          & (0U != (IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o))) 
         & ((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o) 
            == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o)))) {
        vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o = 2U;
    } else if ((((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o) 
                 & (0U != (IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o))) 
                & ((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o) 
                   == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o)))) {
        vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o = 1U;
    }
    vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o)
            ? vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o
            : vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o);
    vlSelf->testbench__DOT__CPU__DOT__pcIm = ((0x800U 
                                               & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                                  >> 0x14U)) 
                                              | ((0x400U 
                                                  & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                                     << 3U)) 
                                                 | ((0x3f0U 
                                                     & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                                        >> 0x15U)) 
                                                    | (0xfU 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__inst 
                                                          >> 8U)))));
    vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select 
        = ((vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
            == vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o) 
           & (0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o)));
    vlSelf->testbench__DOT__value_o = (0xffU & ((2U 
                                                 & (IData)(vlSelf->testbench__DOT__vout_addr))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->testbench__DOT__vout_addr))
                                                  ? 
                                                 ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                   ? 
                                                  (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 0x18U)
                                                   : 
                                                  (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 0x18U))
                                                  : 
                                                 ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                   ? 
                                                  (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 0x10U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->testbench__DOT__vout_addr))
                                                  ? 
                                                 ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                   ? 
                                                  (vlSelf->testbench__DOT__CPU__DOT__reg_o 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->testbench__DOT__CPU__DOT__data_mem_o 
                                                   >> 8U))
                                                  : 
                                                 ((IData)(vlSelf->testbench__DOT__DataOrReg)
                                                   ? vlSelf->testbench__DOT__CPU__DOT__reg_o
                                                   : vlSelf->testbench__DOT__CPU__DOT__data_mem_o))));
    vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o 
        = ((0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o))
            ? (vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
               + (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                  << 1U)) : ((IData)(4U) + vlSelf->testbench__DOT__CPU__DOT__inst_addr));
    vlSelf->testbench__DOT__CPU__DOT__MUX_Control_MemRead_o 
        = ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o));
    vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o 
        = ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o))
            ? 1U : ((2U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o))
                     ? ((0U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                         ? 1U : ((0x100U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                                  ? 2U : ((8U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                                           ? 6U : (
                                                   (6U 
                                                    == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                                                    ? 4U
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                                                     ? 3U
                                                     : 1U)))))
                     : ((1U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o))
                         ? 2U : 1U)));
    vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o 
        = ((9U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
            ? 2U : ((0x108U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                     ? 6U : ((0xfU == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                              ? 0U : ((0xeU == (IData)(vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in))
                                       ? 1U : 0U))));
    vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
        = ((0U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o))
            ? vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o
            : ((1U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o))
                ? vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o
                : ((2U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o))
                    ? vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o
                    : vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o)));
    vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o 
        = ((0U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o))
            ? vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o
            : ((1U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o))
                ? vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o
                : ((2U == (IData)(vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o))
                    ? vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o
                    : vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o)));
    vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag_next 
        = ((0xf8U == vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o) 
           | (IData)(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag));
    vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o)
            ? vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o
            : vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o);
    vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits = 0U;
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1 
        = (0xffU & vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2 
        = (0xffU & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3 
        = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                    >> 8U));
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4 
        = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                    >> 8U));
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5 
        = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                    >> 0x10U));
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6 
        = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                    >> 0x10U));
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7 
        = (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
           >> 0x18U);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8 
        = (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
           >> 0x18U);
    if ((2U == (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o))) {
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (1U & ((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                            >> 7U)) & (~ (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                          >> 7U)))));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (2U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0xfU)) & (~ (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                             >> 0xfU))) 
                        << 1U)));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (4U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0x17U)) & (~ (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                              >> 0x17U))) 
                        << 2U)));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((7U & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (8U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0x1fU)) & (~ (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                              >> 0x1fU))) 
                        << 3U)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1) 
                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3) 
                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5) 
                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7) 
                        + (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8)));
        vlSelf->testbench__DOT__CPU__DOT__VALU_v_o 
            = (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4) 
                << 0x18U) | (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3) 
                              << 0x10U) | (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2) 
                                            << 8U) 
                                           | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1))));
    } else if ((6U == (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o))) {
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (1U & ((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                            >> 7U)) & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                       >> 7U))));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (2U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0xfU)) << 1U) & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                 >> 0xeU))));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (4U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0x17U)) << 2U) & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                  >> 0x15U))));
        vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits 
            = ((7U & (IData)(vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits)) 
               | (8U & (((~ (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                             >> 0x1fU)) << 3U) & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                  >> 0x1cU))));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1) 
                        - (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3) 
                        - (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5) 
                        - (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6)));
        vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4 
            = (0xffU & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7) 
                        - (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8)));
        vlSelf->testbench__DOT__CPU__DOT__VALU_v_o 
            = (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4) 
                << 0x18U) | (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3) 
                              << 0x10U) | (((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2) 
                                            << 8U) 
                                           | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1))));
    } else {
        if ((1U != (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o))) {
            vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits = 0U;
        }
        if ((1U == (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o))) {
            vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1 
                = (0xffffU & (((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                               | (0xffU & vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o)) 
                              * ((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                            >> 7U)))) 
                                             << 8U)) 
                                 | (0xffU & vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o))));
            vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2 
                = (0xffffU & (((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 8U))) 
                              * ((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                            >> 0xfU)))) 
                                             << 8U)) 
                                 | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                             >> 8U)))));
            vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3 
                = (0xffffU & (((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                               | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                           >> 0x10U))) 
                              * ((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                            >> 0x17U)))) 
                                             << 8U)) 
                                 | (0xffU & (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                             >> 0x10U)))));
            vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4 
                = (0xffffU & (((0xff00U & ((- (IData)(
                                                      (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                                       >> 0x1fU))) 
                                           << 8U)) 
                               | (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
                                  >> 0x18U)) * ((0xff00U 
                                                 & ((- (IData)(
                                                               (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                                >> 0x1fU))) 
                                                    << 8U)) 
                                                | (vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
                                                   >> 0x18U))));
            vlSelf->testbench__DOT__CPU__DOT__VALU_v_o 
                = ((((((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1)) 
                     + (((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2) 
                                           >> 0xfU)))) 
                         << 0x10U) | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2))) 
                    + (((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4)));
        } else {
            vlSelf->testbench__DOT__CPU__DOT__VALU_v_o 
                = vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o;
        }
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.Clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge testbench.Clk or posedge testbench.reset)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge testbench.CPU.start_i or posedge testbench.Clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge testbench.Clk or posedge testbench.reset)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.Clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge testbench.Clk or posedge testbench.reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge testbench.CPU.start_i or posedge testbench.Clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge testbench.Clk or posedge testbench.reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__Clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Start = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__DataOrReg = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__address = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__instr_i = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 258; ++__Vi0) {
        vlSelf->testbench__DOT__instr_store[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->testbench__DOT__vout_addr = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__value_o = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__easter_egg = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__outfile = 0;
    vlSelf->testbench__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__stall = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__flush = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__err = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__golden[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->testbench__DOT____Vlvbound_h5cc9d539__0 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__CPU__DOT__op_selection = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__inst_addr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__aluData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__RSD = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__RTD = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__signExData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MUXop = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__CPU__DOT__alu_ctrl_wire = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__CPU__DOT__pcIm = VL_RAND_RESET_I(12);
    vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o = VL_RAND_RESET_I(12);
    vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MUX_Control_MemRead_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__data_mem_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__reg_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__VALU_v_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__CPU__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__start_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->testbench__DOT__CPU__DOT__vector_signed[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->testbench__DOT__CPU__DOT__easter_flag = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__easter_flag_next = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__egg1 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__egg2 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__egg3 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__easter_counter = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__CPU__DOT__easter_counter_next = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag_next = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1 = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter_next = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address_next = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e1 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e2 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e3 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__e4 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b4 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b5 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b6 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b7 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__b8 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s1 = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s2 = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s3 = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__CPU__DOT__VALU__DOT__s4 = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v2 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v2 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v3 = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__inst_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 = 0;
    vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35 = VL_RAND_RESET_I(8);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__Clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__CPU__DOT__start_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
