#ifndef __iop_sw_cfg_defs_asm_h
#define __iop_sw_cfg_defs_asm_h

/*
                                  
                                                                 
                                
                                             
  
                                                                                                                                   
                                                                              
                                 
  
                              
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

/*                                                       */
#define reg_iop_sw_cfg_rw_crc_par0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_crc_par0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_crc_par0_owner_offset 0

/*                                                       */
#define reg_iop_sw_cfg_rw_crc_par1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_crc_par1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_crc_par1_owner_offset 4

/*                                                      */
#define reg_iop_sw_cfg_rw_dmc_in0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_dmc_in0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_dmc_in0_owner_offset 8

/*                                                      */
#define reg_iop_sw_cfg_rw_dmc_in1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_dmc_in1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_dmc_in1_owner_offset 12

/*                                                       */
#define reg_iop_sw_cfg_rw_dmc_out0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_dmc_out0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_dmc_out0_owner_offset 16

/*                                                       */
#define reg_iop_sw_cfg_rw_dmc_out1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_dmc_out1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_dmc_out1_owner_offset 20

/*                                                       */
#define reg_iop_sw_cfg_rw_fifo_in0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_in0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_in0_owner_offset 24

/*                                                             */
#define reg_iop_sw_cfg_rw_fifo_in0_extra_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_in0_extra_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_in0_extra_owner_offset 28

/*                                                       */
#define reg_iop_sw_cfg_rw_fifo_in1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_in1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_in1_owner_offset 32

/*                                                             */
#define reg_iop_sw_cfg_rw_fifo_in1_extra_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_in1_extra_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_in1_extra_owner_offset 36

/*                                                        */
#define reg_iop_sw_cfg_rw_fifo_out0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_out0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_out0_owner_offset 40

/*                                                              */
#define reg_iop_sw_cfg_rw_fifo_out0_extra_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_out0_extra_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_out0_extra_owner_offset 44

/*                                                        */
#define reg_iop_sw_cfg_rw_fifo_out1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_out1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_out1_owner_offset 48

/*                                                              */
#define reg_iop_sw_cfg_rw_fifo_out1_extra_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_fifo_out1_extra_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_fifo_out1_extra_owner_offset 52

/*                                                     */
#define reg_iop_sw_cfg_rw_sap_in_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_sap_in_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_sap_in_owner_offset 56

/*                                                      */
#define reg_iop_sw_cfg_rw_sap_out_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_sap_out_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_sap_out_owner_offset 60

/*                                                       */
#define reg_iop_sw_cfg_rw_scrc_in0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_scrc_in0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_scrc_in0_owner_offset 64

/*                                                       */
#define reg_iop_sw_cfg_rw_scrc_in1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_scrc_in1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_scrc_in1_owner_offset 68

/*                                                        */
#define reg_iop_sw_cfg_rw_scrc_out0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_scrc_out0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_scrc_out0_owner_offset 72

/*                                                        */
#define reg_iop_sw_cfg_rw_scrc_out1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_scrc_out1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_scrc_out1_owner_offset 76

/*                                                   */
#define reg_iop_sw_cfg_rw_spu0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_spu0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_spu0_owner_offset 80

/*                                                   */
#define reg_iop_sw_cfg_rw_spu1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_spu1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_spu1_owner_offset 84

/*                                                         */
#define reg_iop_sw_cfg_rw_timer_grp0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_timer_grp0_owner_offset 88

/*                                                         */
#define reg_iop_sw_cfg_rw_timer_grp1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_timer_grp1_owner_offset 92

/*                                                         */
#define reg_iop_sw_cfg_rw_timer_grp2_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp2_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_timer_grp2_owner_offset 96

/*                                                         */
#define reg_iop_sw_cfg_rw_timer_grp3_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp3_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_timer_grp3_owner_offset 100

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp0_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp0_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp0_owner_offset 104

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp1_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp1_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp1_owner_offset 108

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp2_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp2_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp2_owner_offset 112

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp3_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp3_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp3_owner_offset 116

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp4_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp4_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp4_owner_offset 120

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp5_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp5_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp5_owner_offset 124

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp6_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp6_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp6_owner_offset 128

/*                                                           */
#define reg_iop_sw_cfg_rw_trigger_grp7_owner___cfg___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grp7_owner___cfg___width 2
#define reg_iop_sw_cfg_rw_trigger_grp7_owner_offset 132

