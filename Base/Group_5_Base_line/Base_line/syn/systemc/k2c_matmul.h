// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_matmul_HH_
#define _k2c_matmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sample0_fadd_32nscud.h"
#include "sample0_fmul_32nsdEe.h"
#include "sample0_mul_64s_6bkb.h"
#include "sample0_mul_mul_1eOg.h"
#include "sample0_mul_mul_1fYi.h"
#include "sample0_mac_muladg8j.h"

namespace ap_rtl {

struct k2c_matmul : public sc_module {
    // Port declarations 21
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > C_address0;
    sc_out< sc_logic > C_ce0;
    sc_out< sc_logic > C_we0;
    sc_out< sc_lv<32> > C_d0;
    sc_in< sc_lv<32> > C_q0;
    sc_out< sc_lv<12> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<12> > A_address1;
    sc_out< sc_logic > A_ce1;
    sc_in< sc_lv<32> > A_q1;
    sc_in< sc_lv<64> > B_offset;
    sc_in< sc_lv<64> > outrows;
    sc_in< sc_lv<64> > outcols;
    sc_in< sc_lv<64> > innerdim;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_matmul(sc_module_name name);
    SC_HAS_PROCESS(k2c_matmul);

    ~k2c_matmul();

    sc_trace_file* mVcdFile;

