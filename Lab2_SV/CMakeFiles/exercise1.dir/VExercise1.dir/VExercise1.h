// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEXERCISE1_H_
#define _VEXERCISE1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VExercise1__Syms;

//----------

VL_MODULE(VExercise1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(op,1,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_OUT8(out,7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ Exercise1__DOT____Vtogcov__op;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__a;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__b;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__out;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VExercise1__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExercise1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VExercise1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VExercise1();
    
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
    static void _eval_initial_loop(VExercise1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VExercise1__Syms* symsp, bool first);
  private:
    static QData _change_request(VExercise1__Syms* __restrict vlSymsp);
    static QData _change_request_1(VExercise1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VExercise1__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VExercise1__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VExercise1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VExercise1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VExercise1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VExercise1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
