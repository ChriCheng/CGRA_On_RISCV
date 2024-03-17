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
VL_ATTR_COLD VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__2(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__3(Vtestbench___024root* vlSelf);

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
    Vtestbench___024root___eval_initial__TOP__3(vlSelf);
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
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "../src/../src/testbench.v", 72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__reset = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__j = 0U;
    VL_WRITEF("--------------------------- [ Simulation Starts !! ] ---------------------------\n");
    co_await vlSelf->__VdlySched.delay(0x39210U, "../src/../src/testbench.v", 98);
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          0 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0U]);
    } else {
        VL_WRITEF("pattern          0 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0U]);
    }
    vlSelf->testbench__DOT__j = 1U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[1U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          1 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[1U]);
    } else {
        VL_WRITEF("pattern          1 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[1U]);
    }
    vlSelf->testbench__DOT__j = 2U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[2U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          2 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[2U]);
    } else {
        VL_WRITEF("pattern          2 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[2U]);
    }
    vlSelf->testbench__DOT__j = 3U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[3U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          3 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[3U]);
    } else {
        VL_WRITEF("pattern          3 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[3U]);
    }
    vlSelf->testbench__DOT__j = 4U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[4U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          4 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[4U]);
    } else {
        VL_WRITEF("pattern          4 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[4U]);
    }
    vlSelf->testbench__DOT__j = 5U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[5U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          5 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[5U]);
    } else {
        VL_WRITEF("pattern          5 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[5U]);
    }
    vlSelf->testbench__DOT__j = 6U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[6U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          6 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[6U]);
    } else {
        VL_WRITEF("pattern          6 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[6U]);
    }
    vlSelf->testbench__DOT__j = 7U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[7U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          7 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[7U]);
    } else {
        VL_WRITEF("pattern          7 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[7U]);
    }
    vlSelf->testbench__DOT__j = 8U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[8U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          8 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[8U]);
    } else {
        VL_WRITEF("pattern          8 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[8U]);
    }
    vlSelf->testbench__DOT__j = 9U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[9U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern          9 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[9U]);
    } else {
        VL_WRITEF("pattern          9 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[9U]);
    }
    vlSelf->testbench__DOT__j = 0xaU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xaU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         10 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xaU]);
    } else {
        VL_WRITEF("pattern         10 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xaU]);
    }
    vlSelf->testbench__DOT__j = 0xbU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xbU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         11 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xbU]);
    } else {
        VL_WRITEF("pattern         11 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xbU]);
    }
    vlSelf->testbench__DOT__j = 0xcU;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xcU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         12 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xcU]);
    } else {
        VL_WRITEF("pattern         12 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xcU]);
    }
    vlSelf->testbench__DOT__j = 0xdU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xdU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         13 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xdU]);
    } else {
        VL_WRITEF("pattern         13 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xdU]);
    }
    vlSelf->testbench__DOT__j = 0xeU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xeU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         14 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xeU]);
    } else {
        VL_WRITEF("pattern         14 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xeU]);
    }
    vlSelf->testbench__DOT__j = 0xfU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0xfU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         15 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xfU]);
    } else {
        VL_WRITEF("pattern         15 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0xfU]);
    }
    vlSelf->testbench__DOT__j = 0x10U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x10U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         16 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x10U]);
    } else {
        VL_WRITEF("pattern         16 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x10U]);
    }
    vlSelf->testbench__DOT__j = 0x11U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x11U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         17 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x11U]);
    } else {
        VL_WRITEF("pattern         17 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x11U]);
    }
    vlSelf->testbench__DOT__j = 0x12U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x12U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         18 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x12U]);
    } else {
        VL_WRITEF("pattern         18 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x12U]);
    }
    vlSelf->testbench__DOT__j = 0x13U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x13U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         19 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x13U]);
    } else {
        VL_WRITEF("pattern         19 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x13U]);
    }
    vlSelf->testbench__DOT__j = 0x14U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x14U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         20 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x14U]);
    } else {
        VL_WRITEF("pattern         20 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x14U]);
    }
    vlSelf->testbench__DOT__j = 0x15U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x15U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         21 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x15U]);
    } else {
        VL_WRITEF("pattern         21 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x15U]);
    }
    vlSelf->testbench__DOT__j = 0x16U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x16U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         22 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x16U]);
    } else {
        VL_WRITEF("pattern         22 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x16U]);
    }
    vlSelf->testbench__DOT__j = 0x17U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x17U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         23 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x17U]);
    } else {
        VL_WRITEF("pattern         23 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x17U]);
    }
    vlSelf->testbench__DOT__j = 0x18U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x18U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         24 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x18U]);
    } else {
        VL_WRITEF("pattern         24 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x18U]);
    }
    vlSelf->testbench__DOT__j = 0x19U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x19U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         25 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x19U]);
    } else {
        VL_WRITEF("pattern         25 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x19U]);
    }
    vlSelf->testbench__DOT__j = 0x1aU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1aU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         26 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1aU]);
    } else {
        VL_WRITEF("pattern         26 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1aU]);
    }
    vlSelf->testbench__DOT__j = 0x1bU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1bU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         27 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1bU]);
    } else {
        VL_WRITEF("pattern         27 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1bU]);
    }
    vlSelf->testbench__DOT__j = 0x1cU;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1cU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         28 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1cU]);
    } else {
        VL_WRITEF("pattern         28 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1cU]);
    }
    vlSelf->testbench__DOT__j = 0x1dU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1dU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         29 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1dU]);
    } else {
        VL_WRITEF("pattern         29 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1dU]);
    }
    vlSelf->testbench__DOT__j = 0x1eU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1eU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         30 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1eU]);
    } else {
        VL_WRITEF("pattern         30 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1eU]);
    }
    vlSelf->testbench__DOT__j = 0x1fU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x1fU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         31 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1fU]);
    } else {
        VL_WRITEF("pattern         31 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x1fU]);
    }
    vlSelf->testbench__DOT__j = 0x20U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x20U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         32 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x20U]);
    } else {
        VL_WRITEF("pattern         32 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x20U]);
    }
    vlSelf->testbench__DOT__j = 0x21U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x21U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         33 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x21U]);
    } else {
        VL_WRITEF("pattern         33 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x21U]);
    }
    vlSelf->testbench__DOT__j = 0x22U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x22U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         34 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x22U]);
    } else {
        VL_WRITEF("pattern         34 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x22U]);
    }
    vlSelf->testbench__DOT__j = 0x23U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x23U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         35 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x23U]);
    } else {
        VL_WRITEF("pattern         35 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x23U]);
    }
    vlSelf->testbench__DOT__j = 0x24U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x24U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         36 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x24U]);
    } else {
        VL_WRITEF("pattern         36 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x24U]);
    }
    vlSelf->testbench__DOT__j = 0x25U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x25U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         37 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x25U]);
    } else {
        VL_WRITEF("pattern         37 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x25U]);
    }
    vlSelf->testbench__DOT__j = 0x26U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x26U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         38 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x26U]);
    } else {
        VL_WRITEF("pattern         38 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x26U]);
    }
    vlSelf->testbench__DOT__j = 0x27U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x27U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         39 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x27U]);
    } else {
        VL_WRITEF("pattern         39 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x27U]);
    }
    vlSelf->testbench__DOT__j = 0x28U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x28U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         40 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x28U]);
    } else {
        VL_WRITEF("pattern         40 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x28U]);
    }
    vlSelf->testbench__DOT__j = 0x29U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x29U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         41 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x29U]);
    } else {
        VL_WRITEF("pattern         41 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x29U]);
    }
    vlSelf->testbench__DOT__j = 0x2aU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2aU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         42 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2aU]);
    } else {
        VL_WRITEF("pattern         42 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2aU]);
    }
    vlSelf->testbench__DOT__j = 0x2bU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2bU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         43 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2bU]);
    } else {
        VL_WRITEF("pattern         43 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2bU]);
    }
    vlSelf->testbench__DOT__j = 0x2cU;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2cU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         44 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2cU]);
    } else {
        VL_WRITEF("pattern         44 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2cU]);
    }
    vlSelf->testbench__DOT__j = 0x2dU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2dU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         45 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2dU]);
    } else {
        VL_WRITEF("pattern         45 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2dU]);
    }
    vlSelf->testbench__DOT__j = 0x2eU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2eU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         46 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2eU]);
    } else {
        VL_WRITEF("pattern         46 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2eU]);
    }
    vlSelf->testbench__DOT__j = 0x2fU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x2fU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         47 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2fU]);
    } else {
        VL_WRITEF("pattern         47 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x2fU]);
    }
    vlSelf->testbench__DOT__j = 0x30U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x30U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         48 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x30U]);
    } else {
        VL_WRITEF("pattern         48 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x30U]);
    }
    vlSelf->testbench__DOT__j = 0x31U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x31U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         49 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x31U]);
    } else {
        VL_WRITEF("pattern         49 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x31U]);
    }
    vlSelf->testbench__DOT__j = 0x32U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x32U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         50 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x32U]);
    } else {
        VL_WRITEF("pattern         50 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x32U]);
    }
    vlSelf->testbench__DOT__j = 0x33U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x33U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         51 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x33U]);
    } else {
        VL_WRITEF("pattern         51 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x33U]);
    }
    vlSelf->testbench__DOT__j = 0x34U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x34U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         52 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x34U]);
    } else {
        VL_WRITEF("pattern         52 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x34U]);
    }
    vlSelf->testbench__DOT__j = 0x35U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x35U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         53 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x35U]);
    } else {
        VL_WRITEF("pattern         53 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x35U]);
    }
    vlSelf->testbench__DOT__j = 0x36U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x36U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         54 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x36U]);
    } else {
        VL_WRITEF("pattern         54 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x36U]);
    }
    vlSelf->testbench__DOT__j = 0x37U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x37U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         55 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x37U]);
    } else {
        VL_WRITEF("pattern         55 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x37U]);
    }
    vlSelf->testbench__DOT__j = 0x38U;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x38U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         56 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x38U]);
    } else {
        VL_WRITEF("pattern         56 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x38U]);
    }
    vlSelf->testbench__DOT__j = 0x39U;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x39U])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         57 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x39U]);
    } else {
        VL_WRITEF("pattern         57 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x39U]);
    }
    vlSelf->testbench__DOT__j = 0x3aU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3aU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         58 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3aU]);
    } else {
        VL_WRITEF("pattern         58 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3aU]);
    }
    vlSelf->testbench__DOT__j = 0x3bU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3bU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         59 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3bU]);
    } else {
        VL_WRITEF("pattern         59 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3bU]);
    }
    vlSelf->testbench__DOT__j = 0x3cU;
    vlSelf->testbench__DOT__address = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__address)));
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3cU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         60 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3cU]);
    } else {
        VL_WRITEF("pattern         60 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3cU]);
    }
    vlSelf->testbench__DOT__j = 0x3dU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3dU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         61 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3dU]);
    } else {
        VL_WRITEF("pattern         61 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3dU]);
    }
    vlSelf->testbench__DOT__j = 0x3eU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3eU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         62 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3eU]);
    } else {
        VL_WRITEF("pattern         62 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3eU]);
    }
    vlSelf->testbench__DOT__j = 0x3fU;
    co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 101);
    vlSelf->testbench__DOT__vout_addr = (3U & ((IData)(vlSelf->testbench__DOT__vout_addr) 
                                               - (IData)(1U)));
    if (((IData)(vlSelf->testbench__DOT__value_o) != 
         vlSelf->testbench__DOT__golden[0x3fU])) {
        vlSelf->testbench__DOT__err = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__err);
        VL_WRITEF("pattern         63 is wrong:output %x != expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3fU]);
    } else {
        VL_WRITEF("pattern         63 is correct:output %x == expected %x\n",
                  8,vlSelf->testbench__DOT__value_o,
                  8,vlSelf->testbench__DOT__golden[0x3fU]);
    }
    vlSelf->testbench__DOT__j = 0x40U;
    co_await vlSelf->__VdlySched.delay(0x7d0U, "../src/../src/testbench.v", 111);
    VL_WRITEF("--------------------------- Simulation Stops !!---------------------------\n");
    if (VL_LIKELY((0U != vlSelf->testbench__DOT__err))) {
        VL_WRITEF("============================================================================\n             \342\226\204\342\226\204\342\226\204\342\226\204\342\226\204\342\226\204\342\226\204 \n         \342\226\204\342\226\200\342\226\200\342\226\200       \342\226\200\342\226\204\n       \342\226\204\342\226\200            \342\226\200\342\226\204 \t\tERROR FOUND!!\n      \342\226\204\342\226\200          \342\226\204\342\226\200\342\226\200\342\226\204\342\226\200\342\226\204\n    \342\226\204\342\226\200          \342\226\204\342\226\200  \342\226\210\342\226\210\342\226\204\342\226\200\342\226\204\n   \342\226\204\342\226\200  \342\226\204\342\226\200\342\226\200\342\226\200\342\226\204    \342\226\210   \342\226\200\342\226\200 \342\226\210\342\226\200\342\226\204 \tThere are\n   \342\226\210  \342\226\210\342\226\204\342\226\204   \342\226\210   \342\226\200\342\226\204     \342\226\220 \342\226\210  %11d errors in total.\n",
                  32,vlSelf->testbench__DOT__err);
        VL_WRITEF("  \342\226\220\342\226\214  \342\226\210\342\226\200\342\226\200  \342\226\204\342\226\200     \342\226\200\342\226\204\342\226\204\342\226\204\342\226\204\342\226\200  \342\226\210 \n  \342\226\220\342\226\214  \342\226\210   \342\226\204\342\226\200              \342\226\210\n  \342\226\220\342\226\214   \342\226\200\342\226\200\342\226\200                \342\226\220\342\226\214\n  \342\226\220\342\226\214               \342\226\204      \342\226\220\342\226\214 \n  \342\226\220\342\226\214         \342\226\204     \342\226\210      \342\226\220\342\226\214 \n   \342\226\210         \342\226\200\342\226\210\342\226\204  \342\226\204\342\226\210      \342\226\220\342\226\214 \n   \342\226\220\342\226\214          \342\226\200\342\226\200\342\226\200\342\226\200       \342\226\220\342\226\214 \n    \342\226\210                     \342\226\210 \n    \342\226\220\342\226\214\342\226\200\342\226\204                 \342\226\220\342\226\214\n     \342\226\210  \342\226\200                \342\226\200 \n============================================================================\n");
    } else {
        VL_WRITEF("============================================================================\n/ \033[1;33m##########                                  #########\033[m\n//\033[1;33m############/                           #############\033[m\n  \033[1;33m  (#############       /            ##################\033[m\n  \033[1;33m  ################################################ \033[m \n  \033[1;33m     /###########################################  \033[m   \n \033[1;33m         //(#####################################(  \033[m    \n");
        VL_WRITEF("   \033[1;33m        (##################################(/     \033[m    \n   \033[1;33m     /####################################(     \033[m    \n   \033[1;33m   #####(   /###############(    ########(   \033[m     \n   \033[1;33m (#####       ##############     (########  \033[m\t   \n.  \033[1;33m  #######(  (################   (#########( \033[m\t   \n.   \033[1;33m/###############/  (######################/\t\033[m   \n\033[1;35m    . /////\033[m\033[1;33m############################\033[m\033[1;35m/ ///(\033\033[1;33m###( \033[m\t   \n");
        VL_WRITEF("\033[1;35m  .//////(\033[m\033[1;33m##########################\033[m\033[1;35m///////\033\033[1;33m######  \033[m\t   \n\033[1;35m   . /////\033[m \033[1;33m#########(       /#########\033[m\033[1;35m(//////\033\033[1;33m####( \033[m    \n\033[1;35m   (#((\033[m\033[1;33m###########(        (#########\033[m\033[1;35m(((((\033\033[1;33m######/  \033[m  \n  \033[1;33m /###############(      /(####################( \033[m   \n   \033[1;33m/#################(  (#######################  \033[m  \n\033[1;33m   (###########################################(  \033[m \n");
        VL_WRITEF("\033[1;36m\t^o^\t\tWOOOOOW  YOU  PASSED!!!\033[m\n\n\n============================================================================\n");
        VL_FINISH_MT("../src/../src/testbench.v", 158, "");
    }
    VL_FINISH_MT("../src/../src/testbench.v", 160, "");
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
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
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
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
