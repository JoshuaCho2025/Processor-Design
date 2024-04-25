// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "VExercise3.h"
#include "VExercise3__Syms.h"

//==========

void VExercise3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExercise3::eval\n"); );
    VExercise3__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/root/Processor", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExercise3::_eval_initial_loop(VExercise3__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/root/Processor", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VExercise3::_combo__TOP__2(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_combo__TOP__2\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) ^ vlTOPp->Exercise3__DOT____Vtogcov__clk)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->Exercise3__DOT____Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->nReset) ^ vlTOPp->Exercise3__DOT____Vtogcov__nReset)) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->Exercise3__DOT____Vtogcov__nReset = vlTOPp->nReset;
    }
    if ((1U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise3__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->Exercise3__DOT____Vtogcov__a = ((0xeU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__a)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((2U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise3__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->Exercise3__DOT____Vtogcov__a = ((0xdU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__a)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((4U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise3__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->Exercise3__DOT____Vtogcov__a = ((0xbU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__a)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((8U & ((IData)(vlTOPp->a) ^ vlTOPp->Exercise3__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->Exercise3__DOT____Vtogcov__a = ((7U 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__a)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->a)));
    }
    if ((1U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfffeU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((2U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfffdU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((4U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfffbU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((8U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfff7U 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x10U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xffefU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x20U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xffdfU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x40U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xffbfU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x80U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xff7fU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x100U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfeffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x100U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x200U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfdffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x200U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x400U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xfbffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x400U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x800U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xf7ffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x800U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x1000U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xefffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x1000U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x2000U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xdfffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x2000U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x4000U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0xbfffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x4000U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((0x8000U & ((IData)(vlTOPp->b) ^ vlTOPp->Exercise3__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->Exercise3__DOT____Vtogcov__b = ((0x7fffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x8000U 
                                                   & (IData)(vlTOPp->b)));
    }
    if ((1U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfffeU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((2U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfffdU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((4U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfffbU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((8U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfff7U 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x10U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xffefU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x20U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xffdfU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x40U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xffbfU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x80U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xff7fU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x100U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfeffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x100U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x200U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfdffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x200U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x400U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xfbffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x400U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x800U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xf7ffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x800U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x1000U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xefffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x1000U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x2000U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xdfffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x2000U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x4000U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0xbfffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x4000U 
                                                   & (IData)(vlTOPp->c)));
    }
    if ((0x8000U & ((IData)(vlTOPp->c) ^ vlTOPp->Exercise3__DOT____Vtogcov__c))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlTOPp->Exercise3__DOT____Vtogcov__c = ((0x7fffU 
                                                 & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x8000U 
                                                   & (IData)(vlTOPp->c)));
    }
}

void VExercise3::_eval(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_eval\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VExercise3::_change_request(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_change_request\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExercise3::_change_request_1(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_change_request_1\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExercise3::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((nReset & 0xfeU))) {
        Verilated::overWidthError("nReset");}
    if (VL_UNLIKELY((a & 0xf0U))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
