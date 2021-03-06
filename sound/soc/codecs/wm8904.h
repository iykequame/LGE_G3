/*
 * wm8904.h  --  WM8904 ASoC driver
 *
 * Copyright 2009 Wolfson Microelectronics, plc
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WM8904_H
#define _WM8904_H

#define WM8904_CLK_MCLK 1
#define WM8904_CLK_FLL  2

#define WM8904_FLL_MCLK          1
#define WM8904_FLL_BCLK          2
#define WM8904_FLL_LRCLK         3
#define WM8904_FLL_FREE_RUNNING  4

/*
                   
 */
#define WM8904_SW_RESET_AND_ID                  0x00
#define WM8904_REVISION				0x01
#define WM8904_BIAS_CONTROL_0                   0x04
#define WM8904_VMID_CONTROL_0                   0x05
#define WM8904_MIC_BIAS_CONTROL_0               0x06
#define WM8904_MIC_BIAS_CONTROL_1               0x07
#define WM8904_ANALOGUE_DAC_0                   0x08
#define WM8904_MIC_FILTER_CONTROL               0x09
#define WM8904_ANALOGUE_ADC_0                   0x0A
#define WM8904_POWER_MANAGEMENT_0               0x0C
#define WM8904_POWER_MANAGEMENT_2               0x0E
#define WM8904_POWER_MANAGEMENT_3               0x0F
#define WM8904_POWER_MANAGEMENT_6               0x12
#define WM8904_CLOCK_RATES_0                    0x14
#define WM8904_CLOCK_RATES_1                    0x15
#define WM8904_CLOCK_RATES_2                    0x16
#define WM8904_AUDIO_INTERFACE_0                0x18
#define WM8904_AUDIO_INTERFACE_1                0x19
#define WM8904_AUDIO_INTERFACE_2                0x1A
#define WM8904_AUDIO_INTERFACE_3                0x1B
#define WM8904_DAC_DIGITAL_VOLUME_LEFT          0x1E
#define WM8904_DAC_DIGITAL_VOLUME_RIGHT         0x1F
#define WM8904_DAC_DIGITAL_0                    0x20
#define WM8904_DAC_DIGITAL_1                    0x21
#define WM8904_ADC_DIGITAL_VOLUME_LEFT          0x24
#define WM8904_ADC_DIGITAL_VOLUME_RIGHT         0x25
#define WM8904_ADC_DIGITAL_0                    0x26
#define WM8904_DIGITAL_MICROPHONE_0             0x27
#define WM8904_DRC_0                            0x28
#define WM8904_DRC_1                            0x29
#define WM8904_DRC_2                            0x2A
#define WM8904_DRC_3                            0x2B
#define WM8904_ANALOGUE_LEFT_INPUT_0            0x2C
#define WM8904_ANALOGUE_RIGHT_INPUT_0           0x2D
#define WM8904_ANALOGUE_LEFT_INPUT_1            0x2E
#define WM8904_ANALOGUE_RIGHT_INPUT_1           0x2F
#define WM8904_ANALOGUE_OUT1_LEFT               0x39
#define WM8904_ANALOGUE_OUT1_RIGHT              0x3A
#define WM8904_ANALOGUE_OUT2_LEFT               0x3B
#define WM8904_ANALOGUE_OUT2_RIGHT              0x3C
#define WM8904_ANALOGUE_OUT12_ZC                0x3D
#define WM8904_DC_SERVO_0                       0x43
#define WM8904_DC_SERVO_1                       0x44
#define WM8904_DC_SERVO_2                       0x45
#define WM8904_DC_SERVO_4                       0x47
#define WM8904_DC_SERVO_5                       0x48
#define WM8904_DC_SERVO_6                       0x49
#define WM8904_DC_SERVO_7                       0x4A
#define WM8904_DC_SERVO_8                       0x4B
#define WM8904_DC_SERVO_9                       0x4C
#define WM8904_DC_SERVO_READBACK_0              0x4D
#define WM8904_ANALOGUE_HP_0                    0x5A
#define WM8904_ANALOGUE_LINEOUT_0               0x5E
#define WM8904_CHARGE_PUMP_0                    0x62
#define WM8904_CLASS_W_0                        0x68
#define WM8904_WRITE_SEQUENCER_0                0x6C
#define WM8904_WRITE_SEQUENCER_1                0x6D
#define WM8904_WRITE_SEQUENCER_2                0x6E
#define WM8904_WRITE_SEQUENCER_3                0x6F
#define WM8904_WRITE_SEQUENCER_4                0x70
#define WM8904_FLL_CONTROL_1                    0x74
#define WM8904_FLL_CONTROL_2                    0x75
#define WM8904_FLL_CONTROL_3                    0x76
#define WM8904_FLL_CONTROL_4                    0x77
#define WM8904_FLL_CONTROL_5                    0x78
#define WM8904_GPIO_CONTROL_1                   0x79
#define WM8904_GPIO_CONTROL_2                   0x7A
#define WM8904_GPIO_CONTROL_3                   0x7B
#define WM8904_GPIO_CONTROL_4                   0x7C
#define WM8904_DIGITAL_PULLS                    0x7E
#define WM8904_INTERRUPT_STATUS                 0x7F
#define WM8904_INTERRUPT_STATUS_MASK            0x80
#define WM8904_INTERRUPT_POLARITY               0x81
#define WM8904_INTERRUPT_DEBOUNCE               0x82
#define WM8904_EQ1                              0x86
#define WM8904_EQ2                              0x87
#define WM8904_EQ3                              0x88
#define WM8904_EQ4                              0x89
#define WM8904_EQ5                              0x8A
#define WM8904_EQ6                              0x8B
#define WM8904_EQ7                              0x8C
#define WM8904_EQ8                              0x8D
#define WM8904_EQ9                              0x8E
#define WM8904_EQ10                             0x8F
#define WM8904_EQ11                             0x90
#define WM8904_EQ12                             0x91
#define WM8904_EQ13                             0x92
#define WM8904_EQ14                             0x93
#define WM8904_EQ15                             0x94
#define WM8904_EQ16                             0x95
#define WM8904_EQ17                             0x96
#define WM8904_EQ18                             0x97
#define WM8904_EQ19                             0x98
#define WM8904_EQ20                             0x99
#define WM8904_EQ21                             0x9A
#define WM8904_EQ22                             0x9B
#define WM8904_EQ23                             0x9C
#define WM8904_EQ24                             0x9D
#define WM8904_CONTROL_INTERFACE_TEST_1         0xA1
#define WM8904_ADC_TEST_0			0xC6
#define WM8904_ANALOGUE_OUTPUT_BIAS_0           0xCC
#define WM8904_FLL_NCO_TEST_0                   0xF7
#define WM8904_FLL_NCO_TEST_1                   0xF8

#define WM8904_REGISTER_COUNT                   101
#define WM8904_MAX_REGISTER                     0xF8

/*
                     
 */

/*
                              
 */
#define WM8904_SW_RST_DEV_ID1_MASK              0xFFFF  /*                         */
#define WM8904_SW_RST_DEV_ID1_SHIFT                  0  /*                         */
#define WM8904_SW_RST_DEV_ID1_WIDTH                 16  /*                         */

/*
                       
 */
#define WM8904_REVISION_MASK              	0x000F  /*                  */
#define WM8904_REVISION_SHIFT             	     0  /*                  */
#define WM8904_REVISION_WIDTH             	    16  /*                  */

/*
                             
 */
#define WM8904_POBCTRL                          0x0010  /*         */
#define WM8904_POBCTRL_MASK                     0x0010  /*         */
#define WM8904_POBCTRL_SHIFT                         4  /*         */
#define WM8904_POBCTRL_WIDTH                         1  /*         */
#define WM8904_ISEL_MASK                        0x000C  /*              */
#define WM8904_ISEL_SHIFT                            2  /*              */
#define WM8904_ISEL_WIDTH                            2  /*              */
#define WM8904_STARTUP_BIAS_ENA                 0x0002  /*                  */
#define WM8904_STARTUP_BIAS_ENA_MASK            0x0002  /*                  */
#define WM8904_STARTUP_BIAS_ENA_SHIFT                1  /*                  */
#define WM8904_STARTUP_BIAS_ENA_WIDTH                1  /*                  */
#define WM8904_BIAS_ENA                         0x0001  /*          */
#define WM8904_BIAS_ENA_MASK                    0x0001  /*          */
#define WM8904_BIAS_ENA_SHIFT                        0  /*          */
#define WM8904_BIAS_ENA_WIDTH                        1  /*          */

/*
                             
 */
#define WM8904_VMID_BUF_ENA                     0x0040  /*              */
#define WM8904_VMID_BUF_ENA_MASK                0x0040  /*              */
#define WM8904_VMID_BUF_ENA_SHIFT                    6  /*              */
#define WM8904_VMID_BUF_ENA_WIDTH                    1  /*              */
#define WM8904_VMID_RES_MASK                    0x0006  /*                  */
#define WM8904_VMID_RES_SHIFT                        1  /*                  */
#define WM8904_VMID_RES_WIDTH                        2  /*                  */
#define WM8904_VMID_ENA                         0x0001  /*          */
#define WM8904_VMID_ENA_MASK                    0x0001  /*          */
#define WM8904_VMID_ENA_SHIFT                        0  /*          */
#define WM8904_VMID_ENA_WIDTH                        1  /*          */

/*
                             
 */
#define WM8904_DAC_BIAS_SEL_MASK                0x0018  /*                      */
#define WM8904_DAC_BIAS_SEL_SHIFT                    3  /*                      */
#define WM8904_DAC_BIAS_SEL_WIDTH                    2  /*                      */
#define WM8904_DAC_VMID_BIAS_SEL_MASK           0x0006  /*                           */
#define WM8904_DAC_VMID_BIAS_SEL_SHIFT               1  /*                           */
#define WM8904_DAC_VMID_BIAS_SEL_WIDTH               2  /*                           */

/*
                                 
 */
#define WM8904_MIC_DET_SET_THRESHOLD_MASK       0xF000  /*                                 */
#define WM8904_MIC_DET_SET_THRESHOLD_SHIFT          12  /*                                 */
#define WM8904_MIC_DET_SET_THRESHOLD_WIDTH           4  /*                                 */
#define WM8904_MIC_DET_RESET_THRESHOLD_MASK     0x0F00  /*                                  */
#define WM8904_MIC_DET_RESET_THRESHOLD_SHIFT         8  /*                                  */
#define WM8904_MIC_DET_RESET_THRESHOLD_WIDTH         4  /*                                  */
#define WM8904_MIC_SHORT_SET_THRESHOLD_MASK     0x00F0  /*                                 */
#define WM8904_MIC_SHORT_SET_THRESHOLD_SHIFT         4  /*                                 */
#define WM8904_MIC_SHORT_SET_THRESHOLD_WIDTH         4  /*                                 */
#define WM8904_MIC_SHORT_RESET_THRESHOLD_MASK   0x000F  /*                                   */
#define WM8904_MIC_SHORT_RESET_THRESHOLD_SHIFT       0  /*                                   */
#define WM8904_MIC_SHORT_RESET_THRESHOLD_WIDTH       4  /*                                   */

/*
                              
 */
#define WM8904_ADC_OSR128                       0x0001  /*            */
#define WM8904_ADC_OSR128_MASK                  0x0001  /*            */
#define WM8904_ADC_OSR128_SHIFT                      0  /*            */
#define WM8904_ADC_OSR128_WIDTH                      1  /*            */

