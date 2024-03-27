// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_ha0140bf0__0;
    VlWide<5>/*159:0*/ __Vtemp_h55f277a7__0;
    VlWide<5>/*159:0*/ __Vtemp_h8f78229c__0;
    // Body
    vlSelf->testbench__DOT__counter = 0U;
    vlSelf->testbench__DOT__stall = 0U;
    vlSelf->testbench__DOT__flush = 0U;
    vlSelf->testbench__DOT__idx = 0U;
    vlSelf->testbench__DOT__DataOrReg = 1U;
    vlSelf->testbench__DOT__address = 8U;
    vlSelf->testbench__DOT__vout_addr = 3U;
    vlSelf->testbench__DOT__err = 0U;
    vlSelf->testbench__DOT__instr_i = 0U;
    vlSelf->testbench__DOT__k = 0U;
    while (VL_GTS_III(32, 0x101U, vlSelf->testbench__DOT__k)) {
        vlSelf->testbench__DOT____Vlvbound_h5cc9d539__0 = 0U;
        if (VL_LIKELY((0x101U >= (0x1ffU & vlSelf->testbench__DOT__k)))) {
            vlSelf->testbench__DOT__instr_store[(0x1ffU 
                                                 & vlSelf->testbench__DOT__k)] 
                = vlSelf->testbench__DOT____Vlvbound_h5cc9d539__0;
        }
        vlSelf->testbench__DOT__k = ((IData)(1U) + vlSelf->testbench__DOT__k);
    }
    __Vtemp_ha0140bf0__0[0U] = 0x2e747874U;
    __Vtemp_ha0140bf0__0[1U] = 0x696f6e32U;
    __Vtemp_ha0140bf0__0[2U] = 0x72756374U;
    __Vtemp_ha0140bf0__0[3U] = 0x696e7374U;
    __Vtemp_ha0140bf0__0[4U] = 0x6461742fU;
    __Vtemp_ha0140bf0__0[5U] = 0x2e2e2fU;
    VL_READMEM_N(false, 8, 258, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_ha0140bf0__0)
                 ,  &(vlSelf->testbench__DOT__instr_store)
                 , 0, ~0ULL);
    __Vtemp_h55f277a7__0[0U] = 0x2e646174U;
    __Vtemp_h55f277a7__0[1U] = 0x6c64656eU;
    __Vtemp_h55f277a7__0[2U] = 0x742f676fU;
    __Vtemp_h55f277a7__0[3U] = 0x2e2f6461U;
    __Vtemp_h55f277a7__0[4U] = 0x2eU;
    VL_READMEM_N(true, 8, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h55f277a7__0)
                 ,  &(vlSelf->testbench__DOT__golden)
                 , 0, ~0ULL);
    __Vtemp_h8f78229c__0[0U] = 0x2e747874U;
    __Vtemp_h8f78229c__0[1U] = 0x74707574U;
    __Vtemp_h8f78229c__0[2U] = 0x742f6f75U;
    __Vtemp_h8f78229c__0[3U] = 0x2e2f6461U;
    __Vtemp_h8f78229c__0[4U] = 0x2eU;
    vlSelf->testbench__DOT__outfile = VL_FOPEN_MCD_N(
                                                     VL_CVT_PACK_STR_NW(5, __Vtemp_h8f78229c__0));
    if (VL_UNLIKELY((0U == vlSelf->testbench__DOT__outfile))) {
        VL_WRITEF("Error: failed to open output file.\n");
    }
    vlSelf->testbench__DOT__Clk = 1U;
    vlSelf->testbench__DOT__reset = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"CPU.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
