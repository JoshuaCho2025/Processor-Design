// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "VExercise4.h"
#include "VExercise4__Syms.h"

//==========

void VExercise4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExercise4::eval\n"); );
    VExercise4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/root/Processor", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExercise4::_eval_initial_loop(VExercise4__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/root/Processor", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VExercise4::_combo__TOP__2(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_combo__TOP__2\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->cs) ^ vlTOPp->Exercise4__DOT____Vtogcov__cs)) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->Exercise4__DOT____Vtogcov__cs = vlTOPp->cs;
    }
    if ((1U & ((IData)(vlTOPp->sel) ^ vlTOPp->Exercise4__DOT____Vtogcov__sel))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->Exercise4__DOT____Vtogcov__sel = ((2U 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__sel)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->sel)));
    }
    if ((2U & ((IData)(vlTOPp->sel) ^ vlTOPp->Exercise4__DOT____Vtogcov__sel))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->Exercise4__DOT____Vtogcov__sel = ((1U 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__sel)) 
                                                  | (2U 
                                                     & (IData)(vlTOPp->sel)));
    }
    if ((1U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfeU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (1U & (IData)(vlTOPp->alpha)));
    }
    if ((2U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfdU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (2U & (IData)(vlTOPp->alpha)));
    }
    if ((4U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfbU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (4U & (IData)(vlTOPp->alpha)));
    }
    if ((8U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xf7U & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (8U & (IData)(vlTOPp->alpha)));
    }
    if ((0x10U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xefU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x10U & (IData)(vlTOPp->alpha)));
    }
    if ((0x20U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xdfU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x20U & (IData)(vlTOPp->alpha)));
    }
    if ((0x40U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0xbfU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x40U & (IData)(vlTOPp->alpha)));
    }
    if ((0x80U & ((IData)(vlTOPp->alpha) ^ vlTOPp->Exercise4__DOT____Vtogcov__alpha))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->Exercise4__DOT____Vtogcov__alpha = 
            ((0x7fU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x80U & (IData)(vlTOPp->alpha)));
    }
    if ((1U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfeU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((2U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfdU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (2U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((4U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfbU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (4U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((8U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xf7U 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (8U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((0x10U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xefU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x10U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((0x20U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xdfU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x20U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((0x40U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xbfU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x40U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((0x80U & ((IData)(vlTOPp->beta) ^ vlTOPp->Exercise4__DOT____Vtogcov__beta))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->Exercise4__DOT____Vtogcov__beta = (
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x80U 
                                                      & (IData)(vlTOPp->beta)));
    }
    if ((1U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfeU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (1U & (IData)(vlTOPp->gamma)));
    }
    if ((2U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfdU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (2U & (IData)(vlTOPp->gamma)));
    }
    if ((4U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfbU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (4U & (IData)(vlTOPp->gamma)));
    }
    if ((8U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xf7U & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (8U & (IData)(vlTOPp->gamma)));
    }
    if ((0x10U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xefU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x10U & (IData)(vlTOPp->gamma)));
    }
    if ((0x20U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xdfU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x20U & (IData)(vlTOPp->gamma)));
    }
    if ((0x40U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0xbfU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x40U & (IData)(vlTOPp->gamma)));
    }
    if ((0x80U & ((IData)(vlTOPp->gamma) ^ vlTOPp->Exercise4__DOT____Vtogcov__gamma))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlTOPp->Exercise4__DOT____Vtogcov__gamma = 
            ((0x7fU & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x80U & (IData)(vlTOPp->gamma)));
    }
}

void VExercise4::_eval(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_eval\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VExercise4::_change_request(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_change_request\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExercise4::_change_request_1(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_change_request_1\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExercise4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
}
#endif  // VL_DEBUG
