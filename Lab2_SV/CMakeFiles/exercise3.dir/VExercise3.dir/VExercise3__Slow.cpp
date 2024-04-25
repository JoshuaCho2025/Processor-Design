// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "VExercise3.h"
#include "VExercise3__Syms.h"

//==========

VL_CTOR_IMP(VExercise3) {
    VExercise3__Syms* __restrict vlSymsp = __VlSymsp = new VExercise3__Syms(this, name());
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExercise3::__Vconfigure(VExercise3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VExercise3::~VExercise3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
void VExercise3::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VExercise3::_settle__TOP__1(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_settle__TOP__1\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfffeU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((2U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfffdU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((4U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfffbU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((8U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfff7U 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x10U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xffefU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x20U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xffdfU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x40U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xffbfU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x80U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xff7fU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x100U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfeffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x100U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x200U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfdffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x200U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x400U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xfbffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x400U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x800U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xf7ffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x800U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x1000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xefffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x1000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x2000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xdfffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x2000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x4000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0xbfffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x4000U 
                                                     & (IData)(vlTOPp->out)));
    }
    if ((0x8000U & ((IData)(vlTOPp->out) ^ vlTOPp->Exercise3__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlTOPp->Exercise3__DOT____Vtogcov__out = ((0x7fffU 
                                                   & (IData)(vlTOPp->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x8000U 
                                                     & (IData)(vlTOPp->out)));
    }
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

void VExercise3::_eval_initial(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_eval_initial\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::final\n"); );
    // Variables
    VExercise3__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExercise3::_eval_settle(VExercise3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_eval_settle\n"); );
    VExercise3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VExercise3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    nReset = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(4);
    b = VL_RAND_RESET_I(16);
    c = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(16);
    Exercise3__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    Exercise3__DOT____Vtogcov__nReset = VL_RAND_RESET_I(1);
    Exercise3__DOT____Vtogcov__a = VL_RAND_RESET_I(4);
    Exercise3__DOT____Vtogcov__b = VL_RAND_RESET_I(16);
    Exercise3__DOT____Vtogcov__c = VL_RAND_RESET_I(16);
    Exercise3__DOT____Vtogcov__out = VL_RAND_RESET_I(16);
}

void VExercise3::_configure_coverage(VExercise3__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/Processor", 2, 11, ".Exercise3", "v_toggle/Exercise3", "clk", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/root/Processor", 3, 11, ".Exercise3", "v_toggle/Exercise3", "nReset", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/root/Processor", 4, 17, ".Exercise3", "v_toggle/Exercise3", "a[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/root/Processor", 4, 17, ".Exercise3", "v_toggle/Exercise3", "a[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/root/Processor", 4, 17, ".Exercise3", "v_toggle/Exercise3", "a[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/root/Processor", 4, 17, ".Exercise3", "v_toggle/Exercise3", "a[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[8]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[9]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[10]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[11]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[12]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[13]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[14]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/root/Processor", 5, 18, ".Exercise3", "v_toggle/Exercise3", "b[15]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[8]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[9]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[10]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[11]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[12]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[13]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[14]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/root/Processor", 6, 18, ".Exercise3", "v_toggle/Exercise3", "c[15]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[8]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[9]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[10]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[11]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[12]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[13]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[14]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/root/Processor", 7, 19, ".Exercise3", "v_toggle/Exercise3", "out[15]", "");
}
