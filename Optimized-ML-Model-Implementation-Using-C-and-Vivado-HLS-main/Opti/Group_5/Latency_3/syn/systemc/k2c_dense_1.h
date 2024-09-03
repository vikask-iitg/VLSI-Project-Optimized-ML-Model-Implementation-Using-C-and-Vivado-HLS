// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dense_1_HH_
#define _k2c_dense_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dot_2.h"
#include "k2c_affine_matmul_2.h"
#include "k2c_bias_add_2.h"
#include "sample_fcmp_32ns_Ffa.h"
#include "sample_mux_864_32rcU.h"
#include "k2c_dense_1_densebvn.h"

namespace ap_rtl {

struct k2c_dense_1 : public sc_module {
    // Port declarations 74
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > output_numel_read;
    sc_in< sc_lv<64> > input_dim;
    sc_in< sc_lv<64> > input_numel_read;
    sc_in< sc_lv<64> > kernel_dim;
    sc_out< sc_lv<1> > dense_15_output_arra_7_address0;
    sc_out< sc_logic > dense_15_output_arra_7_ce0;
    sc_out< sc_logic > dense_15_output_arra_7_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_7_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_7_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_6_address0;
    sc_out< sc_logic > dense_15_output_arra_6_ce0;
    sc_out< sc_logic > dense_15_output_arra_6_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_6_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_6_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_5_address0;
    sc_out< sc_logic > dense_15_output_arra_5_ce0;
    sc_out< sc_logic > dense_15_output_arra_5_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_5_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_5_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_4_address0;
    sc_out< sc_logic > dense_15_output_arra_4_ce0;
    sc_out< sc_logic > dense_15_output_arra_4_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_4_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_4_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_3_address0;
    sc_out< sc_logic > dense_15_output_arra_3_ce0;
    sc_out< sc_logic > dense_15_output_arra_3_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_3_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_3_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_2_address0;
    sc_out< sc_logic > dense_15_output_arra_2_ce0;
    sc_out< sc_logic > dense_15_output_arra_2_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_2_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_2_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_1_address0;
    sc_out< sc_logic > dense_15_output_arra_1_ce0;
    sc_out< sc_logic > dense_15_output_arra_1_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_1_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_1_q0;
    sc_out< sc_lv<1> > dense_15_output_arra_address0;
    sc_out< sc_logic > dense_15_output_arra_ce0;
    sc_out< sc_logic > dense_15_output_arra_we0;
    sc_out< sc_lv<32> > dense_15_output_arra_d0;
    sc_in< sc_lv<32> > dense_15_output_arra_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_7_address0;
    sc_out< sc_logic > dense_14_output_arra_7_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_7_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_6_address0;
    sc_out< sc_logic > dense_14_output_arra_6_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_6_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_5_address0;
    sc_out< sc_logic > dense_14_output_arra_5_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_5_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_4_address0;
    sc_out< sc_logic > dense_14_output_arra_4_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_4_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_3_address0;
    sc_out< sc_logic > dense_14_output_arra_3_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_3_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_2_address0;
    sc_out< sc_logic > dense_14_output_arra_2_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_2_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_1_address0;
    sc_out< sc_logic > dense_14_output_arra_1_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_1_q0;
    sc_out< sc_lv<2> > dense_14_output_arra_address0;
    sc_out< sc_logic > dense_14_output_arra_ce0;
    sc_in< sc_lv<32> > dense_14_output_arra_q0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const2;


    // Module declarations
    k2c_dense_1(sc_module_name name);
    SC_HAS_PROCESS(k2c_dense_1);

    ~k2c_dense_1();

    sc_trace_file* mVcdFile;