/*                                                  */
#define reg_iop_sw_cfg_rw_bus0_mask___byte0___lsb 0
#define reg_iop_sw_cfg_rw_bus0_mask___byte0___width 8
#define reg_iop_sw_cfg_rw_bus0_mask___byte1___lsb 8
#define reg_iop_sw_cfg_rw_bus0_mask___byte1___width 8
#define reg_iop_sw_cfg_rw_bus0_mask___byte2___lsb 16
#define reg_iop_sw_cfg_rw_bus0_mask___byte2___width 8
#define reg_iop_sw_cfg_rw_bus0_mask___byte3___lsb 24
#define reg_iop_sw_cfg_rw_bus0_mask___byte3___width 8
#define reg_iop_sw_cfg_rw_bus0_mask_offset 136

/*                                                     */
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte0___lsb 0
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte0___width 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte0___bit 0
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte1___lsb 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte1___width 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte1___bit 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte2___lsb 2
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte2___width 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte2___bit 2
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte3___lsb 3
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte3___width 1
#define reg_iop_sw_cfg_rw_bus0_oe_mask___byte3___bit 3
#define reg_iop_sw_cfg_rw_bus0_oe_mask_offset 140

/*                                                  */
#define reg_iop_sw_cfg_rw_bus1_mask___byte0___lsb 0
#define reg_iop_sw_cfg_rw_bus1_mask___byte0___width 8
#define reg_iop_sw_cfg_rw_bus1_mask___byte1___lsb 8
#define reg_iop_sw_cfg_rw_bus1_mask___byte1___width 8
#define reg_iop_sw_cfg_rw_bus1_mask___byte2___lsb 16
#define reg_iop_sw_cfg_rw_bus1_mask___byte2___width 8
#define reg_iop_sw_cfg_rw_bus1_mask___byte3___lsb 24
#define reg_iop_sw_cfg_rw_bus1_mask___byte3___width 8
#define reg_iop_sw_cfg_rw_bus1_mask_offset 144

/*                                                     */
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte0___lsb 0
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte0___width 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte0___bit 0
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte1___lsb 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte1___width 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte1___bit 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte2___lsb 2
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte2___width 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte2___bit 2
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte3___lsb 3
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte3___width 1
#define reg_iop_sw_cfg_rw_bus1_oe_mask___byte3___bit 3
#define reg_iop_sw_cfg_rw_bus1_oe_mask_offset 148

/*                                                 */
#define reg_iop_sw_cfg_rw_gio_mask___val___lsb 0
#define reg_iop_sw_cfg_rw_gio_mask___val___width 32
#define reg_iop_sw_cfg_rw_gio_mask_offset 152

/*                                                    */
#define reg_iop_sw_cfg_rw_gio_oe_mask___val___lsb 0
#define reg_iop_sw_cfg_rw_gio_oe_mask___val___width 32
#define reg_iop_sw_cfg_rw_gio_oe_mask_offset 156

/*                                                   */
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte0___lsb 0
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte0___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte1___lsb 2
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte1___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte2___lsb 4
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte2___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte3___lsb 6
#define reg_iop_sw_cfg_rw_pinmapping___bus0_byte3___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte0___lsb 8
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte0___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte1___lsb 10
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte1___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte2___lsb 12
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte2___width 2
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte3___lsb 14
#define reg_iop_sw_cfg_rw_pinmapping___bus1_byte3___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio3_0___lsb 16
#define reg_iop_sw_cfg_rw_pinmapping___gio3_0___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio7_4___lsb 18
#define reg_iop_sw_cfg_rw_pinmapping___gio7_4___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio11_8___lsb 20
#define reg_iop_sw_cfg_rw_pinmapping___gio11_8___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio15_12___lsb 22
#define reg_iop_sw_cfg_rw_pinmapping___gio15_12___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio19_16___lsb 24
#define reg_iop_sw_cfg_rw_pinmapping___gio19_16___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio23_20___lsb 26
#define reg_iop_sw_cfg_rw_pinmapping___gio23_20___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio27_24___lsb 28
#define reg_iop_sw_cfg_rw_pinmapping___gio27_24___width 2
#define reg_iop_sw_cfg_rw_pinmapping___gio31_28___lsb 30
#define reg_iop_sw_cfg_rw_pinmapping___gio31_28___width 2
#define reg_iop_sw_cfg_rw_pinmapping_offset 160

