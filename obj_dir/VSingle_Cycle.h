// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSINGLE_CYCLE_H_
#define _VSINGLE_CYCLE_H_  // guard

#include "verilated_heavy.h"

//==========

class VSingle_Cycle__Syms;
class VSingle_Cycle_VerilatedVcd;


//----------

VL_MODULE(VSingle_Cycle) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(y,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ Single_Cycle__DOT__ALU_control;
    CData/*3:0*/ Single_Cycle__DOT__mask;
    CData/*2:0*/ Single_Cycle__DOT__br_type;
    CData/*2:0*/ Single_Cycle__DOT__load;
    CData/*1:0*/ Single_Cycle__DOT__wb_sel;
    CData/*1:0*/ Single_Cycle__DOT__store;
    CData/*0:0*/ Single_Cycle__DOT__RegWrite;
    CData/*0:0*/ Single_Cycle__DOT__wr_en;
    CData/*0:0*/ Single_Cycle__DOT__rd_en;
    CData/*0:0*/ Single_Cycle__DOT__sel_A;
    CData/*0:0*/ Single_Cycle__DOT__sel_B;
    IData/*31:0*/ Single_Cycle__DOT__Instruction;
    IData/*31:0*/ Single_Cycle__DOT__ALU_result;
    IData/*31:0*/ Single_Cycle__DOT__readData;
    IData/*31:0*/ Single_Cycle__DOT__rdata2;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__PC;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__PC_new;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdata1;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__Immediate;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdataA;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdataB;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdata;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__IM__DOT__Mem[128];
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[32];
    IData/*31:0*/ Single_Cycle__DOT__DM__DOT__Data_Mem[32];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSingle_Cycle__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSingle_Cycle);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSingle_Cycle(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSingle_Cycle();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSingle_Cycle__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSingle_Cycle__Syms* symsp, bool first);
  private:
    static QData _change_request(VSingle_Cycle__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSingle_Cycle__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSingle_Cycle__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSingle_Cycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSingle_Cycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VSingle_Cycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(VSingle_Cycle__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VSingle_Cycle__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VSingle_Cycle__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VSingle_Cycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
