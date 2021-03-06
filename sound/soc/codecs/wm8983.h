/*
 * wm8983.h  --  WM8983 ALSA SoC Audio driver
 *
 * Copyright 2011 Wolfson Microelectronics plc
 *
 * Author: Dimitris Papastamos <dp@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WM8983_H
#define _WM8983_H

/*
                   
 */
#define WM8983_SOFTWARE_RESET                   0x00
#define WM8983_POWER_MANAGEMENT_1               0x01
#define WM8983_POWER_MANAGEMENT_2               0x02
#define WM8983_POWER_MANAGEMENT_3               0x03
#define WM8983_AUDIO_INTERFACE                  0x04
#define WM8983_COMPANDING_CONTROL               0x05
#define WM8983_CLOCK_GEN_CONTROL                0x06
#define WM8983_ADDITIONAL_CONTROL               0x07
#define WM8983_GPIO_CONTROL                     0x08
#define WM8983_JACK_DETECT_CONTROL_1            0x09
#define WM8983_DAC_CONTROL                      0x0A
#define WM8983_LEFT_DAC_DIGITAL_VOL             0x0B
#define WM8983_RIGHT_DAC_DIGITAL_VOL            0x0C
#define WM8983_JACK_DETECT_CONTROL_2            0x0D
#define WM8983_ADC_CONTROL                      0x0E
#define WM8983_LEFT_ADC_DIGITAL_VOL             0x0F
#define WM8983_RIGHT_ADC_DIGITAL_VOL            0x10
#define WM8983_EQ1_LOW_SHELF                    0x12
#define WM8983_EQ2_PEAK_1                       0x13
#define WM8983_EQ3_PEAK_2                       0x14
#define WM8983_EQ4_PEAK_3                       0x15
#define WM8983_EQ5_HIGH_SHELF                   0x16
#define WM8983_DAC_LIMITER_1                    0x18
#define WM8983_DAC_LIMITER_2                    0x19
#define WM8983_NOTCH_FILTER_1                   0x1B
#define WM8983_NOTCH_FILTER_2                   0x1C
#define WM8983_NOTCH_FILTER_3                   0x1D
#define WM8983_NOTCH_FILTER_4                   0x1E
#define WM8983_ALC_CONTROL_1                    0x20
#define WM8983_ALC_CONTROL_2                    0x21
#define WM8983_ALC_CONTROL_3                    0x22
#define WM8983_NOISE_GATE                       0x23
#define WM8983_PLL_N                            0x24
#define WM8983_PLL_K_1                          0x25
#define WM8983_PLL_K_2                          0x26
#define WM8983_PLL_K_3                          0x27
#define WM8983_3D_CONTROL                       0x29
#define WM8983_OUT4_TO_ADC                      0x2A
#define WM8983_BEEP_CONTROL                     0x2B
#define WM8983_INPUT_CTRL                       0x2C
#define WM8983_LEFT_INP_PGA_GAIN_CTRL           0x2D
#define WM8983_RIGHT_INP_PGA_GAIN_CTRL          0x2E
#define WM8983_LEFT_ADC_BOOST_CTRL              0x2F
#define WM8983_RIGHT_ADC_BOOST_CTRL             0x30
#define WM8983_OUTPUT_CTRL                      0x31
#define WM8983_LEFT_MIXER_CTRL                  0x32
#define WM8983_RIGHT_MIXER_CTRL                 0x33
#define WM8983_LOUT1_HP_VOLUME_CTRL             0x34
#define WM8983_ROUT1_HP_VOLUME_CTRL             0x35
#define WM8983_LOUT2_SPK_VOLUME_CTRL            0x36
#define WM8983_ROUT2_SPK_VOLUME_CTRL            0x37
#define WM8983_OUT3_MIXER_CTRL                  0x38
#define WM8983_OUT4_MONO_MIX_CTRL               0x39
#define WM8983_BIAS_CTRL                        0x3D

#define WM8983_REGISTER_COUNT                   59
#define WM8983_MAX_REGISTER                     0x3F

/*
                     
 */

/*
                             
 */
#define WM8983_SOFTWARE_RESET_MASK              0x01FF  /*                        */
#define WM8983_SOFTWARE_RESET_SHIFT                  0  /*                        */
#define WM8983_SOFTWARE_RESET_WIDTH                  9  /*                        */

/*
                                 
 */
#define WM8983_BUFDCOPEN                        0x0100  /*           */
#define WM8983_BUFDCOPEN_MASK                   0x0100  /*           */
#define WM8983_BUFDCOPEN_SHIFT                       8  /*           */
#define WM8983_BUFDCOPEN_WIDTH                       1  /*           */
#define WM8983_OUT4MIXEN                        0x0080  /*           */
#define WM8983_OUT4MIXEN_MASK                   0x0080  /*           */
#define WM8983_OUT4MIXEN_SHIFT                       7  /*           */
#define WM8983_OUT4MIXEN_WIDTH                       1  /*           */
#define WM8983_OUT3MIXEN                        0x0040  /*           */
#define WM8983_OUT3MIXEN_MASK                   0x0040  /*           */
#define WM8983_OUT3MIXEN_SHIFT                       6  /*           */
#define WM8983_OUT3MIXEN_WIDTH                       1  /*           */
#define WM8983_PLLEN                            0x0020  /*       */
#define WM8983_PLLEN_MASK                       0x0020  /*       */
#define WM8983_PLLEN_SHIFT                           5  /*       */
#define WM8983_PLLEN_WIDTH                           1  /*       */
#define WM8983_MICBEN                           0x0010  /*        */
#define WM8983_MICBEN_MASK                      0x0010  /*        */
#define WM8983_MICBEN_SHIFT                          4  /*        */
#define WM8983_MICBEN_WIDTH                          1  /*        */
#define WM8983_BIASEN                           0x0008  /*        */
#define WM8983_BIASEN_MASK                      0x0008  /*        */
#define WM8983_BIASEN_SHIFT                          3  /*        */
#define WM8983_BIASEN_WIDTH                          1  /*        */
#define WM8983_BUFIOEN                          0x0004  /*         */
#define WM8983_BUFIOEN_MASK                     0x0004  /*         */
#define WM8983_BUFIOEN_SHIFT                         2  /*         */
#define WM8983_BUFIOEN_WIDTH                         1  /*         */
#define WM8983_VMIDSEL_MASK                     0x0003  /*                 */
#define WM8983_VMIDSEL_SHIFT                         0  /*                 */
#define WM8983_VMIDSEL_WIDTH                         2  /*                 */

/*
                                 
 */
