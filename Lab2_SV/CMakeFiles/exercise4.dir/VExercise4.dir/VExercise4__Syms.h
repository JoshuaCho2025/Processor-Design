// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXERCISE4__SYMS_H_
#define _VEXERCISE4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VExercise4.h"

// SYMS CLASS
class VExercise4__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VExercise4*                    TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[35];
    
    // CREATORS
    VExercise4__Syms(VExercise4* topp, const char* namep);
    ~VExercise4__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