    sample0_fadd_32nscud<1,9,32,32,32>* sample0_fadd_32nscud_U6;
    sample0_fmul_32nsdEe<1,5,32,32,32>* sample0_fmul_32nsdEe_U7;
    sample0_mul_64s_6bkb<1,6,64,64,64>* sample0_mul_64s_6bkb_U8;
    sample0_mul_mul_1eOg<1,3,15,15,15>* sample0_mul_mul_1eOg_U9;
    sample0_mul_mul_1fYi<1,3,13,13,13>* sample0_mul_mul_1fYi_U10;
    sample0_mac_muladg8j<1,3,13,13,13,13>* sample0_mac_muladg8j_U11;
    sc_signal< sc_lv<31> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > grp_fu_145_p2;
    sc_signal< sc_lv<64> > total_ele_reg_302;
    sc_signal< sc_lv<14> > i_2_fu_161_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<15> > tmp_31_fu_167_p1;
    sc_signal< sc_lv<15> > tmp_31_reg_315;
    sc_signal< sc_lv<1> > exitcond3_fu_156_p2;
    sc_signal< sc_lv<13> > tmp_32_fu_170_p1;
    sc_signal< sc_lv<13> > tmp_32_reg_320;
    sc_signal< sc_lv<13> > tmp_33_fu_173_p1;
    sc_signal< sc_lv<13> > tmp_33_reg_325;
    sc_signal< sc_lv<13> > tmp_34_fu_176_p1;
    sc_signal< sc_lv<13> > tmp_34_reg_330;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > i_3_fu_192_p2;
    sc_signal< sc_lv<64> > i_3_reg_348;
    sc_signal< sc_lv<15> > grp_fu_261_p2;
    sc_signal< sc_lv<15> > outrowidx_reg_353;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<13> > grp_fu_266_p2;
    sc_signal< sc_lv<13> > inneridx_reg_358;
    sc_signal< sc_lv<13> > tmp_37_fu_198_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > k_1_fu_207_p2;
    sc_signal< sc_lv<64> > k_1_reg_371;
    sc_signal< sc_lv<12> > B_addr_reg_376;
    sc_signal< sc_lv<1> > exitcond1_fu_202_p2;
    sc_signal< sc_lv<13> > grp_fu_271_p3;
    sc_signal< sc_lv<13> > tmp_reg_381;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > j_1_fu_236_p2;
    sc_signal< sc_lv<64> > j_1_reg_389;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<13> > sum3_fu_242_p2;
    sc_signal< sc_lv<13> > sum3_reg_394;
    sc_signal< sc_lv<1> > exitcond_fu_231_p2;
    sc_signal< sc_lv<14> > C_addr_4_reg_399;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > B_load_4_reg_409;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > B_load_reg_414;
    sc_signal< sc_lv<32> > grp_fu_141_p2;
    sc_signal< sc_lv<32> > tmp_18_reg_419;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<32> > C_load_reg_424;
    sc_signal< sc_lv<32> > grp_fu_137_p2;
    sc_signal< sc_lv<32> > tmp_20_reg_429;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<14> > i_reg_93;
    sc_signal< sc_lv<64> > i_1_reg_104;
    sc_signal< sc_lv<64> > k_reg_115;
    sc_signal< sc_lv<64> > j_reg_126;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<64> > i_cast_fu_151_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_218_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_252_p1;
    sc_signal< sc_lv<64> > sum3_cast_fu_257_p1;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > tmp_31_fu_167_p0;
    sc_signal< sc_lv<64> > tmp_33_fu_173_p0;
    sc_signal< sc_lv<64> > exitcond2_fu_187_p1;
    sc_signal< sc_lv<13> > sum_fu_213_p2;
    sc_signal< sc_lv<64> > exitcond_fu_231_p1;
    sc_signal< sc_lv<13> > tmp_39_fu_227_p1;
    sc_signal< sc_lv<15> > tmp_38_fu_223_p1;
    sc_signal< sc_lv<15> > sum2_fu_247_p2;
    sc_signal< sc_lv<15> > grp_fu_261_p0;
    sc_signal< sc_lv<13> > grp_fu_266_p0;
    sc_signal< sc_lv<1> > exitcond2_fu_187_p2;
    sc_signal< sc_lv<31> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<31> ap_ST_fsm_state1;
    static const sc_lv<31> ap_ST_fsm_state2;
    static const sc_lv<31> ap_ST_fsm_state3;
    static const sc_lv<31> ap_ST_fsm_state4;
    static const sc_lv<31> ap_ST_fsm_state5;
    static const sc_lv<31> ap_ST_fsm_state6;
    static const sc_lv<31> ap_ST_fsm_state7;
    static const sc_lv<31> ap_ST_fsm_state8;
    static const sc_lv<31> ap_ST_fsm_state9;
    static const sc_lv<31> ap_ST_fsm_state10;
    static const sc_lv<31> ap_ST_fsm_state11;
    static const sc_lv<31> ap_ST_fsm_state12;
    static const sc_lv<31> ap_ST_fsm_state13;
    static const sc_lv<31> ap_ST_fsm_state14;
    static const sc_lv<31> ap_ST_fsm_state15;
    static const sc_lv<31> ap_ST_fsm_state16;
    static const sc_lv<31> ap_ST_fsm_state17;
    static const sc_lv<31> ap_ST_fsm_state18;
    static const sc_lv<31> ap_ST_fsm_state19;
    static const sc_lv<31> ap_ST_fsm_state20;
    static const sc_lv<31> ap_ST_fsm_state21;
    static const sc_lv<31> ap_ST_fsm_state22;
    static const sc_lv<31> ap_ST_fsm_state23;
    static const sc_lv<31> ap_ST_fsm_state24;
    static const sc_lv<31> ap_ST_fsm_state25;
    static const sc_lv<31> ap_ST_fsm_state26;
    static const sc_lv<31> ap_ST_fsm_state27;
    static const sc_lv<31> ap_ST_fsm_state28;
    static const sc_lv<31> ap_ST_fsm_state29;
    static const sc_lv<31> ap_ST_fsm_state30;
    static const sc_lv<31> ap_ST_fsm_state31;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_C_address0();
    void thread_C_ce0();
    void thread_C_d0();
    void thread_C_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_202_p2();
    void thread_exitcond2_fu_187_p1();
    void thread_exitcond2_fu_187_p2();
    void thread_exitcond3_fu_156_p2();
    void thread_exitcond_fu_231_p1();
    void thread_exitcond_fu_231_p2();
    void thread_grp_fu_261_p0();
    void thread_grp_fu_266_p0();
    void thread_i_2_fu_161_p2();
    void thread_i_3_fu_192_p2();
    void thread_i_cast_fu_151_p1();
    void thread_j_1_fu_236_p2();
    void thread_k_1_fu_207_p2();
    void thread_sum2_cast_fu_252_p1();
    void thread_sum2_fu_247_p2();
    void thread_sum3_cast_fu_257_p1();
    void thread_sum3_fu_242_p2();
    void thread_sum_cast_fu_218_p1();
    void thread_sum_fu_213_p2();
    void thread_tmp_31_fu_167_p0();
    void thread_tmp_31_fu_167_p1();
    void thread_tmp_32_fu_170_p1();
    void thread_tmp_33_fu_173_p0();
    void thread_tmp_33_fu_173_p1();
    void thread_tmp_34_fu_176_p1();
    void thread_tmp_37_fu_198_p1();
    void thread_tmp_38_fu_223_p1();
    void thread_tmp_39_fu_227_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