#define WM8983_ROUT1EN                          0x0100  /*         */
#define WM8983_ROUT1EN_MASK                     0x0100  /*         */
#define WM8983_ROUT1EN_SHIFT                         8  /*         */
#define WM8983_ROUT1EN_WIDTH                         1  /*         */
#define WM8983_LOUT1EN                          0x0080  /*         */
#define WM8983_LOUT1EN_MASK                     0x0080  /*         */
#define WM8983_LOUT1EN_SHIFT                         7  /*         */
#define WM8983_LOUT1EN_WIDTH                         1  /*         */
#define WM8983_SLEEP                            0x0040  /*       */
#define WM8983_SLEEP_MASK                       0x0040  /*       */
#define WM8983_SLEEP_SHIFT                           6  /*       */
#define WM8983_SLEEP_WIDTH                           1  /*       */
#define WM8983_BOOSTENR                         0x0020  /*          */
#define WM8983_BOOSTENR_MASK                    0x0020  /*          */
#define WM8983_BOOSTENR_SHIFT                        5  /*          */
#define WM8983_BOOSTENR_WIDTH                        1  /*          */
#define WM8983_BOOSTENL                         0x0010  /*          */
#define WM8983_BOOSTENL_MASK                    0x0010  /*          */
#define WM8983_BOOSTENL_SHIFT                        4  /*          */
#define WM8983_BOOSTENL_WIDTH                        1  /*          */
#define WM8983_INPGAENR                         0x0008  /*          */
#define WM8983_INPGAENR_MASK                    0x0008  /*          */
#define WM8983_INPGAENR_SHIFT                        3  /*          */
#define WM8983_INPGAENR_WIDTH                        1  /*          */
#define WM8983_INPPGAENL                        0x0004  /*           */
#define WM8983_INPPGAENL_MASK                   0x0004  /*           */
#define WM8983_INPPGAENL_SHIFT                       2  /*           */
#define WM8983_INPPGAENL_WIDTH                       1  /*           */
#define WM8983_ADCENR                           0x0002  /*        */
#define WM8983_ADCENR_MASK                      0x0002  /*        */
#define WM8983_ADCENR_SHIFT                          1  /*        */
#define WM8983_ADCENR_WIDTH                          1  /*        */
#define WM8983_ADCENL                           0x0001  /*        */
#define WM8983_ADCENL_MASK                      0x0001  /*        */
#define WM8983_ADCENL_SHIFT                          0  /*        */
#define WM8983_ADCENL_WIDTH                          1  /*        */

/*
                                 
 */
#define WM8983_OUT4EN                           0x0100  /*        */
#define WM8983_OUT4EN_MASK                      0x0100  /*        */
#define WM8983_OUT4EN_SHIFT                          8  /*        */
#define WM8983_OUT4EN_WIDTH                          1  /*        */
#define WM8983_OUT3EN                           0x0080  /*        */
#define WM8983_OUT3EN_MASK                      0x0080  /*        */
#define WM8983_OUT3EN_SHIFT                          7  /*        */
#define WM8983_OUT3EN_WIDTH                          1  /*        */
#define WM8983_LOUT2EN                          0x0040  /*         */
#define WM8983_LOUT2EN_MASK                     0x0040  /*         */
#define WM8983_LOUT2EN_SHIFT                         6  /*         */
#define WM8983_LOUT2EN_WIDTH                         1  /*         */
#define WM8983_ROUT2EN                          0x0020  /*         */
#define WM8983_ROUT2EN_MASK                     0x0020  /*         */
#define WM8983_ROUT2EN_SHIFT                         5  /*         */
#define WM8983_ROUT2EN_WIDTH                         1  /*         */
#define WM8983_RMIXEN                           0x0008  /*        */
#define WM8983_RMIXEN_MASK                      0x0008  /*        */
#define WM8983_RMIXEN_SHIFT                          3  /*        */
#define WM8983_RMIXEN_WIDTH                          1  /*        */
#define WM8983_LMIXEN                           0x0004  /*        */
#define WM8983_LMIXEN_MASK                      0x0004  /*        */
#define WM8983_LMIXEN_SHIFT                          2  /*        */
#define WM8983_LMIXEN_WIDTH                          1  /*        */
#define WM8983_DACENR                           0x0002  /*        */
#define WM8983_DACENR_MASK                      0x0002  /*        */
#define WM8983_DACENR_SHIFT                          1  /*        */
#define WM8983_DACENR_WIDTH                          1  /*        */
#define WM8983_DACENL                           0x0001  /*        */
#define WM8983_DACENL_MASK                      0x0001  /*        */
#define WM8983_DACENL_SHIFT                          0  /*        */
#define WM8983_DACENL_WIDTH                          1  /*        */

/*
                              
 */
#define WM8983_BCP                              0x0100  /*     */
#define WM8983_BCP_MASK                         0x0100  /*     */
#define WM8983_BCP_SHIFT                             8  /*     */
#define WM8983_BCP_WIDTH                             1  /*     */
#define WM8983_LRCP                             0x0080  /*      */
#define WM8983_LRCP_MASK                        0x0080  /*      */
#define WM8983_LRCP_SHIFT                            7  /*      */
#define WM8983_LRCP_WIDTH                            1  /*      */
#define WM8983_WL_MASK                          0x0060  /*            */
#define WM8983_WL_SHIFT                              5  /*            */
#define WM8983_WL_WIDTH                              2  /*            */
#define WM8983_FMT_MASK                         0x0018  /*             */
#define WM8983_FMT_SHIFT                             3  /*             */
#define WM8983_FMT_WIDTH                             2  /*             */
#define WM8983_DLRSWAP                          0x0004  /*         */
#define WM8983_DLRSWAP_MASK                     0x0004  /*         */
#define WM8983_DLRSWAP_SHIFT                         2  /*         */
#define WM8983_DLRSWAP_WIDTH                         1  /*         */
#define WM8983_ALRSWAP                          0x0002  /*         */
#define WM8983_ALRSWAP_MASK                     0x0002  /*         */
#define WM8983_ALRSWAP_SHIFT                         1  /*         */
#define WM8983_ALRSWAP_WIDTH                         1  /*         */
#define WM8983_MONO                             0x0001  /*      */
#define WM8983_MONO_MASK                        0x0001  /*      */
#define WM8983_MONO_SHIFT                            0  /*      */
#define WM8983_MONO_WIDTH                            1  /*      */

/*
                                 
 */
#define WM8983_WL8                              0x0020  /*     */
#define WM8983_WL8_MASK                         0x0020  /*     */
#define WM8983_WL8_SHIFT                             5  /*     */
#define WM8983_WL8_WIDTH                             1  /*     */
#define WM8983_DAC_COMP_MASK                    0x0018  /*                  */
#define WM8983_DAC_COMP_SHIFT                        3  /*                  */
#define WM8983_DAC_COMP_WIDTH                        2  /*                  */
#define WM8983_ADC_COMP_MASK                    0x0006  /*                  */
#define WM8983_ADC_COMP_SHIFT                        1  /*                  */
#define WM8983_ADC_COMP_WIDTH                        2  /*                  */
#define WM8983_LOOPBACK                         0x0001  /*          */
#define WM8983_LOOPBACK_MASK                    0x0001  /*          */
#define WM8983_LOOPBACK_SHIFT                        0  /*          */
#define WM8983_LOOPBACK_WIDTH                        1  /*          */

/*
                                
 */