/*
                                  
 */
#define WM8904_INL_ENA                          0x0002  /*         */
#define WM8904_INL_ENA_MASK                     0x0002  /*         */
#define WM8904_INL_ENA_SHIFT                         1  /*         */
#define WM8904_INL_ENA_WIDTH                         1  /*         */
#define WM8904_INR_ENA                          0x0001  /*         */
#define WM8904_INR_ENA_MASK                     0x0001  /*         */
#define WM8904_INR_ENA_SHIFT                         0  /*         */
#define WM8904_INR_ENA_WIDTH                         1  /*         */

/*
                                  
 */
#define WM8904_HPL_PGA_ENA                      0x0002  /*             */
#define WM8904_HPL_PGA_ENA_MASK                 0x0002  /*             */
#define WM8904_HPL_PGA_ENA_SHIFT                     1  /*             */
#define WM8904_HPL_PGA_ENA_WIDTH                     1  /*             */
#define WM8904_HPR_PGA_ENA                      0x0001  /*             */
#define WM8904_HPR_PGA_ENA_MASK                 0x0001  /*             */
#define WM8904_HPR_PGA_ENA_SHIFT                     0  /*             */
#define WM8904_HPR_PGA_ENA_WIDTH                     1  /*             */

/*
                                  
 */
#define WM8904_LINEOUTL_PGA_ENA                 0x0002  /*                  */
#define WM8904_LINEOUTL_PGA_ENA_MASK            0x0002  /*                  */
#define WM8904_LINEOUTL_PGA_ENA_SHIFT                1  /*                  */
#define WM8904_LINEOUTL_PGA_ENA_WIDTH                1  /*                  */
#define WM8904_LINEOUTR_PGA_ENA                 0x0001  /*                  */
#define WM8904_LINEOUTR_PGA_ENA_MASK            0x0001  /*                  */
#define WM8904_LINEOUTR_PGA_ENA_SHIFT                0  /*                  */
#define WM8904_LINEOUTR_PGA_ENA_WIDTH                1  /*                  */

/*
                                  
 */
#define WM8904_DACL_ENA                         0x0008  /*          */
#define WM8904_DACL_ENA_MASK                    0x0008  /*          */
#define WM8904_DACL_ENA_SHIFT                        3  /*          */
#define WM8904_DACL_ENA_WIDTH                        1  /*          */
#define WM8904_DACR_ENA                         0x0004  /*          */
#define WM8904_DACR_ENA_MASK                    0x0004  /*          */
#define WM8904_DACR_ENA_SHIFT                        2  /*          */
#define WM8904_DACR_ENA_WIDTH                        1  /*          */
#define WM8904_ADCL_ENA                         0x0002  /*          */
#define WM8904_ADCL_ENA_MASK                    0x0002  /*          */
#define WM8904_ADCL_ENA_SHIFT                        1  /*          */
#define WM8904_ADCL_ENA_WIDTH                        1  /*          */
#define WM8904_ADCR_ENA                         0x0001  /*          */
#define WM8904_ADCR_ENA_MASK                    0x0001  /*          */
#define WM8904_ADCR_ENA_SHIFT                        0  /*          */
#define WM8904_ADCR_ENA_WIDTH                        1  /*          */

/*
                             
 */
#define WM8904_TOCLK_RATE_DIV16                 0x4000  /*                  */
#define WM8904_TOCLK_RATE_DIV16_MASK            0x4000  /*                  */
#define WM8904_TOCLK_RATE_DIV16_SHIFT               14  /*                  */
#define WM8904_TOCLK_RATE_DIV16_WIDTH                1  /*                  */
#define WM8904_TOCLK_RATE_X4                    0x2000  /*               */
#define WM8904_TOCLK_RATE_X4_MASK               0x2000  /*               */
#define WM8904_TOCLK_RATE_X4_SHIFT                  13  /*               */
#define WM8904_TOCLK_RATE_X4_WIDTH                   1  /*               */
#define WM8904_SR_MODE                          0x1000  /*         */
#define WM8904_SR_MODE_MASK                     0x1000  /*         */
#define WM8904_SR_MODE_SHIFT                        12  /*         */
#define WM8904_SR_MODE_WIDTH                         1  /*         */
#define WM8904_MCLK_DIV                         0x0001  /*          */
#define WM8904_MCLK_DIV_MASK                    0x0001  /*          */
#define WM8904_MCLK_DIV_SHIFT                        0  /*          */
#define WM8904_MCLK_DIV_WIDTH                        1  /*          */

/*
                             
 */
#define WM8904_CLK_SYS_RATE_MASK                0x3C00  /*                        */
#define WM8904_CLK_SYS_RATE_SHIFT                   10  /*                        */
#define WM8904_CLK_SYS_RATE_WIDTH                    4  /*                        */
#define WM8904_SAMPLE_RATE_MASK                 0x0007  /*                     */
#define WM8904_SAMPLE_RATE_SHIFT                     0  /*                     */
#define WM8904_SAMPLE_RATE_WIDTH                     3  /*                     */

/*
                             
 */
#define WM8904_MCLK_INV                         0x8000  /*          */
#define WM8904_MCLK_INV_MASK                    0x8000  /*          */
#define WM8904_MCLK_INV_SHIFT                       15  /*          */
#define WM8904_MCLK_INV_WIDTH                        1  /*          */
#define WM8904_SYSCLK_SRC                       0x4000  /*            */
#define WM8904_SYSCLK_SRC_MASK                  0x4000  /*            */
#define WM8904_SYSCLK_SRC_SHIFT                     14  /*            */
#define WM8904_SYSCLK_SRC_WIDTH                      1  /*            */
#define WM8904_TOCLK_RATE                       0x1000  /*            */
#define WM8904_TOCLK_RATE_MASK                  0x1000  /*            */
#define WM8904_TOCLK_RATE_SHIFT                     12  /*            */
#define WM8904_TOCLK_RATE_WIDTH                      1  /*            */
#define WM8904_OPCLK_ENA                        0x0008  /*           */
#define WM8904_OPCLK_ENA_MASK                   0x0008  /*           */
#define WM8904_OPCLK_ENA_SHIFT                       3  /*           */
#define WM8904_OPCLK_ENA_WIDTH                       1  /*           */
#define WM8904_CLK_SYS_ENA                      0x0004  /*             */
#define WM8904_CLK_SYS_ENA_MASK                 0x0004  /*             */
#define WM8904_CLK_SYS_ENA_SHIFT                     2  /*             */
#define WM8904_CLK_SYS_ENA_WIDTH                     1  /*             */
#define WM8904_CLK_DSP_ENA                      0x0002  /*             */
#define WM8904_CLK_DSP_ENA_MASK                 0x0002  /*             */
#define WM8904_CLK_DSP_ENA_SHIFT                     1  /*             */
#define WM8904_CLK_DSP_ENA_WIDTH                     1  /*             */
#define WM8904_TOCLK_ENA                        0x0001  /*           */
#define WM8904_TOCLK_ENA_MASK                   0x0001  /*           */
#define WM8904_TOCLK_ENA_SHIFT                       0  /*           */
#define WM8904_TOCLK_ENA_WIDTH                       1  /*           */

/*
                                 
 */
#define WM8904_DACL_DATINV                      0x1000  /*             */
#define WM8904_DACL_DATINV_MASK                 0x1000  /*             */
#define WM8904_DACL_DATINV_SHIFT                    12  /*             */
#define WM8904_DACL_DATINV_WIDTH                     1  /*             */
#define WM8904_DACR_DATINV                      0x0800  /*             */
#define WM8904_DACR_DATINV_MASK                 0x0800  /*             */
#define WM8904_DACR_DATINV_SHIFT                    11  /*             */
#define WM8904_DACR_DATINV_WIDTH                     1  /*             */
#define WM8904_DAC_BOOST_MASK                   0x0600  /*                    */
#define WM8904_DAC_BOOST_SHIFT                       9  /*                    */
#define WM8904_DAC_BOOST_WIDTH                       2  /*                    */
#define WM8904_LOOPBACK                         0x0100  /*          */
#define WM8904_LOOPBACK_MASK                    0x0100  /*          */
#define WM8904_LOOPBACK_SHIFT                        8  /*          */
#define WM8904_LOOPBACK_WIDTH                        1  /*          */
#define WM8904_AIFADCL_SRC                      0x0080  /*             */
#define WM8904_AIFADCL_SRC_MASK                 0x0080  /*             */
#define WM8904_AIFADCL_SRC_SHIFT                     7  /*             */
#define WM8904_AIFADCL_SRC_WIDTH                     1  /*             */
#define WM8904_AIFADCR_SRC                      0x0040  /*             */
#define WM8904_AIFADCR_SRC_MASK                 0x0040  /*             */
#define WM8904_AIFADCR_SRC_SHIFT                     6  /*             */
#define WM8904_AIFADCR_SRC_WIDTH                     1  /*             */
#define WM8904_AIFDACL_SRC                      0x0020  /*             */
#define WM8904_AIFDACL_SRC_MASK                 0x0020  /*             */
#define WM8904_AIFDACL_SRC_SHIFT                     5  /*             */
#define WM8904_AIFDACL_SRC_WIDTH                     1  /*             */
#define WM8904_AIFDACR_SRC                      0x0010  /*             */
#define WM8904_AIFDACR_SRC_MASK                 0x0010  /*             */
#define WM8904_AIFDACR_SRC_SHIFT                     4  /*             */
#define WM8904_AIFDACR_SRC_WIDTH                     1  /*             */
#define WM8904_ADC_COMP                         0x0008  /*          */
#define WM8904_ADC_COMP_MASK                    0x0008  /*          */
#define WM8904_ADC_COMP_SHIFT                        3  /*          */
#define WM8904_ADC_COMP_WIDTH                        1  /*          */
#define WM8904_ADC_COMPMODE                     0x0004  /*              */
#define WM8904_ADC_COMPMODE_MASK                0x0004  /*              */
#define WM8904_ADC_COMPMODE_SHIFT                    2  /*              */
#define WM8904_ADC_COMPMODE_WIDTH                    1  /*              */
#define WM8904_DAC_COMP                         0x0002  /*          */
#define WM8904_DAC_COMP_MASK                    0x0002  /*          */
#define WM8904_DAC_COMP_SHIFT                        1  /*          */
#define WM8904_DAC_COMP_WIDTH                        1  /*          */
#define WM8904_DAC_COMPMODE                     0x0001  /*              */
#define WM8904_DAC_COMPMODE_MASK                0x0001  /*              */
#define WM8904_DAC_COMPMODE_SHIFT                    0  /*              */
#define WM8904_DAC_COMPMODE_WIDTH                    1  /*              */

/*
                                 
 */
