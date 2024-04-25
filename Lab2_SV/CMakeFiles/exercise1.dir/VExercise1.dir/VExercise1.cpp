// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "VExercise1.h"
#include "VExercise1__Syms.h"

//==========

void VExercise1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExercise1::eval\n"); );
    VExercise1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VExercise1::_eval_initial_loop(VExercise1__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VExercise1::_combo__TOP__2(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_combo__TOP__2\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlTOPp->op) ^ vlTOPp->Exercise1__DOT____Vtogcov__op))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->Exercise1__DOT____Vtogcov__op = ((2U 
                                                  & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__op)) 
                                                 | (1U 
                                                    & (IData)(vlTOPp->op)));
    }
    if ((2U & ((IData)(vlTOPp->op) ^ vlTOPp->Exercise1__DOT____Vtogcov__op))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->Exercise1__DOT____Vtogcov__op = ((1U 
                                                  & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__op)) 
                                                 | (2U 
                                                    & (IData)(vlTOPp->op)));
    }
    if ((1U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xfeU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((2U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xfdU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((4U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xfbU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((8U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xf7U 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((0x10U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xefU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((0x20U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xdfU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((0x40U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0xbfU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((0x80U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise1__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->Exercise1__DOT____Vtogcov__a = ((0x7fU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((1U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xfeU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((2U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xfdU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((4U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xfbU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((8U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xf7U 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x10U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xefU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x20U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xdfU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x40U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0xbfU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x80U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise1__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->Exercise1__DOT____Vtogcov__b = ((0x7fU 
                                                 & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->b)));
    }
}

void VExercise1::_eval(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_eval\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VExercise1::_change_request(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_change_request\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExercise1::_change_request_1(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_change_request_1\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExercise1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((op & 0xfcU))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