#define WM8983_CLKSEL                           0x0100  /*        */
#define WM8983_CLKSEL_MASK                      0x0100  /*        */
#define WM8983_CLKSEL_SHIFT                          8  /*        */
#define WM8983_CLKSEL_WIDTH                          1  /*        */
#define WM8983_MCLKDIV_MASK                     0x00E0  /*                 */
#define WM8983_MCLKDIV_SHIFT                         5  /*                 */
#define WM8983_MCLKDIV_WIDTH                         3  /*                 */
#define WM8983_BCLKDIV_MASK                     0x001C  /*                 */
#define WM8983_BCLKDIV_SHIFT                         2  /*                 */
#define WM8983_BCLKDIV_WIDTH                         3  /*                 */
#define WM8983_MS                               0x0001  /*    */
#define WM8983_MS_MASK                          0x0001  /*    */
#define WM8983_MS_SHIFT                              0  /*    */
#define WM8983_MS_WIDTH                              1  /*    */

/*
                                 
 */
#define WM8983_SR_MASK                          0x000E  /*            */
#define WM8983_SR_SHIFT                              1  /*            */
#define WM8983_SR_WIDTH                              3  /*            */
#define WM8983_SLOWCLKEN                        0x0001  /*           */
#define WM8983_SLOWCLKEN_MASK                   0x0001  /*           */
#define WM8983_SLOWCLKEN_SHIFT                       0  /*           */
#define WM8983_SLOWCLKEN_WIDTH                       1  /*           */

/*
                           
 */
#define WM8983_OPCLKDIV_MASK                    0x0030  /*                  */
#define WM8983_OPCLKDIV_SHIFT                        4  /*                  */
#define WM8983_OPCLKDIV_WIDTH                        2  /*                  */
#define WM8983_GPIO1POL                         0x0008  /*          */
#define WM8983_GPIO1POL_MASK                    0x0008  /*          */
#define WM8983_GPIO1POL_SHIFT                        3  /*          */
#define WM8983_GPIO1POL_WIDTH                        1  /*          */
#define WM8983_GPIO1SEL_MASK                    0x0007  /*                  */
#define WM8983_GPIO1SEL_SHIFT                        0  /*                  */
#define WM8983_GPIO1SEL_WIDTH                        3  /*                  */

/*
                                    
 */
#define WM8983_JD_VMID1                         0x0100  /*          */
#define WM8983_JD_VMID1_MASK                    0x0100  /*          */
#define WM8983_JD_VMID1_SHIFT                        8  /*          */
#define WM8983_JD_VMID1_WIDTH                        1  /*          */
#define WM8983_JD_VMID0                         0x0080  /*          */
#define WM8983_JD_VMID0_MASK                    0x0080  /*          */
#define WM8983_JD_VMID0_SHIFT                        7  /*          */
#define WM8983_JD_VMID0_WIDTH                        1  /*          */
#define WM8983_JD_EN                            0x0040  /*       */
#define WM8983_JD_EN_MASK                       0x0040  /*       */
#define WM8983_JD_EN_SHIFT                           6  /*       */
#define WM8983_JD_EN_WIDTH                           1  /*       */
#define WM8983_JD_SEL_MASK                      0x0030  /*                */
#define WM8983_JD_SEL_SHIFT                          4  /*                */
#define WM8983_JD_SEL_WIDTH                          2  /*                */

/*
                           
 */
#define WM8983_SOFTMUTE                         0x0040  /*          */
#define WM8983_SOFTMUTE_MASK                    0x0040  /*          */
#define WM8983_SOFTMUTE_SHIFT                        6  /*          */
#define WM8983_SOFTMUTE_WIDTH                        1  /*          */
#define WM8983_DACOSR128                        0x0008  /*           */
#define WM8983_DACOSR128_MASK                   0x0008  /*           */
#define WM8983_DACOSR128_SHIFT                       3  /*           */
#define WM8983_DACOSR128_WIDTH                       1  /*           */
#define WM8983_AMUTE                            0x0004  /*       */
#define WM8983_AMUTE_MASK                       0x0004  /*       */
#define WM8983_AMUTE_SHIFT                           2  /*       */
#define WM8983_AMUTE_WIDTH                           1  /*       */
#define WM8983_DACRPOL                          0x0002  /*         */
#define WM8983_DACRPOL_MASK                     0x0002  /*         */
#define WM8983_DACRPOL_SHIFT                         1  /*         */
#define WM8983_DACRPOL_WIDTH                         1  /*         */
#define WM8983_DACLPOL                          0x0001  /*         */
#define WM8983_DACLPOL_MASK                     0x0001  /*         */
#define WM8983_DACLPOL_SHIFT                         0  /*         */
#define WM8983_DACLPOL_WIDTH                         1  /*         */

/*
                                    
 */
#define WM8983_DACVU                            0x0100  /*       */
#define WM8983_DACVU_MASK                       0x0100  /*       */
#define WM8983_DACVU_SHIFT                           8  /*       */
#define WM8983_DACVU_WIDTH                           1  /*       */
#define WM8983_DACLVOL_MASK                     0x00FF  /*                 */
#define WM8983_DACLVOL_SHIFT                         0  /*                 */
#define WM8983_DACLVOL_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8983_DACVU                            0x0100  /*       */
#define WM8983_DACVU_MASK                       0x0100  /*       */
#define WM8983_DACVU_SHIFT                           8  /*       */
#define WM8983_DACVU_WIDTH                           1  /*       */
#define WM8983_DACRVOL_MASK                     0x00FF  /*                 */
#define WM8983_DACRVOL_SHIFT                         0  /*                 */
#define WM8983_DACRVOL_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8983_JD_EN1_MASK                      0x00F0  /*                */
#define WM8983_JD_EN1_SHIFT                          4  /*                */
#define WM8983_JD_EN1_WIDTH                          4  /*                */
#define WM8983_JD_EN0_MASK                      0x000F  /*                */
#define WM8983_JD_EN0_SHIFT                          0  /*                */
#define WM8983_JD_EN0_WIDTH                          4  /*                */

/*
                           
 */
#define WM8983_HPFEN                            0x0100  /*       */
#define WM8983_HPFEN_MASK                       0x0100  /*       */
#define WM8983_HPFEN_SHIFT                           8  /*       */
#define WM8983_HPFEN_WIDTH                           1  /*       */
#define WM8983_HPFAPP                           0x0080  /*        */
#define WM8983_HPFAPP_MASK                      0x0080  /*        */
#define WM8983_HPFAPP_SHIFT                          7  /*        */
#define WM8983_HPFAPP_WIDTH                          1  /*        */
#define WM8983_HPFCUT_MASK                      0x0070  /*                */
#define WM8983_HPFCUT_SHIFT                          4  /*                */
#define WM8983_HPFCUT_WIDTH                          3  /*                */
#define WM8983_ADCOSR128                        0x0008  /*           */
#define WM8983_ADCOSR128_MASK                   0x0008  /*           */
#define WM8983_ADCOSR128_SHIFT                       3  /*           */
#define WM8983_ADCOSR128_WIDTH                       1  /*           */
#define WM8983_ADCRPOL                          0x0002  /*         */
#define WM8983_ADCRPOL_MASK                     0x0002  /*         */
#define WM8983_ADCRPOL_SHIFT                         1  /*         */
#define WM8983_ADCRPOL_WIDTH                         1  /*         */
#define WM8983_ADCLPOL                          0x0001  /*         */
#define WM8983_ADCLPOL_MASK                     0x0001  /*         */
#define WM8983_ADCLPOL_SHIFT                         0  /*         */
#define WM8983_ADCLPOL_WIDTH                         1  /*         */

