// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingle_Cycle__Syms.h"


//======================

void VSingle_Cycle::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSingle_Cycle::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSingle_Cycle::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSingle_Cycle::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSingle_Cycle::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+92,"y", false,-1, 31,0);
        tracep->declBit(c+93,"clk", false,-1);
        tracep->declBit(c+94,"rst", false,-1);
        tracep->declBus(c+92,"Single_Cycle y", false,-1, 31,0);
        tracep->declBit(c+93,"Single_Cycle clk", false,-1);
        tracep->declBit(c+94,"Single_Cycle rst", false,-1);
        tracep->declBus(c+33,"Single_Cycle Instruction", false,-1, 31,0);
        tracep->declBus(c+34,"Single_Cycle ALU_result", false,-1, 31,0);
        tracep->declBus(c+95,"Single_Cycle readData", false,-1, 31,0);
        tracep->declBus(c+35,"Single_Cycle rdata2", false,-1, 31,0);
        tracep->declBus(c+36,"Single_Cycle ALU_control", false,-1, 3,0);
        tracep->declBus(c+37,"Single_Cycle mask", false,-1, 3,0);
        tracep->declBus(c+38,"Single_Cycle br_type", false,-1, 2,0);
        tracep->declBus(c+39,"Single_Cycle load", false,-1, 2,0);
        tracep->declBus(c+40,"Single_Cycle wb_sel", false,-1, 1,0);
        tracep->declBus(c+41,"Single_Cycle store", false,-1, 1,0);
        tracep->declBit(c+42,"Single_Cycle RegWrite", false,-1);
        tracep->declBit(c+43,"Single_Cycle wr_en", false,-1);
        tracep->declBit(c+44,"Single_Cycle rd_en", false,-1);
        tracep->declBit(c+45,"Single_Cycle sel_A", false,-1);
        tracep->declBit(c+46,"Single_Cycle sel_B", false,-1);
        tracep->declBit(c+98,"Single_Cycle cs", false,-1);
        tracep->declBus(c+34,"Single_Cycle DP ALU_result", false,-1, 31,0);
        tracep->declBus(c+33,"Single_Cycle DP Instruction", false,-1, 31,0);
        tracep->declBus(c+35,"Single_Cycle DP rdata2", false,-1, 31,0);
        tracep->declBus(c+37,"Single_Cycle DP mask", false,-1, 3,0);
        tracep->declBit(c+98,"Single_Cycle DP cs", false,-1);
        tracep->declBus(c+95,"Single_Cycle DP readData", false,-1, 31,0);
        tracep->declBus(c+36,"Single_Cycle DP ALU_control", false,-1, 3,0);
        tracep->declBus(c+38,"Single_Cycle DP br_type", false,-1, 2,0);
        tracep->declBus(c+39,"Single_Cycle DP load", false,-1, 2,0);
        tracep->declBus(c+40,"Single_Cycle DP wb_sel", false,-1, 1,0);
        tracep->declBus(c+41,"Single_Cycle DP store", false,-1, 1,0);
        tracep->declBit(c+42,"Single_Cycle DP RegWrite", false,-1);
        tracep->declBit(c+45,"Single_Cycle DP sel_A", false,-1);
        tracep->declBit(c+46,"Single_Cycle DP sel_B", false,-1);
        tracep->declBit(c+93,"Single_Cycle DP clk", false,-1);
        tracep->declBit(c+94,"Single_Cycle DP rst", false,-1);
        tracep->declBus(c+47,"Single_Cycle DP PC", false,-1, 31,0);
        tracep->declBus(c+48,"Single_Cycle DP PC_new", false,-1, 31,0);
        tracep->declBit(c+49,"Single_Cycle DP br_taken", false,-1);
        tracep->declBus(c+50,"Single_Cycle DP rdata1", false,-1, 31,0);
        tracep->declBus(c+96,"Single_Cycle DP wdata", false,-1, 31,0);
        tracep->declBus(c+51,"Single_Cycle DP Immediate", false,-1, 31,0);
        tracep->declBus(c+52,"Single_Cycle DP rdataA", false,-1, 31,0);
        tracep->declBus(c+53,"Single_Cycle DP rdataB", false,-1, 31,0);
        tracep->declBus(c+97,"Single_Cycle DP rdata", false,-1, 31,0);
        tracep->declBus(c+47,"Single_Cycle DP IM PC", false,-1, 31,0);
        tracep->declBus(c+33,"Single_Cycle DP IM Instruction", false,-1, 31,0);
        tracep->declBus(c+96,"Single_Cycle DP RF wdata", false,-1, 31,0);
        tracep->declBus(c+54,"Single_Cycle DP RF raddr1", false,-1, 4,0);
        tracep->declBus(c+55,"Single_Cycle DP RF raddr2", false,-1, 4,0);
        tracep->declBus(c+56,"Single_Cycle DP RF waddr", false,-1, 4,0);
        tracep->declBit(c+42,"Single_Cycle DP RF RegWrite", false,-1);
        tracep->declBit(c+93,"Single_Cycle DP RF clk", false,-1);
        tracep->declBit(c+94,"Single_Cycle DP RF rst", false,-1);
        tracep->declBus(c+50,"Single_Cycle DP RF rdata1", false,-1, 31,0);
        tracep->declBus(c+35,"Single_Cycle DP RF rdata2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+57+i*1,"Single_Cycle DP RF Reg_Mem", true,(i+0), 31,0);}}
        tracep->declBus(c+33,"Single_Cycle DP IG Instruction", false,-1, 31,0);
        tracep->declBus(c+51,"Single_Cycle DP IG Immediate", false,-1, 31,0);
        tracep->declBus(c+52,"Single_Cycle DP AU rdataA", false,-1, 31,0);
        tracep->declBus(c+53,"Single_Cycle DP AU rdataB", false,-1, 31,0);
        tracep->declBus(c+36,"Single_Cycle DP AU ALU_control", false,-1, 3,0);
        tracep->declBus(c+34,"Single_Cycle DP AU ALU_result", false,-1, 31,0);
        tracep->declBus(c+50,"Single_Cycle DP BC rdata1", false,-1, 31,0);
        tracep->declBus(c+35,"Single_Cycle DP BC rdata2", false,-1, 31,0);
        tracep->declBus(c+38,"Single_Cycle DP BC br_type", false,-1, 2,0);
        tracep->declBit(c+49,"Single_Cycle DP BC br_taken", false,-1);
        tracep->declBus(c+97,"Single_Cycle DP LSU rdata", false,-1, 31,0);
        tracep->declBus(c+37,"Single_Cycle DP LSU mask", false,-1, 3,0);
        tracep->declBit(c+98,"Single_Cycle DP LSU cs", false,-1);
        tracep->declBus(c+95,"Single_Cycle DP LSU readData", false,-1, 31,0);
        tracep->declBus(c+34,"Single_Cycle DP LSU ALU_result", false,-1, 31,0);
        tracep->declBus(c+39,"Single_Cycle DP LSU load", false,-1, 2,0);
        tracep->declBus(c+41,"Single_Cycle DP LSU store", false,-1, 1,0);
        tracep->declBus(c+89,"Single_Cycle CU opcode", false,-1, 6,0);
        tracep->declBus(c+90,"Single_Cycle CU func7", false,-1, 6,0);
        tracep->declBus(c+91,"Single_Cycle CU func3", false,-1, 2,0);
        tracep->declBus(c+36,"Single_Cycle CU ALU_control", false,-1, 3,0);
        tracep->declBus(c+38,"Single_Cycle CU br_type", false,-1, 2,0);
        tracep->declBus(c+39,"Single_Cycle CU load", false,-1, 2,0);
        tracep->declBus(c+40,"Single_Cycle CU wb_sel", false,-1, 1,0);
        tracep->declBus(c+41,"Single_Cycle CU store", false,-1, 1,0);
        tracep->declBit(c+42,"Single_Cycle CU RegWrite", false,-1);
        tracep->declBit(c+43,"Single_Cycle CU wr_en", false,-1);
        tracep->declBit(c+44,"Single_Cycle CU rd_en", false,-1);
        tracep->declBit(c+45,"Single_Cycle CU sel_A", false,-1);
        tracep->declBit(c+46,"Single_Cycle CU sel_B", false,-1);
        tracep->declBus(c+99,"Single_Cycle CU R_opcode", false,-1, 6,0);
        tracep->declBus(c+100,"Single_Cycle CU I_opcode", false,-1, 6,0);
        tracep->declBus(c+101,"Single_Cycle CU IL_opcode", false,-1, 6,0);
        tracep->declBus(c+102,"Single_Cycle CU S_opcode", false,-1, 6,0);
        tracep->declBus(c+103,"Single_Cycle CU B_opcode", false,-1, 6,0);
        tracep->declBus(c+104,"Single_Cycle CU J_opcode", false,-1, 6,0);
        tracep->declBus(c+105,"Single_Cycle CU JR_opcode", false,-1, 6,0);
        tracep->declBus(c+106,"Single_Cycle CU U_opcode", false,-1, 6,0);
        tracep->declBus(c+107,"Single_Cycle CU AU_opcode", false,-1, 6,0);
        tracep->declBus(c+108,"Single_Cycle CU func", false,-1, 6,0);
        tracep->declBus(c+95,"Single_Cycle DM readData", false,-1, 31,0);
        tracep->declBus(c+34,"Single_Cycle DM ALU_result", false,-1, 31,0);
        tracep->declBus(c+35,"Single_Cycle DM rdata2", false,-1, 31,0);
        tracep->declBus(c+37,"Single_Cycle DM mask", false,-1, 3,0);
        tracep->declBit(c+43,"Single_Cycle DM wr_en", false,-1);
        tracep->declBit(c+44,"Single_Cycle DM rd_en", false,-1);
        tracep->declBit(c+98,"Single_Cycle DM cs", false,-1);
        tracep->declBit(c+93,"Single_Cycle DM clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1+i*1,"Single_Cycle DM Data_Mem", true,(i+0), 31,0);}}
    }
}