/*                                                    */
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_lo___lsb 0
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_lo___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_hi___lsb 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_hi___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_lo_oe___lsb 6
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_lo_oe___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_hi_oe___lsb 9
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus0_hi_oe___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_lo___lsb 12
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_lo___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_hi___lsb 15
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_hi___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_lo_oe___lsb 18
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_lo_oe___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_hi_oe___lsb 21
#define reg_iop_sw_cfg_rw_bus_out_cfg___bus1_hi_oe___width 3
#define reg_iop_sw_cfg_rw_bus_out_cfg_offset 164

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio0___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio0___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio0_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio0_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio1___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio1___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio1_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio1_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio2___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio2___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio2_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio2_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio3___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio3___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio3_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg___gio3_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp0_cfg_offset 168

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio4___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio4___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio4_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio4_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio5___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio5___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio5_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio5_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio6___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio6___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio6_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio6_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio7___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio7___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio7_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg___gio7_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp1_cfg_offset 172

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio8___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio8___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio8_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio8_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio9___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio9___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio9_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio9_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio10___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio10___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio10_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio10_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio11___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio11___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio11_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg___gio11_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp2_cfg_offset 176

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio12___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio12___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio12_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio12_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio13___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio13___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio13_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio13_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio14___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio14___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio14_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio14_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio15___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio15___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio15_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg___gio15_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp3_cfg_offset 180

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio16___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio16___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio16_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio16_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio17___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio17___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio17_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio17_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio18___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio18___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio18_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio18_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio19___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio19___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio19_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg___gio19_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp4_cfg_offset 184

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio20___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio20___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio20_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio20_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio21___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio21___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio21_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio21_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio22___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio22___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio22_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio22_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio23___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio23___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio23_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg___gio23_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp5_cfg_offset 188

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio24___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio24___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio24_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio24_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio25___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio25___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio25_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio25_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio26___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio26___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio26_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio26_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio27___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio27___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio27_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg___gio27_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp6_cfg_offset 192

/*                                                         */
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio28___lsb 0
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio28___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio28_oe___lsb 4
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio28_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio29___lsb 6
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio29___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio29_oe___lsb 10
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio29_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio30___lsb 12
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio30___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio30_oe___lsb 16
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio30_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio31___lsb 18
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio31___width 4
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio31_oe___lsb 22
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg___gio31_oe___width 2
#define reg_iop_sw_cfg_rw_gio_out_grp7_cfg_offset 196

/*                                                 */
#define reg_iop_sw_cfg_rw_spu0_cfg___bus0_in___lsb 0
#define reg_iop_sw_cfg_rw_spu0_cfg___bus0_in___width 2
#define reg_iop_sw_cfg_rw_spu0_cfg___bus1_in___lsb 2
#define reg_iop_sw_cfg_rw_spu0_cfg___bus1_in___width 2
#define reg_iop_sw_cfg_rw_spu0_cfg_offset 200

/*                                                 */
#define reg_iop_sw_cfg_rw_spu1_cfg___bus0_in___lsb 0
#define reg_iop_sw_cfg_rw_spu1_cfg___bus0_in___width 2
#define reg_iop_sw_cfg_rw_spu1_cfg___bus1_in___lsb 2
#define reg_iop_sw_cfg_rw_spu1_cfg___bus1_in___width 2
#define reg_iop_sw_cfg_rw_spu1_cfg_offset 204

/*                                                       */
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___ext_clk___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___ext_clk___width 3
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_en___lsb 3
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_en___bit 3
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_en___lsb 4
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_en___bit 4
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_en___lsb 5
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_en___bit 5
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_en___lsb 6
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_en___bit 6
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_dis___lsb 7
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr0_dis___bit 7
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_dis___lsb 8
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr1_dis___bit 8
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_dis___lsb 9
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr2_dis___bit 9
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_dis___lsb 10
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp0_cfg___tmr3_dis___bit 10
#define reg_iop_sw_cfg_rw_timer_grp0_cfg_offset 208

/*                                                       */
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___ext_clk___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___ext_clk___width 3
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_en___lsb 3
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_en___bit 3
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_en___lsb 4
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_en___bit 4
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_en___lsb 5
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_en___bit 5
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_en___lsb 6
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_en___bit 6
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_dis___lsb 7
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr0_dis___bit 7
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_dis___lsb 8
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr1_dis___bit 8
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_dis___lsb 9
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr2_dis___bit 9
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_dis___lsb 10
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp1_cfg___tmr3_dis___bit 10
#define reg_iop_sw_cfg_rw_timer_grp1_cfg_offset 212

/*                                                       */
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___ext_clk___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___ext_clk___width 3
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_en___lsb 3
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_en___bit 3
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_en___lsb 4
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_en___bit 4
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_en___lsb 5
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_en___bit 5
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_en___lsb 6
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_en___bit 6
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_dis___lsb 7
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr0_dis___bit 7
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_dis___lsb 8
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr1_dis___bit 8
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_dis___lsb 9
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr2_dis___bit 9
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_dis___lsb 10
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp2_cfg___tmr3_dis___bit 10
#define reg_iop_sw_cfg_rw_timer_grp2_cfg_offset 216