/*
                                    
 */
#define WM8983_ADCVU                            0x0100  /*       */
#define WM8983_ADCVU_MASK                       0x0100  /*       */
#define WM8983_ADCVU_SHIFT                           8  /*       */
#define WM8983_ADCVU_WIDTH                           1  /*       */
#define WM8983_ADCLVOL_MASK                     0x00FF  /*                 */
#define WM8983_ADCLVOL_SHIFT                         0  /*                 */
#define WM8983_ADCLVOL_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8983_ADCVU                            0x0100  /*       */
#define WM8983_ADCVU_MASK                       0x0100  /*       */
#define WM8983_ADCVU_SHIFT                           8  /*       */
#define WM8983_ADCVU_WIDTH                           1  /*       */
#define WM8983_ADCRVOL_MASK                     0x00FF  /*                 */
#define WM8983_ADCRVOL_SHIFT                         0  /*                 */
#define WM8983_ADCRVOL_WIDTH                         8  /*                 */

/*
                               
 */
#define WM8983_EQ3DMODE                         0x0100  /*          */
#define WM8983_EQ3DMODE_MASK                    0x0100  /*          */
#define WM8983_EQ3DMODE_SHIFT                        8  /*          */
#define WM8983_EQ3DMODE_WIDTH                        1  /*          */
#define WM8983_EQ1C_MASK                        0x0060  /*              */
#define WM8983_EQ1C_SHIFT                            5  /*              */
#define WM8983_EQ1C_WIDTH                            2  /*              */
#define WM8983_EQ1G_MASK                        0x001F  /*              */
#define WM8983_EQ1G_SHIFT                            0  /*              */
#define WM8983_EQ1G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8983_EQ2BW                            0x0100  /*       */
#define WM8983_EQ2BW_MASK                       0x0100  /*       */
#define WM8983_EQ2BW_SHIFT                           8  /*       */
#define WM8983_EQ2BW_WIDTH                           1  /*       */
#define WM8983_EQ2C_MASK                        0x0060  /*              */
#define WM8983_EQ2C_SHIFT                            5  /*              */
#define WM8983_EQ2C_WIDTH                            2  /*              */
#define WM8983_EQ2G_MASK                        0x001F  /*              */
#define WM8983_EQ2G_SHIFT                            0  /*              */
#define WM8983_EQ2G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8983_EQ3BW                            0x0100  /*       */
#define WM8983_EQ3BW_MASK                       0x0100  /*       */
#define WM8983_EQ3BW_SHIFT                           8  /*       */
#define WM8983_EQ3BW_WIDTH                           1  /*       */
#define WM8983_EQ3C_MASK                        0x0060  /*              */
#define WM8983_EQ3C_SHIFT                            5  /*              */
#define WM8983_EQ3C_WIDTH                            2  /*              */
#define WM8983_EQ3G_MASK                        0x001F  /*              */
#define WM8983_EQ3G_SHIFT                            0  /*              */
#define WM8983_EQ3G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8983_EQ4BW                            0x0100  /*       */
#define WM8983_EQ4BW_MASK                       0x0100  /*       */
#define WM8983_EQ4BW_SHIFT                           8  /*       */
#define WM8983_EQ4BW_WIDTH                           1  /*       */
#define WM8983_EQ4C_MASK                        0x0060  /*              */
#define WM8983_EQ4C_SHIFT                            5  /*              */
#define WM8983_EQ4C_WIDTH                            2  /*              */
#define WM8983_EQ4G_MASK                        0x001F  /*              */
#define WM8983_EQ4G_SHIFT                            0  /*              */
#define WM8983_EQ4G_WIDTH                            5  /*              */

/*
                                
 */
#define WM8983_EQ5C_MASK                        0x0060  /*              */
#define WM8983_EQ5C_SHIFT                            5  /*              */
#define WM8983_EQ5C_WIDTH                            2  /*              */
#define WM8983_EQ5G_MASK                        0x001F  /*              */
#define WM8983_EQ5G_SHIFT                            0  /*              */
#define WM8983_EQ5G_WIDTH                            5  /*              */

/*
                             
 */
#define WM8983_LIMEN                            0x0100  /*       */
#define WM8983_LIMEN_MASK                       0x0100  /*       */
#define WM8983_LIMEN_SHIFT                           8  /*       */
#define WM8983_LIMEN_WIDTH                           1  /*       */
#define WM8983_LIMDCY_MASK                      0x00F0  /*                */
#define WM8983_LIMDCY_SHIFT                          4  /*                */
#define WM8983_LIMDCY_WIDTH                          4  /*                */
#define WM8983_LIMATK_MASK                      0x000F  /*                */
#define WM8983_LIMATK_SHIFT                          0  /*                */
#define WM8983_LIMATK_WIDTH                          4  /*                */

/*
                             
 */
#define WM8983_LIMLVL_MASK                      0x0070  /*                */
#define WM8983_LIMLVL_SHIFT                          4  /*                */
#define WM8983_LIMLVL_WIDTH                          3  /*                */
#define WM8983_LIMBOOST_MASK                    0x000F  /*                  */
#define WM8983_LIMBOOST_SHIFT                        0  /*                  */
#define WM8983_LIMBOOST_WIDTH                        4  /*                  */

/*
                              
 */
#define WM8983_NFU                              0x0100  /*     */
#define WM8983_NFU_MASK                         0x0100  /*     */
#define WM8983_NFU_SHIFT                             8  /*     */
#define WM8983_NFU_WIDTH                             1  /*     */
#define WM8983_NFEN                             0x0080  /*      */
#define WM8983_NFEN_MASK                        0x0080  /*      */
#define WM8983_NFEN_SHIFT                            7  /*      */
#define WM8983_NFEN_WIDTH                            1  /*      */
#define WM8983_NFA0_13_7_MASK                   0x007F  /*                    */
#define WM8983_NFA0_13_7_SHIFT                       0  /*                    */
#define WM8983_NFA0_13_7_WIDTH                       7  /*                    */

/*
                              
 */
#define WM8983_NFU                              0x0100  /*     */
#define WM8983_NFU_MASK                         0x0100  /*     */
#define WM8983_NFU_SHIFT                             8  /*     */
#define WM8983_NFU_WIDTH                             1  /*     */
#define WM8983_NFA0_6_0_MASK                    0x007F  /*                   */
#define WM8983_NFA0_6_0_SHIFT                        0  /*                   */
#define WM8983_NFA0_6_0_WIDTH                        7  /*                   */

/*
                              
 */
#define WM8983_NFU                              0x0100  /*     */
#define WM8983_NFU_MASK                         0x0100  /*     */
#define WM8983_NFU_SHIFT                             8  /*     */
#define WM8983_NFU_WIDTH                             1  /*     */
#define WM8983_NFA1_13_7_MASK                   0x007F  /*                    */
#define WM8983_NFA1_13_7_SHIFT                       0  /*                    */
#define WM8983_NFA1_13_7_WIDTH                       7  /*                    */

/*
                              
 */
