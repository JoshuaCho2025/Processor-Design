// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "VExercise4.h"
#include "VExercise4__Syms.h"

//==========

VL_CTOR_IMP(VExercise4) {
    VExercise4__Syms* __restrict vlSymsp = __VlSymsp = new VExercise4__Syms(this, name());
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExercise4::__Vconfigure(VExercise4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VExercise4::~VExercise4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
void VExercise4::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VExercise4::_settle__TOP__1(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_settle__TOP__1\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xfeU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((2U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xfdU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((4U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xfbU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((8U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xf7U 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x10U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xefU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x20U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xdfU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x40U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0xbfU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x80U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise4__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlTOPp->Exercise4__DOT____Vtogcov__out = ((0x7fU 
                                                   & (IData)(vlTOPp->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlTOPp->out)));
    }
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

void VExercise4::_eval_initial(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_eval_initial\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::final\n"); );
    // Variables
    VExercise4__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise4::_eval_settle(VExercise4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_eval_settle\n"); );
    VExercise4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VExercise4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_ctor_var_reset\n"); );
    // Body
    sel = VL_RAND_RESET_I(2);
    cs = VL_RAND_RESET_I(1);
    alpha = VL_RAND_RESET_I(8);
    beta = VL_RAND_RESET_I(8);
    gamma = VL_RAND_RESET_I(8);
    out = VL_RAND_RESET_I(8);
    Exercise4__DOT____Vtogcov__sel = VL_RAND_RESET_I(2);
    Exercise4__DOT____Vtogcov__cs = VL_RAND_RESET_I(1);
    Exercise4__DOT____Vtogcov__alpha = VL_RAND_RESET_I(8);
    Exercise4__DOT____Vtogcov__beta = VL_RAND_RESET_I(8);
    Exercise4__DOT____Vtogcov__gamma = VL_RAND_RESET_I(8);
    Exercise4__DOT____Vtogcov__out = VL_RAND_RESET_I(8);
}

void VExercise4::_configure_coverage(VExercise4__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/Processor", 14, 17, ".Exercise4", "v_toggle/Exercise4", "sel[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/root/Processor", 14, 17, ".Exercise4", "v_toggle/Exercise4", "sel[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/root/Processor", 15, 11, ".Exercise4", "v_toggle/Exercise4", "cs", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/root/Processor", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/root/Processor", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/root/Processor", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/root/Processor", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[7]", "");
}