/*                                                       */
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___ext_clk___lsb 0
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___ext_clk___width 3
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_en___lsb 3
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_en___bit 3
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_en___lsb 4
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_en___bit 4
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_en___lsb 5
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_en___bit 5
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_en___lsb 6
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_en___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_en___bit 6
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_dis___lsb 7
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr0_dis___bit 7
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_dis___lsb 8
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr1_dis___bit 8
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_dis___lsb 9
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr2_dis___bit 9
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_dis___lsb 10
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_dis___width 1
#define reg_iop_sw_cfg_rw_timer_grp3_cfg___tmr3_dis___bit 10
#define reg_iop_sw_cfg_rw_timer_grp3_cfg_offset 220

/*                                                         */
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_dis___lsb 0
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_dis___bit 0
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_en___lsb 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp0_en___bit 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_dis___lsb 2
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_dis___bit 2
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_en___lsb 3
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp1_en___bit 3
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_dis___lsb 4
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_dis___bit 4
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_en___lsb 5
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp2_en___bit 5
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_dis___lsb 6
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_dis___bit 6
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_en___lsb 7
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp3_en___bit 7
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_dis___lsb 8
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_dis___bit 8
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_en___lsb 9
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp4_en___bit 9
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_dis___lsb 10
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_dis___bit 10
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_en___lsb 11
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp5_en___bit 11
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_dis___lsb 12
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_dis___bit 12
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_en___lsb 13
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp6_en___bit 13
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_dis___lsb 14
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_dis___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_dis___bit 14
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_en___lsb 15
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_en___width 1
#define reg_iop_sw_cfg_rw_trigger_grps_cfg___grp7_en___bit 15
#define reg_iop_sw_cfg_rw_trigger_grps_cfg_offset 224

/*                                                 */
#define reg_iop_sw_cfg_rw_pdp0_cfg___dmc0_usr___lsb 0
#define reg_iop_sw_cfg_rw_pdp0_cfg___dmc0_usr___width 1
#define reg_iop_sw_cfg_rw_pdp0_cfg___dmc0_usr___bit 0
#define reg_iop_sw_cfg_rw_pdp0_cfg___out_strb___lsb 1
#define reg_iop_sw_cfg_rw_pdp0_cfg___out_strb___width 5
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_src___lsb 6
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_src___width 3
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_size___lsb 9
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_size___width 3
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_last___lsb 12
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_last___width 2
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_strb___lsb 14
#define reg_iop_sw_cfg_rw_pdp0_cfg___in_strb___width 4
#define reg_iop_sw_cfg_rw_pdp0_cfg___out_src___lsb 18
#define reg_iop_sw_cfg_rw_pdp0_cfg___out_src___width 1
#define reg_iop_sw_cfg_rw_pdp0_cfg___out_src___bit 18
#define reg_iop_sw_cfg_rw_pdp0_cfg_offset 228

/*                                                 */
#define reg_iop_sw_cfg_rw_pdp1_cfg___dmc1_usr___lsb 0
#define reg_iop_sw_cfg_rw_pdp1_cfg___dmc1_usr___width 1
#define reg_iop_sw_cfg_rw_pdp1_cfg___dmc1_usr___bit 0
#define reg_iop_sw_cfg_rw_pdp1_cfg___out_strb___lsb 1
#define reg_iop_sw_cfg_rw_pdp1_cfg___out_strb___width 5
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_src___lsb 6
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_src___width 3
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_size___lsb 9
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_size___width 3
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_last___lsb 12
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_last___width 2
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_strb___lsb 14
#define reg_iop_sw_cfg_rw_pdp1_cfg___in_strb___width 4
#define reg_iop_sw_cfg_rw_pdp1_cfg___out_src___lsb 18
#define reg_iop_sw_cfg_rw_pdp1_cfg___out_src___width 1
#define reg_iop_sw_cfg_rw_pdp1_cfg___out_src___bit 18
#define reg_iop_sw_cfg_rw_pdp1_cfg_offset 232

/*                                                */
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_out0_strb___lsb 0
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_out0_strb___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_out1_strb___lsb 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_out1_strb___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_data___lsb 6
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_data___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_last___lsb 9
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_last___width 2
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_strb___lsb 11
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in0_strb___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_data___lsb 14
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_data___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_last___lsb 17
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_last___width 2
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_strb___lsb 19
#define reg_iop_sw_cfg_rw_sdp_cfg___sdp_in1_strb___width 3
#define reg_iop_sw_cfg_rw_sdp_cfg_offset 236


