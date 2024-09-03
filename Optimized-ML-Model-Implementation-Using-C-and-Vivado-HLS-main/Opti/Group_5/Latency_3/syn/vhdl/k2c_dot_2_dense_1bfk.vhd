-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity k2c_dot_2_dense_1bfk_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of k2c_dot_2_dense_1bfk_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111110010010001111100111011001", 
    1 => "00111110100000101000000111110001", 
    2 => "10111101110010001010110000110111", 
    3 => "00111110010010101010011100111100", 
    4 => "10111110001110010000111001100101", 
    5 => "10111110000111011101101000000010", 
    6 => "00111101101011110011110110010011", 
    7 => "10111110000001111011110100010100", 
    8 => "10111101110110110101111111011110", 
    9 => "00111110011000011110111011101110", 
    10 => "00111110110000011101100101110101", 
    11 => "10111101100000010011010010111001", 
    12 => "00111101010111111001100001100101", 
    13 => "00111101010111111000000111110011", 
    14 => "00111110010110110110011110011000", 
    15 => "10111110000000010011010110110010", 
    16 => "00111110000000100101111011111100", 
    17 => "10111100110000101011010001000100", 
    18 => "10111101101000010001001110100100", 
    19 => "10111110011110010110001111110001", 
    20 => "10111110011010010000001011110011", 
    21 => "00111110011111000001111110010011", 
    22 => "10111101110011000101010100011001", 
    23 => "00111110100110111100111110001111", 
    24 => "10111110000011010000010011101111", 
    25 => "10111110001011110100111101111101", 
    26 => "00111101011000010011001111000000", 
    27 => "00111101001011111101001011000010", 
    28 => "00111110000001001100000111110000", 
    29 => "10111110100100100101000111100111", 
    30 => "00111101010111101010111111001001", 
    31 => "00111101100011010001011100001001", 
    32 => "10111101101001010111010100001000", 
    33 => "10111110010001111000011100110101", 
    34 => "10111110100101111100110100011110", 
    35 => "10111110010000101011000000100100", 
    36 => "10111110100101001000100011100011", 
    37 => "10111011111010001110000110010101", 
    38 => "10111110101111111000110000011100", 
    39 => "10111101110110010110110001010110", 
    40 => "10111110001111101100000000001111", 
    41 => "00111110010010100011000010100010", 
    42 => "00111110010110001100100000101110", 
    43 => "10111110100001110010010000001111", 
    44 => "00111101000001111111101010100110", 
    45 => "10111110101010110010110101001011", 
    46 => "00111110001001010101110010111010", 
    47 => "00111110010111101000011101000011", 
    48 => "00111110101100011101001101110111", 
    49 => "10111100010010001100111110101100", 
    50 => "10111101111001100100011000010001", 
    51 => "10111110100001101011011111111011", 
    52 => "00111110100010101111001011101000", 
    53 => "10111110100101001011000111011100", 
    54 => "10111101110010010111011001011110", 
    55 => "10111110001101101001101101111000", 
    56 => "10111101011011100101010011001111", 
    57 => "10111101011100111100100101101111", 
    58 => "10111110010100011000011101000010", 
    59 => "00111101101100110011100010001100", 
    60 => "10111110100110000011110000001111", 
    61 => "00111100011000000111100110100111", 
    62 => "00111110000010011000001111011111", 
    63 => "10111110100101000001001110110000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity k2c_dot_2_dense_1bfk is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of k2c_dot_2_dense_1bfk is
    component k2c_dot_2_dense_1bfk_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    k2c_dot_2_dense_1bfk_rom_U :  component k2c_dot_2_dense_1bfk_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


