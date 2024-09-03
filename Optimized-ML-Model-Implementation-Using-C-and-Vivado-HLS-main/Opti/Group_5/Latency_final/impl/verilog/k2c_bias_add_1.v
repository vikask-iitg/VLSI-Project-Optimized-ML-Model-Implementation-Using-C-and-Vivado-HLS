// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_bias_add_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        A_array_address0,
        A_array_ce0,
        A_array_we0,
        A_array_d0,
        A_array_q0,
        A_array1_address0,
        A_array1_ce0,
        A_array1_we0,
        A_array1_d0,
        A_array1_q0,
        A_array2_address0,
        A_array2_ce0,
        A_array2_we0,
        A_array2_d0,
        A_array2_q0,
        A_array3_address0,
        A_array3_ce0,
        A_array3_we0,
        A_array3_d0,
        A_array3_q0,
        A_array4_address0,
        A_array4_ce0,
        A_array4_we0,
        A_array4_d0,
        A_array4_q0,
        A_array5_address0,
        A_array5_ce0,
        A_array5_we0,
        A_array5_d0,
        A_array5_q0,
        A_array6_address0,
        A_array6_ce0,
        A_array6_we0,
        A_array6_d0,
        A_array6_q0,
        A_array7_address0,
        A_array7_ce0,
        A_array7_we0,
        A_array7_d0,
        A_array7_q0,
        A_numel_read,
        b_numel_read
);

parameter    ap_ST_fsm_state1 = 14'd1;
parameter    ap_ST_fsm_state2 = 14'd2;
parameter    ap_ST_fsm_state3 = 14'd4;
parameter    ap_ST_fsm_state4 = 14'd8;
parameter    ap_ST_fsm_state5 = 14'd16;
parameter    ap_ST_fsm_state6 = 14'd32;
parameter    ap_ST_fsm_state7 = 14'd64;
parameter    ap_ST_fsm_state8 = 14'd128;
parameter    ap_ST_fsm_state9 = 14'd256;
parameter    ap_ST_fsm_state10 = 14'd512;
parameter    ap_ST_fsm_state11 = 14'd1024;
parameter    ap_ST_fsm_state12 = 14'd2048;
parameter    ap_ST_fsm_state13 = 14'd4096;
parameter    ap_ST_fsm_state14 = 14'd8192;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [1:0] A_array_address0;
output   A_array_ce0;
output   A_array_we0;
output  [31:0] A_array_d0;
input  [31:0] A_array_q0;
output  [1:0] A_array1_address0;
output   A_array1_ce0;
output   A_array1_we0;
output  [31:0] A_array1_d0;
input  [31:0] A_array1_q0;
output  [1:0] A_array2_address0;
output   A_array2_ce0;
output   A_array2_we0;
output  [31:0] A_array2_d0;
input  [31:0] A_array2_q0;
output  [1:0] A_array3_address0;
output   A_array3_ce0;
output   A_array3_we0;
output  [31:0] A_array3_d0;
input  [31:0] A_array3_q0;
output  [1:0] A_array4_address0;
output   A_array4_ce0;
output   A_array4_we0;
output  [31:0] A_array4_d0;
input  [31:0] A_array4_q0;
output  [1:0] A_array5_address0;
output   A_array5_ce0;
output   A_array5_we0;
output  [31:0] A_array5_d0;
input  [31:0] A_array5_q0;
output  [1:0] A_array6_address0;
output   A_array6_ce0;
output   A_array6_we0;
output  [31:0] A_array6_d0;
input  [31:0] A_array6_q0;
output  [1:0] A_array7_address0;
output   A_array7_ce0;
output   A_array7_we0;
output  [31:0] A_array7_d0;
input  [31:0] A_array7_q0;
input  [63:0] A_numel_read;
input  [63:0] b_numel_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[1:0] A_array_address0;
reg A_array_ce0;
reg A_array_we0;
reg[1:0] A_array1_address0;
reg A_array1_ce0;
reg A_array1_we0;
reg[1:0] A_array2_address0;
reg A_array2_ce0;
reg A_array2_we0;
reg[1:0] A_array3_address0;
reg A_array3_ce0;
reg A_array3_we0;
reg[1:0] A_array4_address0;
reg A_array4_ce0;
reg A_array4_we0;
reg[1:0] A_array5_address0;
reg A_array5_ce0;
reg A_array5_we0;
reg[1:0] A_array6_address0;
reg A_array6_ce0;
reg A_array6_we0;
reg[1:0] A_array7_address0;
reg A_array7_ce0;
reg A_array7_we0;