void VSingle_Cycle::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSingle_Cycle::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSingle_Cycle::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSingle_Cycle__Syms* __restrict vlSymsp = static_cast<VSingle_Cycle__Syms*>(userp);
    VSingle_Cycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[0]),32);
        tracep->fullIData(oldp+2,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[1]),32);
        tracep->fullIData(oldp+3,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[2]),32);
        tracep->fullIData(oldp+4,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[3]),32);
        tracep->fullIData(oldp+5,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[4]),32);
        tracep->fullIData(oldp+6,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[5]),32);
        tracep->fullIData(oldp+7,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[6]),32);
        tracep->fullIData(oldp+8,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[7]),32);
        tracep->fullIData(oldp+9,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[8]),32);
        tracep->fullIData(oldp+10,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[9]),32);
        tracep->fullIData(oldp+11,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[10]),32);
        tracep->fullIData(oldp+12,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[11]),32);
        tracep->fullIData(oldp+13,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[12]),32);
        tracep->fullIData(oldp+14,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[13]),32);
        tracep->fullIData(oldp+15,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[14]),32);
        tracep->fullIData(oldp+16,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[15]),32);
        tracep->fullIData(oldp+17,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[16]),32);
        tracep->fullIData(oldp+18,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[17]),32);
        tracep->fullIData(oldp+19,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[18]),32);
        tracep->fullIData(oldp+20,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[19]),32);
        tracep->fullIData(oldp+21,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[20]),32);
        tracep->fullIData(oldp+22,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[21]),32);
        tracep->fullIData(oldp+23,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[22]),32);
        tracep->fullIData(oldp+24,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[23]),32);
        tracep->fullIData(oldp+25,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[24]),32);
        tracep->fullIData(oldp+26,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[25]),32);
        tracep->fullIData(oldp+27,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[26]),32);
        tracep->fullIData(oldp+28,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[27]),32);
        tracep->fullIData(oldp+29,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[28]),32);
        tracep->fullIData(oldp+30,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[29]),32);
        tracep->fullIData(oldp+31,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[30]),32);
        tracep->fullIData(oldp+32,(vlTOPp->Single_Cycle__DOT__DM__DOT__Data_Mem[31]),32);
        tracep->fullIData(oldp+33,(vlTOPp->Single_Cycle__DOT__Instruction),32);
        tracep->fullIData(oldp+34,(vlTOPp->Single_Cycle__DOT__ALU_result),32);
        tracep->fullIData(oldp+35,(vlTOPp->Single_Cycle__DOT__rdata2),32);
        tracep->fullCData(oldp+36,(vlTOPp->Single_Cycle__DOT__ALU_control),4);
        tracep->fullCData(oldp+37,(vlTOPp->Single_Cycle__DOT__mask),4);
        tracep->fullCData(oldp+38,(vlTOPp->Single_Cycle__DOT__br_type),3);
        tracep->fullCData(oldp+39,(vlTOPp->Single_Cycle__DOT__load),3);
        tracep->fullCData(oldp+40,(vlTOPp->Single_Cycle__DOT__wb_sel),2);
        tracep->fullCData(oldp+41,(vlTOPp->Single_Cycle__DOT__store),2);
        tracep->fullBit(oldp+42,(vlTOPp->Single_Cycle__DOT__RegWrite));
        tracep->fullBit(oldp+43,(vlTOPp->Single_Cycle__DOT__wr_en));
        tracep->fullBit(oldp+44,(vlTOPp->Single_Cycle__DOT__rd_en));
        tracep->fullBit(oldp+45,(vlTOPp->Single_Cycle__DOT__sel_A));
        tracep->fullBit(oldp+46,(vlTOPp->Single_Cycle__DOT__sel_B));
        tracep->fullIData(oldp+47,(vlTOPp->Single_Cycle__DOT__DP__DOT__PC),32);
        tracep->fullIData(oldp+48,(((1U & ((4U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
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
                                                    == vlTOPp->Single_Cycle__DOT__rdata2)))))
                                     ? vlTOPp->Single_Cycle__DOT__ALU_result
                                     : ((IData)(4U) 
                                        + vlTOPp->Single_Cycle__DOT__DP__DOT__PC))),32);
        tracep->fullBit(oldp+49,((1U & ((4U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                         ? ((2U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                             ? (IData)(vlTOPp->Single_Cycle__DOT__br_type)
                                             : ((1U 
                                                 & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                 ? 
                                                (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 >= vlTOPp->Single_Cycle__DOT__rdata2)
                                                 : 
                                                (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 < vlTOPp->Single_Cycle__DOT__rdata2)))
                                         : ((2U & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                 ? 
                                                VL_GTES_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2)
                                                 : 
                                                VL_LTS_III(1,32,32, vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1, vlTOPp->Single_Cycle__DOT__rdata2))
                                             : ((1U 
                                                 & (IData)(vlTOPp->Single_Cycle__DOT__br_type))
                                                 ? 
                                                (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 != vlTOPp->Single_Cycle__DOT__rdata2)
                                                 : 
                                                (vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 == vlTOPp->Single_Cycle__DOT__rdata2)))))));
        tracep->fullIData(oldp+50,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdata1),32);
        tracep->fullIData(oldp+51,(vlTOPp->Single_Cycle__DOT__DP__DOT__Immediate),32);
        tracep->fullIData(oldp+52,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdataA),32);
        tracep->fullIData(oldp+53,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdataB),32);
        tracep->fullCData(oldp+54,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+55,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+56,((0x1fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 7U))),5);
        tracep->fullIData(oldp+57,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
        tracep->fullIData(oldp+58,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
        tracep->fullIData(oldp+59,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
        tracep->fullIData(oldp+60,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
        tracep->fullIData(oldp+61,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
        tracep->fullIData(oldp+62,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
        tracep->fullIData(oldp+63,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
        tracep->fullIData(oldp+64,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
        tracep->fullIData(oldp+65,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
        tracep->fullIData(oldp+66,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
        tracep->fullIData(oldp+67,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
        tracep->fullIData(oldp+68,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
        tracep->fullIData(oldp+69,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
        tracep->fullIData(oldp+70,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
        tracep->fullIData(oldp+71,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
        tracep->fullIData(oldp+72,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
        tracep->fullIData(oldp+73,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
        tracep->fullIData(oldp+74,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
        tracep->fullIData(oldp+75,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
        tracep->fullIData(oldp+76,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
        tracep->fullIData(oldp+77,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
        tracep->fullIData(oldp+78,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
        tracep->fullIData(oldp+79,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
        tracep->fullIData(oldp+80,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
        tracep->fullIData(oldp+81,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
        tracep->fullIData(oldp+82,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
        tracep->fullIData(oldp+83,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
        tracep->fullIData(oldp+84,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
        tracep->fullIData(oldp+85,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
        tracep->fullIData(oldp+86,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
        tracep->fullIData(oldp+87,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
        tracep->fullIData(oldp+88,(vlTOPp->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
        tracep->fullCData(oldp+89,((0x7fU & vlTOPp->Single_Cycle__DOT__Instruction)),7);
        tracep->fullCData(oldp+90,((0x7fU & (vlTOPp->Single_Cycle__DOT__Instruction 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+91,((7U & (vlTOPp->Single_Cycle__DOT__Instruction 
                                          >> 0xcU))),3);
        tracep->fullIData(oldp+92,(vlTOPp->y),32);
        tracep->fullBit(oldp+93,(vlTOPp->clk));
        tracep->fullBit(oldp+94,(vlTOPp->rst));
        tracep->fullIData(oldp+95,(vlTOPp->Single_Cycle__DOT__readData),32);
        tracep->fullIData(oldp+96,(((0U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                     ? ((IData)(4U) 
                                        + vlTOPp->Single_Cycle__DOT__DP__DOT__PC)
                                     : ((1U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                         ? vlTOPp->Single_Cycle__DOT__ALU_result
                                         : ((2U == (IData)(vlTOPp->Single_Cycle__DOT__wb_sel))
                                             ? vlTOPp->Single_Cycle__DOT__DP__DOT__rdata
                                             : 0U)))),32);
        tracep->fullIData(oldp+97,(vlTOPp->Single_Cycle__DOT__DP__DOT__rdata),32);
        tracep->fullBit(oldp+98,(0U));
        tracep->fullCData(oldp+99,(0x33U),7);
        tracep->fullCData(oldp+100,(0x13U),7);
        tracep->fullCData(oldp+101,(3U),7);
        tracep->fullCData(oldp+102,(0x23U),7);
        tracep->fullCData(oldp+103,(0x63U),7);
        tracep->fullCData(oldp+104,(0x6fU),7);
        tracep->fullCData(oldp+105,(0x67U),7);
        tracep->fullCData(oldp+106,(0x37U),7);
        tracep->fullCData(oldp+107,(0x17U),7);
        tracep->fullCData(oldp+108,(0x20U),7);
    }
}
