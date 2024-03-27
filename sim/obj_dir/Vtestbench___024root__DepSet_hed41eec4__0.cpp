// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4U, "../src/../src/testbench.v", 31);
        vlSelf->testbench__DOT__Clk = (1U & (~ (IData)(vlSelf->testbench__DOT__Clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hb77428d3__0.trigger("@(posedge testbench.Clk)", "../src/../src/testbench.v", 86);
        if (VL_GTS_III(32, 0x100U, vlSelf->testbench__DOT__counter)) {
            co_await vlSelf->__VdlySched.delay(0xfaU, "../src/../src/testbench.v", 88);
            vlSelf->testbench__DOT__instr_i = ((0x101U 
                                                >= 
                                                (0x1ffU 
                                                 & vlSelf->testbench__DOT__counter))
                                                ? vlSelf->testbench__DOT__instr_store
                                               [(0x1ffU 
                                                 & vlSelf->testbench__DOT__counter)]
                                                : 0U);
        } else {
            vlSelf->testbench__DOT__instr_i = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next 
        = ((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((0xffU != (IData)(vlSelf->testbench__DOT__instr_i)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)));
    vlSelf->testbench__DOT__CPU__DOT__easter_flag_next 
        = ((0xaaU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((7U != (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)));
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
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(4U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__testbench__DOT__CPU__DOT__flag;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v0;
    CData/*5:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63;
    CData/*5:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64;
    CData/*5:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65;
    CData/*5:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v0 = 0U;
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v2 = 0U;
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i 
        = vlSelf->testbench__DOT__CPU__DOT__start_i;
    __Vdly__testbench__DOT__CPU__DOT__flag = vlSelf->testbench__DOT__CPU__DOT__flag;
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v0 = 0U;
    vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v0 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66 = 0U;
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__reset)))) {
        if (vlSelf->testbench__DOT__CPU__DOT__easter_flag) {
            vlSelf->testbench__DOT__easter_egg = ((4U 
                                                   & (IData)(vlSelf->testbench__DOT__easter_egg)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->testbench__DOT__CPU__DOT__egg2) 
                                                          >> 
                                                          (7U 
                                                           & ((IData)(7U) 
                                                              - (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->testbench__DOT__CPU__DOT__egg1) 
                                                           >> 
                                                           (7U 
                                                            & ((IData)(7U) 
                                                               - (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))))));
            vlSelf->testbench__DOT__easter_egg = ((3U 
                                                   & (IData)(vlSelf->testbench__DOT__easter_egg)) 
                                                  | (4U 
                                                     & (((IData)(vlSelf->testbench__DOT__CPU__DOT__egg3) 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(7U) 
                                                             - (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)))) 
                                                        << 2U)));
        } else {
            vlSelf->testbench__DOT__easter_egg = 0U;
        }
    }
    if (vlSelf->testbench__DOT__reset) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i = 0x3fU;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__i = 0x20U;
        vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v0 = 1U;
        __Vdly__testbench__DOT__CPU__DOT__flag = 0U;
        vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i = 0U;
        vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v0 = 1U;
        __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v0 = 1U;
        vlSelf->testbench__DOT__CPU__DOT__easter_counter = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter = 0U;
    } else {
        vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v2 
            = vlSelf->testbench__DOT__CPU__DOT__vector_signed_bits;
        vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v2 = 1U;
        vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v3 
            = vlSelf->testbench__DOT__CPU__DOT__vector_signed
            [0U];
        if (vlSelf->testbench__DOT__CPU__DOT__flag) {
            if ((0xffU == (IData)(vlSelf->testbench__DOT__instr_i))) {
                __Vdly__testbench__DOT__CPU__DOT__flag = 0U;
                vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i = 1U;
            } else {
                __Vdly__testbench__DOT__CPU__DOT__flag 
                    = vlSelf->testbench__DOT__CPU__DOT__flag;
                vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i 
                    = vlSelf->testbench__DOT__CPU__DOT__start_i;
            }
        } else {
            __Vdly__testbench__DOT__CPU__DOT__flag 
                = ((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
                   | (IData)(vlSelf->testbench__DOT__CPU__DOT__flag));
            vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i 
                = vlSelf->testbench__DOT__CPU__DOT__start_i;
        }
        if (vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o) {
            vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 
                = (vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o 
                   >> 0x18U);
            vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 = 1U;
            vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32 
                = (0x1fU & ((IData)(3U) + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o));
            vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33 
                = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33 
                = (0x1fU & ((IData)(2U) + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o));
            vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34 
                = (0xffU & (vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o 
                            >> 8U));
            vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34 
                = (0x1fU & ((IData)(1U) + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o));
            vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35 
                = (0xffU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o);
            vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35 
                = (0x1fU & vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o);
        }
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1 
            = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad;
        if (vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag) {
            if ((2U & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad))) {
                if ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad))) {
                    __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63 
                        = ((0xffU == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read))
                            ? 0U : (0xffU & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read)));
                    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63 = 1U;
                    __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63 = 0x18U;
                    __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63 
                        = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read;
                } else {
                    __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64 
                        = ((0xffU == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read))
                            ? 0U : (0xffU & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read)));
                    __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64 = 1U;
                    __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64 = 0x10U;
                    __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64 
                        = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read;
                }
            } else if ((1U & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad))) {
                __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65 
                    = ((0xffU == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read))
                        ? 0U : (0xffU & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read)));
                __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65 = 1U;
                __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65 = 8U;
                __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65 
                    = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read;
            } else {
                __Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66 
                    = ((0xffU == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read))
                        ? 0U : (0xffU & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read)));
                __Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66 = 1U;
                __Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66 = 0U;
                __Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66 
                    = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read;
            }
        }
        vlSelf->testbench__DOT__CPU__DOT__easter_counter 
            = vlSelf->testbench__DOT__CPU__DOT__easter_counter_next;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read 
            = vlSelf->testbench__DOT__instr_i;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read 
            = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad 
            = (3U & ((IData)(3U) - (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)));
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address 
            = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address_next;
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter 
            = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter_next;
    }
    vlSelf->testbench__DOT__CPU__DOT__flag = __Vdly__testbench__DOT__CPU__DOT__flag;
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3eU)) {
            vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63))) 
                & vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
                [__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v63))));
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64))) 
                & vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
                [__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v64))));
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65))) 
                & vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
                [__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v65))));
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66) {
        vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory[__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66))) 
                & vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
                [__Vdlyvdim0__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory__v66))));
    }
    vlSelf->testbench__DOT__CPU__DOT__egg2 = 0x36U;
    vlSelf->testbench__DOT__CPU__DOT__egg1 = 0xdU;
    vlSelf->testbench__DOT__CPU__DOT__egg3 = 0x9aU;
    vlSelf->testbench__DOT__CPU__DOT__easter_flag = 
        ((~ (IData)(vlSelf->testbench__DOT__reset)) 
         & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag_next));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag 
        = ((~ (IData)(vlSelf->testbench__DOT__reset)) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next));
    vlSelf->testbench__DOT__CPU__DOT__easter_counter_next 
        = (7U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)
                  ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter))
                  : (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter_next 
        = (3U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)
                  ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                  : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address_next 
        = (0x3fU & ((3U == (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter))
                     ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address))
                     : (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__inst_addr 
        = vlSelf->testbench__DOT__CPU__DOT__inst_addr;
    if (vlSelf->testbench__DOT__CPU__DOT__start_i) {
        vlSelf->__Vdly__testbench__DOT__CPU__DOT__inst_addr 
            = (((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
                & (~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)))
                ? ((IData)(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag)
                    ? 0xf8U : vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o)
                : vlSelf->testbench__DOT__CPU__DOT__inst_addr);
        vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o 
            = vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o 
            = vlSelf->testbench__DOT__CPU__DOT__VALU_v_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o 
            = vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o 
            = vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o 
            = vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o 
            = ((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                ? 0U : (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUOp_o));
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o 
            = (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                        >> 0xfU));
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o 
            = (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                        >> 0x14U));
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o 
            = ((IData)(vlSelf->testbench__DOT__CPU__DOT__Control_immSelect_o)
                ? (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                                  >> 7U))))
                : (((- (IData)((vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                      >> 0x14U)));
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o 
            = vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o 
            = vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o 
            = ((4U & (IData)(vlSelf->testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o))
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
                        : vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o)));
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o 
            = vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o 
            = ((IData)(vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o)
                ? ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                    [(0x1fU & ((IData)(3U) + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                    << 0x18U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                  [(0x1fU & ((IData)(2U) 
                                             + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                  << 0x10U) | ((vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                                [(0x1fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o))] 
                                                << 8U) 
                                               | vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory
                                               [(0x1fU 
                                                 & vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o)])))
                : 0U);
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o 
            = vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o 
            = vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o 
            = vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o 
            = vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o 
            = (vlSelf->testbench__DOT__CPU__DOT__ForwardToData1_data_o 
               == vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o);
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o 
            = ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
               & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_ALUSrc_o));
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o 
            = vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o 
            = vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o;
        vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag 
            = vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag_next;
    } else {
        vlSelf->__Vdly__testbench__DOT__CPU__DOT__inst_addr = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData0_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RDData1_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUOp_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RSaddr_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RTaddr_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDData_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_pc_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag = 0U;
    }
    vlSelf->testbench__DOT__CPU__DOT__aluToDM_data_o 
        = ((0x57U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__EX_MEM_instr_o))
            ? vlSelf->testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o
            : vlSelf->testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o);
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemRead_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o));
    vlSelf->testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o));
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemWrite_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
           & ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemWr_o)));
    vlSelf->testbench__DOT__CPU__DOT__ALUfunct_in = 
        ((0x3f8U & (vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o 
                    >> 0x16U)) | (7U & (vlSelf->testbench__DOT__CPU__DOT__ID_EX_inst_o 
                                        >> 0xcU)));
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemToReg_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
           & ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemToReg_o)));
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o 
        = vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o;
    if (VL_UNLIKELY((0x12cU == vlSelf->testbench__DOT__counter))) {
        VL_FINISH_MT("../src/../src/testbench.v", 179, "");
    }
    vlSelf->testbench__DOT__counter = ((IData)(1U) 
                                       + vlSelf->testbench__DOT__counter);
    if (vlSelf->testbench__DOT__CPU__DOT__start_i) {
        if (vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select) {
            vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o = 0U;
            vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o = 0U;
        } else {
            vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o 
                = ((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                    ? vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o
                    : vlSelf->testbench__DOT__CPU__DOT__inst);
            vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o 
                = vlSelf->testbench__DOT__CPU__DOT__pcIm;
        }
        vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
            = vlSelf->testbench__DOT__CPU__DOT__inst_addr;
    } else {
        vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o = 0U;
    }
    vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
        = (((- (IData)((1U & ((IData)(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->testbench__DOT__CPU__DOT__IF_ID_pcIm_o));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v0;
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__register__v32;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__register__v32;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v32;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v0;
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32;
    CData/*3:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32;
    // Body
    __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v0 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v0 = 0U;
    __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v32 = 0U;
    if (vlSelf->testbench__DOT__reset) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__i = 0x20U;
        __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v0 = 1U;
        __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v0 = 1U;
    } else if (vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o) {
        __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32 
            = vlSelf->testbench__DOT__CPU__DOT__vector_signed
            [1U];
        __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32 = 1U;
        __Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32 
            = vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o;
        __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__register__v32 
            = vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o;
        __Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v32 = 1U;
        __Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__register__v32 
            = vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o;
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v0) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[1U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[2U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[3U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[4U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[5U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[6U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[7U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[8U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[9U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xaU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xbU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xcU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xdU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xeU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0xfU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x10U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x11U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x12U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x13U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x14U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x15U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x16U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x17U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x18U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x19U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1aU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1bU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1cU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1dU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1eU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[0x1fU] = 0U;
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__pos[__Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32] 
            = __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__pos__v32;
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v0) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[1U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[2U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[3U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[4U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[5U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[6U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[7U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[8U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[9U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xaU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xbU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xcU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xdU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xeU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0xfU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x10U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x11U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x12U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x13U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x14U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x15U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x16U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x17U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x18U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x19U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1aU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1bU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1cU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1dU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1eU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[0x1fU] = 0U;
    }
    if (__Vdlyvset__testbench__DOT__CPU__DOT__Registers__DOT__register__v32) {
        vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register[__Vdlyvdim0__testbench__DOT__CPU__DOT__Registers__DOT__register__v32] 
            = __Vdlyvval__testbench__DOT__CPU__DOT__Registers__DOT__register__v32;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__easter_flag_next 
        = ((0xaaU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((7U != (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_counter)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__easter_flag)));
    vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next 
        = ((0xfeU == (IData)(vlSelf->testbench__DOT__instr_i)) 
           | ((0xffU != (IData)(vlSelf->testbench__DOT__instr_i)) 
              & (IData)(vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__4(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v0) {
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[1U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[2U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[3U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[4U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[5U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[6U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[7U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[8U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[9U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xaU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xbU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xcU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xdU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xeU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0xfU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x10U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x11U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x12U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x13U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x14U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x15U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x16U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x17U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x18U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x19U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1aU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1bU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1cU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1dU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1eU] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32) {
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34;
        vlSelf->testbench__DOT__CPU__DOT__Data_Memory__DOT__memory[vlSelf->__Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v0) {
        vlSelf->testbench__DOT__CPU__DOT__vector_signed[0U] = 0U;
        vlSelf->testbench__DOT__CPU__DOT__vector_signed[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v2) {
        vlSelf->testbench__DOT__CPU__DOT__vector_signed[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v2;
        vlSelf->testbench__DOT__CPU__DOT__vector_signed[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v3;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__5(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__inst_addr = vlSelf->__Vdly__testbench__DOT__CPU__DOT__inst_addr;
    vlSelf->testbench__DOT__CPU__DOT__memToReg_data_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o)
            ? vlSelf->testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o
            : vlSelf->testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o);
    if (vlSelf->testbench__DOT__CPU__DOT__start_i) {
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o 
            = vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o 
            = vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o 
            = vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o 
            = ((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)
                ? 0U : (0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                                 >> 7U)));
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o 
            = vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o 
            = ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
               & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_RegWrite_o));
    } else {
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegDst_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o = 0U;
        vlSelf->testbench__DOT__CPU__DOT__ID_EX_RegWrite_o = 0U;
    }
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
    vlSelf->testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o)
            ? vlSelf->testbench__DOT__CPU__DOT__ID_EX_SignExtended_o
            : vlSelf->testbench__DOT__CPU__DOT__ForwardToData2_data_o);
    vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o 
        = ((IData)(vlSelf->testbench__DOT__CPU__DOT__start_i) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__MUX_Control_MemRead_o));
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

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__reg_o = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [vlSelf->testbench__DOT__address];
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__2\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__inst = vlSelf->testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory
        [(0x3fU & (vlSelf->testbench__DOT__CPU__DOT__inst_addr 
                   >> 2U))];
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
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtestbench__ConstPool__TABLE_h3e4d3314_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h115bd3f6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h2209a98b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h9cbb4b03_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h7df60976_0;

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__6(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
        = vlSelf->__Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o;
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__7(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__start_i = vlSelf->__Vdly__testbench__DOT__CPU__DOT__start_i;
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__4(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__4\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__5(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
        = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [(0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                   >> 0xfU))];
    vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o 
        = vlSelf->testbench__DOT__CPU__DOT__Registers__DOT__register
        [(0x1fU & (vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o 
                   >> 0x14U))];
    vlSelf->testbench__DOT__CPU__DOT__PC_Branch_Select 
        = ((vlSelf->testbench__DOT__CPU__DOT__Registers_RSdata_o 
            == vlSelf->testbench__DOT__CPU__DOT__Registers_RTdata_o) 
           & (0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__6(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o 
        = ((0x63U == (0x7fU & vlSelf->testbench__DOT__CPU__DOT__IF_ID_inst_o))
            ? (vlSelf->testbench__DOT__CPU__DOT__IF_ID_pc_o 
               + (vlSelf->testbench__DOT__CPU__DOT__PCImmExtend_data_o 
                  << 1U)) : ((IData)(4U) + vlSelf->testbench__DOT__CPU__DOT__inst_addr));
    vlSelf->testbench__DOT__CPU__DOT__MUX_Control_MemRead_o 
        = ((~ (IData)(vlSelf->testbench__DOT__CPU__DOT__ID_EX_MemRead_o)) 
           & (IData)(vlSelf->testbench__DOT__CPU__DOT__Control_MemRd_o));
    vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag_next 
        = ((0xf8U == vlSelf->testbench__DOT__CPU__DOT__pcSelect_data_o) 
           | (IData)(vlSelf->testbench__DOT__CPU__DOT__PC__DOT__flag));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtestbench___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtestbench___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vtestbench___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vtestbench___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtestbench___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtestbench___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtestbench___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtestbench___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtestbench___024root___nba_comb__TOP__6(vlSelf);
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtestbench___024root___eval_triggers__act(vlSelf);
            Vtestbench___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../src/../src/testbench.v", 8, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtestbench___024root___timing_resume(vlSelf);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../src/../src/testbench.v", 8, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_hb77428d3__0.commit("@(posedge testbench.Clk)");
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_hb77428d3__0.resume("@(posedge testbench.Clk)");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