(* fsm_encoding = "none" *) reg   [13:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] dense_14_bias_array_address0;
reg    dense_14_bias_array_ce0;
wire   [31:0] dense_14_bias_array_q0;
wire   [2:0] tmp_90_fu_212_p1;
reg   [2:0] tmp_90_reg_316;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_fu_207_p2;
wire   [63:0] j_2_fu_225_p2;
reg   [63:0] j_2_reg_324;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond_fu_220_p2;
wire   [2:0] arrayNo_trunc_fu_245_p2;
reg   [2:0] arrayNo_trunc_reg_334;
reg   [1:0] A_array_addr_reg_339;
reg   [1:0] A_array1_addr_reg_344;
reg   [1:0] A_array2_addr_reg_349;
reg   [1:0] A_array3_addr_reg_354;
reg   [1:0] A_array4_addr_reg_359;
reg   [1:0] A_array5_addr_reg_364;
reg   [1:0] A_array6_addr_reg_369;
reg   [1:0] A_array7_addr_reg_374;
wire   [63:0] i_35_fu_272_p2;
reg   [31:0] dense_14_bias_array_1_reg_384;
wire    ap_CS_fsm_state4;
wire   [31:0] tmp_52_fu_280_p10;
reg   [31:0] tmp_52_reg_389;
wire   [31:0] grp_fu_203_p2;
reg   [31:0] tmp_s_reg_394;
wire    ap_CS_fsm_state13;
reg   [63:0] i_reg_179;
reg   [63:0] j_reg_191;
wire    ap_CS_fsm_state14;
wire   [63:0] newIndex_cast_fu_260_p1;
wire    ap_CS_fsm_state5;
wire   [6:0] tmp_93_fu_235_p1;
wire   [6:0] tmp_91_fu_216_p1;
wire   [2:0] tmp_92_fu_231_p1;
wire   [6:0] sum_fu_239_p2;
wire   [3:0] newIndex_fu_250_p4;
wire   [63:0] tmp_52_fu_280_p9;
reg   [13:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 14'd1;
end

k2c_bias_add_1_dePgM #(
    .DataWidth( 32 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
dense_14_bias_array_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dense_14_bias_array_address0),
    .ce0(dense_14_bias_array_ce0),
    .q0(dense_14_bias_array_q0)
);

sample_fadd_32ns_ocq #(
    .ID( 1 ),
    .NUM_STAGE( 9 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
sample_fadd_32ns_ocq_U174(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_52_reg_389),
    .din1(dense_14_bias_array_1_reg_384),
    .ce(1'b1),
    .dout(grp_fu_203_p2)
);

sample_mux_864_32rcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 32 ),
    .din6_WIDTH( 32 ),
    .din7_WIDTH( 32 ),
    .din8_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
