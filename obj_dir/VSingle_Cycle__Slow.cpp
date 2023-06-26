// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "VSingle_Cycle.h"
#include "VSingle_Cycle__Syms.h"

//==========

VL_CTOR_IMP(VSingle_Cycle) {
    VSingle_Cycle__Syms* __restrict vlSymsp = __VlSymsp = new VSingle_Cycle__Syms(this, name());
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSingle_Cycle::__Vconfigure(VSingle_Cycle__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSingle_Cycle::~VSingle_Cycle() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSingle_Cycle::_initial__TOP__1(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_initial__TOP__1\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*159:0*/ __Vtemp2[5];
    WData/*127:0*/ __Vtemp3[4];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x6d6f7279U;
    __Vtemp1[2U] = 0x615f4d65U;
    __Vtemp1[3U] = 0x446174U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e6d656dU;
    __Vtemp2[1U] = 0x66696c65U;
    __Vtemp2[2U] = 0x7465725fU;
    __Vtemp2[3U] = 0x65676973U;
    __Vtemp2[4U] = 0x52U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 , vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem
                 , 0, ~0ULL);
    __Vtemp3[0U] = 0x2e747874U;
    __Vtemp3[1U] = 0x6d6f7279U;
    __Vtemp3[2U] = 0x6e5f4d65U;
    __Vtemp3[3U] = 0x49U;
    VL_READMEM_N(true, 32, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp3)
                 , vlTOPp->Single_Cycle__DOT__DP__DOT__IM__DOT__Mem
                 , 0, ~0ULL);
}

void VSingle_Cycle::_settle__TOP__4(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_settle__TOP__4\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VSingle_Cycle::_eval_initial(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_eval_initial\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSingle_Cycle::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::final\n"); );
    // Variables
    VSingle_Cycle__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSingle_Cycle::_eval_settle(VSingle_Cycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_eval_settle\n"); );
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSingle_Cycle::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle::_ctor_var_reset\n"); );
    // Body
    y = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__Instruction = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__ALU_result = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__readData = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__rdata2 = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__ALU_control = VL_RAND_RESET_I(4);
    Single_Cycle__DOT__mask = VL_RAND_RESET_I(4);
    Single_Cycle__DOT__br_type = VL_RAND_RESET_I(3);
    Single_Cycle__DOT__load = VL_RAND_RESET_I(3);
    Single_Cycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    Single_Cycle__DOT__store = VL_RAND_RESET_I(2);
    Single_Cycle__DOT__RegWrite = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__wr_en = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__rd_en = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__sel_A = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__sel_B = VL_RAND_RESET_I(1);
    Single_Cycle__DOT__DP__DOT__PC = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__PC_new = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__rdata1 = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__Immediate = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__rdataA = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__rdataB = VL_RAND_RESET_I(32);
    Single_Cycle__DOT__DP__DOT__rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            Single_Cycle__DOT__DP__DOT__IM__DOT__Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Single_Cycle__DOT__DM__DOT__Data_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