#define WM8983_NFU                              0x0100  /*     */
#define WM8983_NFU_MASK                         0x0100  /*     */
#define WM8983_NFU_SHIFT                             8  /*     */
#define WM8983_NFU_WIDTH                             1  /*     */
#define WM8983_NFA1_6_0_MASK                    0x007F  /*                   */
#define WM8983_NFA1_6_0_SHIFT                        0  /*                   */
#define WM8983_NFA1_6_0_WIDTH                        7  /*                   */

/*
                             
 */
#define WM8983_ALCSEL_MASK                      0x0180  /*                */
#define WM8983_ALCSEL_SHIFT                          7  /*                */
#define WM8983_ALCSEL_WIDTH                          2  /*                */
#define WM8983_ALCMAX_MASK                      0x0038  /*                */
#define WM8983_ALCMAX_SHIFT                          3  /*                */
#define WM8983_ALCMAX_WIDTH                          3  /*                */
#define WM8983_ALCMIN_MASK                      0x0007  /*                */
#define WM8983_ALCMIN_SHIFT                          0  /*                */
#define WM8983_ALCMIN_WIDTH                          3  /*                */

/*
                             
 */
#define WM8983_ALCHLD_MASK                      0x00F0  /*                */
#define WM8983_ALCHLD_SHIFT                          4  /*                */
#define WM8983_ALCHLD_WIDTH                          4  /*                */
#define WM8983_ALCLVL_MASK                      0x000F  /*                */
#define WM8983_ALCLVL_SHIFT                          0  /*                */
#define WM8983_ALCLVL_WIDTH                          4  /*                */

/*
                             
 */
#define WM8983_ALCMODE                          0x0100  /*         */
#define WM8983_ALCMODE_MASK                     0x0100  /*         */
#define WM8983_ALCMODE_SHIFT                         8  /*         */
#define WM8983_ALCMODE_WIDTH                         1  /*         */
#define WM8983_ALCDCY_MASK                      0x00F0  /*                */
#define WM8983_ALCDCY_SHIFT                          4  /*                */
#define WM8983_ALCDCY_WIDTH                          4  /*                */
#define WM8983_ALCATK_MASK                      0x000F  /*                */
#define WM8983_ALCATK_SHIFT                          0  /*                */
#define WM8983_ALCATK_WIDTH                          4  /*                */

/*
                          
 */
#define WM8983_NGEN                             0x0008  /*      */
#define WM8983_NGEN_MASK                        0x0008  /*      */
#define WM8983_NGEN_SHIFT                            3  /*      */
#define WM8983_NGEN_WIDTH                            1  /*      */
#define WM8983_NGTH_MASK                        0x0007  /*              */
#define WM8983_NGTH_SHIFT                            0  /*              */
#define WM8983_NGTH_WIDTH                            3  /*              */

/*
                     
 */
#define WM8983_PLL_PRESCALE                     0x0010  /*              */
#define WM8983_PLL_PRESCALE_MASK                0x0010  /*              */
#define WM8983_PLL_PRESCALE_SHIFT                    4  /*              */
#define WM8983_PLL_PRESCALE_WIDTH                    1  /*              */
#define WM8983_PLLN_MASK                        0x000F  /*              */
#define WM8983_PLLN_SHIFT                            0  /*              */
#define WM8983_PLLN_WIDTH                            4  /*              */

/*
                       
 */
#define WM8983_PLLK_23_18_MASK                  0x003F  /*                     */
#define WM8983_PLLK_23_18_SHIFT                      0  /*                     */
#define WM8983_PLLK_23_18_WIDTH                      6  /*                     */

/*
                       
 */
#define WM8983_PLLK_17_9_MASK                   0x01FF  /*                    */
#define WM8983_PLLK_17_9_SHIFT                       0  /*                    */
#define WM8983_PLLK_17_9_WIDTH                       9  /*                    */

/*
                       
 */
#define WM8983_PLLK_8_0_MASK                    0x01FF  /*                   */
#define WM8983_PLLK_8_0_SHIFT                        0  /*                   */
#define WM8983_PLLK_8_0_WIDTH                        9  /*                   */

/*
                          
 */
#define WM8983_DEPTH3D_MASK                     0x000F  /*                 */
#define WM8983_DEPTH3D_SHIFT                         0  /*                 */
#define WM8983_DEPTH3D_WIDTH                         4  /*                 */

/*
                           
 */
#define WM8983_OUT4_2ADCVOL_MASK                0x01C0  /*                      */
#define WM8983_OUT4_2ADCVOL_SHIFT                    6  /*                      */
#define WM8983_OUT4_2ADCVOL_WIDTH                    3  /*                      */
#define WM8983_OUT4_2LNR                        0x0020  /*           */
#define WM8983_OUT4_2LNR_MASK                   0x0020  /*           */
#define WM8983_OUT4_2LNR_SHIFT                       5  /*           */
#define WM8983_OUT4_2LNR_WIDTH                       1  /*           */
#define WM8983_POBCTRL                          0x0004  /*         */
#define WM8983_POBCTRL_MASK                     0x0004  /*         */
#define WM8983_POBCTRL_SHIFT                         2  /*         */
#define WM8983_POBCTRL_WIDTH                         1  /*         */
#define WM8983_DELEN                            0x0002  /*       */
#define WM8983_DELEN_MASK                       0x0002  /*       */
#define WM8983_DELEN_SHIFT                           1  /*       */
#define WM8983_DELEN_WIDTH                           1  /*       */
#define WM8983_OUT1DEL                          0x0001  /*         */
#define WM8983_OUT1DEL_MASK                     0x0001  /*         */
#define WM8983_OUT1DEL_SHIFT                         0  /*         */
#define WM8983_OUT1DEL_WIDTH                         1  /*         */

/*
                            
 */
#define WM8983_BYPL2RMIX                        0x0100  /*           */
#define WM8983_BYPL2RMIX_MASK                   0x0100  /*           */
#define WM8983_BYPL2RMIX_SHIFT                       8  /*           */
#define WM8983_BYPL2RMIX_WIDTH                       1  /*           */
#define WM8983_BYPR2LMIX                        0x0080  /*           */
#define WM8983_BYPR2LMIX_MASK                   0x0080  /*           */
#define WM8983_BYPR2LMIX_SHIFT                       7  /*           */
#define WM8983_BYPR2LMIX_WIDTH                       1  /*           */
#define WM8983_MUTERPGA2INV                     0x0020  /*              */
#define WM8983_MUTERPGA2INV_MASK                0x0020  /*              */
#define WM8983_MUTERPGA2INV_SHIFT                    5  /*              */
#define WM8983_MUTERPGA2INV_WIDTH                    1  /*              */
#define WM8983_INVROUT2                         0x0010  /*          */
#define WM8983_INVROUT2_MASK                    0x0010  /*          */
#define WM8983_INVROUT2_SHIFT                        4  /*          */
#define WM8983_INVROUT2_WIDTH                        1  /*          */
#define WM8983_BEEPVOL_MASK                     0x000E  /*                 */
#define WM8983_BEEPVOL_SHIFT                         1  /*                 */
#define WM8983_BEEPVOL_WIDTH                         3  /*                 */
#define WM8983_BEEPEN                           0x0001  /*        */
#define WM8983_BEEPEN_MASK                      0x0001  /*        */
#define WM8983_BEEPEN_SHIFT                          0  /*        */
#define WM8983_BEEPEN_WIDTH                          1  /*        */