sample_mux_864_32rcU_U175(
    .din0(A_array_q0),
    .din1(A_array1_q0),
    .din2(A_array2_q0),
    .din3(A_array3_q0),
    .din4(A_array4_q0),
    .din5(A_array5_q0),
    .din6(A_array6_q0),
    .din7(A_array7_q0),
    .din8(tmp_52_fu_280_p9),
    .dout(tmp_52_fu_280_p10)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond_fu_220_p2 == 1'd1))) begin
        i_reg_179 <= i_35_fu_272_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_179 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_207_p2 == 1'd1))) begin
        j_reg_191 <= 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        j_reg_191 <= j_2_reg_324;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond_fu_220_p2 == 1'd0))) begin
        A_array1_addr_reg_344 <= newIndex_cast_fu_260_p1;
        A_array2_addr_reg_349 <= newIndex_cast_fu_260_p1;
        A_array3_addr_reg_354 <= newIndex_cast_fu_260_p1;
        A_array4_addr_reg_359 <= newIndex_cast_fu_260_p1;
        A_array5_addr_reg_364 <= newIndex_cast_fu_260_p1;
        A_array6_addr_reg_369 <= newIndex_cast_fu_260_p1;
        A_array7_addr_reg_374 <= newIndex_cast_fu_260_p1;
        A_array_addr_reg_339 <= newIndex_cast_fu_260_p1;
        arrayNo_trunc_reg_334 <= arrayNo_trunc_fu_245_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        dense_14_bias_array_1_reg_384 <= dense_14_bias_array_q0;
        tmp_52_reg_389 <= tmp_52_fu_280_p10;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_2_reg_324 <= j_2_fu_225_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_207_p2 == 1'd1))) begin
        tmp_90_reg_316 <= tmp_90_fu_212_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        tmp_s_reg_394 <= grp_fu_203_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array1_address0 = A_array1_addr_reg_344;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array1_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array1_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array1_ce0 = 1'b1;
    end else begin
        A_array1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd1))) begin
        A_array1_we0 = 1'b1;
    end else begin
        A_array1_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array2_address0 = A_array2_addr_reg_349;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array2_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array2_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array2_ce0 = 1'b1;
    end else begin
        A_array2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd2))) begin
        A_array2_we0 = 1'b1;
    end else begin
        A_array2_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array3_address0 = A_array3_addr_reg_354;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array3_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array3_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array3_ce0 = 1'b1;
    end else begin
        A_array3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd3))) begin
        A_array3_we0 = 1'b1;
    end else begin
        A_array3_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array4_address0 = A_array4_addr_reg_359;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array4_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array4_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array4_ce0 = 1'b1;
    end else begin
        A_array4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd4))) begin
        A_array4_we0 = 1'b1;
    end else begin
        A_array4_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array5_address0 = A_array5_addr_reg_364;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array5_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array5_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array5_ce0 = 1'b1;
    end else begin
        A_array5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd5))) begin
        A_array5_we0 = 1'b1;
    end else begin
        A_array5_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array6_address0 = A_array6_addr_reg_369;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array6_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array6_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array6_ce0 = 1'b1;
    end else begin
        A_array6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd6))) begin
        A_array6_we0 = 1'b1;
    end else begin
        A_array6_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array7_address0 = A_array7_addr_reg_374;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array7_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array7_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array7_ce0 = 1'b1;
    end else begin
        A_array7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd7))) begin
        A_array7_we0 = 1'b1;
    end else begin
        A_array7_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        A_array_address0 = A_array_addr_reg_339;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        A_array_address0 = newIndex_cast_fu_260_p1;
    end else begin
        A_array_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state3))) begin
        A_array_ce0 = 1'b1;
    end else begin
        A_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) & (arrayNo_trunc_reg_334 == 3'd0))) begin
        A_array_we0 = 1'b1;
    end else begin
        A_array_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state2) & (tmp_fu_207_p2 == 1'd0)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_207_p2 == 1'd0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        dense_14_bias_array_ce0 = 1'b1;
    end else begin
        dense_14_bias_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_207_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond_fu_220_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign A_array1_d0 = tmp_s_reg_394;

assign A_array2_d0 = tmp_s_reg_394;

assign A_array3_d0 = tmp_s_reg_394;

assign A_array4_d0 = tmp_s_reg_394;

assign A_array5_d0 = tmp_s_reg_394;

assign A_array6_d0 = tmp_s_reg_394;

assign A_array7_d0 = tmp_s_reg_394;

assign A_array_d0 = tmp_s_reg_394;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign arrayNo_trunc_fu_245_p2 = (tmp_92_fu_231_p1 + tmp_90_reg_316);

assign dense_14_bias_array_address0 = j_reg_191;

assign exitcond_fu_220_p2 = ((j_reg_191 == b_numel_read) ? 1'b1 : 1'b0);

assign i_35_fu_272_p2 = (i_reg_179 + b_numel_read);

assign j_2_fu_225_p2 = (64'd1 + j_reg_191);

assign newIndex_cast_fu_260_p1 = newIndex_fu_250_p4;

assign newIndex_fu_250_p4 = {{sum_fu_239_p2[6:3]}};

assign sum_fu_239_p2 = (tmp_93_fu_235_p1 + tmp_91_fu_216_p1);

assign tmp_52_fu_280_p9 = arrayNo_trunc_reg_334;

assign tmp_90_fu_212_p1 = i_reg_179[2:0];

assign tmp_91_fu_216_p1 = j_reg_191[6:0];

assign tmp_92_fu_231_p1 = j_reg_191[2:0];

assign tmp_93_fu_235_p1 = i_reg_179[6:0];

assign tmp_fu_207_p2 = ((i_reg_179 < A_numel_read) ? 1'b1 : 1'b0);

endmodule //k2c_bias_add_1