    k2c_dense_1_densebvn* dense_15_bias_array_U;
    k2c_dot_2* grp_k2c_dot_2_fu_368;
    k2c_affine_matmul_2* grp_k2c_affine_matmul_2_fu_434;
    k2c_bias_add_2* grp_k2c_bias_add_2_fu_489;
    sample_fcmp_32ns_Ffa<1,2,32,32,1>* sample_fcmp_32ns_Ffa_U321;
    sample_mux_864_32rcU<1,1,32,32,32,32,32,32,32,32,64,32>* sample_mux_864_32rcU_U322;
    sample_mux_864_32rcU<1,1,32,32,32,32,32,32,32,32,64,32>* sample_mux_864_32rcU_U323;
    sc_signal< sc_lv<16> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > dense_15_bias_array_address0;
    sc_signal< sc_logic > dense_15_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_15_bias_array_q0;
    sc_signal< sc_lv<64> > dense_15_kernel_nume;
    sc_signal< sc_lv<64> > dense_15_bias_numel;
    sc_signal< sc_lv<1> > tmp_fu_518_p2;
    sc_signal< sc_lv<1> > tmp_reg_798;
    sc_signal< sc_lv<64> > tmp_16_fu_524_p2;
    sc_signal< sc_lv<64> > tmp_16_reg_802;
    sc_signal< sc_lv<1> > icmp_fu_546_p2;
    sc_signal< sc_lv<1> > icmp_reg_812;
    sc_signal< sc_lv<6> > p_s_fu_552_p3;
    sc_signal< sc_lv<6> > p_s_reg_817;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > i_30_fu_571_p2;
    sc_signal< sc_lv<64> > i_30_reg_830;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > tmp_81_fu_577_p1;
    sc_signal< sc_lv<3> > tmp_81_reg_835;
    sc_signal< sc_lv<1> > exitcond4_fu_566_p2;
    sc_signal< sc_lv<1> > dense_15_output_arra_24_reg_840;
    sc_signal< sc_lv<1> > dense_15_output_arra_25_reg_845;
    sc_signal< sc_lv<1> > dense_15_output_arra_26_reg_850;
    sc_signal< sc_lv<1> > dense_15_output_arra_27_reg_855;
    sc_signal< sc_lv<1> > dense_15_output_arra_28_reg_860;
    sc_signal< sc_lv<1> > dense_15_output_arra_29_reg_865;
    sc_signal< sc_lv<1> > dense_15_output_arra_30_reg_870;
    sc_signal< sc_lv<1> > dense_15_output_arra_31_reg_875;
    sc_signal< sc_lv<32> > tmp_46_fu_606_p10;
    sc_signal< sc_lv<32> > tmp_46_reg_880;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > notlhs_fu_645_p2;
    sc_signal< sc_lv<1> > notlhs_reg_886;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > notrhs_fu_651_p2;
    sc_signal< sc_lv<1> > notrhs_reg_891;
    sc_signal< sc_lv<1> > grp_fu_513_p2;
    sc_signal< sc_lv<1> > tmp_49_reg_896;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<11> > tmp_19_cast_cast_fu_666_p3;
    sc_signal< sc_lv<11> > tmp_19_cast_cast_reg_904;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_ap_idle;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_ap_ready;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_ap_done;
    sc_signal< sc_lv<10> > i_31_fu_682_p2;
    sc_signal< sc_lv<10> > i_31_reg_912;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<3> > tmp_79_fu_688_p1;
    sc_signal< sc_lv<3> > tmp_79_reg_917;
    sc_signal< sc_lv<1> > exitcond1_fu_677_p2;
    sc_signal< sc_lv<1> > dense_15_output_arra_8_reg_922;
    sc_signal< sc_lv<1> > dense_15_output_arra_9_reg_927;
    sc_signal< sc_lv<1> > dense_15_output_arra_10_reg_932;
    sc_signal< sc_lv<1> > dense_15_output_arra_11_reg_937;
    sc_signal< sc_lv<1> > dense_15_output_arra_12_reg_942;
    sc_signal< sc_lv<1> > dense_15_output_arra_13_reg_947;
    sc_signal< sc_lv<1> > dense_15_output_arra_14_reg_952;
    sc_signal< sc_lv<1> > dense_15_output_arra_15_reg_957;
    sc_signal< sc_lv<32> > tmp_s_fu_717_p10;
    sc_signal< sc_lv<32> > tmp_s_reg_962;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > notlhs6_fu_756_p2;
    sc_signal< sc_lv<1> > notlhs6_reg_968;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > notrhs7_fu_762_p2;
    sc_signal< sc_lv<1> > notrhs7_reg_973;
    sc_signal< sc_lv<1> > tmp_44_reg_978;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_45_fu_772_p2;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_ap_start;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_ap_done;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_ap_idle;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_ap_ready;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array1_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array1_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array1_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array1_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array2_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array2_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array2_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array2_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array3_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array3_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array3_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array3_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array4_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array4_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array4_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array4_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array5_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array5_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array5_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array5_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array6_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array6_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array6_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array6_d0;
    sc_signal< sc_lv<1> > grp_k2c_dot_2_fu_368_C_array7_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array7_ce0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_C_array7_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_2_fu_368_C_array7_d0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array8_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array8_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array9_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array9_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array10_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array10_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array11_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array11_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array12_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array12_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array13_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array13_ce0;
    sc_signal< sc_lv<2> > grp_k2c_dot_2_fu_368_A_array14_address0;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_A_array14_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_ap_start;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C1_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C1_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C1_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C1_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C2_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C2_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C2_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C2_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C3_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C3_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C3_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C3_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C4_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C4_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C4_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C4_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C5_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C5_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C5_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C5_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C6_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C6_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C6_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C6_d0;
    sc_signal< sc_lv<1> > grp_k2c_affine_matmul_2_fu_434_C7_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C7_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_C7_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_2_fu_434_C7_d0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A8_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A8_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A9_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A9_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A10_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A10_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A11_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A11_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A12_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A12_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A13_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A13_ce0;
    sc_signal< sc_lv<2> > grp_k2c_affine_matmul_2_fu_434_A14_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_A14_ce0;
    sc_signal< sc_lv<4> > grp_k2c_affine_matmul_2_fu_434_d_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_d_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_ap_start;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_ap_done;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_ap_idle;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_ap_ready;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array1_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array1_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array1_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array1_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array2_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array2_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array2_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array2_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array3_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array3_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array3_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array3_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array4_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array4_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array4_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array4_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array5_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array5_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array5_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array5_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array6_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array6_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array6_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array6_d0;
    sc_signal< sc_lv<1> > grp_k2c_bias_add_2_fu_489_A_array7_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array7_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_A_array7_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_2_fu_489_A_array7_d0;
    sc_signal< sc_lv<64> > i_2_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<10> > i_reg_357;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > grp_k2c_dot_2_fu_368_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_k2c_affine_matmul_2_fu_434_ap_start_reg;
    sc_signal< sc_logic > grp_k2c_bias_add_2_fu_489_ap_start_reg;
    sc_signal< sc_lv<64> > newIndex_cast_fu_591_p1;
    sc_signal< sc_lv<64> > newIndex4_cast_fu_702_p1;
    sc_signal< sc_lv<1> > tmp_50_fu_661_p2;
    sc_signal< sc_lv<32> > grp_fu_513_p0;
    sc_signal< sc_lv<63> > tmp_78_fu_536_p4;
    sc_signal< sc_lv<3> > newIndex_fu_581_p4;
    sc_signal< sc_lv<64> > tmp_46_fu_606_p9;
    sc_signal< sc_lv<32> > p_to_int4_fu_628_p1;
    sc_signal< sc_lv<8> > tmp_47_fu_631_p4;
    sc_signal< sc_lv<23> > tmp_82_fu_641_p1;
    sc_signal< sc_lv<1> > tmp_48_fu_657_p2;
    sc_signal< sc_lv<11> > i_cast_fu_673_p1;
    sc_signal< sc_lv<3> > newIndex4_fu_692_p4;
    sc_signal< sc_lv<64> > tmp_s_fu_717_p9;
    sc_signal< sc_lv<32> > p_to_int_fu_739_p1;
    sc_signal< sc_lv<8> > tmp_42_fu_742_p4;
    sc_signal< sc_lv<23> > tmp_80_fu_752_p1;
    sc_signal< sc_lv<1> > tmp_43_fu_768_p2;
    sc_signal< sc_lv<16> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<16> ap_ST_fsm_state1;
    static const sc_lv<16> ap_ST_fsm_state2;
    static const sc_lv<16> ap_ST_fsm_state3;
    static const sc_lv<16> ap_ST_fsm_state4;
    static const sc_lv<16> ap_ST_fsm_state5;
    static const sc_lv<16> ap_ST_fsm_state6;
    static const sc_lv<16> ap_ST_fsm_state7;
    static const sc_lv<16> ap_ST_fsm_state8;
    static const sc_lv<16> ap_ST_fsm_state9;
    static const sc_lv<16> ap_ST_fsm_state10;
    static const sc_lv<16> ap_ST_fsm_state11;
    static const sc_lv<16> ap_ST_fsm_state12;
    static const sc_lv<16> ap_ST_fsm_state13;
    static const sc_lv<16> ap_ST_fsm_state14;
    static const sc_lv<16> ap_ST_fsm_state15;
    static const sc_lv<16> ap_ST_fsm_state16;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<11> ap_const_lv11_200;
    static const sc_lv<11> ap_const_lv11_10;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<5> ap_const_lv5_5;
    static const sc_lv<4> ap_const_lv4_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_dense_14_output_arra_1_address0();
    void thread_dense_14_output_arra_1_ce0();
    void thread_dense_14_output_arra_2_address0();
    void thread_dense_14_output_arra_2_ce0();
    void thread_dense_14_output_arra_3_address0();
    void thread_dense_14_output_arra_3_ce0();
    void thread_dense_14_output_arra_4_address0();
    void thread_dense_14_output_arra_4_ce0();
    void thread_dense_14_output_arra_5_address0();
    void thread_dense_14_output_arra_5_ce0();
    void thread_dense_14_output_arra_6_address0();
    void thread_dense_14_output_arra_6_ce0();
    void thread_dense_14_output_arra_7_address0();
    void thread_dense_14_output_arra_7_ce0();
    void thread_dense_14_output_arra_address0();
    void thread_dense_14_output_arra_ce0();
    void thread_dense_15_bias_array_address0();
    void thread_dense_15_bias_array_ce0();
    void thread_dense_15_output_arra_1_address0();
    void thread_dense_15_output_arra_1_ce0();
    void thread_dense_15_output_arra_1_d0();
    void thread_dense_15_output_arra_1_we0();
    void thread_dense_15_output_arra_2_address0();
    void thread_dense_15_output_arra_2_ce0();
    void thread_dense_15_output_arra_2_d0();
    void thread_dense_15_output_arra_2_we0();
    void thread_dense_15_output_arra_3_address0();
    void thread_dense_15_output_arra_3_ce0();
    void thread_dense_15_output_arra_3_d0();
    void thread_dense_15_output_arra_3_we0();
    void thread_dense_15_output_arra_4_address0();
    void thread_dense_15_output_arra_4_ce0();
    void thread_dense_15_output_arra_4_d0();
    void thread_dense_15_output_arra_4_we0();
    void thread_dense_15_output_arra_5_address0();
    void thread_dense_15_output_arra_5_ce0();
    void thread_dense_15_output_arra_5_d0();
    void thread_dense_15_output_arra_5_we0();
    void thread_dense_15_output_arra_6_address0();
    void thread_dense_15_output_arra_6_ce0();
    void thread_dense_15_output_arra_6_d0();
    void thread_dense_15_output_arra_6_we0();
    void thread_dense_15_output_arra_7_address0();
    void thread_dense_15_output_arra_7_ce0();
    void thread_dense_15_output_arra_7_d0();
    void thread_dense_15_output_arra_7_we0();
    void thread_dense_15_output_arra_address0();
    void thread_dense_15_output_arra_ce0();
    void thread_dense_15_output_arra_d0();
    void thread_dense_15_output_arra_we0();
    void thread_exitcond1_fu_677_p2();
    void thread_exitcond4_fu_566_p2();
    void thread_grp_fu_513_p0();
    void thread_grp_k2c_affine_matmul_2_fu_434_ap_start();
    void thread_grp_k2c_bias_add_2_fu_489_ap_start();
    void thread_grp_k2c_dot_2_fu_368_ap_start();
    void thread_i_30_fu_571_p2();
    void thread_i_31_fu_682_p2();
    void thread_i_cast_fu_673_p1();
    void thread_icmp_fu_546_p2();
    void thread_newIndex4_cast_fu_702_p1();
    void thread_newIndex4_fu_692_p4();
    void thread_newIndex_cast_fu_591_p1();
    void thread_newIndex_fu_581_p4();
    void thread_notlhs6_fu_756_p2();
    void thread_notlhs_fu_645_p2();
    void thread_notrhs7_fu_762_p2();
    void thread_notrhs_fu_651_p2();
    void thread_p_s_fu_552_p3();
    void thread_p_to_int4_fu_628_p1();
    void thread_p_to_int_fu_739_p1();
    void thread_tmp_16_fu_524_p2();
    void thread_tmp_19_cast_cast_fu_666_p3();
    void thread_tmp_42_fu_742_p4();
    void thread_tmp_43_fu_768_p2();
    void thread_tmp_45_fu_772_p2();
    void thread_tmp_46_fu_606_p9();
    void thread_tmp_47_fu_631_p4();
    void thread_tmp_48_fu_657_p2();
    void thread_tmp_50_fu_661_p2();
    void thread_tmp_78_fu_536_p4();
    void thread_tmp_79_fu_688_p1();
    void thread_tmp_80_fu_752_p1();
    void thread_tmp_81_fu_577_p1();
    void thread_tmp_82_fu_641_p1();
    void thread_tmp_fu_518_p2();
    void thread_tmp_s_fu_717_p9();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