/*           */
#define regk_iop_sw_cfg_a                         0x00000001
#define regk_iop_sw_cfg_b                         0x00000002
#define regk_iop_sw_cfg_bus0                      0x00000000
#define regk_iop_sw_cfg_bus0_rot16                0x00000004
#define regk_iop_sw_cfg_bus0_rot24                0x00000006
#define regk_iop_sw_cfg_bus0_rot8                 0x00000002
#define regk_iop_sw_cfg_bus1                      0x00000001
#define regk_iop_sw_cfg_bus1_rot16                0x00000005
#define regk_iop_sw_cfg_bus1_rot24                0x00000007
#define regk_iop_sw_cfg_bus1_rot8                 0x00000003
#define regk_iop_sw_cfg_clk12                     0x00000000
#define regk_iop_sw_cfg_cpu                       0x00000000
#define regk_iop_sw_cfg_dmc0                      0x00000000
#define regk_iop_sw_cfg_dmc1                      0x00000001
#define regk_iop_sw_cfg_gated_clk0                0x00000010
#define regk_iop_sw_cfg_gated_clk1                0x00000011
#define regk_iop_sw_cfg_gated_clk2                0x00000012
#define regk_iop_sw_cfg_gated_clk3                0x00000013
#define regk_iop_sw_cfg_gio0                      0x00000004
#define regk_iop_sw_cfg_gio1                      0x00000001
#define regk_iop_sw_cfg_gio2                      0x00000005
#define regk_iop_sw_cfg_gio3                      0x00000002
#define regk_iop_sw_cfg_gio4                      0x00000006
#define regk_iop_sw_cfg_gio5                      0x00000003
#define regk_iop_sw_cfg_gio6                      0x00000007
#define regk_iop_sw_cfg_gio7                      0x00000004
#define regk_iop_sw_cfg_gio_in0                   0x00000000
#define regk_iop_sw_cfg_gio_in1                   0x00000001
#define regk_iop_sw_cfg_gio_in10                  0x00000002
#define regk_iop_sw_cfg_gio_in11                  0x00000003
#define regk_iop_sw_cfg_gio_in14                  0x00000004
#define regk_iop_sw_cfg_gio_in15                  0x00000005
#define regk_iop_sw_cfg_gio_in18                  0x00000002
#define regk_iop_sw_cfg_gio_in19                  0x00000003
#define regk_iop_sw_cfg_gio_in20                  0x00000004
#define regk_iop_sw_cfg_gio_in21                  0x00000005
#define regk_iop_sw_cfg_gio_in26                  0x00000006
#define regk_iop_sw_cfg_gio_in27                  0x00000007
#define regk_iop_sw_cfg_gio_in28                  0x00000006
#define regk_iop_sw_cfg_gio_in29                  0x00000007
#define regk_iop_sw_cfg_gio_in4                   0x00000000
#define regk_iop_sw_cfg_gio_in5                   0x00000001
#define regk_iop_sw_cfg_last_timer_grp0_tmr2      0x00000001
#define regk_iop_sw_cfg_last_timer_grp1_tmr2      0x00000001
#define regk_iop_sw_cfg_last_timer_grp2_tmr2      0x00000002
#define regk_iop_sw_cfg_last_timer_grp2_tmr3      0x00000003
#define regk_iop_sw_cfg_last_timer_grp3_tmr2      0x00000002
#define regk_iop_sw_cfg_last_timer_grp3_tmr3      0x00000003
#define regk_iop_sw_cfg_mpu                       0x00000001
#define regk_iop_sw_cfg_none                      0x00000000
#define regk_iop_sw_cfg_par0                      0x00000000
#define regk_iop_sw_cfg_par1                      0x00000001
#define regk_iop_sw_cfg_pdp_out0                  0x00000002
#define regk_iop_sw_cfg_pdp_out0_hi               0x00000001
#define regk_iop_sw_cfg_pdp_out0_hi_rot8          0x00000005
#define regk_iop_sw_cfg_pdp_out0_lo               0x00000000
#define regk_iop_sw_cfg_pdp_out0_lo_rot8          0x00000004
#define regk_iop_sw_cfg_pdp_out1                  0x00000003
#define regk_iop_sw_cfg_pdp_out1_hi               0x00000003
#define regk_iop_sw_cfg_pdp_out1_hi_rot8          0x00000005
#define regk_iop_sw_cfg_pdp_out1_lo               0x00000002
#define regk_iop_sw_cfg_pdp_out1_lo_rot8          0x00000004
#define regk_iop_sw_cfg_rw_bus0_mask_default      0x00000000
#define regk_iop_sw_cfg_rw_bus0_oe_mask_default   0x00000000
#define regk_iop_sw_cfg_rw_bus1_mask_default      0x00000000
#define regk_iop_sw_cfg_rw_bus1_oe_mask_default   0x00000000
#define regk_iop_sw_cfg_rw_bus_out_cfg_default    0x00000000
#define regk_iop_sw_cfg_rw_crc_par0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_crc_par1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_dmc_in0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_dmc_in1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_dmc_out0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_dmc_out1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_in0_extra_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_in0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_in1_extra_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_in1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_out0_extra_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_out0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_out1_extra_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_fifo_out1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_mask_default       0x00000000
#define regk_iop_sw_cfg_rw_gio_oe_mask_default    0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp0_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp1_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp2_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp3_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp4_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp5_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp6_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_gio_out_grp7_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_pdp0_cfg_default       0x00000000
#define regk_iop_sw_cfg_rw_pdp1_cfg_default       0x00000000
#define regk_iop_sw_cfg_rw_pinmapping_default     0x55555555
#define regk_iop_sw_cfg_rw_sap_in_owner_default   0x00000000
#define regk_iop_sw_cfg_rw_sap_out_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_scrc_in0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_scrc_in1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_scrc_out0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_scrc_out1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_sdp_cfg_default        0x00000000
#define regk_iop_sw_cfg_rw_spu0_cfg_default       0x00000000
#define regk_iop_sw_cfg_rw_spu0_owner_default     0x00000000
#define regk_iop_sw_cfg_rw_spu1_cfg_default       0x00000000
#define regk_iop_sw_cfg_rw_spu1_owner_default     0x00000000
#define regk_iop_sw_cfg_rw_timer_grp0_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp1_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp2_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp2_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp3_cfg_default  0x00000000
#define regk_iop_sw_cfg_rw_timer_grp3_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp0_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp1_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp2_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp3_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp4_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp5_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp6_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grp7_owner_default  0x00000000
#define regk_iop_sw_cfg_rw_trigger_grps_cfg_default  0x00000000
#define regk_iop_sw_cfg_sdp_out0                  0x00000008
#define regk_iop_sw_cfg_sdp_out1                  0x00000009
#define regk_iop_sw_cfg_size16                    0x00000002
#define regk_iop_sw_cfg_size24                    0x00000003
#define regk_iop_sw_cfg_size32                    0x00000004
#define regk_iop_sw_cfg_size8                     0x00000001
#define regk_iop_sw_cfg_spu0                      0x00000002
#define regk_iop_sw_cfg_spu0_bus_out0_hi          0x00000006
#define regk_iop_sw_cfg_spu0_bus_out0_lo          0x00000006
#define regk_iop_sw_cfg_spu0_bus_out1_hi          0x00000007
#define regk_iop_sw_cfg_spu0_bus_out1_lo          0x00000007
#define regk_iop_sw_cfg_spu0_g0                   0x0000000e
#define regk_iop_sw_cfg_spu0_g1                   0x0000000e
#define regk_iop_sw_cfg_spu0_g2                   0x0000000e
#define regk_iop_sw_cfg_spu0_g3                   0x0000000e
#define regk_iop_sw_cfg_spu0_g4                   0x0000000e
#define regk_iop_sw_cfg_spu0_g5                   0x0000000e
#define regk_iop_sw_cfg_spu0_g6                   0x0000000e
#define regk_iop_sw_cfg_spu0_g7                   0x0000000e
#define regk_iop_sw_cfg_spu0_gio0                 0x00000000
#define regk_iop_sw_cfg_spu0_gio1                 0x00000001
#define regk_iop_sw_cfg_spu0_gio2                 0x00000000
#define regk_iop_sw_cfg_spu0_gio5                 0x00000005
#define regk_iop_sw_cfg_spu0_gio6                 0x00000006
#define regk_iop_sw_cfg_spu0_gio7                 0x00000007
#define regk_iop_sw_cfg_spu0_gio_out0             0x00000008
#define regk_iop_sw_cfg_spu0_gio_out1             0x00000009
#define regk_iop_sw_cfg_spu0_gio_out2             0x0000000a
#define regk_iop_sw_cfg_spu0_gio_out3             0x0000000b
#define regk_iop_sw_cfg_spu0_gio_out4             0x0000000c
#define regk_iop_sw_cfg_spu0_gio_out5             0x0000000d
#define regk_iop_sw_cfg_spu0_gio_out6             0x0000000e
#define regk_iop_sw_cfg_spu0_gio_out7             0x0000000f
#define regk_iop_sw_cfg_spu0_gioout0              0x00000000
#define regk_iop_sw_cfg_spu0_gioout1              0x00000000
#define regk_iop_sw_cfg_spu0_gioout10             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout11             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout12             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout13             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout14             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout15             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout16             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout17             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout18             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout19             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout2              0x00000002
#define regk_iop_sw_cfg_spu0_gioout20             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout21             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout22             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout23             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout24             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout25             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout26             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout27             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout28             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout29             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout3              0x00000002
#define regk_iop_sw_cfg_spu0_gioout30             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout31             0x0000000e
#define regk_iop_sw_cfg_spu0_gioout4              0x00000004
#define regk_iop_sw_cfg_spu0_gioout5              0x00000004
#define regk_iop_sw_cfg_spu0_gioout6              0x00000006
#define regk_iop_sw_cfg_spu0_gioout7              0x00000006
#define regk_iop_sw_cfg_spu0_gioout8              0x0000000e
#define regk_iop_sw_cfg_spu0_gioout9              0x0000000e
#define regk_iop_sw_cfg_spu1                      0x00000003
#define regk_iop_sw_cfg_spu1_bus_out0_hi          0x00000006
#define regk_iop_sw_cfg_spu1_bus_out0_lo          0x00000006
#define regk_iop_sw_cfg_spu1_bus_out1_hi          0x00000007
#define regk_iop_sw_cfg_spu1_bus_out1_lo          0x00000007
#define regk_iop_sw_cfg_spu1_g0                   0x0000000f
#define regk_iop_sw_cfg_spu1_g1                   0x0000000f
#define regk_iop_sw_cfg_spu1_g2                   0x0000000f
#define regk_iop_sw_cfg_spu1_g3                   0x0000000f
#define regk_iop_sw_cfg_spu1_g4                   0x0000000f
#define regk_iop_sw_cfg_spu1_g5                   0x0000000f
#define regk_iop_sw_cfg_spu1_g6                   0x0000000f
#define regk_iop_sw_cfg_spu1_g7                   0x0000000f
#define regk_iop_sw_cfg_spu1_gio0                 0x00000002
#define regk_iop_sw_cfg_spu1_gio1                 0x00000003
#define regk_iop_sw_cfg_spu1_gio2                 0x00000002
#define regk_iop_sw_cfg_spu1_gio5                 0x00000005
#define regk_iop_sw_cfg_spu1_gio6                 0x00000006
#define regk_iop_sw_cfg_spu1_gio7                 0x00000007
#define regk_iop_sw_cfg_spu1_gio_out0             0x00000008
#define regk_iop_sw_cfg_spu1_gio_out1             0x00000009
#define regk_iop_sw_cfg_spu1_gio_out2             0x0000000a
#define regk_iop_sw_cfg_spu1_gio_out3             0x0000000b
#define regk_iop_sw_cfg_spu1_gio_out4             0x0000000c
#define regk_iop_sw_cfg_spu1_gio_out5             0x0000000d
#define regk_iop_sw_cfg_spu1_gio_out6             0x0000000e
#define regk_iop_sw_cfg_spu1_gio_out7             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout0              0x00000001
#define regk_iop_sw_cfg_spu1_gioout1              0x00000001
#define regk_iop_sw_cfg_spu1_gioout10             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout11             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout12             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout13             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout14             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout15             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout16             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout17             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout18             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout19             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout2              0x00000003
#define regk_iop_sw_cfg_spu1_gioout20             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout21             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout22             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout23             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout24             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout25             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout26             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout27             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout28             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout29             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout3              0x00000003
#define regk_iop_sw_cfg_spu1_gioout30             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout31             0x0000000f
#define regk_iop_sw_cfg_spu1_gioout4              0x00000005
#define regk_iop_sw_cfg_spu1_gioout5              0x00000005
#define regk_iop_sw_cfg_spu1_gioout6              0x00000007
#define regk_iop_sw_cfg_spu1_gioout7              0x00000007
#define regk_iop_sw_cfg_spu1_gioout8              0x0000000f
#define regk_iop_sw_cfg_spu1_gioout9              0x0000000f
#define regk_iop_sw_cfg_strb_timer_grp0_tmr0      0x00000001
#define regk_iop_sw_cfg_strb_timer_grp0_tmr1      0x00000002
#define regk_iop_sw_cfg_strb_timer_grp1_tmr0      0x00000001
#define regk_iop_sw_cfg_strb_timer_grp1_tmr1      0x00000002
#define regk_iop_sw_cfg_strb_timer_grp2_tmr0      0x00000003
#define regk_iop_sw_cfg_strb_timer_grp2_tmr1      0x00000002
#define regk_iop_sw_cfg_strb_timer_grp3_tmr0      0x00000003
#define regk_iop_sw_cfg_strb_timer_grp3_tmr1      0x00000002
#define regk_iop_sw_cfg_timer_grp0                0x00000000
#define regk_iop_sw_cfg_timer_grp0_rot            0x00000001
#define regk_iop_sw_cfg_timer_grp0_strb0          0x0000000a
#define regk_iop_sw_cfg_timer_grp0_strb1          0x0000000a
#define regk_iop_sw_cfg_timer_grp0_strb2          0x0000000a
#define regk_iop_sw_cfg_timer_grp0_strb3          0x0000000a
#define regk_iop_sw_cfg_timer_grp0_tmr0           0x00000004
#define regk_iop_sw_cfg_timer_grp0_tmr1           0x00000004
#define regk_iop_sw_cfg_timer_grp1                0x00000000
#define regk_iop_sw_cfg_timer_grp1_rot            0x00000001
#define regk_iop_sw_cfg_timer_grp1_strb0          0x0000000b
#define regk_iop_sw_cfg_timer_grp1_strb1          0x0000000b
#define regk_iop_sw_cfg_timer_grp1_strb2          0x0000000b
#define regk_iop_sw_cfg_timer_grp1_strb3          0x0000000b
#define regk_iop_sw_cfg_timer_grp1_tmr0           0x00000005
#define regk_iop_sw_cfg_timer_grp1_tmr1           0x00000005
#define regk_iop_sw_cfg_timer_grp2                0x00000000
#define regk_iop_sw_cfg_timer_grp2_rot            0x00000001
#define regk_iop_sw_cfg_timer_grp2_strb0          0x0000000c
#define regk_iop_sw_cfg_timer_grp2_strb1          0x0000000c
#define regk_iop_sw_cfg_timer_grp2_strb2          0x0000000c
#define regk_iop_sw_cfg_timer_grp2_strb3          0x0000000c
#define regk_iop_sw_cfg_timer_grp2_tmr0           0x00000006
#define regk_iop_sw_cfg_timer_grp2_tmr1           0x00000006
#define regk_iop_sw_cfg_timer_grp3                0x00000000
#define regk_iop_sw_cfg_timer_grp3_rot            0x00000001
#define regk_iop_sw_cfg_timer_grp3_strb0          0x0000000d
#define regk_iop_sw_cfg_timer_grp3_strb1          0x0000000d
#define regk_iop_sw_cfg_timer_grp3_strb2          0x0000000d
#define regk_iop_sw_cfg_timer_grp3_strb3          0x0000000d
#define regk_iop_sw_cfg_timer_grp3_tmr0           0x00000007
#define regk_iop_sw_cfg_timer_grp3_tmr1           0x00000007
#define regk_iop_sw_cfg_trig0_0                   0x00000000
#define regk_iop_sw_cfg_trig0_1                   0x00000000
#define regk_iop_sw_cfg_trig0_2                   0x00000000
#define regk_iop_sw_cfg_trig0_3                   0x00000000
#define regk_iop_sw_cfg_trig1_0                   0x00000000
#define regk_iop_sw_cfg_trig1_1                   0x00000000
#define regk_iop_sw_cfg_trig1_2                   0x00000000
#define regk_iop_sw_cfg_trig1_3                   0x00000000
#define regk_iop_sw_cfg_trig2_0                   0x00000000
#define regk_iop_sw_cfg_trig2_1                   0x00000000
#define regk_iop_sw_cfg_trig2_2                   0x00000000
#define regk_iop_sw_cfg_trig2_3                   0x00000000
#define regk_iop_sw_cfg_trig3_0                   0x00000000
#define regk_iop_sw_cfg_trig3_1                   0x00000000
#define regk_iop_sw_cfg_trig3_2                   0x00000000
#define regk_iop_sw_cfg_trig3_3                   0x00000000
#define regk_iop_sw_cfg_trig4_0                   0x00000001
#define regk_iop_sw_cfg_trig4_1                   0x00000001
#define regk_iop_sw_cfg_trig4_2                   0x00000001
#define regk_iop_sw_cfg_trig4_3                   0x00000001
#define regk_iop_sw_cfg_trig5_0                   0x00000001
#define regk_iop_sw_cfg_trig5_1                   0x00000001
#define regk_iop_sw_cfg_trig5_2                   0x00000001
#define regk_iop_sw_cfg_trig5_3                   0x00000001
#define regk_iop_sw_cfg_trig6_0                   0x00000001
#define regk_iop_sw_cfg_trig6_1                   0x00000001
#define regk_iop_sw_cfg_trig6_2                   0x00000001
#define regk_iop_sw_cfg_trig6_3                   0x00000001
#define regk_iop_sw_cfg_trig7_0                   0x00000001
#define regk_iop_sw_cfg_trig7_1                   0x00000001
#define regk_iop_sw_cfg_trig7_2                   0x00000001
#define regk_iop_sw_cfg_trig7_3                   0x00000001
#endif /*                         */
