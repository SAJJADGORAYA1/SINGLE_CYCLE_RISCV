// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "VSingle_Cycle.h"
#include "VSingle_Cycle__Syms.h"

//==========

void VSingle_Cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingle_Cycle::eval\n"); );
    VSingle_Cycle__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Single_Cycle.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSingle_Cycle::_eval_initial_loop(VSingle_Cycle__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Single_Cycle.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSingle_Cycle::_sequent__TOP__2(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_sequent__TOP__2\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    // Body
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0U;
    if ((1U & (~ (IData)(vlTOPp->Single_Cycle__DOT__wr_en)))) {
        if ((1U & (IData)(vlTOPp->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 
                = (0xffU & vlTOPp->Single_Cycle__DOT__rdata2);
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 
                = (0x1fU & (vlTOPp->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((2U & (IData)(vlTOPp->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 
                = (0xffU & (vlTOPp->Single_Cycle__DOT__rdata2 
                            >> 8U));
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 8U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 
                = (0x1fU & (vlTOPp->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((4U & (IData)(vlTOPp->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 
                = (0xffU & (vlTOPp->Single_Cycle__DOT__rdata2 
                            >> 0x10U));
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0x10U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 
                = (0x1fU & (vlTOPp->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((8U & (IData)(vlTOPp->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 
                = (0xffU & (vlTOPp->Single_Cycle__DOT__rdata2 
                            >> 0x18U));
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0x18U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 
                = (0x1fU & (vlTOPp->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0) {
        vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0))) 
                & vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0]) 
               | ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0) 
                  << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0)));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1) {
        vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1))) 
                & vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1]) 
               | ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1) 
                  << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1)));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2) {
        vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2))) 
                & vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2]) 
               | ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2) 
                  << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2)));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3) {
        vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3))) 
                & vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3]) 
               | ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3) 
                  << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3)));
    }
}

