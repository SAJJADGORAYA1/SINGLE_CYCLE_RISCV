// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingle_Cycle__Syms.h"


void VSingle_Cycle::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSingle_Cycle::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[3]),32);
            tracep->chgIData(oldp+4,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[4]),32);
            tracep->chgIData(oldp+5,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[5]),32);
            tracep->chgIData(oldp+6,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[6]),32);
            tracep->chgIData(oldp+7,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[7]),32);
            tracep->chgIData(oldp+8,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[8]),32);
            tracep->chgIData(oldp+9,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[9]),32);
            tracep->chgIData(oldp+10,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[10]),32);
            tracep->chgIData(oldp+11,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[11]),32);
            tracep->chgIData(oldp+12,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[12]),32);
            tracep->chgIData(oldp+13,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[13]),32);
            tracep->chgIData(oldp+14,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[14]),32);
            tracep->chgIData(oldp+15,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[15]),32);
            tracep->chgIData(oldp+16,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[16]),32);
            tracep->chgIData(oldp+17,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[17]),32);
            tracep->chgIData(oldp+18,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[18]),32);
            tracep->chgIData(oldp+19,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[19]),32);
            tracep->chgIData(oldp+20,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[20]),32);
            tracep->chgIData(oldp+21,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[21]),32);
            tracep->chgIData(oldp+22,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[22]),32);
            tracep->chgIData(oldp+23,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[23]),32);
            tracep->chgIData(oldp+24,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[24]),32);
            tracep->chgIData(oldp+25,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[25]),32);
            tracep->chgIData(oldp+26,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[26]),32);
            tracep->chgIData(oldp+27,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[27]),32);
            tracep->chgIData(oldp+28,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[28]),32);
            tracep->chgIData(oldp+29,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[29]),32);
            tracep->chgIData(oldp+30,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[30]),32);
            tracep->chgIData(oldp+31,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+32,(vlTOPp->Single_Cycle__DOT__Instruction),32);
            tracep->chgIData(oldp+33,(vlTOPp->Single_Cycle__DOT__ALU_result),32);
            tracep->chgIData(oldp+34,(vlTOPp->Single_Cycle__DOT__rdata2),32);
            tracep->chgCData(oldp+35,(vlTOPp->Single_Cycle__DOT__ALU_control),4);
            tracep->chgCData(oldp+36,(vlTOPp->Single_Cycle__DOT__mask),4);
            tracep->chgCData(oldp+37,(vlTOPp->Single_Cycle__DOT__br_type),3);
            tracep->chgCData(oldp+38,(vlTOPp->Single_Cycle__DOT__load),3);
            tracep->chgCData(oldp+39,(vlTOPp->Single_Cycle__DOT__wb_sel),2);
            tracep->chgCData(oldp+40,(vlTOPp->Single_Cycle__DOT__store),2);
            tracep->chgBit(oldp+41,(vlTOPp->Single_Cycle__DOT__RegWrite));
            tracep->chgBit(oldp+42,(vlTOPp->Single_Cycle__DOT__wr_en));
            tracep->chgBit(oldp+43,(vlTOPp->Single_Cycle__DOT__rd_en));
            tracep->chgBit(oldp+44,(vlTOPp->Single_Cycle__DOT__sel_A));
            tracep->chgBit(oldp+45,(vlTOPp->Single_Cycle__DOT__sel_B));
            tracep->chgIData(oldp+46,(vlTOPp->Single_Cycle__DOT__DP__DOT__PC),32);
            tracep->chgIData(oldp+47,(((1U & ((4U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                               ? ((2U 
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
                                               : ((2U 
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
                                        : ((IData)(4U) 
                                           + vlTOPp->Single_Cycle__DOT__DP__DOT__PC))),32);
            tracep->chgBit(oldp+48,((1U & ((4U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                            ? ((2U 
                                                & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                ? (IData)(vlTOPp->Single_Cycle__DOT__br_type)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                    ? 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                    >= vlTOPp->Single_Cycle__DOT__rdata2)
                                                    : 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                    < vlTOPp->Single_Cycle__DOT__rdata2)))
                                            : ((2U 
                                                & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                    ? 
                                                   VL_GTES_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2)
                                                    : 
                                                   VL_LTS_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                    ? 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                    != vlTOPp->Single_Cycle__DOT__rdata2)
                                                    : 
                                                   (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                    == vlTOPp->Single_Cycle__DOT__rdata2)))))));
            tracep->chgIData(oldp+49,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1),32);
            tracep->chgIData(oldp+50,(vlTOPp->Single_Cycle__DOT__DP__DOT__Immediate),32);
            tracep->chgIData(oldp+51,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA),32);
            tracep->chgIData(oldp+52,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB),32);
            tracep->chgCData(oldp+53,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+54,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+55,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                >> 7U))),5);
            tracep->chgIData(oldp+56,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
            tracep->chgIData(oldp+57,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
            tracep->chgIData(oldp+58,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
            tracep->chgIData(oldp+59,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
            tracep->chgIData(oldp+60,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
            tracep->chgIData(oldp+61,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
            tracep->chgIData(oldp+62,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
            tracep->chgIData(oldp+63,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
            tracep->chgIData(oldp+64,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
            tracep->chgIData(oldp+65,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
            tracep->chgIData(oldp+66,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
            tracep->chgIData(oldp+67,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
            tracep->chgIData(oldp+68,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
            tracep->chgIData(oldp+69,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
            tracep->chgIData(oldp+70,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
            tracep->chgIData(oldp+71,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
            tracep->chgIData(oldp+72,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
            tracep->chgIData(oldp+73,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
            tracep->chgIData(oldp+74,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
            tracep->chgIData(oldp+75,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
            tracep->chgIData(oldp+76,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
            tracep->chgIData(oldp+77,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
            tracep->chgIData(oldp+78,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
            tracep->chgIData(oldp+79,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
            tracep->chgIData(oldp+80,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
            tracep->chgIData(oldp+81,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
            tracep->chgIData(oldp+82,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
            tracep->chgIData(oldp+83,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
            tracep->chgIData(oldp+84,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
            tracep->chgIData(oldp+85,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
            tracep->chgIData(oldp+86,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
            tracep->chgIData(oldp+87,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
            tracep->chgCData(oldp+88,((0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)),7);
            tracep->chgCData(oldp+89,((0x7fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+90,((7U & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 0xcU))),3);
        }
        tracep->chgIData(oldp+91,(vlTOPp->y),32);
        tracep->chgBit(oldp+92,(vlTOPp->clk));
        tracep->chgBit(oldp+93,(vlTOPp->rst));
        tracep->chgIData(oldp+94,(vlTOPp->Single_Cycle__DOT__readData),32);
        tracep->chgIData(oldp+95,(((0U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                    ? ((IData)(4U) 
                                       + vlTOPp->Single_Cycle__DOT__DP__DOT__PC)
                                    : ((1U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                        ? vlTOPp->Single_Cycle__DOT__ALU_result
                                        : ((2U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                            ? vlTOPp->Single_Cycle__DOT__DP__DOT__rdata
                                            : 0U)))),32);
        tracep->chgIData(oldp+96,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdata),32);
    }
}

void VSingle_Cycle::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