#define WM8904_AIFDAC_TDM                       0x2000  /*            */
#define WM8904_AIFDAC_TDM_MASK                  0x2000  /*            */
#define WM8904_AIFDAC_TDM_SHIFT                     13  /*            */
#define WM8904_AIFDAC_TDM_WIDTH                      1  /*            */
#define WM8904_AIFDAC_TDM_CHAN                  0x1000  /*                 */
#define WM8904_AIFDAC_TDM_CHAN_MASK             0x1000  /*                 */
#define WM8904_AIFDAC_TDM_CHAN_SHIFT                12  /*                 */
#define WM8904_AIFDAC_TDM_CHAN_WIDTH                 1  /*                 */
#define WM8904_AIFADC_TDM                       0x0800  /*            */
#define WM8904_AIFADC_TDM_MASK                  0x0800  /*            */
#define WM8904_AIFADC_TDM_SHIFT                     11  /*            */
#define WM8904_AIFADC_TDM_WIDTH                      1  /*            */
#define WM8904_AIFADC_TDM_CHAN                  0x0400  /*                 */
#define WM8904_AIFADC_TDM_CHAN_MASK             0x0400  /*                 */
#define WM8904_AIFADC_TDM_CHAN_SHIFT                10  /*                 */
#define WM8904_AIFADC_TDM_CHAN_WIDTH                 1  /*                 */
#define WM8904_AIF_TRIS                         0x0100  /*          */
#define WM8904_AIF_TRIS_MASK                    0x0100  /*          */
#define WM8904_AIF_TRIS_SHIFT                        8  /*          */
#define WM8904_AIF_TRIS_WIDTH                        1  /*          */
#define WM8904_AIF_BCLK_INV                     0x0080  /*              */
#define WM8904_AIF_BCLK_INV_MASK                0x0080  /*              */
#define WM8904_AIF_BCLK_INV_SHIFT                    7  /*              */
#define WM8904_AIF_BCLK_INV_WIDTH                    1  /*              */
#define WM8904_BCLK_DIR                         0x0040  /*          */
#define WM8904_BCLK_DIR_MASK                    0x0040  /*          */
#define WM8904_BCLK_DIR_SHIFT                        6  /*          */
#define WM8904_BCLK_DIR_WIDTH                        1  /*          */
#define WM8904_AIF_LRCLK_INV                    0x0010  /*               */
#define WM8904_AIF_LRCLK_INV_MASK               0x0010  /*               */
#define WM8904_AIF_LRCLK_INV_SHIFT                   4  /*               */
#define WM8904_AIF_LRCLK_INV_WIDTH                   1  /*               */
#define WM8904_AIF_WL_MASK                      0x000C  /*                */
#define WM8904_AIF_WL_SHIFT                          2  /*                */
#define WM8904_AIF_WL_WIDTH                          2  /*                */
#define WM8904_AIF_FMT_MASK                     0x0003  /*                 */
#define WM8904_AIF_FMT_SHIFT                         0  /*                 */
#define WM8904_AIF_FMT_WIDTH                         2  /*                 */

/*
                                 
 */
#define WM8904_OPCLK_DIV_MASK                   0x0F00  /*                    */
#define WM8904_OPCLK_DIV_SHIFT                       8  /*                    */
#define WM8904_OPCLK_DIV_WIDTH                       4  /*                    */
#define WM8904_BCLK_DIV_MASK                    0x001F  /*                  */
#define WM8904_BCLK_DIV_SHIFT                        0  /*                  */
#define WM8904_BCLK_DIV_WIDTH                        5  /*                  */

/*
                                 
 */
#define WM8904_LRCLK_DIR                        0x0800  /*           */
#define WM8904_LRCLK_DIR_MASK                   0x0800  /*           */
#define WM8904_LRCLK_DIR_SHIFT                      11  /*           */
#define WM8904_LRCLK_DIR_WIDTH                       1  /*           */
#define WM8904_LRCLK_RATE_MASK                  0x07FF  /*                     */
#define WM8904_LRCLK_RATE_SHIFT                      0  /*                     */
#define WM8904_LRCLK_RATE_WIDTH                     11  /*                     */

/*
                                       
 */
#define WM8904_DAC_VU                           0x0100  /*        */
#define WM8904_DAC_VU_MASK                      0x0100  /*        */
#define WM8904_DAC_VU_SHIFT                          8  /*        */
#define WM8904_DAC_VU_WIDTH                          1  /*        */
#define WM8904_DACL_VOL_MASK                    0x00FF  /*                  */
#define WM8904_DACL_VOL_SHIFT                        0  /*                  */
#define WM8904_DACL_VOL_WIDTH                        8  /*                  */

/*
                                        
 */
#define WM8904_DAC_VU                           0x0100  /*        */
#define WM8904_DAC_VU_MASK                      0x0100  /*        */
#define WM8904_DAC_VU_SHIFT                          8  /*        */
#define WM8904_DAC_VU_WIDTH                          1  /*        */
#define WM8904_DACR_VOL_MASK                    0x00FF  /*                  */
#define WM8904_DACR_VOL_SHIFT                        0  /*                  */
#define WM8904_DACR_VOL_WIDTH                        8  /*                  */

/*
                             
 */
#define WM8904_ADCL_DAC_SVOL_MASK               0x0F00  /*                        */
#define WM8904_ADCL_DAC_SVOL_SHIFT                   8  /*                        */
#define WM8904_ADCL_DAC_SVOL_WIDTH                   4  /*                        */
#define WM8904_ADCR_DAC_SVOL_MASK               0x00F0  /*                       */
#define WM8904_ADCR_DAC_SVOL_SHIFT                   4  /*                       */
#define WM8904_ADCR_DAC_SVOL_WIDTH                   4  /*                       */
#define WM8904_ADC_TO_DACL_MASK                 0x000C  /*                     */
#define WM8904_ADC_TO_DACL_SHIFT                     2  /*                     */
#define WM8904_ADC_TO_DACL_WIDTH                     2  /*                     */
#define WM8904_ADC_TO_DACR_MASK                 0x0003  /*                     */
#define WM8904_ADC_TO_DACR_SHIFT                     0  /*                     */
#define WM8904_ADC_TO_DACR_WIDTH                     2  /*                     */

/*
                             
 */
#define WM8904_DAC_MONO                         0x1000  /*          */
#define WM8904_DAC_MONO_MASK                    0x1000  /*          */
#define WM8904_DAC_MONO_SHIFT                       12  /*          */
#define WM8904_DAC_MONO_WIDTH                        1  /*          */
#define WM8904_DAC_SB_FILT                      0x0800  /*             */
#define WM8904_DAC_SB_FILT_MASK                 0x0800  /*             */
#define WM8904_DAC_SB_FILT_SHIFT                    11  /*             */
#define WM8904_DAC_SB_FILT_WIDTH                     1  /*             */
#define WM8904_DAC_MUTERATE                     0x0400  /*              */
#define WM8904_DAC_MUTERATE_MASK                0x0400  /*              */
#define WM8904_DAC_MUTERATE_SHIFT                   10  /*              */
#define WM8904_DAC_MUTERATE_WIDTH                    1  /*              */
#define WM8904_DAC_UNMUTE_RAMP                  0x0200  /*                 */
#define WM8904_DAC_UNMUTE_RAMP_MASK             0x0200  /*                 */
#define WM8904_DAC_UNMUTE_RAMP_SHIFT                 9  /*                 */
#define WM8904_DAC_UNMUTE_RAMP_WIDTH                 1  /*                 */
#define WM8904_DAC_OSR128                       0x0040  /*            */
#define WM8904_DAC_OSR128_MASK                  0x0040  /*            */
#define WM8904_DAC_OSR128_SHIFT                      6  /*            */
#define WM8904_DAC_OSR128_WIDTH                      1  /*            */
#define WM8904_DAC_MUTE                         0x0008  /*          */
#define WM8904_DAC_MUTE_MASK                    0x0008  /*          */
#define WM8904_DAC_MUTE_SHIFT                        3  /*          */
#define WM8904_DAC_MUTE_WIDTH                        1  /*          */
#define WM8904_DEEMPH_MASK                      0x0006  /*                */
#define WM8904_DEEMPH_SHIFT                          1  /*                */
#define WM8904_DEEMPH_WIDTH                          2  /*                */

/*
                                       
 */
#define WM8904_ADC_VU                           0x0100  /*        */
#define WM8904_ADC_VU_MASK                      0x0100  /*        */
#define WM8904_ADC_VU_SHIFT                          8  /*        */
#define WM8904_ADC_VU_WIDTH                          1  /*        */
#define WM8904_ADCL_VOL_MASK                    0x00FF  /*                  */
#define WM8904_ADCL_VOL_SHIFT                        0  /*                  */
#define WM8904_ADCL_VOL_WIDTH                        8  /*                  */

/*
                                        
 */
#define WM8904_ADC_VU                           0x0100  /*        */
#define WM8904_ADC_VU_MASK                      0x0100  /*        */
#define WM8904_ADC_VU_SHIFT                          8  /*        */
#define WM8904_ADC_VU_WIDTH                          1  /*        */
#define WM8904_ADCR_VOL_MASK                    0x00FF  /*                  */
#define WM8904_ADCR_VOL_SHIFT                        0  /*                  */
#define WM8904_ADCR_VOL_WIDTH                        8  /*                  */

/*
                             
 */
#define WM8904_ADC_HPF_CUT_MASK                 0x0060  /*                     */
#define WM8904_ADC_HPF_CUT_SHIFT                     5  /*                     */
#define WM8904_ADC_HPF_CUT_WIDTH                     2  /*                     */
#define WM8904_ADC_HPF                          0x0010  /*         */
#define WM8904_ADC_HPF_MASK                     0x0010  /*         */
#define WM8904_ADC_HPF_SHIFT                         4  /*         */
#define WM8904_ADC_HPF_WIDTH                         1  /*         */
#define WM8904_ADCL_DATINV                      0x0002  /*             */
#define WM8904_ADCL_DATINV_MASK                 0x0002  /*             */
#define WM8904_ADCL_DATINV_SHIFT                     1  /*             */
#define WM8904_ADCL_DATINV_WIDTH                     1  /*             */
#define WM8904_ADCR_DATINV                      0x0001  /*             */
#define WM8904_ADCR_DATINV_MASK                 0x0001  /*             */
#define WM8904_ADCR_DATINV_SHIFT                     0  /*             */
#define WM8904_ADCR_DATINV_WIDTH                     1  /*             */

/*
                                    
 */
#define WM8904_DMIC_ENA                         0x1000  /*          */
#define WM8904_DMIC_ENA_MASK                    0x1000  /*          */
#define WM8904_DMIC_ENA_SHIFT                       12  /*          */
#define WM8904_DMIC_ENA_WIDTH                        1  /*          */
#define WM8904_DMIC_SRC                         0x0800  /*          */
#define WM8904_DMIC_SRC_MASK                    0x0800  /*          */
#define WM8904_DMIC_SRC_SHIFT                       11  /*          */
#define WM8904_DMIC_SRC_WIDTH                        1  /*          */

/*
                     
 */
