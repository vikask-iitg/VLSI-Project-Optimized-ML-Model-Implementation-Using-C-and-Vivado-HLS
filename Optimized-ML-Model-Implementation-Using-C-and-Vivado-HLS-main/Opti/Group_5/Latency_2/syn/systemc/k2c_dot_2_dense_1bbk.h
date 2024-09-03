// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __k2c_dot_2_dense_1bbk_H__
#define __k2c_dot_2_dense_1bbk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct k2c_dot_2_dense_1bbk_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(k2c_dot_2_dense_1bbk_ram) {
        ram[0] = "0b10111110010001011011011111010110";
        ram[1] = "0b10111100010000111110100010100101";
        ram[2] = "0b00111101110001110011101101010101";
        ram[3] = "0b10111110001110001001001011010111";
        ram[4] = "0b00111100100101000111000010000010";
        ram[5] = "0b10111110101010010111110001011111";
        ram[6] = "0b00111110001001111110010011111001";
        ram[7] = "0b10111110000001011000010000101000";
        ram[8] = "0b10111110100010001010110100110100";
        ram[9] = "0b10111110100011100010110011100010";
        ram[10] = "0b00111110000111101100101010110000";
        ram[11] = "0b00111110010100110101010011100010";
        ram[12] = "0b00111100101000101010011010001001";
        ram[13] = "0b10111011101100001000001001111001";
        ram[14] = "0b10111110011010101011101101000111";
        ram[15] = "0b10111110100001110110110100101100";
        ram[16] = "0b10111110100110001010110100111110";
        ram[17] = "0b10111110000110001100100001100010";
        ram[18] = "0b00111101100111001101001000011011";
        ram[19] = "0b10111101100011010001000101100000";
        ram[20] = "0b10111110100110101001100001001000";
        ram[21] = "0b00111110100011100100000010001101";
        ram[22] = "0b10111101101011101100010100010011";
        ram[23] = "0b00111011100001001101001010101000";
        ram[24] = "0b10111101111101100101001000111110";
        ram[25] = "0b00111101010011110010101101010000";
        ram[26] = "0b00111101110011111100111001101000";
        ram[27] = "0b00111110100101000011000000000001";
        ram[28] = "0b00111110100011100111010001111000";
        ram[29] = "0b00111110101101100000110100100010";
        ram[30] = "0b10111110010111010000110100111100";
        ram[31] = "0b00111100100101110000001001101100";
        ram[32] = "0b00111110000101110000001110110011";
        ram[33] = "0b10111110011011101010011010010100";
        ram[34] = "0b10111101110111110011000101111110";
        ram[35] = "0b00111110010111101001111000010101";
        ram[36] = "0b10111110001000101110110011000101";
        ram[37] = "0b10111110100010111000111111110110";
        ram[38] = "0b00111110001011100111001110000010";
        ram[39] = "0b10111110100111000100000000100000";
        ram[40] = "0b00111110101001111011110001001010";
        ram[41] = "0b10111101000111001100010010111111";
        ram[42] = "0b10111110101100011111111110011100";
        ram[43] = "0b00111110100101010001010100001001";
        ram[44] = "0b10111110101100010010111010101110";
        ram[45] = "0b00111110101010001011101001111010";
        ram[46] = "0b10111101100111011001111001011100";
        ram[47] = "0b00111110001000001100101111011101";
        ram[48] = "0b00111101000010100100110011000101";
        ram[49] = "0b10111110001110011001011011010010";
        ram[50] = "0b10111101011100110001011101011111";
        ram[51] = "0b10111100010010010001111000001100";
        ram[52] = "0b00111110010011101010110000001000";
        ram[53] = "0b00111110100100000100010000001101";
        ram[54] = "0b10111101110011100100000110000111";
        ram[55] = "0b10111110100100100001101001001110";
        ram[56] = "0b10111101101011001100001110110110";
        ram[57] = "0b00111110101001000000011110101100";
        ram[58] = "0b10111110010111100001111101010010";
        ram[59] = "0b10111110101011000101011011011110";
        ram[60] = "0b10111110101000011001001001010001";
        ram[61] = "0b00111101110101100110110011010101";
        ram[62] = "0b10111110101011111010000111000010";
        ram[63] = "0b00111101100110001101100011101010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(k2c_dot_2_dense_1bbk) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


k2c_dot_2_dense_1bbk_ram* meminst;


SC_CTOR(k2c_dot_2_dense_1bbk) {
meminst = new k2c_dot_2_dense_1bbk_ram("k2c_dot_2_dense_1bbk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~k2c_dot_2_dense_1bbk() {
    delete meminst;
}


};//endmodule
#endif
