// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtestbench__Syms;

class Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__Clk;
        CData/*0:0*/ testbench__DOT__reset;
        CData/*0:0*/ testbench__DOT__CPU__DOT__start_i;
        CData/*0:0*/ testbench__DOT__Start;
        CData/*0:0*/ testbench__DOT__DataOrReg;
        CData/*4:0*/ testbench__DOT__address;
        CData/*7:0*/ testbench__DOT__instr_i;
        CData/*1:0*/ testbench__DOT__vout_addr;
        CData/*7:0*/ testbench__DOT__value_o;
        CData/*2:0*/ testbench__DOT__easter_egg;
        CData/*7:0*/ testbench__DOT____Vlvbound_h5cc9d539__0;
        CData/*3:0*/ testbench__DOT__CPU__DOT__vector_signed_bits;
        CData/*2:0*/ testbench__DOT__CPU__DOT__alu_ctrl_wire;
        CData/*4:0*/ testbench__DOT__CPU__DOT__MEM_WB_RDaddr_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__MEM_WB_RegWrite_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_immSelect_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__MUX_Control_MemRead_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX_ALUSrc_o;
        CData/*1:0*/ testbench__DOT__CPU__DOT__ID_EX_ALUOp_o;
        CData/*2:0*/ testbench__DOT__CPU__DOT__ALU_Control_ALUCtrl_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX_MemRead_o;
        CData/*1:0*/ testbench__DOT__CPU__DOT__Control_ALUOp_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_ALUSrc_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_RegWrite_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_MemToReg_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_MemRd_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Control_MemWr_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__EX_MEM_RegWrite_o;
        CData/*4:0*/ testbench__DOT__CPU__DOT__EX_MEM_RDaddr_o;
        CData/*4:0*/ testbench__DOT__CPU__DOT__ID_EX_RSaddr_o;
        CData/*4:0*/ testbench__DOT__CPU__DOT__ID_EX_RTaddr_o;
        CData/*1:0*/ testbench__DOT__CPU__DOT__ForwardingUnit_ForwardA_o;
        CData/*1:0*/ testbench__DOT__CPU__DOT__ForwardingUnit_ForwardB_o;
        CData/*4:0*/ testbench__DOT__CPU__DOT__ID_EX_RegDst_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX_RegWrite_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX_MemToReg_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX_MemWrite_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__EX_MEM_MemWrite_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__EX_MEM_MemRead_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__EX_MEM_MemToReg_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__MEM_WB_MemToReg_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__PC_Branch_Select;
        CData/*2:0*/ testbench__DOT__CPU__DOT__VALU_Control_VALUCtrl_o;
        CData/*0:0*/ testbench__DOT__CPU__DOT__flag;
        CData/*0:0*/ testbench__DOT__CPU__DOT__easter_flag;
        CData/*0:0*/ testbench__DOT__CPU__DOT__easter_flag_next;
        CData/*7:0*/ testbench__DOT__CPU__DOT__egg1;
        CData/*7:0*/ testbench__DOT__CPU__DOT__egg2;
        CData/*7:0*/ testbench__DOT__CPU__DOT__egg3;
        CData/*2:0*/ testbench__DOT__CPU__DOT__easter_counter;
        CData/*2:0*/ testbench__DOT__CPU__DOT__easter_counter_next;
        CData/*0:0*/ testbench__DOT__CPU__DOT__PC__DOT__flag;
        CData/*0:0*/ testbench__DOT__CPU__DOT__PC__DOT__flag_next;
        CData/*1:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad;
        CData/*1:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__quad_d1;
        CData/*7:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_read;
        CData/*5:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__address_read;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag;
        CData/*0:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__flag_next;
        CData/*1:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter;
        CData/*1:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__counter_next;
        CData/*5:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address;
        CData/*5:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__instr_wr_address_next;
        CData/*0:0*/ testbench__DOT__CPU__DOT__ID_EX__DOT__PC_branch_select_o;
    };
    struct {
        CData/*0:0*/ testbench__DOT__CPU__DOT__EX_MEM__DOT__zero_o;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__e1;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__e2;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__e3;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__e4;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b1;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b2;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b3;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b4;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b5;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b6;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b7;
        CData/*7:0*/ testbench__DOT__CPU__DOT__VALU__DOT__b8;
        CData/*0:0*/ __Vdly__testbench__DOT__CPU__DOT__start_i;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v0;
        CData/*3:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v2;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__vector_signed__v2;
        CData/*3:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__vector_signed__v3;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v0;
        CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32;
        CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v32;
        CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33;
        CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v33;
        CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34;
        CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v34;
        CData/*4:0*/ __Vdlyvdim0__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35;
        CData/*7:0*/ __Vdlyvval__testbench__DOT__CPU__DOT__Data_Memory__DOT__memory__v35;
        CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__Clk;
        CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__reset;
        CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__CPU__DOT__start_i;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ testbench__DOT__CPU__DOT__ALUfunct_in;
        SData/*11:0*/ testbench__DOT__CPU__DOT__pcIm;
        SData/*11:0*/ testbench__DOT__CPU__DOT__IF_ID_pcIm_o;
        SData/*15:0*/ testbench__DOT__CPU__DOT__VALU__DOT__s1;
        SData/*15:0*/ testbench__DOT__CPU__DOT__VALU__DOT__s2;
        SData/*15:0*/ testbench__DOT__CPU__DOT__VALU__DOT__s3;
        SData/*15:0*/ testbench__DOT__CPU__DOT__VALU__DOT__s4;
        IData/*31:0*/ testbench__DOT__i;
        IData/*31:0*/ testbench__DOT__outfile;
        IData/*31:0*/ testbench__DOT__counter;
        IData/*31:0*/ testbench__DOT__stall;
        IData/*31:0*/ testbench__DOT__flush;
        IData/*31:0*/ testbench__DOT__idx;
        IData/*31:0*/ testbench__DOT__j;
        IData/*31:0*/ testbench__DOT__k;
        IData/*31:0*/ testbench__DOT__err;
        IData/*31:0*/ testbench__DOT__CPU__DOT__op_selection;
        IData/*31:0*/ testbench__DOT__CPU__DOT__inst_addr;
        IData/*31:0*/ testbench__DOT__CPU__DOT__inst;
        IData/*31:0*/ testbench__DOT__CPU__DOT__aluData;
        IData/*31:0*/ testbench__DOT__CPU__DOT__RSD;
        IData/*31:0*/ testbench__DOT__CPU__DOT__RTD;
        IData/*31:0*/ testbench__DOT__CPU__DOT__signExData;
        IData/*31:0*/ testbench__DOT__CPU__DOT__MUXop;
        IData/*31:0*/ testbench__DOT__CPU__DOT__pcSelect_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__IF_ID_pc_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__IF_ID_inst_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__memToReg_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__PCImmExtend_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__Registers_RSdata_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__Registers_RTdata_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ForwardToData2_data_o;
    };
    struct {
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX_SignExtended_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ForwardToData1_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__MUX_ALUSrc_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX_RDData0_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX_inst_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__EX_MEM_instr_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__EX_MEM_ALUResult_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX_RDData1_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX_pc_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__EX_MEM_RDData_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__MEM_WB_ALUResult_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__MEM_WB_DataMemReadData_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__data_mem_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__reg_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__VALU_v_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__EX_MEM_VALUResult_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__aluToDM_data_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__Instruction_Memory__DOT__i;
        IData/*31:0*/ testbench__DOT__CPU__DOT__Registers__DOT__i;
        IData/*31:0*/ testbench__DOT__CPU__DOT__ID_EX__DOT__pcEx_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__EX_MEM__DOT__pc_o;
        IData/*31:0*/ testbench__DOT__CPU__DOT__Data_Memory__DOT__i;
        IData/*31:0*/ testbench__DOT__CPU__DOT__MEM_WB__DOT__RDData_o;
        IData/*31:0*/ __Vdly__testbench__DOT__CPU__DOT__IF_ID_inst_o;
        IData/*31:0*/ __Vdly__testbench__DOT__CPU__DOT__inst_addr;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 258> testbench__DOT__instr_store;
        VlUnpacked<CData/*7:0*/, 64> testbench__DOT__golden;
        VlUnpacked<CData/*3:0*/, 3> testbench__DOT__CPU__DOT__vector_signed;
        VlUnpacked<IData/*31:0*/, 64> testbench__DOT__CPU__DOT__Instruction_Memory__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> testbench__DOT__CPU__DOT__Registers__DOT__register;
        VlUnpacked<CData/*3:0*/, 32> testbench__DOT__CPU__DOT__Registers__DOT__pos;
        VlUnpacked<CData/*7:0*/, 32> testbench__DOT__CPU__DOT__Data_Memory__DOT__memory;
        VlUnpacked<CData/*0:0*/, 12> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb77428d3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