#define WM8904_DRC_ENA                          0x8000  /*         */
#define WM8904_DRC_ENA_MASK                     0x8000  /*         */
#define WM8904_DRC_ENA_SHIFT                        15  /*         */
#define WM8904_DRC_ENA_WIDTH                         1  /*         */
#define WM8904_DRC_DAC_PATH                     0x4000  /*              */
#define WM8904_DRC_DAC_PATH_MASK                0x4000  /*              */
#define WM8904_DRC_DAC_PATH_SHIFT                   14  /*              */
#define WM8904_DRC_DAC_PATH_WIDTH                    1  /*              */
#define WM8904_DRC_GS_HYST_LVL_MASK             0x1800  /*                           */
#define WM8904_DRC_GS_HYST_LVL_SHIFT                11  /*                           */
#define WM8904_DRC_GS_HYST_LVL_WIDTH                 2  /*                           */
#define WM8904_DRC_STARTUP_GAIN_MASK            0x07C0  /*                           */
#define WM8904_DRC_STARTUP_GAIN_SHIFT                6  /*                           */
#define WM8904_DRC_STARTUP_GAIN_WIDTH                5  /*                           */
#define WM8904_DRC_FF_DELAY                     0x0020  /*              */
#define WM8904_DRC_FF_DELAY_MASK                0x0020  /*              */
#define WM8904_DRC_FF_DELAY_SHIFT                    5  /*              */
#define WM8904_DRC_FF_DELAY_WIDTH                    1  /*              */
#define WM8904_DRC_GS_ENA                       0x0008  /*            */
#define WM8904_DRC_GS_ENA_MASK                  0x0008  /*            */
#define WM8904_DRC_GS_ENA_SHIFT                      3  /*            */
#define WM8904_DRC_GS_ENA_WIDTH                      1  /*            */
#define WM8904_DRC_QR                           0x0004  /*        */
#define WM8904_DRC_QR_MASK                      0x0004  /*        */
#define WM8904_DRC_QR_SHIFT                          2  /*        */
#define WM8904_DRC_QR_WIDTH                          1  /*        */
#define WM8904_DRC_ANTICLIP                     0x0002  /*              */
#define WM8904_DRC_ANTICLIP_MASK                0x0002  /*              */
#define WM8904_DRC_ANTICLIP_SHIFT                    1  /*              */
#define WM8904_DRC_ANTICLIP_WIDTH                    1  /*              */
#define WM8904_DRC_GS_HYST                      0x0001  /*             */
#define WM8904_DRC_GS_HYST_MASK                 0x0001  /*             */
#define WM8904_DRC_GS_HYST_SHIFT                     0  /*             */
#define WM8904_DRC_GS_HYST_WIDTH                     1  /*             */

/*
                     
 */
#define WM8904_DRC_ATK_MASK                     0xF000  /*                   */
#define WM8904_DRC_ATK_SHIFT                        12  /*                   */
#define WM8904_DRC_ATK_WIDTH                         4  /*                   */
#define WM8904_DRC_DCY_MASK                     0x0F00  /*                  */
#define WM8904_DRC_DCY_SHIFT                         8  /*                  */
#define WM8904_DRC_DCY_WIDTH                         4  /*                  */
#define WM8904_DRC_QR_THR_MASK                  0x00C0  /*                    */
#define WM8904_DRC_QR_THR_SHIFT                      6  /*                    */
#define WM8904_DRC_QR_THR_WIDTH                      2  /*                    */
#define WM8904_DRC_QR_DCY_MASK                  0x0030  /*                    */
#define WM8904_DRC_QR_DCY_SHIFT                      4  /*                    */
#define WM8904_DRC_QR_DCY_WIDTH                      2  /*                    */
#define WM8904_DRC_MINGAIN_MASK                 0x000C  /*                     */
#define WM8904_DRC_MINGAIN_SHIFT                     2  /*                     */
#define WM8904_DRC_MINGAIN_WIDTH                     2  /*                     */
#define WM8904_DRC_MAXGAIN_MASK                 0x0003  /*                     */
#define WM8904_DRC_MAXGAIN_SHIFT                     0  /*                     */
#define WM8904_DRC_MAXGAIN_WIDTH                     2  /*                     */

/*
                     
 */
#define WM8904_DRC_HI_COMP_MASK                 0x0038  /*                     */
#define WM8904_DRC_HI_COMP_SHIFT                     3  /*                     */
#define WM8904_DRC_HI_COMP_WIDTH                     3  /*                     */
#define WM8904_DRC_LO_COMP_MASK                 0x0007  /*                     */
#define WM8904_DRC_LO_COMP_SHIFT                     0  /*                     */
#define WM8904_DRC_LO_COMP_WIDTH                     3  /*                     */

/*
                     
 */
#define WM8904_DRC_KNEE_IP_MASK                 0x07E0  /*                      */
#define WM8904_DRC_KNEE_IP_SHIFT                     5  /*                      */
#define WM8904_DRC_KNEE_IP_WIDTH                     6  /*                      */
#define WM8904_DRC_KNEE_OP_MASK                 0x001F  /*                     */
#define WM8904_DRC_KNEE_OP_SHIFT                     0  /*                     */
#define WM8904_DRC_KNEE_OP_WIDTH                     5  /*                     */

/*
                                     
 */
#define WM8904_LINMUTE                          0x0080  /*         */
#define WM8904_LINMUTE_MASK                     0x0080  /*         */
#define WM8904_LINMUTE_SHIFT                         7  /*         */
#define WM8904_LINMUTE_WIDTH                         1  /*         */
#define WM8904_LIN_VOL_MASK                     0x001F  /*                 */
#define WM8904_LIN_VOL_SHIFT                         0  /*                 */
#define WM8904_LIN_VOL_WIDTH                         5  /*                 */

/*
                                      
 */
#define WM8904_RINMUTE                          0x0080  /*         */
#define WM8904_RINMUTE_MASK                     0x0080  /*         */
#define WM8904_RINMUTE_SHIFT                         7  /*         */
#define WM8904_RINMUTE_WIDTH                         1  /*         */
#define WM8904_RIN_VOL_MASK                     0x001F  /*                 */
#define WM8904_RIN_VOL_SHIFT                         0  /*                 */
#define WM8904_RIN_VOL_WIDTH                         5  /*                 */

/*
                                     
 */
#define WM8904_INL_CM_ENA                       0x0040  /*            */
#define WM8904_INL_CM_ENA_MASK                  0x0040  /*            */
#define WM8904_INL_CM_ENA_SHIFT                      6  /*            */
#define WM8904_INL_CM_ENA_WIDTH                      1  /*            */
#define WM8904_L_IP_SEL_N_MASK                  0x0030  /*                    */
#define WM8904_L_IP_SEL_N_SHIFT                      4  /*                    */
#define WM8904_L_IP_SEL_N_WIDTH                      2  /*                    */
#define WM8904_L_IP_SEL_P_MASK                  0x000C  /*                    */
#define WM8904_L_IP_SEL_P_SHIFT                      2  /*                    */
#define WM8904_L_IP_SEL_P_WIDTH                      2  /*                    */
#define WM8904_L_MODE_MASK                      0x0003  /*                */
#define WM8904_L_MODE_SHIFT                          0  /*                */
#define WM8904_L_MODE_WIDTH                          2  /*                */

/*
                                      
 */
#define WM8904_INR_CM_ENA                       0x0040  /*            */
#define WM8904_INR_CM_ENA_MASK                  0x0040  /*            */
#define WM8904_INR_CM_ENA_SHIFT                      6  /*            */
#define WM8904_INR_CM_ENA_WIDTH                      1  /*            */
#define WM8904_R_IP_SEL_N_MASK                  0x0030  /*                    */
#define WM8904_R_IP_SEL_N_SHIFT                      4  /*                    */
#define WM8904_R_IP_SEL_N_WIDTH                      2  /*                    */
#define WM8904_R_IP_SEL_P_MASK                  0x000C  /*                    */
#define WM8904_R_IP_SEL_P_SHIFT                      2  /*                    */
#define WM8904_R_IP_SEL_P_WIDTH                      2  /*                    */
#define WM8904_R_MODE_MASK                      0x0003  /*                */
#define WM8904_R_MODE_SHIFT                          0  /*                */
#define WM8904_R_MODE_WIDTH                          2  /*                */

/*
                                  
 */
#define WM8904_HPOUTL_MUTE                      0x0100  /*             */
#define WM8904_HPOUTL_MUTE_MASK                 0x0100  /*             */
#define WM8904_HPOUTL_MUTE_SHIFT                     8  /*             */
#define WM8904_HPOUTL_MUTE_WIDTH                     1  /*             */
#define WM8904_HPOUT_VU                         0x0080  /*          */
#define WM8904_HPOUT_VU_MASK                    0x0080  /*          */
#define WM8904_HPOUT_VU_SHIFT                        7  /*          */
#define WM8904_HPOUT_VU_WIDTH                        1  /*          */
#define WM8904_HPOUTLZC                         0x0040  /*          */
#define WM8904_HPOUTLZC_MASK                    0x0040  /*          */
#define WM8904_HPOUTLZC_SHIFT                        6  /*          */
#define WM8904_HPOUTLZC_WIDTH                        1  /*          */
#define WM8904_HPOUTL_VOL_MASK                  0x003F  /*                    */
#define WM8904_HPOUTL_VOL_SHIFT                      0  /*                    */
#define WM8904_HPOUTL_VOL_WIDTH                      6  /*                    */

/*
                                   
 */
#define WM8904_HPOUTR_MUTE                      0x0100  /*             */
#define WM8904_HPOUTR_MUTE_MASK                 0x0100  /*             */
#define WM8904_HPOUTR_MUTE_SHIFT                     8  /*             */
#define WM8904_HPOUTR_MUTE_WIDTH                     1  /*             */
#define WM8904_HPOUT_VU                         0x0080  /*          */
#define WM8904_HPOUT_VU_MASK                    0x0080  /*          */
#define WM8904_HPOUT_VU_SHIFT                        7  /*          */
#define WM8904_HPOUT_VU_WIDTH                        1  /*          */
#define WM8904_HPOUTRZC                         0x0040  /*          */
#define WM8904_HPOUTRZC_MASK                    0x0040  /*          */
#define WM8904_HPOUTRZC_SHIFT                        6  /*          */
#define WM8904_HPOUTRZC_WIDTH                        1  /*          */
#define WM8904_HPOUTR_VOL_MASK                  0x003F  /*                    */
#define WM8904_HPOUTR_VOL_SHIFT                      0  /*                    */
#define WM8904_HPOUTR_VOL_WIDTH                      6  /*                    */

/*
                                  
 */
#define WM8904_LINEOUTL_MUTE                    0x0100  /*               */
#define WM8904_LINEOUTL_MUTE_MASK               0x0100  /*               */
#define WM8904_LINEOUTL_MUTE_SHIFT                   8  /*               */
#define WM8904_LINEOUTL_MUTE_WIDTH                   1  /*               */
#define WM8904_LINEOUT_VU                       0x0080  /*            */
#define WM8904_LINEOUT_VU_MASK                  0x0080  /*            */
#define WM8904_LINEOUT_VU_SHIFT                      7  /*            */
#define WM8904_LINEOUT_VU_WIDTH                      1  /*            */
#define WM8904_LINEOUTLZC                       0x0040  /*            */
#define WM8904_LINEOUTLZC_MASK                  0x0040  /*            */
#define WM8904_LINEOUTLZC_SHIFT                      6  /*            */
#define WM8904_LINEOUTLZC_WIDTH                      1  /*            */
#define WM8904_LINEOUTL_VOL_MASK                0x003F  /*                      */
#define WM8904_LINEOUTL_VOL_SHIFT                    0  /*                      */
#define WM8904_LINEOUTL_VOL_WIDTH                    6  /*                      */

/*
                                   
 */
#define WM8904_LINEOUTR_MUTE                    0x0100  /*               */
#define WM8904_LINEOUTR_MUTE_MASK               0x0100  /*               */
#define WM8904_LINEOUTR_MUTE_SHIFT                   8  /*               */
#define WM8904_LINEOUTR_MUTE_WIDTH                   1  /*               */
#define WM8904_LINEOUT_VU                       0x0080  /*            */
#define WM8904_LINEOUT_VU_MASK                  0x0080  /*            */
#define WM8904_LINEOUT_VU_SHIFT                      7  /*            */
#define WM8904_LINEOUT_VU_WIDTH                      1  /*            */
#define WM8904_LINEOUTRZC                       0x0040  /*            */
#define WM8904_LINEOUTRZC_MASK                  0x0040  /*            */
#define WM8904_LINEOUTRZC_SHIFT                      6  /*            */
#define WM8904_LINEOUTRZC_WIDTH                      1  /*            */
#define WM8904_LINEOUTR_VOL_MASK                0x003F  /*                      */
#define WM8904_LINEOUTR_VOL_SHIFT                    0  /*                      */
#define WM8904_LINEOUTR_VOL_WIDTH                    6  /*                      */

