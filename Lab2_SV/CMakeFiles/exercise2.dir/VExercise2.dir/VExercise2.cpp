// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "VExercise2.h"
#include "VExercise2__Syms.h"

//==========

void VExercise2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExercise2::eval\n"); );
    VExercise2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/root/Processor", 9, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExercise2::_eval_initial_loop(VExercise2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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
            VL_FATAL_MT("/root/Processor", 9, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VExercise2::_combo__TOP__2(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_combo__TOP__2\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) ^ vlTOPp->Exercise2__DOT____Vtogcov__clk)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->Exercise2__DOT____Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->nReset) ^ vlTOPp->Exercise2__DOT____Vtogcov__nReset)) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->Exercise2__DOT____Vtogcov__nReset = vlTOPp->nReset;
    }
    if ((1U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffeU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((2U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffdU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (2U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((4U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffbU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (4U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((8U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfff7U 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (8U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x10U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x10U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x20U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffdfU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x20U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x40U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffbfU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x40U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x80U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xff7fU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x80U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x100U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfeffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x100U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x200U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfdffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x200U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x400U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfbffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x400U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x800U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xf7ffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x800U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x1000U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xefffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x1000U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x2000U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xdfffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x2000U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x4000U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0xbfffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x4000U 
                                                      & (IData)(vlTOPp->init)));
    }
    if ((0x8000U & ((IData)(vlTOPp->init) ^ vlTOPp->Exercise2__DOT____Vtogcov__init))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->Exercise2__DOT____Vtogcov__init = (
                                                   (0x7fffU 
                                                    & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x8000U 
                                                      & (IData)(vlTOPp->init)));
    }
}

void VExercise2::_eval(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_eval\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VExercise2::_change_request(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_change_request\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExercise2::_change_request_1(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_change_request_1\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExercise2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
}
#endif  // VL_DEBUG