/*
                          
 */
#define WM8983_MBVSEL                           0x0100  /*        */
#define WM8983_MBVSEL_MASK                      0x0100  /*        */
#define WM8983_MBVSEL_SHIFT                          8  /*        */
#define WM8983_MBVSEL_WIDTH                          1  /*        */
#define WM8983_R2_2INPPGA                       0x0040  /*            */
#define WM8983_R2_2INPPGA_MASK                  0x0040  /*            */
#define WM8983_R2_2INPPGA_SHIFT                      6  /*            */
#define WM8983_R2_2INPPGA_WIDTH                      1  /*            */
#define WM8983_RIN2INPPGA                       0x0020  /*            */
#define WM8983_RIN2INPPGA_MASK                  0x0020  /*            */
#define WM8983_RIN2INPPGA_SHIFT                      5  /*            */
#define WM8983_RIN2INPPGA_WIDTH                      1  /*            */
#define WM8983_RIP2INPPGA                       0x0010  /*            */
#define WM8983_RIP2INPPGA_MASK                  0x0010  /*            */
#define WM8983_RIP2INPPGA_SHIFT                      4  /*            */
#define WM8983_RIP2INPPGA_WIDTH                      1  /*            */
#define WM8983_L2_2INPPGA                       0x0004  /*            */
#define WM8983_L2_2INPPGA_MASK                  0x0004  /*            */
#define WM8983_L2_2INPPGA_SHIFT                      2  /*            */
#define WM8983_L2_2INPPGA_WIDTH                      1  /*            */
#define WM8983_LIN2INPPGA                       0x0002  /*            */
#define WM8983_LIN2INPPGA_MASK                  0x0002  /*            */
#define WM8983_LIN2INPPGA_SHIFT                      1  /*            */
#define WM8983_LIN2INPPGA_WIDTH                      1  /*            */
#define WM8983_LIP2INPPGA                       0x0001  /*            */
#define WM8983_LIP2INPPGA_MASK                  0x0001  /*            */
#define WM8983_LIP2INPPGA_SHIFT                      0  /*            */
#define WM8983_LIP2INPPGA_WIDTH                      1  /*            */

/*
                                      
 */
#define WM8983_INPGAVU                          0x0100  /*         */
#define WM8983_INPGAVU_MASK                     0x0100  /*         */
#define WM8983_INPGAVU_SHIFT                         8  /*         */
#define WM8983_INPGAVU_WIDTH                         1  /*         */
#define WM8983_INPPGAZCL                        0x0080  /*           */
#define WM8983_INPPGAZCL_MASK                   0x0080  /*           */
#define WM8983_INPPGAZCL_SHIFT                       7  /*           */
#define WM8983_INPPGAZCL_WIDTH                       1  /*           */
#define WM8983_INPPGAMUTEL                      0x0040  /*             */
#define WM8983_INPPGAMUTEL_MASK                 0x0040  /*             */
#define WM8983_INPPGAMUTEL_SHIFT                     6  /*             */
#define WM8983_INPPGAMUTEL_WIDTH                     1  /*             */
#define WM8983_INPPGAVOLL_MASK                  0x003F  /*                    */
#define WM8983_INPPGAVOLL_SHIFT                      0  /*                    */
#define WM8983_INPPGAVOLL_WIDTH                      6  /*                    */

/*
                                       
 */
#define WM8983_INPGAVU                          0x0100  /*         */
#define WM8983_INPGAVU_MASK                     0x0100  /*         */
#define WM8983_INPGAVU_SHIFT                         8  /*         */
#define WM8983_INPGAVU_WIDTH                         1  /*         */
#define WM8983_INPPGAZCR                        0x0080  /*           */
#define WM8983_INPPGAZCR_MASK                   0x0080  /*           */
#define WM8983_INPPGAZCR_SHIFT                       7  /*           */
#define WM8983_INPPGAZCR_WIDTH                       1  /*           */
#define WM8983_INPPGAMUTER                      0x0040  /*             */
#define WM8983_INPPGAMUTER_MASK                 0x0040  /*             */
#define WM8983_INPPGAMUTER_SHIFT                     6  /*             */
#define WM8983_INPPGAMUTER_WIDTH                     1  /*             */
#define WM8983_INPPGAVOLR_MASK                  0x003F  /*                    */
#define WM8983_INPPGAVOLR_SHIFT                      0  /*                    */
#define WM8983_INPPGAVOLR_WIDTH                      6  /*                    */

/*
                                   
 */
#define WM8983_PGABOOSTL                        0x0100  /*           */
#define WM8983_PGABOOSTL_MASK                   0x0100  /*           */
#define WM8983_PGABOOSTL_SHIFT                       8  /*           */
#define WM8983_PGABOOSTL_WIDTH                       1  /*           */
#define WM8983_L2_2BOOSTVOL_MASK                0x0070  /*                      */
#define WM8983_L2_2BOOSTVOL_SHIFT                    4  /*                      */
#define WM8983_L2_2BOOSTVOL_WIDTH                    3  /*                      */
#define WM8983_AUXL2BOOSTVOL_MASK               0x0007  /*                       */
#define WM8983_AUXL2BOOSTVOL_SHIFT                   0  /*                       */
#define WM8983_AUXL2BOOSTVOL_WIDTH                   3  /*                       */

/*
                                    
 */
#define WM8983_PGABOOSTR                        0x0100  /*           */
#define WM8983_PGABOOSTR_MASK                   0x0100  /*           */
#define WM8983_PGABOOSTR_SHIFT                       8  /*           */
#define WM8983_PGABOOSTR_WIDTH                       1  /*           */
#define WM8983_R2_2BOOSTVOL_MASK                0x0070  /*                      */
#define WM8983_R2_2BOOSTVOL_SHIFT                    4  /*                      */
#define WM8983_R2_2BOOSTVOL_WIDTH                    3  /*                      */
#define WM8983_AUXR2BOOSTVOL_MASK               0x0007  /*                       */
#define WM8983_AUXR2BOOSTVOL_SHIFT                   0  /*                       */
#define WM8983_AUXR2BOOSTVOL_WIDTH                   3  /*                       */

/*
                           
 */