/*
                                 
 */
#define WM8904_HPL_BYP_ENA                      0x0008  /*             */
#define WM8904_HPL_BYP_ENA_MASK                 0x0008  /*             */
#define WM8904_HPL_BYP_ENA_SHIFT                     3  /*             */
#define WM8904_HPL_BYP_ENA_WIDTH                     1  /*             */
#define WM8904_HPR_BYP_ENA                      0x0004  /*             */
#define WM8904_HPR_BYP_ENA_MASK                 0x0004  /*             */
#define WM8904_HPR_BYP_ENA_SHIFT                     2  /*             */
#define WM8904_HPR_BYP_ENA_WIDTH                     1  /*             */
#define WM8904_LINEOUTL_BYP_ENA                 0x0002  /*                  */
#define WM8904_LINEOUTL_BYP_ENA_MASK            0x0002  /*                  */
#define WM8904_LINEOUTL_BYP_ENA_SHIFT                1  /*                  */
#define WM8904_LINEOUTL_BYP_ENA_WIDTH                1  /*                  */
#define WM8904_LINEOUTR_BYP_ENA                 0x0001  /*                  */
#define WM8904_LINEOUTR_BYP_ENA_MASK            0x0001  /*                  */
#define WM8904_LINEOUTR_BYP_ENA_SHIFT                0  /*                  */
#define WM8904_LINEOUTR_BYP_ENA_WIDTH                1  /*                  */

/*
                          
 */
#define WM8904_DCS_ENA_CHAN_3                   0x0008  /*                */
#define WM8904_DCS_ENA_CHAN_3_MASK              0x0008  /*                */
#define WM8904_DCS_ENA_CHAN_3_SHIFT                  3  /*                */
#define WM8904_DCS_ENA_CHAN_3_WIDTH                  1  /*                */
#define WM8904_DCS_ENA_CHAN_2                   0x0004  /*                */
#define WM8904_DCS_ENA_CHAN_2_MASK              0x0004  /*                */
#define WM8904_DCS_ENA_CHAN_2_SHIFT                  2  /*                */
#define WM8904_DCS_ENA_CHAN_2_WIDTH                  1  /*                */
#define WM8904_DCS_ENA_CHAN_1                   0x0002  /*                */
#define WM8904_DCS_ENA_CHAN_1_MASK              0x0002  /*                */
#define WM8904_DCS_ENA_CHAN_1_SHIFT                  1  /*                */
#define WM8904_DCS_ENA_CHAN_1_WIDTH                  1  /*                */
#define WM8904_DCS_ENA_CHAN_0                   0x0001  /*                */
#define WM8904_DCS_ENA_CHAN_0_MASK              0x0001  /*                */
#define WM8904_DCS_ENA_CHAN_0_SHIFT                  0  /*                */
#define WM8904_DCS_ENA_CHAN_0_WIDTH                  1  /*                */

/*
                          
 */
#define WM8904_DCS_TRIG_SINGLE_3                0x8000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_3_MASK           0x8000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_3_SHIFT              15  /*                   */
#define WM8904_DCS_TRIG_SINGLE_3_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SINGLE_2                0x4000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_2_MASK           0x4000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_2_SHIFT              14  /*                   */
#define WM8904_DCS_TRIG_SINGLE_2_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SINGLE_1                0x2000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_1_MASK           0x2000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_1_SHIFT              13  /*                   */
#define WM8904_DCS_TRIG_SINGLE_1_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SINGLE_0                0x1000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_0_MASK           0x1000  /*                   */
#define WM8904_DCS_TRIG_SINGLE_0_SHIFT              12  /*                   */
#define WM8904_DCS_TRIG_SINGLE_0_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SERIES_3                0x0800  /*                   */
#define WM8904_DCS_TRIG_SERIES_3_MASK           0x0800  /*                   */
#define WM8904_DCS_TRIG_SERIES_3_SHIFT              11  /*                   */
#define WM8904_DCS_TRIG_SERIES_3_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SERIES_2                0x0400  /*                   */
#define WM8904_DCS_TRIG_SERIES_2_MASK           0x0400  /*                   */
#define WM8904_DCS_TRIG_SERIES_2_SHIFT              10  /*                   */
#define WM8904_DCS_TRIG_SERIES_2_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SERIES_1                0x0200  /*                   */
#define WM8904_DCS_TRIG_SERIES_1_MASK           0x0200  /*                   */
#define WM8904_DCS_TRIG_SERIES_1_SHIFT               9  /*                   */
#define WM8904_DCS_TRIG_SERIES_1_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_SERIES_0                0x0100  /*                   */
#define WM8904_DCS_TRIG_SERIES_0_MASK           0x0100  /*                   */
#define WM8904_DCS_TRIG_SERIES_0_SHIFT               8  /*                   */
#define WM8904_DCS_TRIG_SERIES_0_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_STARTUP_3               0x0080  /*                    */
#define WM8904_DCS_TRIG_STARTUP_3_MASK          0x0080  /*                    */
#define WM8904_DCS_TRIG_STARTUP_3_SHIFT              7  /*                    */
#define WM8904_DCS_TRIG_STARTUP_3_WIDTH              1  /*                    */
#define WM8904_DCS_TRIG_STARTUP_2               0x0040  /*                    */
#define WM8904_DCS_TRIG_STARTUP_2_MASK          0x0040  /*                    */
#define WM8904_DCS_TRIG_STARTUP_2_SHIFT              6  /*                    */
#define WM8904_DCS_TRIG_STARTUP_2_WIDTH              1  /*                    */
#define WM8904_DCS_TRIG_STARTUP_1               0x0020  /*                    */
#define WM8904_DCS_TRIG_STARTUP_1_MASK          0x0020  /*                    */
#define WM8904_DCS_TRIG_STARTUP_1_SHIFT              5  /*                    */
#define WM8904_DCS_TRIG_STARTUP_1_WIDTH              1  /*                    */
#define WM8904_DCS_TRIG_STARTUP_0               0x0010  /*                    */
#define WM8904_DCS_TRIG_STARTUP_0_MASK          0x0010  /*                    */
#define WM8904_DCS_TRIG_STARTUP_0_SHIFT              4  /*                    */
#define WM8904_DCS_TRIG_STARTUP_0_WIDTH              1  /*                    */
#define WM8904_DCS_TRIG_DAC_WR_3                0x0008  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_3_MASK           0x0008  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_3_SHIFT               3  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_3_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_2                0x0004  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_2_MASK           0x0004  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_2_SHIFT               2  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_2_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_1                0x0002  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_1_MASK           0x0002  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_1_SHIFT               1  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_1_WIDTH               1  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_0                0x0001  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_0_MASK           0x0001  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_0_SHIFT               0  /*                   */
#define WM8904_DCS_TRIG_DAC_WR_0_WIDTH               1  /*                   */

/*
                          
 */
#define WM8904_DCS_TIMER_PERIOD_23_MASK         0x0F00  /*                              */
#define WM8904_DCS_TIMER_PERIOD_23_SHIFT             8  /*                              */
#define WM8904_DCS_TIMER_PERIOD_23_WIDTH             4  /*                              */
#define WM8904_DCS_TIMER_PERIOD_01_MASK         0x000F  /*                             */
#define WM8904_DCS_TIMER_PERIOD_01_SHIFT             0  /*                             */
#define WM8904_DCS_TIMER_PERIOD_01_WIDTH             4  /*                             */

/*
                          
 */
#define WM8904_DCS_SERIES_NO_23_MASK            0x007F  /*                          */
#define WM8904_DCS_SERIES_NO_23_SHIFT                0  /*                          */
#define WM8904_DCS_SERIES_NO_23_WIDTH                7  /*                          */

/*
                          
 */
#define WM8904_DCS_SERIES_NO_01_MASK            0x007F  /*                          */
#define WM8904_DCS_SERIES_NO_01_SHIFT                0  /*                          */
#define WM8904_DCS_SERIES_NO_01_WIDTH                7  /*                          */

/*
                          
 */
#define WM8904_DCS_DAC_WR_VAL_3_MASK            0x00FF  /*                          */
#define WM8904_DCS_DAC_WR_VAL_3_SHIFT                0  /*                          */
#define WM8904_DCS_DAC_WR_VAL_3_WIDTH                8  /*                          */

/*
                          
 */
#define WM8904_DCS_DAC_WR_VAL_2_MASK            0x00FF  /*                          */
#define WM8904_DCS_DAC_WR_VAL_2_SHIFT                0  /*                          */
#define WM8904_DCS_DAC_WR_VAL_2_WIDTH                8  /*                          */

/*
                          
 */
#define WM8904_DCS_DAC_WR_VAL_1_MASK            0x00FF  /*                          */
#define WM8904_DCS_DAC_WR_VAL_1_SHIFT                0  /*                          */
#define WM8904_DCS_DAC_WR_VAL_1_WIDTH                8  /*                          */

/*
                          
 */
#define WM8904_DCS_DAC_WR_VAL_0_MASK            0x00FF  /*                          */
#define WM8904_DCS_DAC_WR_VAL_0_SHIFT                0  /*                          */
#define WM8904_DCS_DAC_WR_VAL_0_WIDTH                8  /*                          */

/*
                                   
 */
#define WM8904_DCS_CAL_COMPLETE_MASK            0x0F00  /*                           */
#define WM8904_DCS_CAL_COMPLETE_SHIFT                8  /*                           */
#define WM8904_DCS_CAL_COMPLETE_WIDTH                4  /*                           */
#define WM8904_DCS_DAC_WR_COMPLETE_MASK         0x00F0  /*                             */
#define WM8904_DCS_DAC_WR_COMPLETE_SHIFT             4  /*                             */
#define WM8904_DCS_DAC_WR_COMPLETE_WIDTH             4  /*                             */
#define WM8904_DCS_STARTUP_COMPLETE_MASK        0x000F  /*                              */
#define WM8904_DCS_STARTUP_COMPLETE_SHIFT            0  /*                              */
#define WM8904_DCS_STARTUP_COMPLETE_WIDTH            4  /*                              */

/*
                             
 */
