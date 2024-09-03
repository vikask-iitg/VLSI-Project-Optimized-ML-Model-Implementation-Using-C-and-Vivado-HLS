// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dot_HH_
#define _k2c_dot_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_idx2sub.h"
#include "k2c_sub2idx.h"
#include "sample_fadd_32ns_hbi.h"
#include "sample_fmul_32ns_ibs.h"
#include "sample_udiv_64ns_cud.h"
#include "sample_mul_66ns_6jbC.h"
#include "sample_mul_60ns_6kbM.h"
#include "sample_mul_mul_13lbW.h"
#include "k2c_dot_dense_13_eOg.h"
#include "k2c_dot_dense_13_fYi.h"
#include "k2c_dot_dense_13_g8j.h"
#include "k2c_dot_permA.h"
#include "k2c_dot_permB.h"

namespace ap_rtl {

struct k2c_dot : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > C_array_address0;
    sc_out< sc_logic > C_array_ce0;
    sc_out< sc_logic > C_array_we0;
    sc_out< sc_lv<32> > C_array_d0;
    sc_in< sc_lv<32> > C_array_q0;
    sc_out< sc_lv<7> > A_array_address0;
    sc_out< sc_logic > A_array_ce0;
    sc_in< sc_lv<32> > A_array_q0;
    sc_in< sc_lv<64> > A_dim;
    sc_in< sc_lv<64> > A_numel_read;
    sc_out< sc_lv<3> > A_shape_address0;
    sc_out< sc_logic > A_shape_ce0;
    sc_in< sc_lv<64> > A_shape_q0;
    sc_in< sc_lv<64> > B_dim;
    sc_in< sc_lv<64> > B_numel_read;
    sc_in< sc_lv<64> > axesA_0_read;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_dot(sc_module_name name);
    SC_HAS_PROCESS(k2c_dot);

    ~k2c_dot();

    sc_trace_file* mVcdFile;