#define WM8983_DACL2RMIX                        0x0040  /*           */
#define WM8983_DACL2RMIX_MASK                   0x0040  /*           */
#define WM8983_DACL2RMIX_SHIFT                       6  /*           */
#define WM8983_DACL2RMIX_WIDTH                       1  /*           */
#define WM8983_DACR2LMIX                        0x0020  /*           */
#define WM8983_DACR2LMIX_MASK                   0x0020  /*           */
#define WM8983_DACR2LMIX_SHIFT                       5  /*           */
#define WM8983_DACR2LMIX_WIDTH                       1  /*           */
#define WM8983_OUT4BOOST                        0x0010  /*           */
#define WM8983_OUT4BOOST_MASK                   0x0010  /*           */
#define WM8983_OUT4BOOST_SHIFT                       4  /*           */
#define WM8983_OUT4BOOST_WIDTH                       1  /*           */
#define WM8983_OUT3BOOST                        0x0008  /*           */
#define WM8983_OUT3BOOST_MASK                   0x0008  /*           */
#define WM8983_OUT3BOOST_SHIFT                       3  /*           */
#define WM8983_OUT3BOOST_WIDTH                       1  /*           */
#define WM8983_SPKBOOST                         0x0004  /*          */
#define WM8983_SPKBOOST_MASK                    0x0004  /*          */
#define WM8983_SPKBOOST_SHIFT                        2  /*          */
#define WM8983_SPKBOOST_WIDTH                        1  /*          */
#define WM8983_TSDEN                            0x0002  /*       */
#define WM8983_TSDEN_MASK                       0x0002  /*       */
#define WM8983_TSDEN_SHIFT                           1  /*       */
#define WM8983_TSDEN_WIDTH                           1  /*       */
#define WM8983_VROI                             0x0001  /*      */
#define WM8983_VROI_MASK                        0x0001  /*      */
#define WM8983_VROI_SHIFT                            0  /*      */
#define WM8983_VROI_WIDTH                            1  /*      */

/*
                               
 */
#define WM8983_AUXLMIXVOL_MASK                  0x01C0  /*                    */
#define WM8983_AUXLMIXVOL_SHIFT                      6  /*                    */
#define WM8983_AUXLMIXVOL_WIDTH                      3  /*                    */
#define WM8983_AUXL2LMIX                        0x0020  /*           */
#define WM8983_AUXL2LMIX_MASK                   0x0020  /*           */
#define WM8983_AUXL2LMIX_SHIFT                       5  /*           */
#define WM8983_AUXL2LMIX_WIDTH                       1  /*           */
#define WM8983_BYPLMIXVOL_MASK                  0x001C  /*                    */
#define WM8983_BYPLMIXVOL_SHIFT                      2  /*                    */
#define WM8983_BYPLMIXVOL_WIDTH                      3  /*                    */
#define WM8983_BYPL2LMIX                        0x0002  /*           */
#define WM8983_BYPL2LMIX_MASK                   0x0002  /*           */
#define WM8983_BYPL2LMIX_SHIFT                       1  /*           */
#define WM8983_BYPL2LMIX_WIDTH                       1  /*           */
#define WM8983_DACL2LMIX                        0x0001  /*           */
#define WM8983_DACL2LMIX_MASK                   0x0001  /*           */
#define WM8983_DACL2LMIX_SHIFT                       0  /*           */
#define WM8983_DACL2LMIX_WIDTH                       1  /*           */

/*
                                
 */
#define WM8983_AUXRMIXVOL_MASK                  0x01C0  /*                    */
#define WM8983_AUXRMIXVOL_SHIFT                      6  /*                    */
#define WM8983_AUXRMIXVOL_WIDTH                      3  /*                    */
#define WM8983_AUXR2RMIX                        0x0020  /*           */
#define WM8983_AUXR2RMIX_MASK                   0x0020  /*           */
#define WM8983_AUXR2RMIX_SHIFT                       5  /*           */
#define WM8983_AUXR2RMIX_WIDTH                       1  /*           */
#define WM8983_BYPRMIXVOL_MASK                  0x001C  /*                    */
#define WM8983_BYPRMIXVOL_SHIFT                      2  /*                    */
#define WM8983_BYPRMIXVOL_WIDTH                      3  /*                    */
#define WM8983_BYPR2RMIX                        0x0002  /*           */
#define WM8983_BYPR2RMIX_MASK                   0x0002  /*           */
#define WM8983_BYPR2RMIX_SHIFT                       1  /*           */
#define WM8983_BYPR2RMIX_WIDTH                       1  /*           */
#define WM8983_DACR2RMIX                        0x0001  /*           */
#define WM8983_DACR2RMIX_MASK                   0x0001  /*           */
#define WM8983_DACR2RMIX_SHIFT                       0  /*           */
#define WM8983_DACR2RMIX_WIDTH                       1  /*           */

/*
                                      
 */
#define WM8983_OUT1VU                           0x0100  /*        */
#define WM8983_OUT1VU_MASK                      0x0100  /*        */
#define WM8983_OUT1VU_SHIFT                          8  /*        */
#define WM8983_OUT1VU_WIDTH                          1  /*        */
#define WM8983_LOUT1ZC                          0x0080  /*         */
#define WM8983_LOUT1ZC_MASK                     0x0080  /*         */
#define WM8983_LOUT1ZC_SHIFT                         7  /*         */
#define WM8983_LOUT1ZC_WIDTH                         1  /*         */
#define WM8983_LOUT1MUTE                        0x0040  /*           */
#define WM8983_LOUT1MUTE_MASK                   0x0040  /*           */
#define WM8983_LOUT1MUTE_SHIFT                       6  /*           */
#define WM8983_LOUT1MUTE_WIDTH                       1  /*           */
#define WM8983_LOUT1VOL_MASK                    0x003F  /*                  */
#define WM8983_LOUT1VOL_SHIFT                        0  /*                  */
#define WM8983_LOUT1VOL_WIDTH                        6  /*                  */

/*
                                      
 */
#define WM8983_OUT1VU                           0x0100  /*        */
#define WM8983_OUT1VU_MASK                      0x0100  /*        */
#define WM8983_OUT1VU_SHIFT                          8  /*        */
#define WM8983_OUT1VU_WIDTH                          1  /*        */
#define WM8983_ROUT1ZC                          0x0080  /*         */
#define WM8983_ROUT1ZC_MASK                     0x0080  /*         */
#define WM8983_ROUT1ZC_SHIFT                         7  /*         */
#define WM8983_ROUT1ZC_WIDTH                         1  /*         */
#define WM8983_ROUT1MUTE                        0x0040  /*           */
#define WM8983_ROUT1MUTE_MASK                   0x0040  /*           */
#define WM8983_ROUT1MUTE_SHIFT                       6  /*           */
#define WM8983_ROUT1MUTE_WIDTH                       1  /*           */
#define WM8983_ROUT1VOL_MASK                    0x003F  /*                  */
#define WM8983_ROUT1VOL_SHIFT                        0  /*                  */
#define WM8983_ROUT1VOL_WIDTH                        6  /*                  */

/*
                                       
 */
#define WM8983_OUT2VU                           0x0100  /*        */
#define WM8983_OUT2VU_MASK                      0x0100  /*        */
#define WM8983_OUT2VU_SHIFT                          8  /*        */
#define WM8983_OUT2VU_WIDTH                          1  /*        */
#define WM8983_LOUT2ZC                          0x0080  /*         */
#define WM8983_LOUT2ZC_MASK                     0x0080  /*         */
#define WM8983_LOUT2ZC_SHIFT                         7  /*         */
#define WM8983_LOUT2ZC_WIDTH                         1  /*         */
#define WM8983_LOUT2MUTE                        0x0040  /*           */
#define WM8983_LOUT2MUTE_MASK                   0x0040  /*           */
#define WM8983_LOUT2MUTE_SHIFT                       6  /*           */
#define WM8983_LOUT2MUTE_WIDTH                       1  /*           */
#define WM8983_LOUT2VOL_MASK                    0x003F  /*                  */
#define WM8983_LOUT2VOL_SHIFT                        0  /*                  */
#define WM8983_LOUT2VOL_WIDTH                        6  /*                  */