#define WM8904_HPL_RMV_SHORT                    0x0080  /*               */
#define WM8904_HPL_RMV_SHORT_MASK               0x0080  /*               */
#define WM8904_HPL_RMV_SHORT_SHIFT                   7  /*               */
#define WM8904_HPL_RMV_SHORT_WIDTH                   1  /*               */
#define WM8904_HPL_ENA_OUTP                     0x0040  /*              */
#define WM8904_HPL_ENA_OUTP_MASK                0x0040  /*              */
#define WM8904_HPL_ENA_OUTP_SHIFT                    6  /*              */
#define WM8904_HPL_ENA_OUTP_WIDTH                    1  /*              */
#define WM8904_HPL_ENA_DLY                      0x0020  /*             */
#define WM8904_HPL_ENA_DLY_MASK                 0x0020  /*             */
#define WM8904_HPL_ENA_DLY_SHIFT                     5  /*             */
#define WM8904_HPL_ENA_DLY_WIDTH                     1  /*             */
#define WM8904_HPL_ENA                          0x0010  /*         */
#define WM8904_HPL_ENA_MASK                     0x0010  /*         */
#define WM8904_HPL_ENA_SHIFT                         4  /*         */
#define WM8904_HPL_ENA_WIDTH                         1  /*         */
#define WM8904_HPR_RMV_SHORT                    0x0008  /*               */
#define WM8904_HPR_RMV_SHORT_MASK               0x0008  /*               */
#define WM8904_HPR_RMV_SHORT_SHIFT                   3  /*               */
#define WM8904_HPR_RMV_SHORT_WIDTH                   1  /*               */
#define WM8904_HPR_ENA_OUTP                     0x0004  /*              */
#define WM8904_HPR_ENA_OUTP_MASK                0x0004  /*              */
#define WM8904_HPR_ENA_OUTP_SHIFT                    2  /*              */
#define WM8904_HPR_ENA_OUTP_WIDTH                    1  /*              */
#define WM8904_HPR_ENA_DLY                      0x0002  /*             */
#define WM8904_HPR_ENA_DLY_MASK                 0x0002  /*             */
#define WM8904_HPR_ENA_DLY_SHIFT                     1  /*             */
#define WM8904_HPR_ENA_DLY_WIDTH                     1  /*             */
#define WM8904_HPR_ENA                          0x0001  /*         */
#define WM8904_HPR_ENA_MASK                     0x0001  /*         */
#define WM8904_HPR_ENA_SHIFT                         0  /*         */
#define WM8904_HPR_ENA_WIDTH                         1  /*         */

/*
                                  
 */
#define WM8904_LINEOUTL_RMV_SHORT               0x0080  /*                    */
#define WM8904_LINEOUTL_RMV_SHORT_MASK          0x0080  /*                    */
#define WM8904_LINEOUTL_RMV_SHORT_SHIFT              7  /*                    */
#define WM8904_LINEOUTL_RMV_SHORT_WIDTH              1  /*                    */
#define WM8904_LINEOUTL_ENA_OUTP                0x0040  /*                   */
#define WM8904_LINEOUTL_ENA_OUTP_MASK           0x0040  /*                   */
#define WM8904_LINEOUTL_ENA_OUTP_SHIFT               6  /*                   */
#define WM8904_LINEOUTL_ENA_OUTP_WIDTH               1  /*                   */
#define WM8904_LINEOUTL_ENA_DLY                 0x0020  /*                  */
#define WM8904_LINEOUTL_ENA_DLY_MASK            0x0020  /*                  */
#define WM8904_LINEOUTL_ENA_DLY_SHIFT                5  /*                  */
#define WM8904_LINEOUTL_ENA_DLY_WIDTH                1  /*                  */
#define WM8904_LINEOUTL_ENA                     0x0010  /*              */
#define WM8904_LINEOUTL_ENA_MASK                0x0010  /*              */
#define WM8904_LINEOUTL_ENA_SHIFT                    4  /*              */
#define WM8904_LINEOUTL_ENA_WIDTH                    1  /*              */
#define WM8904_LINEOUTR_RMV_SHORT               0x0008  /*                    */
#define WM8904_LINEOUTR_RMV_SHORT_MASK          0x0008  /*                    */
#define WM8904_LINEOUTR_RMV_SHORT_SHIFT              3  /*                    */
#define WM8904_LINEOUTR_RMV_SHORT_WIDTH              1  /*                    */
#define WM8904_LINEOUTR_ENA_OUTP                0x0004  /*                   */
#define WM8904_LINEOUTR_ENA_OUTP_MASK           0x0004  /*                   */
#define WM8904_LINEOUTR_ENA_OUTP_SHIFT               2  /*                   */
#define WM8904_LINEOUTR_ENA_OUTP_WIDTH               1  /*                   */
#define WM8904_LINEOUTR_ENA_DLY                 0x0002  /*                  */
#define WM8904_LINEOUTR_ENA_DLY_MASK            0x0002  /*                  */
#define WM8904_LINEOUTR_ENA_DLY_SHIFT                1  /*                  */
#define WM8904_LINEOUTR_ENA_DLY_WIDTH                1  /*                  */
#define WM8904_LINEOUTR_ENA                     0x0001  /*              */
#define WM8904_LINEOUTR_ENA_MASK                0x0001  /*              */
#define WM8904_LINEOUTR_ENA_SHIFT                    0  /*              */
#define WM8904_LINEOUTR_ENA_WIDTH                    1  /*              */

/*
                             
 */
#define WM8904_CP_ENA                           0x0001  /*        */
#define WM8904_CP_ENA_MASK                      0x0001  /*        */
#define WM8904_CP_ENA_SHIFT                          0  /*        */
#define WM8904_CP_ENA_WIDTH                          1  /*        */

/*
                          
 */
#define WM8904_CP_DYN_PWR                       0x0001  /*            */
#define WM8904_CP_DYN_PWR_MASK                  0x0001  /*            */
#define WM8904_CP_DYN_PWR_SHIFT                      0  /*            */
#define WM8904_CP_DYN_PWR_WIDTH                      1  /*            */

/*
                                  
 */
#define WM8904_WSEQ_ENA                         0x0100  /*          */
#define WM8904_WSEQ_ENA_MASK                    0x0100  /*          */
#define WM8904_WSEQ_ENA_SHIFT                        8  /*          */
#define WM8904_WSEQ_ENA_WIDTH                        1  /*          */
#define WM8904_WSEQ_WRITE_INDEX_MASK            0x001F  /*                          */
#define WM8904_WSEQ_WRITE_INDEX_SHIFT                0  /*                          */
#define WM8904_WSEQ_WRITE_INDEX_WIDTH                5  /*                          */

/*
                                  
 */
#define WM8904_WSEQ_DATA_WIDTH_MASK             0x7000  /*                           */
#define WM8904_WSEQ_DATA_WIDTH_SHIFT                12  /*                           */
#define WM8904_WSEQ_DATA_WIDTH_WIDTH                 3  /*                           */
#define WM8904_WSEQ_DATA_START_MASK             0x0F00  /*                          */
#define WM8904_WSEQ_DATA_START_SHIFT                 8  /*                          */
#define WM8904_WSEQ_DATA_START_WIDTH                 4  /*                          */
#define WM8904_WSEQ_ADDR_MASK                   0x00FF  /*                   */
#define WM8904_WSEQ_ADDR_SHIFT                       0  /*                   */
#define WM8904_WSEQ_ADDR_WIDTH                       8  /*                   */

/*
                                  
 */
#define WM8904_WSEQ_EOS                         0x4000  /*          */
#define WM8904_WSEQ_EOS_MASK                    0x4000  /*          */
#define WM8904_WSEQ_EOS_SHIFT                       14  /*          */
#define WM8904_WSEQ_EOS_WIDTH                        1  /*          */
#define WM8904_WSEQ_DELAY_MASK                  0x0F00  /*                     */
#define WM8904_WSEQ_DELAY_SHIFT                      8  /*                     */
#define WM8904_WSEQ_DELAY_WIDTH                      4  /*                     */
#define WM8904_WSEQ_DATA_MASK                   0x00FF  /*                   */
#define WM8904_WSEQ_DATA_SHIFT                       0  /*                   */
#define WM8904_WSEQ_DATA_WIDTH                       8  /*                   */

/*
                                  
 */
#define WM8904_WSEQ_ABORT                       0x0200  /*            */
#define WM8904_WSEQ_ABORT_MASK                  0x0200  /*            */
#define WM8904_WSEQ_ABORT_SHIFT                      9  /*            */
#define WM8904_WSEQ_ABORT_WIDTH                      1  /*            */
#define WM8904_WSEQ_START                       0x0100  /*            */
#define WM8904_WSEQ_START_MASK                  0x0100  /*            */
#define WM8904_WSEQ_START_SHIFT                      8  /*            */
#define WM8904_WSEQ_START_WIDTH                      1  /*            */
#define WM8904_WSEQ_START_INDEX_MASK            0x003F  /*                          */
#define WM8904_WSEQ_START_INDEX_SHIFT                0  /*                          */
#define WM8904_WSEQ_START_INDEX_WIDTH                6  /*                          */

/*
                                  
 */
#define WM8904_WSEQ_CURRENT_INDEX_MASK          0x03F0  /*                            */
#define WM8904_WSEQ_CURRENT_INDEX_SHIFT              4  /*                            */
#define WM8904_WSEQ_CURRENT_INDEX_WIDTH              6  /*                            */
#define WM8904_WSEQ_BUSY                        0x0001  /*           */
#define WM8904_WSEQ_BUSY_MASK                   0x0001  /*           */
#define WM8904_WSEQ_BUSY_SHIFT                       0  /*           */
#define WM8904_WSEQ_BUSY_WIDTH                       1  /*           */

/*
                              
 */
#define WM8904_FLL_FRACN_ENA                    0x0004  /*               */
#define WM8904_FLL_FRACN_ENA_MASK               0x0004  /*               */
#define WM8904_FLL_FRACN_ENA_SHIFT                   2  /*               */
#define WM8904_FLL_FRACN_ENA_WIDTH                   1  /*               */
#define WM8904_FLL_OSC_ENA                      0x0002  /*             */
#define WM8904_FLL_OSC_ENA_MASK                 0x0002  /*             */
#define WM8904_FLL_OSC_ENA_SHIFT                     1  /*             */
#define WM8904_FLL_OSC_ENA_WIDTH                     1  /*             */
#define WM8904_FLL_ENA                          0x0001  /*         */
#define WM8904_FLL_ENA_MASK                     0x0001  /*         */
#define WM8904_FLL_ENA_SHIFT                         0  /*         */
#define WM8904_FLL_ENA_WIDTH                         1  /*         */

/*
                              
 */
#define WM8904_FLL_OUTDIV_MASK                  0x3F00  /*                     */
#define WM8904_FLL_OUTDIV_SHIFT                      8  /*                     */
#define WM8904_FLL_OUTDIV_WIDTH                      6  /*                     */
#define WM8904_FLL_CTRL_RATE_MASK               0x0070  /*                       */
#define WM8904_FLL_CTRL_RATE_SHIFT                   4  /*                       */
#define WM8904_FLL_CTRL_RATE_WIDTH                   3  /*                       */
#define WM8904_FLL_FRATIO_MASK                  0x0007  /*                    */
#define WM8904_FLL_FRATIO_SHIFT                      0  /*                    */
#define WM8904_FLL_FRATIO_WIDTH                      3  /*                    */

/*
                              
 */
#define WM8904_FLL_K_MASK                       0xFFFF  /*                */
#define WM8904_FLL_K_SHIFT                           0  /*                */
#define WM8904_FLL_K_WIDTH                          16  /*                */

/*
                              
 */
#define WM8904_FLL_N_MASK                       0x7FE0  /*                */
#define WM8904_FLL_N_SHIFT                           5  /*                */
#define WM8904_FLL_N_WIDTH                          10  /*                */
#define WM8904_FLL_GAIN_MASK                    0x000F  /*                  */
#define WM8904_FLL_GAIN_SHIFT                        0  /*                  */
#define WM8904_FLL_GAIN_WIDTH                        4  /*                  */

/*
                              
 */
