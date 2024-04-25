// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "VExercise1.h"
#include "VExercise1__Syms.h"

//==========

VL_CTOR_IMP(VExercise1) {
    VExercise1__Syms* __restrict vlSymsp = __VlSymsp = new VExercise1__Syms(this, name());
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExercise1::__Vconfigure(VExercise1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VExercise1::~VExercise1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
void VExercise1::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VExercise1::_settle__TOP__1(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_settle__TOP__1\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xfeU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((2U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xfdU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((4U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xfbU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((8U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xf7U 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x10U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xefU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x20U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xdfU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x40U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0xbfU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x80U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise1__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->Exercise1__DOT____Vtogcov__out = ((0x7fU 
                                                   & (IData)(vlTOPp->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlTOPp->out)));
    }
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

void VExercise1::_eval_initial(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_eval_initial\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::final\n"); );
    // Variables
    VExercise1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise1::_eval_settle(VExercise1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_eval_settle\n"); );
    VExercise1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VExercise1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_ctor_var_reset\n"); );
    // Body
    op = VL_RAND_RESET_I(2);
    a = VL_RAND_RESET_I(8);
    b = VL_RAND_RESET_I(8);
    out = VL_RAND_RESET_I(8);
    Exercise1__DOT____Vtogcov__op = VL_RAND_RESET_I(2);
    Exercise1__DOT____Vtogcov__a = VL_RAND_RESET_I(8);
    Exercise1__DOT____Vtogcov__b = VL_RAND_RESET_I(8);
    Exercise1__DOT____Vtogcov__out = VL_RAND_RESET_I(8);
}

void VExercise1::_configure_coverage(VExercise1__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/Processor", 10, 18, ".Exercise1", "v_toggle/Exercise1", "op[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/root/Processor", 10, 18, ".Exercise1", "v_toggle/Exercise1", "op[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/root/Processor", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/root/Processor", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/root/Processor", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[7]", "");
}
