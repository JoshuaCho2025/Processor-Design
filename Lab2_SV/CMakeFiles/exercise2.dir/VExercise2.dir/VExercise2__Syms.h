// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXERCISE2__SYMS_H_
#define _VEXERCISE2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VExercise2.h"

// SYMS CLASS
class VExercise2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VExercise2*                    TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[34];
    
    // CREATORS
    VExercise2__Syms(VExercise2* topp, const char* namep);
    ~VExercise2__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