#define WM8904_FLL_CLK_REF_DIV_MASK             0x0018  /*                         */
#define WM8904_FLL_CLK_REF_DIV_SHIFT                 3  /*                         */
#define WM8904_FLL_CLK_REF_DIV_WIDTH                 2  /*                         */
#define WM8904_FLL_CLK_REF_SRC_MASK             0x0003  /*                         */
#define WM8904_FLL_CLK_REF_SRC_SHIFT                 0  /*                         */
#define WM8904_FLL_CLK_REF_SRC_WIDTH                 2  /*                         */

/*
                              
 */
#define WM8904_MCLK_PU                          0x0080  /*         */
#define WM8904_MCLK_PU_MASK                     0x0080  /*         */
#define WM8904_MCLK_PU_SHIFT                         7  /*         */
#define WM8904_MCLK_PU_WIDTH                         1  /*         */
#define WM8904_MCLK_PD                          0x0040  /*         */
#define WM8904_MCLK_PD_MASK                     0x0040  /*         */
#define WM8904_MCLK_PD_SHIFT                         6  /*         */
#define WM8904_MCLK_PD_WIDTH                         1  /*         */
#define WM8904_DACDAT_PU                        0x0020  /*           */
#define WM8904_DACDAT_PU_MASK                   0x0020  /*           */
#define WM8904_DACDAT_PU_SHIFT                       5  /*           */
#define WM8904_DACDAT_PU_WIDTH                       1  /*           */
#define WM8904_DACDAT_PD                        0x0010  /*           */
#define WM8904_DACDAT_PD_MASK                   0x0010  /*           */
#define WM8904_DACDAT_PD_SHIFT                       4  /*           */
#define WM8904_DACDAT_PD_WIDTH                       1  /*           */
#define WM8904_LRCLK_PU                         0x0008  /*          */
#define WM8904_LRCLK_PU_MASK                    0x0008  /*          */
#define WM8904_LRCLK_PU_SHIFT                        3  /*          */
#define WM8904_LRCLK_PU_WIDTH                        1  /*          */
#define WM8904_LRCLK_PD                         0x0004  /*          */
#define WM8904_LRCLK_PD_MASK                    0x0004  /*          */
#define WM8904_LRCLK_PD_SHIFT                        2  /*          */
#define WM8904_LRCLK_PD_WIDTH                        1  /*          */
#define WM8904_BCLK_PU                          0x0002  /*         */
#define WM8904_BCLK_PU_MASK                     0x0002  /*         */
#define WM8904_BCLK_PU_SHIFT                         1  /*         */
#define WM8904_BCLK_PU_WIDTH                         1  /*         */
#define WM8904_BCLK_PD                          0x0001  /*         */
#define WM8904_BCLK_PD_MASK                     0x0001  /*         */
#define WM8904_BCLK_PD_SHIFT                         0  /*         */
#define WM8904_BCLK_PD_WIDTH                         1  /*         */

/*
                                 
 */
#define WM8904_IRQ                              0x0400  /*     */
#define WM8904_IRQ_MASK                         0x0400  /*     */
#define WM8904_IRQ_SHIFT                            10  /*     */
#define WM8904_IRQ_WIDTH                             1  /*     */
#define WM8904_GPIO_BCLK_EINT                   0x0200  /*                */
#define WM8904_GPIO_BCLK_EINT_MASK              0x0200  /*                */
#define WM8904_GPIO_BCLK_EINT_SHIFT                  9  /*                */
#define WM8904_GPIO_BCLK_EINT_WIDTH                  1  /*                */
#define WM8904_WSEQ_EINT                        0x0100  /*           */
#define WM8904_WSEQ_EINT_MASK                   0x0100  /*           */
#define WM8904_WSEQ_EINT_SHIFT                       8  /*           */
#define WM8904_WSEQ_EINT_WIDTH                       1  /*           */
#define WM8904_GPIO3_EINT                       0x0080  /*            */
#define WM8904_GPIO3_EINT_MASK                  0x0080  /*            */
#define WM8904_GPIO3_EINT_SHIFT                      7  /*            */
#define WM8904_GPIO3_EINT_WIDTH                      1  /*            */
#define WM8904_GPIO2_EINT                       0x0040  /*            */
#define WM8904_GPIO2_EINT_MASK                  0x0040  /*            */
#define WM8904_GPIO2_EINT_SHIFT                      6  /*            */
#define WM8904_GPIO2_EINT_WIDTH                      1  /*            */
#define WM8904_GPIO1_EINT                       0x0020  /*            */
#define WM8904_GPIO1_EINT_MASK                  0x0020  /*            */
#define WM8904_GPIO1_EINT_SHIFT                      5  /*            */
#define WM8904_GPIO1_EINT_WIDTH                      1  /*            */
#define WM8904_GPI8_EINT                        0x0010  /*           */
#define WM8904_GPI8_EINT_MASK                   0x0010  /*           */
#define WM8904_GPI8_EINT_SHIFT                       4  /*           */
#define WM8904_GPI8_EINT_WIDTH                       1  /*           */
#define WM8904_GPI7_EINT                        0x0008  /*           */
#define WM8904_GPI7_EINT_MASK                   0x0008  /*           */
#define WM8904_GPI7_EINT_SHIFT                       3  /*           */
#define WM8904_GPI7_EINT_WIDTH                       1  /*           */
#define WM8904_FLL_LOCK_EINT                    0x0004  /*               */
#define WM8904_FLL_LOCK_EINT_MASK               0x0004  /*               */
#define WM8904_FLL_LOCK_EINT_SHIFT                   2  /*               */
#define WM8904_FLL_LOCK_EINT_WIDTH                   1  /*               */
#define WM8904_MIC_SHRT_EINT                    0x0002  /*               */
#define WM8904_MIC_SHRT_EINT_MASK               0x0002  /*               */
#define WM8904_MIC_SHRT_EINT_SHIFT                   1  /*               */
#define WM8904_MIC_SHRT_EINT_WIDTH                   1  /*               */
#define WM8904_MIC_DET_EINT                     0x0001  /*              */
#define WM8904_MIC_DET_EINT_MASK                0x0001  /*              */
#define WM8904_MIC_DET_EINT_SHIFT                    0  /*              */
#define WM8904_MIC_DET_EINT_WIDTH                    1  /*              */

/*
                                      
 */
#define WM8904_IM_GPIO_BCLK_EINT                0x0200  /*                   */
#define WM8904_IM_GPIO_BCLK_EINT_MASK           0x0200  /*                   */
#define WM8904_IM_GPIO_BCLK_EINT_SHIFT               9  /*                   */
#define WM8904_IM_GPIO_BCLK_EINT_WIDTH               1  /*                   */
#define WM8904_IM_WSEQ_EINT                     0x0100  /*              */
#define WM8904_IM_WSEQ_EINT_MASK                0x0100  /*              */
#define WM8904_IM_WSEQ_EINT_SHIFT                    8  /*              */
#define WM8904_IM_WSEQ_EINT_WIDTH                    1  /*              */
#define WM8904_IM_GPIO3_EINT                    0x0080  /*               */
#define WM8904_IM_GPIO3_EINT_MASK               0x0080  /*               */
#define WM8904_IM_GPIO3_EINT_SHIFT                   7  /*               */
#define WM8904_IM_GPIO3_EINT_WIDTH                   1  /*               */
#define WM8904_IM_GPIO2_EINT                    0x0040  /*               */
#define WM8904_IM_GPIO2_EINT_MASK               0x0040  /*               */
#define WM8904_IM_GPIO2_EINT_SHIFT                   6  /*               */
#define WM8904_IM_GPIO2_EINT_WIDTH                   1  /*               */
#define WM8904_IM_GPIO1_EINT                    0x0020  /*               */
#define WM8904_IM_GPIO1_EINT_MASK               0x0020  /*               */
#define WM8904_IM_GPIO1_EINT_SHIFT                   5  /*               */
#define WM8904_IM_GPIO1_EINT_WIDTH                   1  /*               */
#define WM8904_IM_GPI8_EINT                     0x0010  /*              */
#define WM8904_IM_GPI8_EINT_MASK                0x0010  /*              */
#define WM8904_IM_GPI8_EINT_SHIFT                    4  /*              */
#define WM8904_IM_GPI8_EINT_WIDTH                    1  /*              */
#define WM8904_IM_GPI7_EINT                     0x0008  /*              */
#define WM8904_IM_GPI7_EINT_MASK                0x0008  /*              */
#define WM8904_IM_GPI7_EINT_SHIFT                    3  /*              */
#define WM8904_IM_GPI7_EINT_WIDTH                    1  /*              */
#define WM8904_IM_FLL_LOCK_EINT                 0x0004  /*                  */
#define WM8904_IM_FLL_LOCK_EINT_MASK            0x0004  /*                  */
#define WM8904_IM_FLL_LOCK_EINT_SHIFT                2  /*                  */
#define WM8904_IM_FLL_LOCK_EINT_WIDTH                1  /*                  */
#define WM8904_IM_MIC_SHRT_EINT                 0x0002  /*                  */
#define WM8904_IM_MIC_SHRT_EINT_MASK            0x0002  /*                  */
#define WM8904_IM_MIC_SHRT_EINT_SHIFT                1  /*                  */
#define WM8904_IM_MIC_SHRT_EINT_WIDTH                1  /*                  */
#define WM8904_IM_MIC_DET_EINT                  0x0001  /*                 */
#define WM8904_IM_MIC_DET_EINT_MASK             0x0001  /*                 */
#define WM8904_IM_MIC_DET_EINT_SHIFT                 0  /*                 */
#define WM8904_IM_MIC_DET_EINT_WIDTH                 1  /*                 */

/*
                                   
 */
#define WM8904_GPIO_BCLK_EINT_POL               0x0200  /*                    */
#define WM8904_GPIO_BCLK_EINT_POL_MASK          0x0200  /*                    */
#define WM8904_GPIO_BCLK_EINT_POL_SHIFT              9  /*                    */
#define WM8904_GPIO_BCLK_EINT_POL_WIDTH              1  /*                    */
#define WM8904_WSEQ_EINT_POL                    0x0100  /*               */
#define WM8904_WSEQ_EINT_POL_MASK               0x0100  /*               */
#define WM8904_WSEQ_EINT_POL_SHIFT                   8  /*               */
#define WM8904_WSEQ_EINT_POL_WIDTH                   1  /*               */
#define WM8904_GPIO3_EINT_POL                   0x0080  /*                */
#define WM8904_GPIO3_EINT_POL_MASK              0x0080  /*                */
#define WM8904_GPIO3_EINT_POL_SHIFT                  7  /*                */
#define WM8904_GPIO3_EINT_POL_WIDTH                  1  /*                */
#define WM8904_GPIO2_EINT_POL                   0x0040  /*                */
#define WM8904_GPIO2_EINT_POL_MASK              0x0040  /*                */
#define WM8904_GPIO2_EINT_POL_SHIFT                  6  /*                */
#define WM8904_GPIO2_EINT_POL_WIDTH                  1  /*                */
#define WM8904_GPIO1_EINT_POL                   0x0020  /*                */
#define WM8904_GPIO1_EINT_POL_MASK              0x0020  /*                */
#define WM8904_GPIO1_EINT_POL_SHIFT                  5  /*                */
#define WM8904_GPIO1_EINT_POL_WIDTH                  1  /*                */
#define WM8904_GPI8_EINT_POL                    0x0010  /*               */
#define WM8904_GPI8_EINT_POL_MASK               0x0010  /*               */
#define WM8904_GPI8_EINT_POL_SHIFT                   4  /*               */
#define WM8904_GPI8_EINT_POL_WIDTH                   1  /*               */
#define WM8904_GPI7_EINT_POL                    0x0008  /*               */
#define WM8904_GPI7_EINT_POL_MASK               0x0008  /*               */
#define WM8904_GPI7_EINT_POL_SHIFT                   3  /*               */
#define WM8904_GPI7_EINT_POL_WIDTH                   1  /*               */
#define WM8904_FLL_LOCK_EINT_POL                0x0004  /*                   */
#define WM8904_FLL_LOCK_EINT_POL_MASK           0x0004  /*                   */
#define WM8904_FLL_LOCK_EINT_POL_SHIFT               2  /*                   */
#define WM8904_FLL_LOCK_EINT_POL_WIDTH               1  /*                   */
#define WM8904_MIC_SHRT_EINT_POL                0x0002  /*                   */
#define WM8904_MIC_SHRT_EINT_POL_MASK           0x0002  /*                   */
#define WM8904_MIC_SHRT_EINT_POL_SHIFT               1  /*                   */
#define WM8904_MIC_SHRT_EINT_POL_WIDTH               1  /*                   */
#define WM8904_MIC_DET_EINT_POL                 0x0001  /*                  */
#define WM8904_MIC_DET_EINT_POL_MASK            0x0001  /*                  */
#define WM8904_MIC_DET_EINT_POL_SHIFT                0  /*                  */
#define WM8904_MIC_DET_EINT_POL_WIDTH                1  /*                  */

