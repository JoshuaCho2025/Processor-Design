// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "VExercise2.h"
#include "VExercise2__Syms.h"

//==========

VL_CTOR_IMP(VExercise2) {
    VExercise2__Syms* __restrict vlSymsp = __VlSymsp = new VExercise2__Syms(this, name());
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExercise2::__Vconfigure(VExercise2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VExercise2::~VExercise2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
void VExercise2::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VExercise2::_settle__TOP__1(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_settle__TOP__1\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfffeU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((2U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfffdU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((4U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfffbU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((8U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfff7U 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x10U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xffefU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x20U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xffdfU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x40U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xffbfU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x80U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xff7fU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x100U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfeffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x100U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x200U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfdffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x200U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x400U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xfbffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x400U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x800U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xf7ffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x800U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x1000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xefffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x1000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x2000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xdfffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x2000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x4000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0xbfffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x4000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x8000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise2__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlTOPp->Exercise2__DOT____Vtogcov__out = ((0x7fffU 
                                                   & (IData)(vlTOPp->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x8000U 
                                                     & (IData)(vlTOPp->out)));
    }
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

void VExercise2::_eval_initial(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_eval_initial\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::final\n"); );
    // Variables
    VExercise2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise2::_eval_settle(VExercise2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_eval_settle\n"); );
    VExercise2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VExercise2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    nReset = VL_RAND_RESET_I(1);
    init = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(16);
    Exercise2__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    Exercise2__DOT____Vtogcov__nReset = VL_RAND_RESET_I(1);
    Exercise2__DOT____Vtogcov__init = VL_RAND_RESET_I(16);
    Exercise2__DOT____Vtogcov__out = VL_RAND_RESET_I(16);
}

void VExercise2::_configure_coverage(VExercise2__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/Processor", 10, 11, ".Exercise2", "v_toggle/Exercise2", "clk", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/root/Processor", 11, 11, ".Exercise2", "v_toggle/Exercise2", "nReset", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[8]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[9]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[10]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[11]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[12]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[13]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[14]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/root/Processor", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[15]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[8]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[9]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[10]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[11]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[12]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[13]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[14]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/root/Processor", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[15]", "");
}
