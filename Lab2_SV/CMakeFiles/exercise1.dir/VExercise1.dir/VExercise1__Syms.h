// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXERCISE1__SYMS_H_
#define _VEXERCISE1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VExercise1.h"

// SYMS CLASS
class VExercise1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VExercise1*                    TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[26];
    
    // CREATORS
    VExercise1__Syms(VExercise1* topp, const char* namep);
    ~VExercise1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