/*
                                   
 */
#define WM8904_GPIO_BCLK_EINT_DB                0x0200  /*                   */
#define WM8904_GPIO_BCLK_EINT_DB_MASK           0x0200  /*                   */
#define WM8904_GPIO_BCLK_EINT_DB_SHIFT               9  /*                   */
#define WM8904_GPIO_BCLK_EINT_DB_WIDTH               1  /*                   */
#define WM8904_WSEQ_EINT_DB                     0x0100  /*              */
#define WM8904_WSEQ_EINT_DB_MASK                0x0100  /*              */
#define WM8904_WSEQ_EINT_DB_SHIFT                    8  /*              */
#define WM8904_WSEQ_EINT_DB_WIDTH                    1  /*              */
#define WM8904_GPIO3_EINT_DB                    0x0080  /*               */
#define WM8904_GPIO3_EINT_DB_MASK               0x0080  /*               */
#define WM8904_GPIO3_EINT_DB_SHIFT                   7  /*               */
#define WM8904_GPIO3_EINT_DB_WIDTH                   1  /*               */
#define WM8904_GPIO2_EINT_DB                    0x0040  /*               */
#define WM8904_GPIO2_EINT_DB_MASK               0x0040  /*               */
#define WM8904_GPIO2_EINT_DB_SHIFT                   6  /*               */
#define WM8904_GPIO2_EINT_DB_WIDTH                   1  /*               */
#define WM8904_GPIO1_EINT_DB                    0x0020  /*               */
#define WM8904_GPIO1_EINT_DB_MASK               0x0020  /*               */
#define WM8904_GPIO1_EINT_DB_SHIFT                   5  /*               */
#define WM8904_GPIO1_EINT_DB_WIDTH                   1  /*               */
#define WM8904_GPI8_EINT_DB                     0x0010  /*              */
#define WM8904_GPI8_EINT_DB_MASK                0x0010  /*              */
#define WM8904_GPI8_EINT_DB_SHIFT                    4  /*              */
#define WM8904_GPI8_EINT_DB_WIDTH                    1  /*              */
#define WM8904_GPI7_EINT_DB                     0x0008  /*              */
#define WM8904_GPI7_EINT_DB_MASK                0x0008  /*              */
#define WM8904_GPI7_EINT_DB_SHIFT                    3  /*              */
#define WM8904_GPI7_EINT_DB_WIDTH                    1  /*              */
#define WM8904_FLL_LOCK_EINT_DB                 0x0004  /*                  */
#define WM8904_FLL_LOCK_EINT_DB_MASK            0x0004  /*                  */
#define WM8904_FLL_LOCK_EINT_DB_SHIFT                2  /*                  */
#define WM8904_FLL_LOCK_EINT_DB_WIDTH                1  /*                  */
#define WM8904_MIC_SHRT_EINT_DB                 0x0002  /*                  */
#define WM8904_MIC_SHRT_EINT_DB_MASK            0x0002  /*                  */
#define WM8904_MIC_SHRT_EINT_DB_SHIFT                1  /*                  */
#define WM8904_MIC_SHRT_EINT_DB_WIDTH                1  /*                  */
#define WM8904_MIC_DET_EINT_DB                  0x0001  /*                 */
#define WM8904_MIC_DET_EINT_DB_MASK             0x0001  /*                 */
#define WM8904_MIC_DET_EINT_DB_SHIFT                 0  /*                 */
#define WM8904_MIC_DET_EINT_DB_WIDTH                 1  /*                 */

/*
                    
 */
#define WM8904_EQ_ENA                           0x0001  /*        */
#define WM8904_EQ_ENA_MASK                      0x0001  /*        */
#define WM8904_EQ_ENA_SHIFT                          0  /*        */
#define WM8904_EQ_ENA_WIDTH                          1  /*        */

/*
                    
 */
#define WM8904_EQ_B1_GAIN_MASK                  0x001F  /*                    */
#define WM8904_EQ_B1_GAIN_SHIFT                      0  /*                    */
#define WM8904_EQ_B1_GAIN_WIDTH                      5  /*                    */

/*
                    
 */
#define WM8904_EQ_B2_GAIN_MASK                  0x001F  /*                    */
#define WM8904_EQ_B2_GAIN_SHIFT                      0  /*                    */
#define WM8904_EQ_B2_GAIN_WIDTH                      5  /*                    */

/*
                    
 */
#define WM8904_EQ_B3_GAIN_MASK                  0x001F  /*                    */
#define WM8904_EQ_B3_GAIN_SHIFT                      0  /*                    */
#define WM8904_EQ_B3_GAIN_WIDTH                      5  /*                    */

/*
                    
 */
#define WM8904_EQ_B4_GAIN_MASK                  0x001F  /*                    */
#define WM8904_EQ_B4_GAIN_SHIFT                      0  /*                    */
#define WM8904_EQ_B4_GAIN_WIDTH                      5  /*                    */

/*
                    
 */
#define WM8904_EQ_B5_GAIN_MASK                  0x001F  /*                    */
#define WM8904_EQ_B5_GAIN_SHIFT                      0  /*                    */
#define WM8904_EQ_B5_GAIN_WIDTH                      5  /*                    */

/*
                    
 */
#define WM8904_EQ_B1_A_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B1_A_SHIFT                         0  /*                  */
#define WM8904_EQ_B1_A_WIDTH                        16  /*                  */

/*
                    
 */
#define WM8904_EQ_B1_B_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B1_B_SHIFT                         0  /*                  */
#define WM8904_EQ_B1_B_WIDTH                        16  /*                  */

/*
                    
 */
#define WM8904_EQ_B1_PG_MASK                    0xFFFF  /*                   */
#define WM8904_EQ_B1_PG_SHIFT                        0  /*                   */
#define WM8904_EQ_B1_PG_WIDTH                       16  /*                   */

/*
                     
 */
#define WM8904_EQ_B2_A_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B2_A_SHIFT                         0  /*                  */
#define WM8904_EQ_B2_A_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B2_B_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B2_B_SHIFT                         0  /*                  */
#define WM8904_EQ_B2_B_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B2_C_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B2_C_SHIFT                         0  /*                  */
#define WM8904_EQ_B2_C_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B2_PG_MASK                    0xFFFF  /*                   */
#define WM8904_EQ_B2_PG_SHIFT                        0  /*                   */
#define WM8904_EQ_B2_PG_WIDTH                       16  /*                   */

/*
                     
 */
#define WM8904_EQ_B3_A_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B3_A_SHIFT                         0  /*                  */
#define WM8904_EQ_B3_A_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B3_B_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B3_B_SHIFT                         0  /*                  */
#define WM8904_EQ_B3_B_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B3_C_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B3_C_SHIFT                         0  /*                  */
#define WM8904_EQ_B3_C_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B3_PG_MASK                    0xFFFF  /*                   */
#define WM8904_EQ_B3_PG_SHIFT                        0  /*                   */
#define WM8904_EQ_B3_PG_WIDTH                       16  /*                   */

/*
                     
 */
#define WM8904_EQ_B4_A_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B4_A_SHIFT                         0  /*                  */
#define WM8904_EQ_B4_A_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B4_B_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B4_B_SHIFT                         0  /*                  */
#define WM8904_EQ_B4_B_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B4_C_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B4_C_SHIFT                         0  /*                  */
#define WM8904_EQ_B4_C_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B4_PG_MASK                    0xFFFF  /*                   */
#define WM8904_EQ_B4_PG_SHIFT                        0  /*                   */
#define WM8904_EQ_B4_PG_WIDTH                       16  /*                   */

/*
                     
 */
#define WM8904_EQ_B5_A_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B5_A_SHIFT                         0  /*                  */
#define WM8904_EQ_B5_A_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B5_B_MASK                     0xFFFF  /*                  */
#define WM8904_EQ_B5_B_SHIFT                         0  /*                  */
#define WM8904_EQ_B5_B_WIDTH                        16  /*                  */

/*
                     
 */
#define WM8904_EQ_B5_PG_MASK                    0xFFFF  /*                   */
#define WM8904_EQ_B5_PG_SHIFT                        0  /*                   */
#define WM8904_EQ_B5_PG_WIDTH                       16  /*                   */

/*
                                         
 */
#define WM8904_USER_KEY                         0x0002  /*          */
#define WM8904_USER_KEY_MASK                    0x0002  /*          */
#define WM8904_USER_KEY_SHIFT                        1  /*          */
#define WM8904_USER_KEY_WIDTH                        1  /*          */

/*
                           
 */
#define WM8904_ADC_128_OSR_TST_MODE             0x0004  /*                      */
#define WM8904_ADC_128_OSR_TST_MODE_SHIFT            2  /*                      */
#define WM8904_ADC_128_OSR_TST_MODE_WIDTH            1  /*                      */
#define WM8904_ADC_BIASX1P5                     0x0001  /*              */
#define WM8904_ADC_BIASX1P5_SHIFT                    0  /*              */
#define WM8904_ADC_BIASX1P5_WIDTH                    1  /*              */

/*
                                       
 */
#define WM8904_PGA_BIAS_MASK                    0x0070  /*                  */
#define WM8904_PGA_BIAS_SHIFT                        4  /*                  */
#define WM8904_PGA_BIAS_WIDTH                        3  /*                  */

/*
                               
 */
#define WM8904_FLL_FRC_NCO                      0x0001  /*             */
#define WM8904_FLL_FRC_NCO_MASK                 0x0001  /*             */
#define WM8904_FLL_FRC_NCO_SHIFT                     0  /*             */
#define WM8904_FLL_FRC_NCO_WIDTH                     1  /*             */

/*
                               
 */
#define WM8904_FLL_FRC_NCO_VAL_MASK             0x003F  /*                         */
#define WM8904_FLL_FRC_NCO_VAL_SHIFT                 0  /*                         */
#define WM8904_FLL_FRC_NCO_VAL_WIDTH                 6  /*                         */

#endif