    k2c_dot_dense_13_eOg* dense_13_kernel_shap_U;
    k2c_dot_dense_13_fYi* dense_13_fwork_U;
    k2c_dot_dense_13_g8j* dense_13_kernel_arra_U;
    k2c_dot_permA* permA_U;
    k2c_dot_permB* permB_U;
    k2c_dot_permB* freeA_U;
    k2c_dot_permB* freeB_U;
    k2c_dot_permB* newshpA_U;
    k2c_dot_permB* newshpB_U;
    k2c_dot_permB* Asub_U;
    k2c_dot_permB* Bsub_U;
    k2c_idx2sub* grp_k2c_idx2sub_fu_822;
    k2c_sub2idx* grp_k2c_sub2idx_fu_834;
    sample_fadd_32ns_hbi<1,5,32,32,32>* sample_fadd_32ns_hbi_U17;
    sample_fmul_32ns_ibs<1,3,32,32,32>* sample_fmul_32ns_ibs_U18;
    sample_udiv_64ns_cud<1,68,64,64,64>* sample_udiv_64ns_cud_U19;
    sample_mul_66ns_6jbC<1,2,66,64,129>* sample_mul_66ns_6jbC_U20;
    sample_mul_60ns_6kbM<1,2,60,64,64>* sample_mul_60ns_6kbM_U21;
    sample_mul_mul_13lbW<1,1,13,13,13>* sample_mul_mul_13lbW_U22;
    sample_mul_mul_13lbW<1,1,13,13,13>* sample_mul_mul_13lbW_U23;
    sc_signal< sc_lv<124> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > dense_13_kernel_shap_address0;
    sc_signal< sc_logic > dense_13_kernel_shap_ce0;
    sc_signal< sc_lv<64> > dense_13_kernel_shap_q0;
    sc_signal< sc_lv<12> > dense_13_fwork_address0;
    sc_signal< sc_logic > dense_13_fwork_ce0;
    sc_signal< sc_logic > dense_13_fwork_we0;
    sc_signal< sc_lv<32> > dense_13_fwork_d0;
    sc_signal< sc_lv<32> > dense_13_fwork_q0;
    sc_signal< sc_lv<12> > dense_13_fwork_address1;
    sc_signal< sc_logic > dense_13_fwork_ce1;
    sc_signal< sc_lv<32> > dense_13_fwork_q1;
    sc_signal< sc_lv<12> > dense_13_kernel_arra_address0;
    sc_signal< sc_logic > dense_13_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_13_kernel_arra_q0;
    sc_signal< sc_lv<64> > i_12_s_fu_867_p2;
    sc_signal< sc_lv<64> > i_12_s_reg_1474;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond1_fu_850_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_878_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_1482;
    sc_signal< sc_lv<1> > exitcond1_1_fu_873_p2;
    sc_signal< sc_lv<64> > count_4_1_fu_883_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > i_12_1_fu_889_p2;
    sc_signal< sc_lv<64> > i_12_1_reg_1491;
    sc_signal< sc_lv<64> > count_3_cast_fu_918_p1;
    sc_signal< sc_lv<64> > count_3_cast_reg_1502;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond2_fu_895_p2;
    sc_signal< sc_lv<64> > i_15_s_fu_922_p2;
    sc_signal< sc_lv<64> > i_15_s_reg_1507;
    sc_signal< sc_lv<3> > count_5_1_fu_933_p2;
    sc_signal< sc_lv<3> > count_5_1_reg_1515;
    sc_signal< sc_lv<1> > exitcond2_1_fu_928_p2;
    sc_signal< sc_lv<64> > i_15_1_fu_939_p2;
    sc_signal< sc_lv<64> > i_15_1_reg_1520;
    sc_signal< sc_lv<64> > A_shape_load_reg_1530;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<13> > tmp_39_fu_945_p1;
    sc_signal< sc_lv<13> > tmp_39_reg_1536;
    sc_signal< sc_logic > ap_CS_fsm_state73;
    sc_signal< sc_lv<64> > grp_fu_949_p2;
    sc_signal< sc_lv<64> > free_axesA_reg_1546;
    sc_signal< sc_logic > ap_CS_fsm_state74;
    sc_signal< sc_lv<60> > tmp_40_fu_963_p4;
    sc_signal< sc_lv<60> > tmp_40_reg_1552;
    sc_signal< sc_lv<64> > free_axesB_fu_973_p1;
    sc_signal< sc_lv<64> > free_axesB_reg_1557;
    sc_signal< sc_lv<13> > free_axesB_cast5_reg_1562;
    sc_signal< sc_lv<9> > free_axesB_cast4_reg_1567;
    sc_signal< sc_lv<64> > i_16_fu_1000_p2;
    sc_signal< sc_lv<64> > i_16_reg_1572;
    sc_signal< sc_lv<3> > i_16_cast_fu_1005_p2;
    sc_signal< sc_lv<3> > i_16_cast_reg_1578;
    sc_signal< sc_lv<64> > i_4_cast_fu_1011_p1;
    sc_signal< sc_lv<64> > i_4_cast_reg_1583;
    sc_signal< sc_logic > ap_CS_fsm_state75;
    sc_signal< sc_lv<1> > exitcond8_fu_1016_p2;
    sc_signal< sc_lv<1> > exitcond8_reg_1588;
    sc_signal< sc_lv<64> > i_18_cast_fu_1027_p1;
    sc_signal< sc_lv<64> > i_18_cast_reg_1597;
    sc_signal< sc_logic > ap_CS_fsm_state76;
    sc_signal< sc_lv<1> > exitcond8_1_fu_1032_p2;
    sc_signal< sc_lv<3> > i_18_1_fu_1037_p2;
    sc_signal< sc_lv<3> > i_18_1_reg_1610;
    sc_signal< sc_lv<3> > i_19_1_fu_1069_p2;
    sc_signal< sc_logic > ap_CS_fsm_state78;
    sc_signal< sc_lv<1> > tmp_2_fu_1048_p2;
    sc_signal< sc_lv<1> > tmp_2_1_fu_1064_p2;
    sc_signal< sc_lv<64> > i_7_cast_fu_1075_p1;
    sc_signal< sc_lv<64> > i_7_cast_reg_1626;
    sc_signal< sc_logic > ap_CS_fsm_state79;
    sc_signal< sc_lv<1> > tmp_3_fu_1079_p2;
    sc_signal< sc_lv<1> > tmp_3_reg_1631;
    sc_signal< sc_lv<64> > i_21_cast_fu_1090_p1;
    sc_signal< sc_lv<64> > i_21_cast_reg_1640;
    sc_signal< sc_logic > ap_CS_fsm_state80;
    sc_signal< sc_lv<1> > tmp_3_1_fu_1109_p2;
    sc_signal< sc_lv<3> > i_21_1_fu_1114_p2;
    sc_signal< sc_lv<3> > i_21_1_reg_1653;
    sc_signal< sc_lv<64> > j_9_1_fu_1120_p2;
    sc_signal< sc_lv<64> > j_9_1_reg_1658;
    sc_signal< sc_lv<64> > i_8_cast_fu_1126_p1;
    sc_signal< sc_lv<64> > i_8_cast_reg_1663;
    sc_signal< sc_logic > ap_CS_fsm_state82;
    sc_signal< sc_lv<1> > exitcond13_fu_1131_p2;
    sc_signal< sc_lv<1> > exitcond13_reg_1668;
    sc_signal< sc_logic > ap_CS_fsm_state83;
    sc_signal< sc_lv<64> > i_22_cast_fu_1142_p1;
    sc_signal< sc_lv<64> > i_22_cast_reg_1682;
    sc_signal< sc_logic > ap_CS_fsm_state84;
    sc_signal< sc_lv<1> > exitcond13_1_fu_1147_p2;
    sc_signal< sc_lv<3> > i_22_1_fu_1152_p2;
    sc_signal< sc_lv<3> > i_22_1_reg_1695;
    sc_signal< sc_lv<3> > A_shape_addr_2_gep_fu_316_p3;
    sc_signal< sc_logic > ap_CS_fsm_state85;
    sc_signal< sc_lv<64> > i_9_cast_fu_1158_p1;
    sc_signal< sc_lv<64> > i_9_cast_reg_1705;
    sc_signal< sc_logic > ap_CS_fsm_state87;
    sc_signal< sc_lv<1> > exitcond12_fu_1163_p2;
    sc_signal< sc_lv<1> > exitcond12_reg_1710;
    sc_signal< sc_logic > ap_CS_fsm_state88;
    sc_signal< sc_lv<64> > i_23_cast_fu_1174_p1;
    sc_signal< sc_lv<64> > i_23_cast_reg_1724;
    sc_signal< sc_logic > ap_CS_fsm_state89;
    sc_signal< sc_lv<1> > exitcond12_1_fu_1179_p2;
    sc_signal< sc_lv<3> > i_23_1_fu_1184_p2;
    sc_signal< sc_lv<3> > i_23_1_reg_1737;
    sc_signal< sc_lv<3> > dense_13_kernel_shap_3_gep_fu_373_p3;
    sc_signal< sc_logic > ap_CS_fsm_state90;
    sc_signal< sc_lv<64> > i_24_fu_1195_p2;
    sc_signal< sc_lv<64> > i_24_reg_1750;
    sc_signal< sc_logic > ap_CS_fsm_state92;
    sc_signal< sc_lv<13> > tmp_43_fu_1201_p1;
    sc_signal< sc_lv<13> > tmp_43_reg_1755;
    sc_signal< sc_lv<1> > exitcond11_fu_1190_p2;
    sc_signal< sc_lv<64> > j_4_cast_fu_1204_p1;
    sc_signal< sc_lv<64> > j_4_cast_reg_1761;
    sc_signal< sc_logic > ap_CS_fsm_state94;
    sc_signal< sc_lv<1> > exitcond15_fu_1209_p2;
    sc_signal< sc_lv<1> > exitcond15_reg_1766;
    sc_signal< sc_logic > ap_CS_fsm_state95;
    sc_signal< sc_lv<64> > j_10_cast_fu_1220_p1;
    sc_signal< sc_lv<64> > j_10_cast_reg_1780;
    sc_signal< sc_logic > ap_CS_fsm_state96;
    sc_signal< sc_lv<1> > exitcond11_1_fu_1225_p2;
    sc_signal< sc_lv<3> > j_10_1_fu_1230_p2;
    sc_signal< sc_lv<3> > j_10_1_reg_1793;
    sc_signal< sc_logic > ap_CS_fsm_state97;
    sc_signal< sc_lv<32> > A_array_load_reg_1808;
    sc_signal< sc_logic > ap_CS_fsm_state99;
    sc_signal< sc_lv<64> > i_25_fu_1241_p2;
    sc_signal< sc_lv<64> > i_25_reg_1816;
    sc_signal< sc_logic > ap_CS_fsm_state101;
    sc_signal< sc_lv<64> > j_5_cast_fu_1251_p1;
    sc_signal< sc_lv<64> > j_5_cast_reg_1821;
    sc_signal< sc_logic > ap_CS_fsm_state103;
    sc_signal< sc_lv<1> > exitcond10_fu_1256_p2;
    sc_signal< sc_lv<1> > exitcond10_reg_1826;
    sc_signal< sc_logic > ap_CS_fsm_state104;
    sc_signal< sc_lv<64> > j_11_cast_fu_1267_p1;
    sc_signal< sc_lv<64> > j_11_cast_reg_1840;
    sc_signal< sc_logic > ap_CS_fsm_state105;
    sc_signal< sc_lv<1> > exitcond10_1_fu_1272_p2;
    sc_signal< sc_lv<3> > j_11_1_fu_1277_p2;
    sc_signal< sc_lv<3> > j_11_1_reg_1853;
    sc_signal< sc_lv<3> > Bsub_addr_12_gep_fu_513_p3;
    sc_signal< sc_logic > ap_CS_fsm_state106;
    sc_signal< sc_lv<32> > dense_13_kernel_arra_2_reg_1868;
    sc_signal< sc_logic > ap_CS_fsm_state108;
    sc_signal< sc_lv<64> > grp_fu_1247_p2;
    sc_signal< sc_lv<64> > tmp_6_reg_1873;
    sc_signal< sc_logic > ap_CS_fsm_state110;
    sc_signal< sc_lv<8> > i_26_fu_1307_p2;
    sc_signal< sc_logic > ap_CS_fsm_state111;
    sc_signal< sc_lv<64> > i_27_fu_1326_p2;
    sc_signal< sc_lv<64> > i_27_reg_1889;
    sc_signal< sc_logic > ap_CS_fsm_state112;
    sc_signal< sc_lv<9> > outrowidx_fu_1332_p2;
    sc_signal< sc_lv<9> > outrowidx_reg_1894;
    sc_signal< sc_lv<1> > tmp_7_fu_1321_p2;
    sc_signal< sc_lv<13> > inneridx_fu_1406_p2;
    sc_signal< sc_lv<13> > inneridx_reg_1899;
    sc_signal< sc_lv<64> > k_1_fu_1346_p2;
    sc_signal< sc_lv<64> > k_1_reg_1907;
    sc_signal< sc_logic > ap_CS_fsm_state113;
    sc_signal< sc_lv<12> > dense_13_fwork_addr_2_reg_1912;
    sc_signal< sc_lv<1> > exitcond_fu_1341_p2;
    sc_signal< sc_lv<13> > tmp_8_fu_1411_p2;
    sc_signal< sc_lv<13> > tmp_8_reg_1917;
    sc_signal< sc_lv<60> > j_fu_1375_p2;
    sc_signal< sc_lv<60> > j_reg_1925;
    sc_signal< sc_logic > ap_CS_fsm_state114;
    sc_signal< sc_lv<1> > exitcond3_fu_1370_p2;
    sc_signal< sc_lv<7> > C_array_addr_4_reg_1935;
    sc_signal< sc_lv<32> > dense_13_fwork_load_reg_1940;
    sc_signal< sc_logic > ap_CS_fsm_state115;
    sc_signal< sc_lv<32> > dense_13_fwork_load_1_reg_1945;
    sc_signal< sc_lv<32> > grp_fu_846_p2;
    sc_signal< sc_lv<32> > tmp_1_12_reg_1950;
    sc_signal< sc_logic > ap_CS_fsm_state118;
    sc_signal< sc_lv<32> > C_array_load_reg_1955;
    sc_signal< sc_lv<32> > grp_fu_842_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_1960;
    sc_signal< sc_logic > ap_CS_fsm_state123;
    sc_signal< sc_lv<3> > permA_address0;
    sc_signal< sc_logic > permA_ce0;
    sc_signal< sc_logic > permA_we0;
    sc_signal< sc_lv<64> > permA_d0;
    sc_signal< sc_lv<64> > permA_q0;
    sc_signal< sc_lv<3> > permA_address1;
    sc_signal< sc_logic > permA_ce1;
    sc_signal< sc_logic > permA_we1;
    sc_signal< sc_lv<64> > permA_q1;
    sc_signal< sc_lv<3> > permB_address0;
    sc_signal< sc_logic > permB_ce0;
    sc_signal< sc_logic > permB_we0;
    sc_signal< sc_lv<64> > permB_d0;
    sc_signal< sc_lv<64> > permB_q0;
    sc_signal< sc_lv<3> > freeA_address0;
    sc_signal< sc_logic > freeA_ce0;
    sc_signal< sc_logic > freeA_we0;
    sc_signal< sc_lv<64> > freeA_d0;
    sc_signal< sc_lv<64> > freeA_q0;
    sc_signal< sc_lv<3> > freeB_address0;
    sc_signal< sc_logic > freeB_ce0;
    sc_signal< sc_logic > freeB_we0;
    sc_signal< sc_lv<64> > freeB_d0;
    sc_signal< sc_lv<64> > freeB_q0;
    sc_signal< sc_lv<3> > newshpA_address0;
    sc_signal< sc_logic > newshpA_ce0;
    sc_signal< sc_logic > newshpA_we0;
    sc_signal< sc_lv<64> > newshpA_q0;
    sc_signal< sc_lv<3> > newshpB_address0;
    sc_signal< sc_logic > newshpB_ce0;
    sc_signal< sc_logic > newshpB_we0;
    sc_signal< sc_lv<64> > newshpB_q0;
    sc_signal< sc_lv<3> > Asub_address0;
    sc_signal< sc_logic > Asub_ce0;
    sc_signal< sc_logic > Asub_we0;
    sc_signal< sc_lv<64> > Asub_d0;
    sc_signal< sc_lv<64> > Asub_q0;
    sc_signal< sc_lv<3> > Bsub_address0;
    sc_signal< sc_logic > Bsub_ce0;
    sc_signal< sc_logic > Bsub_we0;
    sc_signal< sc_lv<64> > Bsub_d0;
    sc_signal< sc_lv<64> > Bsub_q0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_ap_start;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_ap_done;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_ap_idle;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_ap_ready;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_822_idx;
    sc_signal< sc_lv<3> > grp_k2c_idx2sub_fu_822_sub_address0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_sub_ce0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_sub_we0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_822_sub_d0;
    sc_signal< sc_lv<3> > grp_k2c_idx2sub_fu_822_shape_address0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_shape_ce0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_822_shape_q0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_822_ndim;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_ap_start;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_ap_done;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_ap_idle;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_ap_ready;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_834_sub_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_sub_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_834_sub_q0;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_834_shape_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_shape_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_834_shape_q0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_834_ndim;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_834_ap_return;
    sc_signal< sc_lv<64> > count_reg_576;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > i_reg_588;
    sc_signal< sc_lv<64> > count_4_fu_860_p2;
    sc_signal< sc_lv<64> > ap_phi_mux_count_1_phi_fu_605_p4;
    sc_signal< sc_lv<64> > count_1_reg_601;
    sc_signal< sc_lv<1> > tmp_5_fu_855_p2;
    sc_signal< sc_lv<64> > count_1_1_reg_613;
    sc_signal< sc_lv<3> > count_2_reg_625;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > i_1_reg_636;
    sc_signal< sc_lv<3> > count_5_fu_911_p2;
    sc_signal< sc_lv<3> > ap_phi_mux_count_3_phi_fu_651_p4;
    sc_signal< sc_lv<1> > tmp_fu_900_p2;
    sc_signal< sc_lv<3> > i_4_reg_658;
    sc_signal< sc_logic > ap_CS_fsm_state77;
    sc_signal< sc_lv<3> > i_5_reg_670;
    sc_signal< sc_lv<3> > i_7_reg_679;
    sc_signal< sc_logic > ap_CS_fsm_state81;
    sc_signal< sc_lv<64> > j_3_reg_691;
    sc_signal< sc_lv<3> > i_8_reg_704;
    sc_signal< sc_logic > ap_CS_fsm_state86;
    sc_signal< sc_lv<3> > i_9_reg_716;
    sc_signal< sc_logic > ap_CS_fsm_state91;
    sc_signal< sc_lv<64> > i_s_reg_728;
    sc_signal< sc_logic > ap_CS_fsm_state100;
    sc_signal< sc_lv<3> > j_4_reg_741;
    sc_signal< sc_logic > ap_CS_fsm_state93;
    sc_signal< sc_logic > ap_CS_fsm_state98;
    sc_signal< sc_lv<64> > i_10_reg_753;
    sc_signal< sc_logic > ap_CS_fsm_state109;
    sc_signal< sc_lv<3> > j_5_reg_766;
    sc_signal< sc_logic > ap_CS_fsm_state102;
    sc_signal< sc_logic > ap_CS_fsm_state107;
    sc_signal< sc_lv<8> > i_11_reg_778;
    sc_signal< sc_lv<1> > exitcond5_fu_1302_p2;
    sc_signal< sc_lv<64> > i_14_reg_789;
    sc_signal< sc_lv<64> > k_reg_800;
    sc_signal< sc_lv<60> > j_s_reg_811;
    sc_signal< sc_logic > ap_CS_fsm_state124;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_822_ap_start_reg;
    sc_signal< sc_lv<1> > exitcond14_fu_1236_p2;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_834_ap_start_reg;
    sc_signal< sc_lv<64> > count_2_cast4_fu_906_p1;
    sc_signal< sc_lv<64> > i_5_cast_fu_1043_p1;
    sc_signal< sc_lv<64> > i_19_cast_fu_1059_p1;
    sc_signal< sc_lv<64> > j_9_cast_fu_1104_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_1292_p1;
    sc_signal< sc_lv<64> > i_11_cast_fu_1297_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_1357_p1;
    sc_signal< sc_lv<64> > sum9_cast_fu_1391_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_1401_p1;
    sc_signal< sc_logic > ap_CS_fsm_state117;
    sc_signal< sc_logic > ap_CS_fsm_state119;
    sc_signal< sc_logic > ap_CS_fsm_state116;
    sc_signal< sc_lv<66> > grp_fu_957_p0;
    sc_signal< sc_lv<64> > grp_fu_957_p1;
    sc_signal< sc_lv<129> > grp_fu_957_p2;
    sc_signal< sc_lv<3> > tmp_41_fu_997_p1;
    sc_signal< sc_lv<3> > i_18_s_fu_1021_p2;
    sc_signal< sc_lv<3> > i_19_fu_1053_p2;
    sc_signal< sc_lv<3> > i_21_fu_1084_p2;
    sc_signal< sc_lv<4> > tmp_42_fu_1094_p1;
    sc_signal< sc_lv<4> > j_9_s_fu_1098_p2;
    sc_signal< sc_lv<3> > i_22_s_fu_1136_p2;
    sc_signal< sc_lv<3> > i_23_s_fu_1168_p2;
    sc_signal< sc_lv<3> > j_10_s_fu_1214_p2;
    sc_signal< sc_lv<60> > grp_fu_1247_p0;
    sc_signal< sc_lv<3> > j_11_s_fu_1261_p2;
    sc_signal< sc_lv<13> > tmp_46_fu_1283_p1;
    sc_signal< sc_lv<13> > sum_fu_1287_p2;
    sc_signal< sc_lv<9> > tmp_45_fu_1317_p1;
    sc_signal< sc_lv<13> > tmp_47_fu_1337_p1;
    sc_signal< sc_lv<13> > sum8_fu_1352_p2;
    sc_signal< sc_lv<13> > tmp_48_fu_1362_p1;
    sc_signal< sc_lv<13> > tmp1_fu_1381_p2;
    sc_signal< sc_lv<13> > sum9_fu_1386_p2;
    sc_signal< sc_lv<9> > tmp_49_fu_1366_p1;
    sc_signal< sc_lv<9> > sum2_fu_1396_p2;
    sc_signal< sc_lv<13> > inneridx_fu_1406_p1;
    sc_signal< sc_logic > grp_fu_949_ap_start;
    sc_signal< sc_logic > grp_fu_949_ap_done;
    sc_signal< sc_lv<124> > ap_NS_fsm;
    sc_signal< sc_lv<129> > grp_fu_957_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<124> ap_ST_fsm_state1;
    static const sc_lv<124> ap_ST_fsm_state2;
    static const sc_lv<124> ap_ST_fsm_state3;
    static const sc_lv<124> ap_ST_fsm_state4;
    static const sc_lv<124> ap_ST_fsm_state5;
    static const sc_lv<124> ap_ST_fsm_state6;
    static const sc_lv<124> ap_ST_fsm_state7;
    static const sc_lv<124> ap_ST_fsm_state8;
    static const sc_lv<124> ap_ST_fsm_state9;
    static const sc_lv<124> ap_ST_fsm_state10;
    static const sc_lv<124> ap_ST_fsm_state11;
    static const sc_lv<124> ap_ST_fsm_state12;
    static const sc_lv<124> ap_ST_fsm_state13;
    static const sc_lv<124> ap_ST_fsm_state14;
    static const sc_lv<124> ap_ST_fsm_state15;
    static const sc_lv<124> ap_ST_fsm_state16;
    static const sc_lv<124> ap_ST_fsm_state17;
    static const sc_lv<124> ap_ST_fsm_state18;
    static const sc_lv<124> ap_ST_fsm_state19;
    static const sc_lv<124> ap_ST_fsm_state20;
    static const sc_lv<124> ap_ST_fsm_state21;
    static const sc_lv<124> ap_ST_fsm_state22;
    static const sc_lv<124> ap_ST_fsm_state23;
    static const sc_lv<124> ap_ST_fsm_state24;
    static const sc_lv<124> ap_ST_fsm_state25;
    static const sc_lv<124> ap_ST_fsm_state26;
    static const sc_lv<124> ap_ST_fsm_state27;
    static const sc_lv<124> ap_ST_fsm_state28;
    static const sc_lv<124> ap_ST_fsm_state29;
    static const sc_lv<124> ap_ST_fsm_state30;
    static const sc_lv<124> ap_ST_fsm_state31;
    static const sc_lv<124> ap_ST_fsm_state32;
    static const sc_lv<124> ap_ST_fsm_state33;
    static const sc_lv<124> ap_ST_fsm_state34;
    static const sc_lv<124> ap_ST_fsm_state35;
    static const sc_lv<124> ap_ST_fsm_state36;
    static const sc_lv<124> ap_ST_fsm_state37;
    static const sc_lv<124> ap_ST_fsm_state38;
    static const sc_lv<124> ap_ST_fsm_state39;
    static const sc_lv<124> ap_ST_fsm_state40;
    static const sc_lv<124> ap_ST_fsm_state41;
    static const sc_lv<124> ap_ST_fsm_state42;
    static const sc_lv<124> ap_ST_fsm_state43;
    static const sc_lv<124> ap_ST_fsm_state44;
    static const sc_lv<124> ap_ST_fsm_state45;
    static const sc_lv<124> ap_ST_fsm_state46;
    static const sc_lv<124> ap_ST_fsm_state47;
    static const sc_lv<124> ap_ST_fsm_state48;
    static const sc_lv<124> ap_ST_fsm_state49;
    static const sc_lv<124> ap_ST_fsm_state50;
    static const sc_lv<124> ap_ST_fsm_state51;
    static const sc_lv<124> ap_ST_fsm_state52;
    static const sc_lv<124> ap_ST_fsm_state53;
    static const sc_lv<124> ap_ST_fsm_state54;
    static const sc_lv<124> ap_ST_fsm_state55;
    static const sc_lv<124> ap_ST_fsm_state56;
    static const sc_lv<124> ap_ST_fsm_state57;
    static const sc_lv<124> ap_ST_fsm_state58;
    static const sc_lv<124> ap_ST_fsm_state59;
    static const sc_lv<124> ap_ST_fsm_state60;
    static const sc_lv<124> ap_ST_fsm_state61;
    static const sc_lv<124> ap_ST_fsm_state62;
    static const sc_lv<124> ap_ST_fsm_state63;
    static const sc_lv<124> ap_ST_fsm_state64;
    static const sc_lv<124> ap_ST_fsm_state65;
    static const sc_lv<124> ap_ST_fsm_state66;
    static const sc_lv<124> ap_ST_fsm_state67;
    static const sc_lv<124> ap_ST_fsm_state68;
    static const sc_lv<124> ap_ST_fsm_state69;
    static const sc_lv<124> ap_ST_fsm_state70;
    static const sc_lv<124> ap_ST_fsm_state71;
    static const sc_lv<124> ap_ST_fsm_state72;
    static const sc_lv<124> ap_ST_fsm_state73;
    static const sc_lv<124> ap_ST_fsm_state74;
    static const sc_lv<124> ap_ST_fsm_state75;
    static const sc_lv<124> ap_ST_fsm_state76;
    static const sc_lv<124> ap_ST_fsm_state77;
    static const sc_lv<124> ap_ST_fsm_state78;
    static const sc_lv<124> ap_ST_fsm_state79;
    static const sc_lv<124> ap_ST_fsm_state80;
    static const sc_lv<124> ap_ST_fsm_state81;
    static const sc_lv<124> ap_ST_fsm_state82;
    static const sc_lv<124> ap_ST_fsm_state83;
    static const sc_lv<124> ap_ST_fsm_state84;
    static const sc_lv<124> ap_ST_fsm_state85;
    static const sc_lv<124> ap_ST_fsm_state86;
    static const sc_lv<124> ap_ST_fsm_state87;
    static const sc_lv<124> ap_ST_fsm_state88;
    static const sc_lv<124> ap_ST_fsm_state89;
    static const sc_lv<124> ap_ST_fsm_state90;
    static const sc_lv<124> ap_ST_fsm_state91;
    static const sc_lv<124> ap_ST_fsm_state92;
    static const sc_lv<124> ap_ST_fsm_state93;
    static const sc_lv<124> ap_ST_fsm_state94;
    static const sc_lv<124> ap_ST_fsm_state95;
    static const sc_lv<124> ap_ST_fsm_state96;
    static const sc_lv<124> ap_ST_fsm_state97;
    static const sc_lv<124> ap_ST_fsm_state98;
    static const sc_lv<124> ap_ST_fsm_state99;
    static const sc_lv<124> ap_ST_fsm_state100;
    static const sc_lv<124> ap_ST_fsm_state101;
    static const sc_lv<124> ap_ST_fsm_state102;
    static const sc_lv<124> ap_ST_fsm_state103;
    static const sc_lv<124> ap_ST_fsm_state104;
    static const sc_lv<124> ap_ST_fsm_state105;
    static const sc_lv<124> ap_ST_fsm_state106;
    static const sc_lv<124> ap_ST_fsm_state107;
    static const sc_lv<124> ap_ST_fsm_state108;
    static const sc_lv<124> ap_ST_fsm_state109;
    static const sc_lv<124> ap_ST_fsm_state110;
    static const sc_lv<124> ap_ST_fsm_state111;
    static const sc_lv<124> ap_ST_fsm_state112;
    static const sc_lv<124> ap_ST_fsm_state113;
    static const sc_lv<124> ap_ST_fsm_state114;
    static const sc_lv<124> ap_ST_fsm_state115;
    static const sc_lv<124> ap_ST_fsm_state116;
    static const sc_lv<124> ap_ST_fsm_state117;
    static const sc_lv<124> ap_ST_fsm_state118;
    static const sc_lv<124> ap_ST_fsm_state119;
    static const sc_lv<124> ap_ST_fsm_state120;
    static const sc_lv<124> ap_ST_fsm_state121;
    static const sc_lv<124> ap_ST_fsm_state122;
    static const sc_lv<124> ap_ST_fsm_state123;
    static const sc_lv<124> ap_ST_fsm_state124;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_49;
    static const sc_lv<32> ap_const_lv32_4A;
    static const sc_lv<32> ap_const_lv32_4B;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4E;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_51;
    static const sc_lv<32> ap_const_lv32_52;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<32> ap_const_lv32_56;
    static const sc_lv<32> ap_const_lv32_57;
    static const sc_lv<32> ap_const_lv32_58;
    static const sc_lv<32> ap_const_lv32_59;
    static const sc_lv<32> ap_const_lv32_5B;
    static const sc_lv<32> ap_const_lv32_5D;
    static const sc_lv<32> ap_const_lv32_5E;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_62;
    static const sc_lv<32> ap_const_lv32_64;
    static const sc_lv<32> ap_const_lv32_66;
    static const sc_lv<32> ap_const_lv32_67;
    static const sc_lv<32> ap_const_lv32_68;
    static const sc_lv<32> ap_const_lv32_69;
    static const sc_lv<32> ap_const_lv32_6B;
    static const sc_lv<32> ap_const_lv32_6D;
    static const sc_lv<32> ap_const_lv32_6E;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_71;
    static const sc_lv<32> ap_const_lv32_72;
    static const sc_lv<32> ap_const_lv32_75;
    static const sc_lv<32> ap_const_lv32_7A;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<32> ap_const_lv32_55;
    static const sc_lv<32> ap_const_lv32_5A;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<32> ap_const_lv32_61;
    static const sc_lv<32> ap_const_lv32_6C;
    static const sc_lv<32> ap_const_lv32_65;
    static const sc_lv<32> ap_const_lv32_6A;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_7B;
    static const sc_lv<60> ap_const_lv60_0;
    static const sc_lv<32> ap_const_lv32_74;
    static const sc_lv<32> ap_const_lv32_76;
    static const sc_lv<32> ap_const_lv32_73;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<129> ap_const_lv129_lc_1;
    static const sc_lv<32> ap_const_lv32_45;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<60> ap_const_lv60_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_array_address0();
    void thread_A_array_ce0();
    void thread_A_shape_addr_2_gep_fu_316_p3();
    void thread_A_shape_address0();
    void thread_A_shape_ce0();
    void thread_Asub_address0();
    void thread_Asub_ce0();
    void thread_Asub_d0();
    void thread_Asub_we0();
    void thread_Bsub_addr_12_gep_fu_513_p3();
    void thread_Bsub_address0();
    void thread_Bsub_ce0();
    void thread_Bsub_d0();
    void thread_Bsub_we0();
    void thread_C_array_address0();
    void thread_C_array_ce0();
    void thread_C_array_d0();
    void thread_C_array_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state100();
    void thread_ap_CS_fsm_state101();
    void thread_ap_CS_fsm_state102();
    void thread_ap_CS_fsm_state103();
    void thread_ap_CS_fsm_state104();
    void thread_ap_CS_fsm_state105();
    void thread_ap_CS_fsm_state106();
    void thread_ap_CS_fsm_state107();
    void thread_ap_CS_fsm_state108();
    void thread_ap_CS_fsm_state109();
    void thread_ap_CS_fsm_state110();
    void thread_ap_CS_fsm_state111();
    void thread_ap_CS_fsm_state112();
    void thread_ap_CS_fsm_state113();
    void thread_ap_CS_fsm_state114();
    void thread_ap_CS_fsm_state115();
    void thread_ap_CS_fsm_state116();
    void thread_ap_CS_fsm_state117();
    void thread_ap_CS_fsm_state118();
    void thread_ap_CS_fsm_state119();
    void thread_ap_CS_fsm_state123();
    void thread_ap_CS_fsm_state124();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state73();
    void thread_ap_CS_fsm_state74();
    void thread_ap_CS_fsm_state75();
    void thread_ap_CS_fsm_state76();
    void thread_ap_CS_fsm_state77();
    void thread_ap_CS_fsm_state78();
    void thread_ap_CS_fsm_state79();
    void thread_ap_CS_fsm_state80();
    void thread_ap_CS_fsm_state81();
    void thread_ap_CS_fsm_state82();
    void thread_ap_CS_fsm_state83();
    void thread_ap_CS_fsm_state84();
    void thread_ap_CS_fsm_state85();
    void thread_ap_CS_fsm_state86();
    void thread_ap_CS_fsm_state87();
    void thread_ap_CS_fsm_state88();
    void thread_ap_CS_fsm_state89();
    void thread_ap_CS_fsm_state90();
    void thread_ap_CS_fsm_state91();
    void thread_ap_CS_fsm_state92();
    void thread_ap_CS_fsm_state93();
    void thread_ap_CS_fsm_state94();
    void thread_ap_CS_fsm_state95();
    void thread_ap_CS_fsm_state96();
    void thread_ap_CS_fsm_state97();
    void thread_ap_CS_fsm_state98();
    void thread_ap_CS_fsm_state99();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_count_1_phi_fu_605_p4();
    void thread_ap_phi_mux_count_3_phi_fu_651_p4();
    void thread_ap_ready();
    void thread_count_2_cast4_fu_906_p1();
    void thread_count_3_cast_fu_918_p1();
    void thread_count_4_1_fu_883_p2();
    void thread_count_4_fu_860_p2();
    void thread_count_5_1_fu_933_p2();
    void thread_count_5_fu_911_p2();
    void thread_dense_13_fwork_address0();
    void thread_dense_13_fwork_address1();
    void thread_dense_13_fwork_ce0();
    void thread_dense_13_fwork_ce1();
    void thread_dense_13_fwork_d0();
    void thread_dense_13_fwork_we0();
    void thread_dense_13_kernel_arra_address0();
    void thread_dense_13_kernel_arra_ce0();
    void thread_dense_13_kernel_shap_3_gep_fu_373_p3();
    void thread_dense_13_kernel_shap_address0();
    void thread_dense_13_kernel_shap_ce0();
    void thread_exitcond10_1_fu_1272_p2();
    void thread_exitcond10_fu_1256_p2();
    void thread_exitcond11_1_fu_1225_p2();
    void thread_exitcond11_fu_1190_p2();
    void thread_exitcond12_1_fu_1179_p2();
    void thread_exitcond12_fu_1163_p2();
    void thread_exitcond13_1_fu_1147_p2();
    void thread_exitcond13_fu_1131_p2();
    void thread_exitcond14_fu_1236_p2();
    void thread_exitcond15_fu_1209_p2();
    void thread_exitcond1_1_fu_873_p2();
    void thread_exitcond1_fu_850_p2();
    void thread_exitcond2_1_fu_928_p2();
    void thread_exitcond2_fu_895_p2();
    void thread_exitcond3_fu_1370_p2();
    void thread_exitcond5_fu_1302_p2();
    void thread_exitcond8_1_fu_1032_p2();
    void thread_exitcond8_fu_1016_p2();
    void thread_exitcond_fu_1341_p2();
    void thread_freeA_address0();
    void thread_freeA_ce0();
    void thread_freeA_d0();
    void thread_freeA_we0();
    void thread_freeB_address0();
    void thread_freeB_ce0();
    void thread_freeB_d0();
    void thread_freeB_we0();
    void thread_free_axesB_fu_973_p1();
    void thread_grp_fu_1247_p0();
    void thread_grp_fu_949_ap_start();
    void thread_grp_fu_957_p0();
    void thread_grp_fu_957_p1();
    void thread_grp_fu_957_p10();
    void thread_grp_k2c_idx2sub_fu_822_ap_start();
    void thread_grp_k2c_idx2sub_fu_822_idx();
    void thread_grp_k2c_idx2sub_fu_822_ndim();
    void thread_grp_k2c_idx2sub_fu_822_shape_q0();
    void thread_grp_k2c_sub2idx_fu_834_ap_start();
    void thread_grp_k2c_sub2idx_fu_834_ndim();
    void thread_grp_k2c_sub2idx_fu_834_shape_q0();
    void thread_grp_k2c_sub2idx_fu_834_sub_q0();
    void thread_i_11_cast_fu_1297_p1();
    void thread_i_12_1_fu_889_p2();
    void thread_i_12_s_fu_867_p2();
    void thread_i_15_1_fu_939_p2();
    void thread_i_15_s_fu_922_p2();
    void thread_i_16_cast_fu_1005_p2();
    void thread_i_16_fu_1000_p2();
    void thread_i_18_1_fu_1037_p2();
    void thread_i_18_cast_fu_1027_p1();
    void thread_i_18_s_fu_1021_p2();
    void thread_i_19_1_fu_1069_p2();
    void thread_i_19_cast_fu_1059_p1();
    void thread_i_19_fu_1053_p2();
    void thread_i_21_1_fu_1114_p2();
    void thread_i_21_cast_fu_1090_p1();
    void thread_i_21_fu_1084_p2();
    void thread_i_22_1_fu_1152_p2();
    void thread_i_22_cast_fu_1142_p1();
    void thread_i_22_s_fu_1136_p2();
    void thread_i_23_1_fu_1184_p2();
    void thread_i_23_cast_fu_1174_p1();
    void thread_i_23_s_fu_1168_p2();
    void thread_i_24_fu_1195_p2();
    void thread_i_25_fu_1241_p2();
    void thread_i_26_fu_1307_p2();
    void thread_i_27_fu_1326_p2();
    void thread_i_4_cast_fu_1011_p1();
    void thread_i_5_cast_fu_1043_p1();
    void thread_i_7_cast_fu_1075_p1();
    void thread_i_8_cast_fu_1126_p1();
    void thread_i_9_cast_fu_1158_p1();
    void thread_inneridx_fu_1406_p1();
    void thread_j_10_1_fu_1230_p2();
    void thread_j_10_cast_fu_1220_p1();
    void thread_j_10_s_fu_1214_p2();
    void thread_j_11_1_fu_1277_p2();
    void thread_j_11_cast_fu_1267_p1();
    void thread_j_11_s_fu_1261_p2();
    void thread_j_4_cast_fu_1204_p1();
    void thread_j_5_cast_fu_1251_p1();
    void thread_j_9_1_fu_1120_p2();
    void thread_j_9_cast_fu_1104_p1();
    void thread_j_9_s_fu_1098_p2();
    void thread_j_fu_1375_p2();
    void thread_k_1_fu_1346_p2();
    void thread_newshpA_address0();
    void thread_newshpA_ce0();
    void thread_newshpA_we0();
    void thread_newshpB_address0();
    void thread_newshpB_ce0();
    void thread_newshpB_we0();
    void thread_outrowidx_fu_1332_p2();
    void thread_permA_address0();
    void thread_permA_address1();
    void thread_permA_ce0();
    void thread_permA_ce1();
    void thread_permA_d0();
    void thread_permA_we0();
    void thread_permA_we1();
    void thread_permB_address0();
    void thread_permB_ce0();
    void thread_permB_d0();
    void thread_permB_we0();
    void thread_sum2_cast_fu_1401_p1();
    void thread_sum2_fu_1396_p2();
    void thread_sum8_cast_fu_1357_p1();
    void thread_sum8_fu_1352_p2();
    void thread_sum9_cast_fu_1391_p1();
    void thread_sum9_fu_1386_p2();
    void thread_sum_cast_fu_1292_p1();
    void thread_sum_fu_1287_p2();
    void thread_tmp1_fu_1381_p2();
    void thread_tmp_1_fu_878_p2();
    void thread_tmp_2_1_fu_1064_p2();
    void thread_tmp_2_fu_1048_p2();
    void thread_tmp_39_fu_945_p1();
    void thread_tmp_3_1_fu_1109_p2();
    void thread_tmp_3_fu_1079_p2();
    void thread_tmp_40_fu_963_p4();
    void thread_tmp_41_fu_997_p1();
    void thread_tmp_42_fu_1094_p1();
    void thread_tmp_43_fu_1201_p1();
    void thread_tmp_45_fu_1317_p1();
    void thread_tmp_46_fu_1283_p1();
    void thread_tmp_47_fu_1337_p1();
    void thread_tmp_48_fu_1362_p1();
    void thread_tmp_49_fu_1366_p1();
    void thread_tmp_5_fu_855_p2();
    void thread_tmp_7_fu_1321_p2();
    void thread_tmp_fu_900_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