VL_INLINE_OPT void VSingle_Cycle::_sequent__TOP__3(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_sequent__TOP__3\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    IData/*31:0*/ __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    // Body
    __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0U;
    if (vlTOPp->Single_Cycle__DOT__RegWrite) {
        __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = ((0U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                ? ((IData)(4U) + vlTOPp->Single_Cycle__DOT__DP__DOT__PC)
                : ((1U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                    ? vlTOPp->Single_Cycle__DOT__ALU_result
                    : ((2U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                        ? vlTOPp->Single_Cycle__DOT__DP__DOT__rdata
                        : 0U)));
        __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 1U;
        __Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = (0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                        >> 7U));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0) {
        vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0] 
            = __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    }
    vlTOPp->Single_Cycle__DOT__DP__DOT__PC = ((IData)(vlTOPp->rst)
                                               ? 0U
                                               : vlTOPp->Single_Cycle__DOT__DP__DOT__PC_new);
    vlTOPp->Single_Cycle__DOT__Instruction = vlTOPp->Single_Cycle__DOT__DP__DOT__IM__DOT__Mem
        [(0x7fU & (vlTOPp->Single_Cycle__DOT__DP__DOT__PC 
                   >> 2U))];
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__wr_en = ((0x33U 
                                             == (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                               | ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                  | (0x23U 
                                                     != 
                                                     (0x7fU 
                                                      & vlTOPp->Single_Cycle__DOT__Instruction)))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__wr_en = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__RegWrite = ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                               | ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                  | ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                     | ((0x23U 
                                                         != 
                                                         (0x7fU 
                                                          & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                        & (0x63U 
                                                           != 
                                                           (0x7fU 
                                                            & vlTOPp->Single_Cycle__DOT__Instruction))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__RegWrite = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__wb_sel = ((0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->Single_Cycle__DOT__Instruction))
                                              ? 1U : 
                                             ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->Single_Cycle__DOT__Instruction))
                                               ? 1U
                                               : ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Single_Cycle__DOT__Instruction))
                                                   ? 2U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Single_Cycle__DOT__Instruction))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Single_Cycle__DOT__Instruction))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction))
                                                      ? 0U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->Single_Cycle__DOT__Instruction))
                                                       ? 0U
                                                       : 1U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__wb_sel = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        if ((0x33U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            if ((0x13U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                if ((3U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                    if ((0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                        vlTOPp->Single_Cycle__DOT__store 
                            = ((0U == (7U & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                   >> 0xcU)))
                                         ? 1U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 0U)));
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        if ((0x33U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            if ((0x13U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                if ((3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                    vlTOPp->Single_Cycle__DOT__load 
                        = ((0x4000U & vlTOPp->Single_Cycle__DOT__Instruction)
                            ? ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? 0U : ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                         ? 4U : 3U))
                            : ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                    ? 0U : 2U) : ((0x1000U 
                                                   & vlTOPp->Single_Cycle__DOT__Instruction)
                                                   ? 1U
                                                   : 0U)));
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__br_type = ((0x33U 
                                               == (0x7fU 
                                                   & vlTOPp->Single_Cycle__DOT__Instruction))
                                               ? 6U
                                               : ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Single_Cycle__DOT__Instruction))
                                                   ? 6U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Single_Cycle__DOT__Instruction))
                                                    ? 6U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Single_Cycle__DOT__Instruction))
                                                     ? 6U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction))
                                                      ? 
                                                     ((0x4000U 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlTOPp->Single_Cycle__DOT__Instruction)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlTOPp->Single_Cycle__DOT__Instruction)
                                                         ? 5U
                                                         : 4U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlTOPp->Single_Cycle__DOT__Instruction)
                                                         ? 3U
                                                         : 2U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlTOPp->Single_Cycle__DOT__Instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x1000U 
                                                         & vlTOPp->Single_Cycle__DOT__Instruction)
                                                         ? 1U
                                                         : 0U)))
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->Single_Cycle__DOT__Instruction))
                                                       ? 7U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->Single_Cycle__DOT__Instruction))
                                                        ? 7U
                                                        : 6U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__br_type = 6U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__rd_en = ((0x33U 
                                             != (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                            & ((0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Single_Cycle__DOT__Instruction))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__rd_en = 0U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        if ((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__ALU_control 
                = ((0x4000U & vlTOPp->Single_Cycle__DOT__Instruction)
                    ? ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                        ? ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlTOPp->Single_Cycle__DOT__Instruction)
                                           ? (((0x20U 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                    >> 0x19U))) 
                                               & (0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Single_Cycle__DOT__Instruction)))
                                               ? 7U
                                               : 6U)
                                           : 5U)) : 
                   ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                     ? ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                         ? 4U : 3U) : ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                        ? 2U : (((0x20U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                      >> 0x19U))) 
                                                 & (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Single_Cycle__DOT__Instruction)))
                                                 ? 1U
                                                 : 0U))));
        } else {
            if ((0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                vlTOPp->Single_Cycle__DOT__ALU_control 
                    = ((0x4000U & vlTOPp->Single_Cycle__DOT__Instruction)
                        ? ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                            ? ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? 9U : 8U) : ((0x1000U 
                                               & vlTOPp->Single_Cycle__DOT__Instruction)
                                               ? ((
                                                   (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                        >> 0x19U))) 
                                                   & (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction)))
                                                   ? 7U
                                                   : 6U)
                                               : 5U))
                        : ((0x2000U & vlTOPp->Single_Cycle__DOT__Instruction)
                            ? ((0x1000U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? 4U : 3U) : ((0x1000U 
                                               & vlTOPp->Single_Cycle__DOT__Instruction)
                                               ? 2U
                                               : 0U)));
            } else {
                if ((3U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                    if ((0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                        vlTOPp->Single_Cycle__DOT__ALU_control = 0U;
                    } else {
                        if ((0x63U != (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
                            vlTOPp->Single_Cycle__DOT__ALU_control 
                                = ((0x6fU == (0x7fU 
                                              & vlTOPp->Single_Cycle__DOT__Instruction))
                                    ? 0U : ((0x67U 
                                             == (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction))
                                             ? 0U : 0xaU));
                        }
                    }
                }
            }
        }
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__ALU_control = 0U;
        }
    }
    vlTOPp->Single_Cycle__DOT__DP__DOT__Immediate = 
        ((0x40U & vlTOPp->Single_Cycle__DOT__Instruction)
          ? ((0x20U & vlTOPp->Single_Cycle__DOT__Instruction)
              ? ((0x10U & vlTOPp->Single_Cycle__DOT__Instruction)
                  ? 0U : ((8U & vlTOPp->Single_Cycle__DOT__Instruction)
                           ? ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                       ? ((0xfff00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                             >> 0x1fU)))) 
                                              << 0x14U)) 
                                          | ((0xff000U 
                                              & vlTOPp->Single_Cycle__DOT__Instruction) 
                                             | ((0x800U 
                                                 & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                      >> 0x14U)))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                       ? ((0xfffff000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                >> 0x14U)))
                                       : 0U) : 0U) : 
                              ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                    ? ((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0x800U & 
                                           (vlTOPp->Single_Cycle__DOT__Instruction 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                   >> 7U)))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & vlTOPp->Single_Cycle__DOT__Instruction)
              ? ((0x10U & vlTOPp->Single_Cycle__DOT__Instruction)
                  ? ((8U & vlTOPp->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                       ? (0xfffff000U 
                                          & vlTOPp->Single_Cycle__DOT__Instruction)
                                       : 0U) : 0U) : 0U))
                  : ((8U & vlTOPp->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                               ? 0U : ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                        ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                            ? ((0xfffff000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                               | ((0xfe0U 
                                                   & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & vlTOPp->Single_Cycle__DOT__Instruction)
                  ? ((8U & vlTOPp->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                       ? (0xfffff000U 
                                          & vlTOPp->Single_Cycle__DOT__Instruction)
                                       : 0U) : 0U) : 
                              ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                    ? ((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlTOPp->Single_Cycle__DOT__Instruction 
                                           >> 0x14U)))
                                    : 0U) : 0U))) : 
                 ((8U & vlTOPp->Single_Cycle__DOT__Instruction)
                   ? 0U : ((4U & vlTOPp->Single_Cycle__DOT__Instruction)
                            ? 0U : ((2U & vlTOPp->Single_Cycle__DOT__Instruction)
                                     ? ((1U & vlTOPp->Single_Cycle__DOT__Instruction)
                                         ? ((0xfffff000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                               >> 0x1fU)))) 
                                                << 0xcU)) 
                                            | (0xfffU 
                                               & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                  >> 0x14U)))
                                         : 0U) : 0U))))));
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__sel_B = (0x33U != 
                                            (0x7fU 
                                             & vlTOPp->Single_Cycle__DOT__Instruction));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__sel_B = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)))) {
        vlTOPp->Single_Cycle__DOT__sel_A = ((0x33U 
                                             != (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                            & ((0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                               & ((3U 
                                                   != 
                                                   (0x7fU 
                                                    & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                  & ((0x23U 
                                                      != 
                                                      (0x7fU 
                                                       & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                     & ((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->Single_Cycle__DOT__Instruction)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->Single_Cycle__DOT__Instruction)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Single_Cycle__DOT__Instruction))) {
            vlTOPp->Single_Cycle__DOT__sel_A = 1U;
        }
    }
    vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 = ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                      >> 0xfU))]);
    vlTOPp->Single_Cycle__DOT__rdata2 = ((0U == (0x1fU 
                                                 & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                    >> 0x14U)))
                                          ? 0U : vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem
                                         [(0x1fU & 
                                           (vlTOPp->Single_Cycle__DOT__Instruction 
                                            >> 0x14U))]);
    vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA = ((IData)(vlTOPp->Single_Cycle__DOT__sel_A)
                                                   ? vlTOPp->Single_Cycle__DOT__DP__DOT__PC
                                                   : vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1);
    vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB = ((IData)(vlTOPp->Single_Cycle__DOT__sel_B)
                                                   ? vlTOPp->Single_Cycle__DOT__DP__DOT__Immediate
                                                   : vlTOPp->Single_Cycle__DOT__rdata2);
    vlTOPp->Single_Cycle__DOT__ALU_result = ((8U & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                              ? ((4U 
                                                  & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 0U
                                                    : vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    & vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    | vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB))))
                                              : ((4U 
                                                  & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 
                                                    (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     >> vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 
                                                    (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     >> vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    ^ vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   ((vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     < vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 1U
                                                     : 0U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (VL_LTS_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA, vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    - vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    + vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB)))));
    if ((0U == (IData)(vlTOPp->Single_Cycle__DOT__store))) {
        vlTOPp->Single_Cycle__DOT__mask = ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)
                                            ? ((1U 
                                                & vlTOPp->Single_Cycle__DOT__ALU_result)
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & vlTOPp->Single_Cycle__DOT__ALU_result)
                                                ? 2U
                                                : 1U));
    } else {
        if ((1U == (IData)(vlTOPp->Single_Cycle__DOT__store))) {
            if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                    vlTOPp->Single_Cycle__DOT__mask = 0xcU;
                }
            } else {
                vlTOPp->Single_Cycle__DOT__mask = 3U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->Single_Cycle__DOT__store))) {
                vlTOPp->Single_Cycle__DOT__mask = 0xfU;
            }
        }
    }
    vlTOPp->Single_Cycle__DOT__DP__DOT__PC_new = ((1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                        ? (IData)(vlTOPp->Single_Cycle__DOT__br_type)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         >= vlTOPp->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         < vlTOPp->Single_Cycle__DOT__rdata2)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        VL_GTES_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        VL_LTS_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         != vlTOPp->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         == vlTOPp->Single_Cycle__DOT__rdata2)))))
                                                   ? vlTOPp->Single_Cycle__DOT__ALU_result
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->Single_Cycle__DOT__DP__DOT__PC));
}

