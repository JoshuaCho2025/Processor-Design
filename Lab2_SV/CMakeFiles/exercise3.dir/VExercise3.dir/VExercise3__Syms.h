// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXERCISE3__SYMS_H_
#define _VEXERCISE3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VExercise3.h"

// SYMS CLASS
class VExercise3__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VExercise3*                    TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[54];
    
    // CREATORS
    VExercise3__Syms(VExercise3* topp, const char* namep);
    ~VExercise3__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