/*
                                       
 */
#define WM8983_OUT2VU                           0x0100  /*        */
#define WM8983_OUT2VU_MASK                      0x0100  /*        */
#define WM8983_OUT2VU_SHIFT                          8  /*        */
#define WM8983_OUT2VU_WIDTH                          1  /*        */
#define WM8983_ROUT2ZC                          0x0080  /*         */
#define WM8983_ROUT2ZC_MASK                     0x0080  /*         */
#define WM8983_ROUT2ZC_SHIFT                         7  /*         */
#define WM8983_ROUT2ZC_WIDTH                         1  /*         */
#define WM8983_ROUT2MUTE                        0x0040  /*           */
#define WM8983_ROUT2MUTE_MASK                   0x0040  /*           */
#define WM8983_ROUT2MUTE_SHIFT                       6  /*           */
#define WM8983_ROUT2MUTE_WIDTH                       1  /*           */
#define WM8983_ROUT2VOL_MASK                    0x003F  /*                  */
#define WM8983_ROUT2VOL_SHIFT                        0  /*                  */
#define WM8983_ROUT2VOL_WIDTH                        6  /*                  */

/*
                               
 */
#define WM8983_OUT3MUTE                         0x0040  /*          */
#define WM8983_OUT3MUTE_MASK                    0x0040  /*          */
#define WM8983_OUT3MUTE_SHIFT                        6  /*          */
#define WM8983_OUT3MUTE_WIDTH                        1  /*          */
#define WM8983_OUT4_2OUT3                       0x0008  /*            */
#define WM8983_OUT4_2OUT3_MASK                  0x0008  /*            */
#define WM8983_OUT4_2OUT3_SHIFT                      3  /*            */
#define WM8983_OUT4_2OUT3_WIDTH                      1  /*            */
#define WM8983_BYPL2OUT3                        0x0004  /*           */
#define WM8983_BYPL2OUT3_MASK                   0x0004  /*           */
#define WM8983_BYPL2OUT3_SHIFT                       2  /*           */
#define WM8983_BYPL2OUT3_WIDTH                       1  /*           */
#define WM8983_LMIX2OUT3                        0x0002  /*           */
#define WM8983_LMIX2OUT3_MASK                   0x0002  /*           */
#define WM8983_LMIX2OUT3_SHIFT                       1  /*           */
#define WM8983_LMIX2OUT3_WIDTH                       1  /*           */
#define WM8983_LDAC2OUT3                        0x0001  /*           */
#define WM8983_LDAC2OUT3_MASK                   0x0001  /*           */
#define WM8983_LDAC2OUT3_SHIFT                       0  /*           */
#define WM8983_LDAC2OUT3_WIDTH                       1  /*           */

/*
                                    
 */
#define WM8983_OUT3_2OUT4                       0x0080  /*            */
#define WM8983_OUT3_2OUT4_MASK                  0x0080  /*            */
#define WM8983_OUT3_2OUT4_SHIFT                      7  /*            */
#define WM8983_OUT3_2OUT4_WIDTH                      1  /*            */
#define WM8983_OUT4MUTE                         0x0040  /*          */
#define WM8983_OUT4MUTE_MASK                    0x0040  /*          */
#define WM8983_OUT4MUTE_SHIFT                        6  /*          */
#define WM8983_OUT4MUTE_WIDTH                        1  /*          */
#define WM8983_OUT4ATTN                         0x0020  /*          */
#define WM8983_OUT4ATTN_MASK                    0x0020  /*          */
#define WM8983_OUT4ATTN_SHIFT                        5  /*          */
#define WM8983_OUT4ATTN_WIDTH                        1  /*          */
#define WM8983_LMIX2OUT4                        0x0010  /*           */
#define WM8983_LMIX2OUT4_MASK                   0x0010  /*           */
#define WM8983_LMIX2OUT4_SHIFT                       4  /*           */
#define WM8983_LMIX2OUT4_WIDTH                       1  /*           */
#define WM8983_LDAC2OUT4                        0x0008  /*           */
#define WM8983_LDAC2OUT4_MASK                   0x0008  /*           */
#define WM8983_LDAC2OUT4_SHIFT                       3  /*           */
#define WM8983_LDAC2OUT4_WIDTH                       1  /*           */
#define WM8983_BYPR2OUT4                        0x0004  /*           */
#define WM8983_BYPR2OUT4_MASK                   0x0004  /*           */
#define WM8983_BYPR2OUT4_SHIFT                       2  /*           */
#define WM8983_BYPR2OUT4_WIDTH                       1  /*           */
#define WM8983_RMIX2OUT4                        0x0002  /*           */
#define WM8983_RMIX2OUT4_MASK                   0x0002  /*           */
#define WM8983_RMIX2OUT4_SHIFT                       1  /*           */
#define WM8983_RMIX2OUT4_WIDTH                       1  /*           */
#define WM8983_RDAC2OUT4                        0x0001  /*           */
#define WM8983_RDAC2OUT4_MASK                   0x0001  /*           */
#define WM8983_RDAC2OUT4_SHIFT                       0  /*           */
#define WM8983_RDAC2OUT4_WIDTH                       1  /*           */

/*
                         
 */
#define WM8983_BIASCUT                          0x0100  /*         */
#define WM8983_BIASCUT_MASK                     0x0100  /*         */
#define WM8983_BIASCUT_SHIFT                         8  /*         */
#define WM8983_BIASCUT_WIDTH                         1  /*         */
#define WM8983_HALFIPBIAS                       0x0080  /*            */
#define WM8983_HALFIPBIAS_MASK                  0x0080  /*            */
#define WM8983_HALFIPBIAS_SHIFT                      7  /*            */
#define WM8983_HALFIPBIAS_WIDTH                      1  /*            */
#define WM8983_VBBIASTST_MASK                   0x0060  /*                   */
#define WM8983_VBBIASTST_SHIFT                       5  /*                   */
#define WM8983_VBBIASTST_WIDTH                       2  /*                   */
#define WM8983_BUFBIAS_MASK                     0x0018  /*                 */
#define WM8983_BUFBIAS_SHIFT                         3  /*                 */
#define WM8983_BUFBIAS_WIDTH                         2  /*                 */
#define WM8983_ADCBIAS_MASK                     0x0006  /*                 */
#define WM8983_ADCBIAS_SHIFT                         1  /*                 */
#define WM8983_ADCBIAS_WIDTH                         2  /*                 */
#define WM8983_HALFOPBIAS                       0x0001  /*            */
#define WM8983_HALFOPBIAS_MASK                  0x0001  /*            */
#define WM8983_HALFOPBIAS_SHIFT                      0  /*            */
#define WM8983_HALFOPBIAS_WIDTH                      1  /*            */

enum clk_src {
	WM8983_CLKSRC_MCLK,
	WM8983_CLKSRC_PLL
};

#endif /*           */