VL_INLINE_OPT void VSingle_Cycle::_multiclk__TOP__5(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_multiclk__TOP__5\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Single_Cycle__DOT__rd_en) {
        vlTOPp->Single_Cycle__DOT__readData = vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
            [(0x1fU & (vlTOPp->Single_Cycle__DOT__ALU_result 
                       >> 2U))];
    }
    if ((0U == (IData)(vlTOPp->Single_Cycle__DOT__load))) {
        vlTOPp->Single_Cycle__DOT__DP__DOT__rdata = 
            ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)
              ? ((1U & vlTOPp->Single_Cycle__DOT__ALU_result)
                  ? ((0xffffff00U & ((- (IData)((1U 
                                                 & (vlTOPp->Single_Cycle__DOT__readData 
                                                    >> 0x1fU)))) 
                                     << 8U)) | (0xffU 
                                                & (vlTOPp->Single_Cycle__DOT__readData 
                                                   >> 0x18U)))
                  : ((0xffffff00U & ((- (IData)((1U 
                                                 & (vlTOPp->Single_Cycle__DOT__readData 
                                                    >> 0x17U)))) 
                                     << 8U)) | (0xffU 
                                                & (vlTOPp->Single_Cycle__DOT__readData 
                                                   >> 0x10U))))
              : ((1U & vlTOPp->Single_Cycle__DOT__ALU_result)
                  ? ((0xffffff00U & ((- (IData)((1U 
                                                 & (vlTOPp->Single_Cycle__DOT__readData 
                                                    >> 0xfU)))) 
                                     << 8U)) | (0xffU 
                                                & (vlTOPp->Single_Cycle__DOT__readData 
                                                   >> 8U)))
                  : ((0xffffff00U & ((- (IData)((1U 
                                                 & (vlTOPp->Single_Cycle__DOT__readData 
                                                    >> 7U)))) 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->Single_Cycle__DOT__readData))));
    } else {
        if ((1U == (IData)(vlTOPp->Single_Cycle__DOT__load))) {
            if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                    vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                        = ((0xffff0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Single_Cycle__DOT__readData 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                           | (0xffffU & (vlTOPp->Single_Cycle__DOT__readData 
                                         >> 0x10U)));
                }
            } else {
                vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                    = ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->Single_Cycle__DOT__readData 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->Single_Cycle__DOT__readData));
            }
        } else {
            if ((2U == (IData)(vlTOPp->Single_Cycle__DOT__load))) {
                vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                    = vlTOPp->Single_Cycle__DOT__readData;
            } else {
                if ((3U == (IData)(vlTOPp->Single_Cycle__DOT__load))) {
                    vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                        = ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)
                            ? ((1U & vlTOPp->Single_Cycle__DOT__ALU_result)
                                ? (0xffU & (vlTOPp->Single_Cycle__DOT__readData 
                                            >> 0x18U))
                                : (0xffU & (vlTOPp->Single_Cycle__DOT__readData 
                                            >> 0x10U)))
                            : ((1U & vlTOPp->Single_Cycle__DOT__ALU_result)
                                ? (0xffU & (vlTOPp->Single_Cycle__DOT__readData 
                                            >> 8U))
                                : (0xffU & vlTOPp->Single_Cycle__DOT__readData)));
                } else {
                    if ((4U == (IData)(vlTOPp->Single_Cycle__DOT__load))) {
                        if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                            if ((2U & vlTOPp->Single_Cycle__DOT__ALU_result)) {
                                vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                                    = (0xffffU & (vlTOPp->Single_Cycle__DOT__readData 
                                                  >> 0x10U));
                            }
                        } else {
                            vlTOPp->Single_Cycle__DOT__DP__DOT__rdata 
                                = (0xffffU & vlTOPp->Single_Cycle__DOT__readData);
                        }
                    }
                }
            }
        }
    }
}

void VSingle_Cycle::_eval(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_eval\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSingle_Cycle::_change_request(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_change_request\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSingle_Cycle::_change_request_1(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_change_request_1\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSingle_Cycle::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
