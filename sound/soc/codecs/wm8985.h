/*
 * wm8985.h  --  WM8985 ASoC driver
 *
 * Copyright 2010 Wolfson Microelectronics plc
 *
 * Author: Dimitris Papastamos <dp@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WM8985_H
#define _WM8985_H

#define WM8985_SOFTWARE_RESET                   0x00
#define WM8985_POWER_MANAGEMENT_1               0x01
#define WM8985_POWER_MANAGEMENT_2               0x02
#define WM8985_POWER_MANAGEMENT_3               0x03
#define WM8985_AUDIO_INTERFACE                  0x04
#define WM8985_COMPANDING_CONTROL               0x05
#define WM8985_CLOCK_GEN_CONTROL                0x06
#define WM8985_ADDITIONAL_CONTROL               0x07
#define WM8985_GPIO_CONTROL                     0x08
#define WM8985_JACK_DETECT_CONTROL_1            0x09
#define WM8985_DAC_CONTROL                      0x0A
#define WM8985_LEFT_DAC_DIGITAL_VOL             0x0B
#define WM8985_RIGHT_DAC_DIGITAL_VOL            0x0C
#define WM8985_JACK_DETECT_CONTROL_2            0x0D
#define WM8985_ADC_CONTROL                      0x0E
#define WM8985_LEFT_ADC_DIGITAL_VOL             0x0F
#define WM8985_RIGHT_ADC_DIGITAL_VOL            0x10
#define WM8985_EQ1_LOW_SHELF                    0x12
#define WM8985_EQ2_PEAK_1                       0x13
#define WM8985_EQ3_PEAK_2                       0x14
#define WM8985_EQ4_PEAK_3                       0x15
#define WM8985_EQ5_HIGH_SHELF                   0x16
#define WM8985_DAC_LIMITER_1                    0x18
#define WM8985_DAC_LIMITER_2                    0x19
#define WM8985_NOTCH_FILTER_1                   0x1B
#define WM8985_NOTCH_FILTER_2                   0x1C
#define WM8985_NOTCH_FILTER_3                   0x1D
#define WM8985_NOTCH_FILTER_4                   0x1E
#define WM8985_ALC_CONTROL_1                    0x20
#define WM8985_ALC_CONTROL_2                    0x21
#define WM8985_ALC_CONTROL_3                    0x22
#define WM8985_NOISE_GATE                       0x23
#define WM8985_PLL_N                            0x24
#define WM8985_PLL_K_1                          0x25
#define WM8985_PLL_K_2                          0x26
#define WM8985_PLL_K_3                          0x27
#define WM8985_3D_CONTROL                       0x29
#define WM8985_OUT4_TO_ADC                      0x2A
#define WM8985_BEEP_CONTROL                     0x2B
#define WM8985_INPUT_CTRL                       0x2C
#define WM8985_LEFT_INP_PGA_GAIN_CTRL           0x2D
#define WM8985_RIGHT_INP_PGA_GAIN_CTRL          0x2E
#define WM8985_LEFT_ADC_BOOST_CTRL              0x2F
#define WM8985_RIGHT_ADC_BOOST_CTRL             0x30
#define WM8985_OUTPUT_CTRL0                     0x31
#define WM8985_LEFT_MIXER_CTRL                  0x32
#define WM8985_RIGHT_MIXER_CTRL                 0x33
#define WM8985_LOUT1_HP_VOLUME_CTRL             0x34
#define WM8985_ROUT1_HP_VOLUME_CTRL             0x35
#define WM8985_LOUT2_SPK_VOLUME_CTRL            0x36
#define WM8985_ROUT2_SPK_VOLUME_CTRL            0x37
#define WM8985_OUT3_MIXER_CTRL                  0x38
#define WM8985_OUT4_MONO_MIX_CTRL               0x39
#define WM8985_OUTPUT_CTRL1                     0x3C
#define WM8985_BIAS_CTRL                        0x3D

#define WM8985_REGISTER_COUNT                   59
#define WM8985_MAX_REGISTER                     0x3F

/*
                     
 */

/*
                             
 */
#define WM8985_SOFTWARE_RESET_MASK              0x01FF  /*                        */
#define WM8985_SOFTWARE_RESET_SHIFT                  0  /*                        */
#define WM8985_SOFTWARE_RESET_WIDTH                  9  /*                        */

/*
                                 
 */
#define WM8985_OUT4MIXEN                        0x0080  /*           */
#define WM8985_OUT4MIXEN_MASK                   0x0080  /*           */
#define WM8985_OUT4MIXEN_SHIFT                       7  /*           */
#define WM8985_OUT4MIXEN_WIDTH                       1  /*           */
#define WM8985_OUT3MIXEN                        0x0040  /*           */
#define WM8985_OUT3MIXEN_MASK                   0x0040  /*           */
#define WM8985_OUT3MIXEN_SHIFT                       6  /*           */
#define WM8985_OUT3MIXEN_WIDTH                       1  /*           */
#define WM8985_PLLEN                            0x0020  /*       */
#define WM8985_PLLEN_MASK                       0x0020  /*       */
#define WM8985_PLLEN_SHIFT                           5  /*       */
#define WM8985_PLLEN_WIDTH                           1  /*       */
#define WM8985_MICBEN                           0x0010  /*        */
#define WM8985_MICBEN_MASK                      0x0010  /*        */
#define WM8985_MICBEN_SHIFT                          4  /*        */
#define WM8985_MICBEN_WIDTH                          1  /*        */
#define WM8985_BIASEN                           0x0008  /*        */
#define WM8985_BIASEN_MASK                      0x0008  /*        */
#define WM8985_BIASEN_SHIFT                          3  /*        */
#define WM8985_BIASEN_WIDTH                          1  /*        */
#define WM8985_BUFIOEN                          0x0004  /*         */
#define WM8985_BUFIOEN_MASK                     0x0004  /*         */
#define WM8985_BUFIOEN_SHIFT                         2  /*         */
#define WM8985_BUFIOEN_WIDTH                         1  /*         */
#define WM8985_VMIDSEL                          0x0003  /*         */
#define WM8985_VMIDSEL_MASK                     0x0003  /*                 */
#define WM8985_VMIDSEL_SHIFT                         0  /*                 */
#define WM8985_VMIDSEL_WIDTH                         2  /*                 */

/*
                                 
 */
#define WM8985_ROUT1EN                          0x0100  /*         */
#define WM8985_ROUT1EN_MASK                     0x0100  /*         */
#define WM8985_ROUT1EN_SHIFT                         8  /*         */
#define WM8985_ROUT1EN_WIDTH                         1  /*         */
#define WM8985_LOUT1EN                          0x0080  /*         */
#define WM8985_LOUT1EN_MASK                     0x0080  /*         */
#define WM8985_LOUT1EN_SHIFT                         7  /*         */
#define WM8985_LOUT1EN_WIDTH                         1  /*         */
#define WM8985_SLEEP                            0x0040  /*       */
#define WM8985_SLEEP_MASK                       0x0040  /*       */
#define WM8985_SLEEP_SHIFT                           6  /*       */
#define WM8985_SLEEP_WIDTH                           1  /*       */
#define WM8985_BOOSTENR                         0x0020  /*          */
#define WM8985_BOOSTENR_MASK                    0x0020  /*          */
#define WM8985_BOOSTENR_SHIFT                        5  /*          */
#define WM8985_BOOSTENR_WIDTH                        1  /*          */
#define WM8985_BOOSTENL                         0x0010  /*          */
#define WM8985_BOOSTENL_MASK                    0x0010  /*          */
#define WM8985_BOOSTENL_SHIFT                        4  /*          */
#define WM8985_BOOSTENL_WIDTH                        1  /*          */
#define WM8985_INPGAENR                         0x0008  /*          */
#define WM8985_INPGAENR_MASK                    0x0008  /*          */
#define WM8985_INPGAENR_SHIFT                        3  /*          */
#define WM8985_INPGAENR_WIDTH                        1  /*          */
#define WM8985_INPPGAENL                        0x0004  /*           */
#define WM8985_INPPGAENL_MASK                   0x0004  /*           */
#define WM8985_INPPGAENL_SHIFT                       2  /*           */
#define WM8985_INPPGAENL_WIDTH                       1  /*           */
#define WM8985_ADCENR                           0x0002  /*        */
#define WM8985_ADCENR_MASK                      0x0002  /*        */
#define WM8985_ADCENR_SHIFT                          1  /*        */
#define WM8985_ADCENR_WIDTH                          1  /*        */
#define WM8985_ADCENL                           0x0001  /*        */
#define WM8985_ADCENL_MASK                      0x0001  /*        */
#define WM8985_ADCENL_SHIFT                          0  /*        */
#define WM8985_ADCENL_WIDTH                          1  /*        */

/*
                                 
 */
#define WM8985_OUT4EN                           0x0100  /*        */
#define WM8985_OUT4EN_MASK                      0x0100  /*        */
#define WM8985_OUT4EN_SHIFT                          8  /*        */
#define WM8985_OUT4EN_WIDTH                          1  /*        */
#define WM8985_OUT3EN                           0x0080  /*        */
#define WM8985_OUT3EN_MASK                      0x0080  /*        */
#define WM8985_OUT3EN_SHIFT                          7  /*        */
#define WM8985_OUT3EN_WIDTH                          1  /*        */
#define WM8985_ROUT2EN                          0x0040  /*         */
#define WM8985_ROUT2EN_MASK                     0x0040  /*         */
#define WM8985_ROUT2EN_SHIFT                         6  /*         */
#define WM8985_ROUT2EN_WIDTH                         1  /*         */
#define WM8985_LOUT2EN                          0x0020  /*         */
#define WM8985_LOUT2EN_MASK                     0x0020  /*         */
#define WM8985_LOUT2EN_SHIFT                         5  /*         */
#define WM8985_LOUT2EN_WIDTH                         1  /*         */
#define WM8985_RMIXEN                           0x0008  /*        */
#define WM8985_RMIXEN_MASK                      0x0008  /*        */
#define WM8985_RMIXEN_SHIFT                          3  /*        */
#define WM8985_RMIXEN_WIDTH                          1  /*        */
#define WM8985_LMIXEN                           0x0004  /*        */
#define WM8985_LMIXEN_MASK                      0x0004  /*        */
#define WM8985_LMIXEN_SHIFT                          2  /*        */
#define WM8985_LMIXEN_WIDTH                          1  /*        */
#define WM8985_DACENR                           0x0002  /*        */
#define WM8985_DACENR_MASK                      0x0002  /*        */
#define WM8985_DACENR_SHIFT                          1  /*        */
#define WM8985_DACENR_WIDTH                          1  /*        */
#define WM8985_DACENL                           0x0001  /*        */
#define WM8985_DACENL_MASK                      0x0001  /*        */
#define WM8985_DACENL_SHIFT                          0  /*        */
#define WM8985_DACENL_WIDTH                          1  /*        */

/*
                              
 */
#define WM8985_BCP                              0x0100  /*     */
#define WM8985_BCP_MASK                         0x0100  /*     */
#define WM8985_BCP_SHIFT                             8  /*     */
#define WM8985_BCP_WIDTH                             1  /*     */
#define WM8985_LRP                              0x0080  /*     */
#define WM8985_LRP_MASK                         0x0080  /*     */
#define WM8985_LRP_SHIFT                             7  /*     */
#define WM8985_LRP_WIDTH                             1  /*     */
#define WM8985_WL_MASK                          0x0060  /*            */
#define WM8985_WL_SHIFT                              5  /*            */
#define WM8985_WL_WIDTH                              2  /*            */
#define WM8985_FMT_MASK                         0x0018  /*             */
#define WM8985_FMT_SHIFT                             3  /*             */
#define WM8985_FMT_WIDTH                             2  /*             */
#define WM8985_DLRSWAP                          0x0004  /*         */
#define WM8985_DLRSWAP_MASK                     0x0004  /*         */
#define WM8985_DLRSWAP_SHIFT                         2  /*         */
#define WM8985_DLRSWAP_WIDTH                         1  /*         */
#define WM8985_ALRSWAP                          0x0002  /*         */
#define WM8985_ALRSWAP_MASK                     0x0002  /*         */
#define WM8985_ALRSWAP_SHIFT                         1  /*         */
#define WM8985_ALRSWAP_WIDTH                         1  /*         */
#define WM8985_MONO                             0x0001  /*      */
#define WM8985_MONO_MASK                        0x0001  /*      */
#define WM8985_MONO_SHIFT                            0  /*      */
#define WM8985_MONO_WIDTH                            1  /*      */

/*
                                 
 */
#define WM8985_WL8                              0x0020  /*     */
#define WM8985_WL8_MASK                         0x0020  /*     */
#define WM8985_WL8_SHIFT                             5  /*     */
#define WM8985_WL8_WIDTH                             1  /*     */
#define WM8985_DAC_COMP_MASK                    0x0018  /*                  */
#define WM8985_DAC_COMP_SHIFT                        3  /*                  */
#define WM8985_DAC_COMP_WIDTH                        2  /*                  */
#define WM8985_ADC_COMP_MASK                    0x0006  /*                  */
#define WM8985_ADC_COMP_SHIFT                        1  /*                  */
#define WM8985_ADC_COMP_WIDTH                        2  /*                  */
#define WM8985_LOOPBACK                         0x0001  /*          */
#define WM8985_LOOPBACK_MASK                    0x0001  /*          */
#define WM8985_LOOPBACK_SHIFT                        0  /*          */
#define WM8985_LOOPBACK_WIDTH                        1  /*          */

/*
                                
 */
#define WM8985_CLKSEL                           0x0100  /*        */
#define WM8985_CLKSEL_MASK                      0x0100  /*        */
#define WM8985_CLKSEL_SHIFT                          8  /*        */
#define WM8985_CLKSEL_WIDTH                          1  /*        */
#define WM8985_MCLKDIV_MASK                     0x00E0  /*                 */
#define WM8985_MCLKDIV_SHIFT                         5  /*                 */
#define WM8985_MCLKDIV_WIDTH                         3  /*                 */
#define WM8985_BCLKDIV_MASK                     0x001C  /*                 */
#define WM8985_BCLKDIV_SHIFT                         2  /*                 */
#define WM8985_BCLKDIV_WIDTH                         3  /*                 */
#define WM8985_MS                               0x0001  /*    */
#define WM8985_MS_MASK                          0x0001  /*    */
#define WM8985_MS_SHIFT                              0  /*    */
#define WM8985_MS_WIDTH                              1  /*    */

/*
                                 
 */
#define WM8985_M128ENB                          0x0100  /*         */
#define WM8985_M128ENB_MASK                     0x0100  /*         */
#define WM8985_M128ENB_SHIFT                         8  /*         */
#define WM8985_M128ENB_WIDTH                         1  /*         */
#define WM8985_DCLKDIV_MASK                     0x00F0  /*                 */
#define WM8985_DCLKDIV_SHIFT                         4  /*                 */
#define WM8985_DCLKDIV_WIDTH                         4  /*                 */
#define WM8985_SR_MASK                          0x000E  /*            */
#define WM8985_SR_SHIFT                              1  /*            */
#define WM8985_SR_WIDTH                              3  /*            */
#define WM8985_SLOWCLKEN                        0x0001  /*           */
#define WM8985_SLOWCLKEN_MASK                   0x0001  /*           */
#define WM8985_SLOWCLKEN_SHIFT                       0  /*           */
#define WM8985_SLOWCLKEN_WIDTH                       1  /*           */

/*
                           
 */
#define WM8985_GPIO1GP                          0x0100  /*         */
#define WM8985_GPIO1GP_MASK                     0x0100  /*         */
#define WM8985_GPIO1GP_SHIFT                         8  /*         */
#define WM8985_GPIO1GP_WIDTH                         1  /*         */
#define WM8985_GPIO1GPU                         0x0080  /*          */
#define WM8985_GPIO1GPU_MASK                    0x0080  /*          */
#define WM8985_GPIO1GPU_SHIFT                        7  /*          */
#define WM8985_GPIO1GPU_WIDTH                        1  /*          */
#define WM8985_GPIO1GPD                         0x0040  /*          */
#define WM8985_GPIO1GPD_MASK                    0x0040  /*          */
#define WM8985_GPIO1GPD_SHIFT                        6  /*          */
#define WM8985_GPIO1GPD_WIDTH                        1  /*          */
#define WM8985_GPIO1POL                         0x0008  /*          */
#define WM8985_GPIO1POL_MASK                    0x0008  /*          */
#define WM8985_GPIO1POL_SHIFT                        3  /*          */
#define WM8985_GPIO1POL_WIDTH                        1  /*          */
#define WM8985_GPIO1SEL_MASK                    0x0007  /*                  */
#define WM8985_GPIO1SEL_SHIFT                        0  /*                  */
#define WM8985_GPIO1SEL_WIDTH                        3  /*                  */

/*
                                    
 */
#define WM8985_JD_EN                            0x0040  /*       */
#define WM8985_JD_EN_MASK                       0x0040  /*       */
#define WM8985_JD_EN_SHIFT                           6  /*       */
#define WM8985_JD_EN_WIDTH                           1  /*       */
#define WM8985_JD_SEL_MASK                      0x0030  /*                */
#define WM8985_JD_SEL_SHIFT                          4  /*                */
#define WM8985_JD_SEL_WIDTH                          2  /*                */

/*
                           
 */
#define WM8985_SOFTMUTE                         0x0040  /*          */
#define WM8985_SOFTMUTE_MASK                    0x0040  /*          */
#define WM8985_SOFTMUTE_SHIFT                        6  /*          */
#define WM8985_SOFTMUTE_WIDTH                        1  /*          */
#define WM8985_DACOSR128                        0x0008  /*           */
#define WM8985_DACOSR128_MASK                   0x0008  /*           */
#define WM8985_DACOSR128_SHIFT                       3  /*           */
#define WM8985_DACOSR128_WIDTH                       1  /*           */
#define WM8985_AMUTE                            0x0004  /*       */
#define WM8985_AMUTE_MASK                       0x0004  /*       */
#define WM8985_AMUTE_SHIFT                           2  /*       */
#define WM8985_AMUTE_WIDTH                           1  /*       */
#define WM8985_DACPOLR                          0x0002  /*         */
#define WM8985_DACPOLR_MASK                     0x0002  /*         */
#define WM8985_DACPOLR_SHIFT                         1  /*         */
#define WM8985_DACPOLR_WIDTH                         1  /*         */
#define WM8985_DACPOLL                          0x0001  /*         */
#define WM8985_DACPOLL_MASK                     0x0001  /*         */
#define WM8985_DACPOLL_SHIFT                         0  /*         */
#define WM8985_DACPOLL_WIDTH                         1  /*         */

/*
                                    
 */
#define WM8985_DACVU                            0x0100  /*       */
#define WM8985_DACVU_MASK                       0x0100  /*       */
#define WM8985_DACVU_SHIFT                           8  /*       */
#define WM8985_DACVU_WIDTH                           1  /*       */
#define WM8985_DACVOLL_MASK                     0x00FF  /*                 */
#define WM8985_DACVOLL_SHIFT                         0  /*                 */
#define WM8985_DACVOLL_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8985_DACVU                            0x0100  /*       */
#define WM8985_DACVU_MASK                       0x0100  /*       */
#define WM8985_DACVU_SHIFT                           8  /*       */
#define WM8985_DACVU_WIDTH                           1  /*       */
#define WM8985_DACVOLR_MASK                     0x00FF  /*                 */
#define WM8985_DACVOLR_SHIFT                         0  /*                 */
#define WM8985_DACVOLR_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8985_JD_EN1_MASK                      0x00F0  /*                */
#define WM8985_JD_EN1_SHIFT                          4  /*                */
#define WM8985_JD_EN1_WIDTH                          4  /*                */
#define WM8985_JD_EN0_MASK                      0x000F  /*                */
#define WM8985_JD_EN0_SHIFT                          0  /*                */
#define WM8985_JD_EN0_WIDTH                          4  /*                */

/*
                           
 */
#define WM8985_HPFEN                            0x0100  /*       */
#define WM8985_HPFEN_MASK                       0x0100  /*       */
#define WM8985_HPFEN_SHIFT                           8  /*       */
#define WM8985_HPFEN_WIDTH                           1  /*       */
#define WM8985_HPFAPP                           0x0080  /*        */
#define WM8985_HPFAPP_MASK                      0x0080  /*        */
#define WM8985_HPFAPP_SHIFT                          7  /*        */
#define WM8985_HPFAPP_WIDTH                          1  /*        */
#define WM8985_HPFCUT_MASK                      0x0070  /*                */
#define WM8985_HPFCUT_SHIFT                          4  /*                */
#define WM8985_HPFCUT_WIDTH                          3  /*                */
#define WM8985_ADCOSR128                        0x0008  /*           */
#define WM8985_ADCOSR128_MASK                   0x0008  /*           */
#define WM8985_ADCOSR128_SHIFT                       3  /*           */
#define WM8985_ADCOSR128_WIDTH                       1  /*           */
#define WM8985_ADCRPOL                          0x0002  /*         */
#define WM8985_ADCRPOL_MASK                     0x0002  /*         */
#define WM8985_ADCRPOL_SHIFT                         1  /*         */
#define WM8985_ADCRPOL_WIDTH                         1  /*         */
#define WM8985_ADCLPOL                          0x0001  /*         */
#define WM8985_ADCLPOL_MASK                     0x0001  /*         */
#define WM8985_ADCLPOL_SHIFT                         0  /*         */
#define WM8985_ADCLPOL_WIDTH                         1  /*         */

/*
                                    
 */
#define WM8985_ADCVU                            0x0100  /*       */
#define WM8985_ADCVU_MASK                       0x0100  /*       */
#define WM8985_ADCVU_SHIFT                           8  /*       */
#define WM8985_ADCVU_WIDTH                           1  /*       */
#define WM8985_ADCVOLL_MASK                     0x00FF  /*                 */
#define WM8985_ADCVOLL_SHIFT                         0  /*                 */
#define WM8985_ADCVOLL_WIDTH                         8  /*                 */

/*
                                     
 */
#define WM8985_ADCVU                            0x0100  /*       */
#define WM8985_ADCVU_MASK                       0x0100  /*       */
#define WM8985_ADCVU_SHIFT                           8  /*       */
#define WM8985_ADCVU_WIDTH                           1  /*       */
#define WM8985_ADCVOLR_MASK                     0x00FF  /*                 */
#define WM8985_ADCVOLR_SHIFT                         0  /*                 */
#define WM8985_ADCVOLR_WIDTH                         8  /*                 */

/*
                               
 */
#define WM8985_EQ3DMODE                         0x0100  /*          */
#define WM8985_EQ3DMODE_MASK                    0x0100  /*          */
#define WM8985_EQ3DMODE_SHIFT                        8  /*          */
#define WM8985_EQ3DMODE_WIDTH                        1  /*          */
#define WM8985_EQ1C_MASK                        0x0060  /*              */
#define WM8985_EQ1C_SHIFT                            5  /*              */
#define WM8985_EQ1C_WIDTH                            2  /*              */
#define WM8985_EQ1G_MASK                        0x001F  /*              */
#define WM8985_EQ1G_SHIFT                            0  /*              */
#define WM8985_EQ1G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8985_EQ2BW                            0x0100  /*       */
#define WM8985_EQ2BW_MASK                       0x0100  /*       */
#define WM8985_EQ2BW_SHIFT                           8  /*       */
#define WM8985_EQ2BW_WIDTH                           1  /*       */
#define WM8985_EQ2C_MASK                        0x0060  /*              */
#define WM8985_EQ2C_SHIFT                            5  /*              */
#define WM8985_EQ2C_WIDTH                            2  /*              */
#define WM8985_EQ2G_MASK                        0x001F  /*              */
#define WM8985_EQ2G_SHIFT                            0  /*              */
#define WM8985_EQ2G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8985_EQ3BW                            0x0100  /*       */
#define WM8985_EQ3BW_MASK                       0x0100  /*       */
#define WM8985_EQ3BW_SHIFT                           8  /*       */
#define WM8985_EQ3BW_WIDTH                           1  /*       */
#define WM8985_EQ3C_MASK                        0x0060  /*              */
#define WM8985_EQ3C_SHIFT                            5  /*              */
#define WM8985_EQ3C_WIDTH                            2  /*              */
#define WM8985_EQ3G_MASK                        0x001F  /*              */
#define WM8985_EQ3G_SHIFT                            0  /*              */
#define WM8985_EQ3G_WIDTH                            5  /*              */

/*
                            
 */
#define WM8985_EQ4BW                            0x0100  /*       */
#define WM8985_EQ4BW_MASK                       0x0100  /*       */
#define WM8985_EQ4BW_SHIFT                           8  /*       */
#define WM8985_EQ4BW_WIDTH                           1  /*       */
#define WM8985_EQ4C_MASK                        0x0060  /*              */
#define WM8985_EQ4C_SHIFT                            5  /*              */
#define WM8985_EQ4C_WIDTH                            2  /*              */
#define WM8985_EQ4G_MASK                        0x001F  /*              */
#define WM8985_EQ4G_SHIFT                            0  /*              */
#define WM8985_EQ4G_WIDTH                            5  /*              */

/*
                                
 */
#define WM8985_EQ5C_MASK                        0x0060  /*              */
#define WM8985_EQ5C_SHIFT                            5  /*              */
#define WM8985_EQ5C_WIDTH                            2  /*              */
#define WM8985_EQ5G_MASK                        0x001F  /*              */
#define WM8985_EQ5G_SHIFT                            0  /*              */
#define WM8985_EQ5G_WIDTH                            5  /*              */

/*
                             
 */
#define WM8985_LIMEN                            0x0100  /*       */
#define WM8985_LIMEN_MASK                       0x0100  /*       */
#define WM8985_LIMEN_SHIFT                           8  /*       */
#define WM8985_LIMEN_WIDTH                           1  /*       */
#define WM8985_LIMDCY_MASK                      0x00F0  /*                */
#define WM8985_LIMDCY_SHIFT                          4  /*                */
#define WM8985_LIMDCY_WIDTH                          4  /*                */
#define WM8985_LIMATK_MASK                      0x000F  /*                */
#define WM8985_LIMATK_SHIFT                          0  /*                */
#define WM8985_LIMATK_WIDTH                          4  /*                */

/*
                             
 */
#define WM8985_LIMLVL_MASK                      0x0070  /*                */
#define WM8985_LIMLVL_SHIFT                          4  /*                */
#define WM8985_LIMLVL_WIDTH                          3  /*                */
#define WM8985_LIMBOOST_MASK                    0x000F  /*                  */
#define WM8985_LIMBOOST_SHIFT                        0  /*                  */
#define WM8985_LIMBOOST_WIDTH                        4  /*                  */

/*
                              
 */
#define WM8985_NFU                              0x0100  /*     */
#define WM8985_NFU_MASK                         0x0100  /*     */
#define WM8985_NFU_SHIFT                             8  /*     */
#define WM8985_NFU_WIDTH                             1  /*     */
#define WM8985_NFEN                             0x0080  /*      */
#define WM8985_NFEN_MASK                        0x0080  /*      */
#define WM8985_NFEN_SHIFT                            7  /*      */
#define WM8985_NFEN_WIDTH                            1  /*      */
#define WM8985_NFA0_13_7_MASK                   0x007F  /*                    */
#define WM8985_NFA0_13_7_SHIFT                       0  /*                    */
#define WM8985_NFA0_13_7_WIDTH                       7  /*                    */

/*
                              
 */
#define WM8985_NFU                              0x0100  /*     */
#define WM8985_NFU_MASK                         0x0100  /*     */
#define WM8985_NFU_SHIFT                             8  /*     */
#define WM8985_NFU_WIDTH                             1  /*     */
#define WM8985_NFA0_6_0_MASK                    0x007F  /*                   */
#define WM8985_NFA0_6_0_SHIFT                        0  /*                   */
#define WM8985_NFA0_6_0_WIDTH                        7  /*                   */

/*
                              
 */
#define WM8985_NFU                              0x0100  /*     */
#define WM8985_NFU_MASK                         0x0100  /*     */
#define WM8985_NFU_SHIFT                             8  /*     */
#define WM8985_NFU_WIDTH                             1  /*     */
#define WM8985_NFA1_13_7_MASK                   0x007F  /*                    */
#define WM8985_NFA1_13_7_SHIFT                       0  /*                    */
#define WM8985_NFA1_13_7_WIDTH                       7  /*                    */

/*
                              
 */
#define WM8985_NFU                              0x0100  /*     */
#define WM8985_NFU_MASK                         0x0100  /*     */
#define WM8985_NFU_SHIFT                             8  /*     */
#define WM8985_NFU_WIDTH                             1  /*     */
#define WM8985_NFA1_6_0_MASK                    0x007F  /*                   */
#define WM8985_NFA1_6_0_SHIFT                        0  /*                   */
#define WM8985_NFA1_6_0_WIDTH                        7  /*                   */

/*
                             
 */
#define WM8985_ALCSEL_MASK                      0x0180  /*                */
#define WM8985_ALCSEL_SHIFT                          7  /*                */
#define WM8985_ALCSEL_WIDTH                          2  /*                */
#define WM8985_ALCMAX_MASK                      0x0038  /*                */
#define WM8985_ALCMAX_SHIFT                          3  /*                */
#define WM8985_ALCMAX_WIDTH                          3  /*                */
#define WM8985_ALCMIN_MASK                      0x0007  /*                */
#define WM8985_ALCMIN_SHIFT                          0  /*                */
#define WM8985_ALCMIN_WIDTH                          3  /*                */

/*
                             
 */
#define WM8985_ALCHLD_MASK                      0x00F0  /*                */
#define WM8985_ALCHLD_SHIFT                          4  /*                */
#define WM8985_ALCHLD_WIDTH                          4  /*                */
#define WM8985_ALCLVL_MASK                      0x000F  /*                */
#define WM8985_ALCLVL_SHIFT                          0  /*                */
#define WM8985_ALCLVL_WIDTH                          4  /*                */

/*
                             
 */
#define WM8985_ALCMODE                          0x0100  /*         */
#define WM8985_ALCMODE_MASK                     0x0100  /*         */
#define WM8985_ALCMODE_SHIFT                         8  /*         */
#define WM8985_ALCMODE_WIDTH                         1  /*         */
#define WM8985_ALCDCY_MASK                      0x00F0  /*                */
#define WM8985_ALCDCY_SHIFT                          4  /*                */
#define WM8985_ALCDCY_WIDTH                          4  /*                */
#define WM8985_ALCATK_MASK                      0x000F  /*                */
#define WM8985_ALCATK_SHIFT                          0  /*                */
#define WM8985_ALCATK_WIDTH                          4  /*                */

/*
                          
 */
#define WM8985_NGEN                             0x0008  /*      */
#define WM8985_NGEN_MASK                        0x0008  /*      */
#define WM8985_NGEN_SHIFT                            3  /*      */
#define WM8985_NGEN_WIDTH                            1  /*      */
#define WM8985_NGTH_MASK                        0x0007  /*              */
#define WM8985_NGTH_SHIFT                            0  /*              */
#define WM8985_NGTH_WIDTH                            3  /*              */

/*
                     
 */
#define WM8985_PLL_PRESCALE                     0x0010  /*              */
#define WM8985_PLL_PRESCALE_MASK                0x0010  /*              */
#define WM8985_PLL_PRESCALE_SHIFT                    4  /*              */
#define WM8985_PLL_PRESCALE_WIDTH                    1  /*              */
#define WM8985_PLLN_MASK                        0x000F  /*              */
#define WM8985_PLLN_SHIFT                            0  /*              */
#define WM8985_PLLN_WIDTH                            4  /*              */

/*
                       
 */
#define WM8985_PLLK_23_18_MASK                  0x003F  /*                     */
#define WM8985_PLLK_23_18_SHIFT                      0  /*                     */
#define WM8985_PLLK_23_18_WIDTH                      6  /*                     */

/*
                       
 */
#define WM8985_PLLK_17_9_MASK                   0x01FF  /*                    */
#define WM8985_PLLK_17_9_SHIFT                       0  /*                    */
#define WM8985_PLLK_17_9_WIDTH                       9  /*                    */

/*
                       
 */
#define WM8985_PLLK_8_0_MASK                    0x01FF  /*                   */
#define WM8985_PLLK_8_0_SHIFT                        0  /*                   */
#define WM8985_PLLK_8_0_WIDTH                        9  /*                   */

/*
                          
 */
#define WM8985_DEPTH3D_MASK                     0x000F  /*                 */
#define WM8985_DEPTH3D_SHIFT                         0  /*                 */
#define WM8985_DEPTH3D_WIDTH                         4  /*                 */

/*
                           
 */
#define WM8985_OUT4_2ADCVOL_MASK                0x01C0  /*                      */
#define WM8985_OUT4_2ADCVOL_SHIFT                    6  /*                      */
#define WM8985_OUT4_2ADCVOL_WIDTH                    3  /*                      */
#define WM8985_OUT4_2LNR                        0x0020  /*           */
#define WM8985_OUT4_2LNR_MASK                   0x0020  /*           */
#define WM8985_OUT4_2LNR_SHIFT                       5  /*           */
#define WM8985_OUT4_2LNR_WIDTH                       1  /*           */
#define WM8985_POBCTRL                          0x0004  /*         */
#define WM8985_POBCTRL_MASK                     0x0004  /*         */
#define WM8985_POBCTRL_SHIFT                         2  /*         */
#define WM8985_POBCTRL_WIDTH                         1  /*         */
#define WM8985_DELEN                            0x0002  /*       */
#define WM8985_DELEN_MASK                       0x0002  /*       */
#define WM8985_DELEN_SHIFT                           1  /*       */
#define WM8985_DELEN_WIDTH                           1  /*       */
#define WM8985_OUT1DEL                          0x0001  /*         */
#define WM8985_OUT1DEL_MASK                     0x0001  /*         */
#define WM8985_OUT1DEL_SHIFT                         0  /*         */
#define WM8985_OUT1DEL_WIDTH                         1  /*         */

/*
                            
 */
#define WM8985_BYPL2RMIX                        0x0100  /*           */
#define WM8985_BYPL2RMIX_MASK                   0x0100  /*           */
#define WM8985_BYPL2RMIX_SHIFT                       8  /*           */
#define WM8985_BYPL2RMIX_WIDTH                       1  /*           */
#define WM8985_BYPR2LMIX                        0x0080  /*           */
#define WM8985_BYPR2LMIX_MASK                   0x0080  /*           */
#define WM8985_BYPR2LMIX_SHIFT                       7  /*           */
#define WM8985_BYPR2LMIX_WIDTH                       1  /*           */
#define WM8985_MUTERPGA2INV                     0x0020  /*              */
#define WM8985_MUTERPGA2INV_MASK                0x0020  /*              */
#define WM8985_MUTERPGA2INV_SHIFT                    5  /*              */
#define WM8985_MUTERPGA2INV_WIDTH                    1  /*              */
#define WM8985_INVROUT2                         0x0010  /*          */
#define WM8985_INVROUT2_MASK                    0x0010  /*          */
#define WM8985_INVROUT2_SHIFT                        4  /*          */
#define WM8985_INVROUT2_WIDTH                        1  /*          */
#define WM8985_BEEPVOL_MASK                     0x000E  /*                 */
#define WM8985_BEEPVOL_SHIFT                         1  /*                 */
#define WM8985_BEEPVOL_WIDTH                         3  /*                 */
#define WM8985_BEEPEN                           0x0001  /*        */
#define WM8985_BEEPEN_MASK                      0x0001  /*        */
#define WM8985_BEEPEN_SHIFT                          0  /*        */
#define WM8985_BEEPEN_WIDTH                          1  /*        */

/*
                          
 */
#define WM8985_MBVSEL                           0x0100  /*        */
#define WM8985_MBVSEL_MASK                      0x0100  /*        */
#define WM8985_MBVSEL_SHIFT                          8  /*        */
#define WM8985_MBVSEL_WIDTH                          1  /*        */
#define WM8985_R2_2INPPGA                       0x0040  /*            */
#define WM8985_R2_2INPPGA_MASK                  0x0040  /*            */
#define WM8985_R2_2INPPGA_SHIFT                      6  /*            */
#define WM8985_R2_2INPPGA_WIDTH                      1  /*            */
#define WM8985_RIN2INPPGA                       0x0020  /*            */
#define WM8985_RIN2INPPGA_MASK                  0x0020  /*            */
#define WM8985_RIN2INPPGA_SHIFT                      5  /*            */
#define WM8985_RIN2INPPGA_WIDTH                      1  /*            */
#define WM8985_RIP2INPPGA                       0x0010  /*            */
#define WM8985_RIP2INPPGA_MASK                  0x0010  /*            */
#define WM8985_RIP2INPPGA_SHIFT                      4  /*            */
#define WM8985_RIP2INPPGA_WIDTH                      1  /*            */
#define WM8985_L2_2INPPGA                       0x0004  /*            */
#define WM8985_L2_2INPPGA_MASK                  0x0004  /*            */
#define WM8985_L2_2INPPGA_SHIFT                      2  /*            */
#define WM8985_L2_2INPPGA_WIDTH                      1  /*            */
#define WM8985_LIN2INPPGA                       0x0002  /*            */
#define WM8985_LIN2INPPGA_MASK                  0x0002  /*            */
#define WM8985_LIN2INPPGA_SHIFT                      1  /*            */
#define WM8985_LIN2INPPGA_WIDTH                      1  /*            */
#define WM8985_LIP2INPPGA                       0x0001  /*            */
#define WM8985_LIP2INPPGA_MASK                  0x0001  /*            */
#define WM8985_LIP2INPPGA_SHIFT                      0  /*            */
#define WM8985_LIP2INPPGA_WIDTH                      1  /*            */

/*
                                      
 */
#define WM8985_INPGAVU                          0x0100  /*         */
#define WM8985_INPGAVU_MASK                     0x0100  /*         */
#define WM8985_INPGAVU_SHIFT                         8  /*         */
#define WM8985_INPGAVU_WIDTH                         1  /*         */
#define WM8985_INPPGAZCL                        0x0080  /*           */
#define WM8985_INPPGAZCL_MASK                   0x0080  /*           */
#define WM8985_INPPGAZCL_SHIFT                       7  /*           */
#define WM8985_INPPGAZCL_WIDTH                       1  /*           */
#define WM8985_INPPGAMUTEL                      0x0040  /*             */
#define WM8985_INPPGAMUTEL_MASK                 0x0040  /*             */
#define WM8985_INPPGAMUTEL_SHIFT                     6  /*             */
#define WM8985_INPPGAMUTEL_WIDTH                     1  /*             */
#define WM8985_INPPGAVOLL_MASK                  0x003F  /*                    */
#define WM8985_INPPGAVOLL_SHIFT                      0  /*                    */
#define WM8985_INPPGAVOLL_WIDTH                      6  /*                    */

/*
                                       
 */
#define WM8985_INPGAVU                          0x0100  /*         */
#define WM8985_INPGAVU_MASK                     0x0100  /*         */
#define WM8985_INPGAVU_SHIFT                         8  /*         */
#define WM8985_INPGAVU_WIDTH                         1  /*         */
#define WM8985_INPPGAZCR                        0x0080  /*           */
#define WM8985_INPPGAZCR_MASK                   0x0080  /*           */
#define WM8985_INPPGAZCR_SHIFT                       7  /*           */
#define WM8985_INPPGAZCR_WIDTH                       1  /*           */
#define WM8985_INPPGAMUTER                      0x0040  /*             */
#define WM8985_INPPGAMUTER_MASK                 0x0040  /*             */
#define WM8985_INPPGAMUTER_SHIFT                     6  /*             */
#define WM8985_INPPGAMUTER_WIDTH                     1  /*             */
#define WM8985_INPPGAVOLR_MASK                  0x003F  /*                    */
#define WM8985_INPPGAVOLR_SHIFT                      0  /*                    */
#define WM8985_INPPGAVOLR_WIDTH                      6  /*                    */

/*
                                   
 */
#define WM8985_PGABOOSTL                        0x0100  /*           */
#define WM8985_PGABOOSTL_MASK                   0x0100  /*           */
#define WM8985_PGABOOSTL_SHIFT                       8  /*           */
#define WM8985_PGABOOSTL_WIDTH                       1  /*           */
#define WM8985_L2_2BOOSTVOL_MASK                0x0070  /*                      */
#define WM8985_L2_2BOOSTVOL_SHIFT                    4  /*                      */
#define WM8985_L2_2BOOSTVOL_WIDTH                    3  /*                      */
#define WM8985_AUXL2BOOSTVOL_MASK               0x0007  /*                       */
#define WM8985_AUXL2BOOSTVOL_SHIFT                   0  /*                       */
#define WM8985_AUXL2BOOSTVOL_WIDTH                   3  /*                       */

/*
                                    
 */
#define WM8985_PGABOOSTR                        0x0100  /*           */
#define WM8985_PGABOOSTR_MASK                   0x0100  /*           */
#define WM8985_PGABOOSTR_SHIFT                       8  /*           */
#define WM8985_PGABOOSTR_WIDTH                       1  /*           */
#define WM8985_R2_2BOOSTVOL_MASK                0x0070  /*                      */
#define WM8985_R2_2BOOSTVOL_SHIFT                    4  /*                      */
#define WM8985_R2_2BOOSTVOL_WIDTH                    3  /*                      */
#define WM8985_AUXR2BOOSTVOL_MASK               0x0007  /*                       */
#define WM8985_AUXR2BOOSTVOL_SHIFT                   0  /*                       */
#define WM8985_AUXR2BOOSTVOL_WIDTH                   3  /*                       */

/*
                           
 */
#define WM8985_DACL2RMIX                        0x0040  /*           */
#define WM8985_DACL2RMIX_MASK                   0x0040  /*           */
#define WM8985_DACL2RMIX_SHIFT                       6  /*           */
#define WM8985_DACL2RMIX_WIDTH                       1  /*           */
#define WM8985_DACR2LMIX                        0x0020  /*           */
#define WM8985_DACR2LMIX_MASK                   0x0020  /*           */
#define WM8985_DACR2LMIX_SHIFT                       5  /*           */
#define WM8985_DACR2LMIX_WIDTH                       1  /*           */
#define WM8985_OUT4BOOST                        0x0010  /*           */
#define WM8985_OUT4BOOST_MASK                   0x0010  /*           */
#define WM8985_OUT4BOOST_SHIFT                       4  /*           */
#define WM8985_OUT4BOOST_WIDTH                       1  /*           */
#define WM8985_OUT3BOOST                        0x0008  /*           */
#define WM8985_OUT3BOOST_MASK                   0x0008  /*           */
#define WM8985_OUT3BOOST_SHIFT                       3  /*           */
#define WM8985_OUT3BOOST_WIDTH                       1  /*           */
#define WM8985_TSOPCTRL                         0x0004  /*          */
#define WM8985_TSOPCTRL_MASK                    0x0004  /*          */
#define WM8985_TSOPCTRL_SHIFT                        2  /*          */
#define WM8985_TSOPCTRL_WIDTH                        1  /*          */
#define WM8985_TSDEN                            0x0002  /*       */
#define WM8985_TSDEN_MASK                       0x0002  /*       */
#define WM8985_TSDEN_SHIFT                           1  /*       */
#define WM8985_TSDEN_WIDTH                           1  /*       */
#define WM8985_VROI                             0x0001  /*      */
#define WM8985_VROI_MASK                        0x0001  /*      */
#define WM8985_VROI_SHIFT                            0  /*      */
#define WM8985_VROI_WIDTH                            1  /*      */

/*
                               
 */
#define WM8985_AUXLMIXVOL_MASK                  0x01C0  /*                    */
#define WM8985_AUXLMIXVOL_SHIFT                      6  /*                    */
#define WM8985_AUXLMIXVOL_WIDTH                      3  /*                    */
#define WM8985_AUXL2LMIX                        0x0020  /*           */
#define WM8985_AUXL2LMIX_MASK                   0x0020  /*           */
#define WM8985_AUXL2LMIX_SHIFT                       5  /*           */
#define WM8985_AUXL2LMIX_WIDTH                       1  /*           */
#define WM8985_BYPLMIXVOL_MASK                  0x001C  /*                    */
#define WM8985_BYPLMIXVOL_SHIFT                      2  /*                    */
#define WM8985_BYPLMIXVOL_WIDTH                      3  /*                    */
#define WM8985_BYPL2LMIX                        0x0002  /*           */
#define WM8985_BYPL2LMIX_MASK                   0x0002  /*           */
#define WM8985_BYPL2LMIX_SHIFT                       1  /*           */
#define WM8985_BYPL2LMIX_WIDTH                       1  /*           */
#define WM8985_DACL2LMIX                        0x0001  /*           */
#define WM8985_DACL2LMIX_MASK                   0x0001  /*           */
#define WM8985_DACL2LMIX_SHIFT                       0  /*           */
#define WM8985_DACL2LMIX_WIDTH                       1  /*           */

/*
                                
 */
#define WM8985_AUXRMIXVOL_MASK                  0x01C0  /*                    */
#define WM8985_AUXRMIXVOL_SHIFT                      6  /*                    */
#define WM8985_AUXRMIXVOL_WIDTH                      3  /*                    */
#define WM8985_AUXR2RMIX                        0x0020  /*           */
#define WM8985_AUXR2RMIX_MASK                   0x0020  /*           */
#define WM8985_AUXR2RMIX_SHIFT                       5  /*           */
#define WM8985_AUXR2RMIX_WIDTH                       1  /*           */
#define WM8985_BYPRMIXVOL_MASK                  0x001C  /*                    */
#define WM8985_BYPRMIXVOL_SHIFT                      2  /*                    */
#define WM8985_BYPRMIXVOL_WIDTH                      3  /*                    */
#define WM8985_BYPR2RMIX                        0x0002  /*           */
#define WM8985_BYPR2RMIX_MASK                   0x0002  /*           */
#define WM8985_BYPR2RMIX_SHIFT                       1  /*           */
#define WM8985_BYPR2RMIX_WIDTH                       1  /*           */
#define WM8985_DACR2RMIX                        0x0001  /*           */
#define WM8985_DACR2RMIX_MASK                   0x0001  /*           */
#define WM8985_DACR2RMIX_SHIFT                       0  /*           */
#define WM8985_DACR2RMIX_WIDTH                       1  /*           */

/*
                                      
 */
#define WM8985_OUT1VU                           0x0100  /*        */
#define WM8985_OUT1VU_MASK                      0x0100  /*        */
#define WM8985_OUT1VU_SHIFT                          8  /*        */
#define WM8985_OUT1VU_WIDTH                          1  /*        */
#define WM8985_LOUT1ZC                          0x0080  /*         */
#define WM8985_LOUT1ZC_MASK                     0x0080  /*         */
#define WM8985_LOUT1ZC_SHIFT                         7  /*         */
#define WM8985_LOUT1ZC_WIDTH                         1  /*         */
#define WM8985_LOUT1MUTE                        0x0040  /*           */
#define WM8985_LOUT1MUTE_MASK                   0x0040  /*           */
#define WM8985_LOUT1MUTE_SHIFT                       6  /*           */
#define WM8985_LOUT1MUTE_WIDTH                       1  /*           */
#define WM8985_LOUT1VOL_MASK                    0x003F  /*                  */
#define WM8985_LOUT1VOL_SHIFT                        0  /*                  */
#define WM8985_LOUT1VOL_WIDTH                        6  /*                  */

/*
                                      
 */
#define WM8985_OUT1VU                           0x0100  /*        */
#define WM8985_OUT1VU_MASK                      0x0100  /*        */
#define WM8985_OUT1VU_SHIFT                          8  /*        */
#define WM8985_OUT1VU_WIDTH                          1  /*        */
#define WM8985_ROUT1ZC                          0x0080  /*         */
#define WM8985_ROUT1ZC_MASK                     0x0080  /*         */
#define WM8985_ROUT1ZC_SHIFT                         7  /*         */
#define WM8985_ROUT1ZC_WIDTH                         1  /*         */
#define WM8985_ROUT1MUTE                        0x0040  /*           */
#define WM8985_ROUT1MUTE_MASK                   0x0040  /*           */
#define WM8985_ROUT1MUTE_SHIFT                       6  /*           */
#define WM8985_ROUT1MUTE_WIDTH                       1  /*           */
#define WM8985_ROUT1VOL_MASK                    0x003F  /*                  */
#define WM8985_ROUT1VOL_SHIFT                        0  /*                  */
#define WM8985_ROUT1VOL_WIDTH                        6  /*                  */

/*
                                       
 */
#define WM8985_OUT2VU                           0x0100  /*        */
#define WM8985_OUT2VU_MASK                      0x0100  /*        */
#define WM8985_OUT2VU_SHIFT                          8  /*        */
#define WM8985_OUT2VU_WIDTH                          1  /*        */
#define WM8985_LOUT2ZC                          0x0080  /*         */
#define WM8985_LOUT2ZC_MASK                     0x0080  /*         */
#define WM8985_LOUT2ZC_SHIFT                         7  /*         */
#define WM8985_LOUT2ZC_WIDTH                         1  /*         */
#define WM8985_LOUT2MUTE                        0x0040  /*           */
#define WM8985_LOUT2MUTE_MASK                   0x0040  /*           */
#define WM8985_LOUT2MUTE_SHIFT                       6  /*           */
#define WM8985_LOUT2MUTE_WIDTH                       1  /*           */
#define WM8985_LOUT2VOL_MASK                    0x003F  /*                  */
#define WM8985_LOUT2VOL_SHIFT                        0  /*                  */
#define WM8985_LOUT2VOL_WIDTH                        6  /*                  */

/*
                                       
 */
#define WM8985_OUT2VU                           0x0100  /*        */
#define WM8985_OUT2VU_MASK                      0x0100  /*        */
#define WM8985_OUT2VU_SHIFT                          8  /*        */
#define WM8985_OUT2VU_WIDTH                          1  /*        */
#define WM8985_ROUT2ZC                          0x0080  /*         */
#define WM8985_ROUT2ZC_MASK                     0x0080  /*         */
#define WM8985_ROUT2ZC_SHIFT                         7  /*         */
#define WM8985_ROUT2ZC_WIDTH                         1  /*         */
#define WM8985_ROUT2MUTE                        0x0040  /*           */
#define WM8985_ROUT2MUTE_MASK                   0x0040  /*           */
#define WM8985_ROUT2MUTE_SHIFT                       6  /*           */
#define WM8985_ROUT2MUTE_WIDTH                       1  /*           */
#define WM8985_ROUT2VOL_MASK                    0x003F  /*                  */
#define WM8985_ROUT2VOL_SHIFT                        0  /*                  */
#define WM8985_ROUT2VOL_WIDTH                        6  /*                  */

/*
                               
 */
#define WM8985_OUT3MUTE                         0x0040  /*          */
#define WM8985_OUT3MUTE_MASK                    0x0040  /*          */
#define WM8985_OUT3MUTE_SHIFT                        6  /*          */
#define WM8985_OUT3MUTE_WIDTH                        1  /*          */
#define WM8985_OUT4_2OUT3                       0x0008  /*            */
#define WM8985_OUT4_2OUT3_MASK                  0x0008  /*            */
#define WM8985_OUT4_2OUT3_SHIFT                      3  /*            */
#define WM8985_OUT4_2OUT3_WIDTH                      1  /*            */
#define WM8985_BYPL2OUT3                        0x0004  /*           */
#define WM8985_BYPL2OUT3_MASK                   0x0004  /*           */
#define WM8985_BYPL2OUT3_SHIFT                       2  /*           */
#define WM8985_BYPL2OUT3_WIDTH                       1  /*           */
#define WM8985_LMIX2OUT3                        0x0002  /*           */
#define WM8985_LMIX2OUT3_MASK                   0x0002  /*           */
#define WM8985_LMIX2OUT3_SHIFT                       1  /*           */
#define WM8985_LMIX2OUT3_WIDTH                       1  /*           */
#define WM8985_LDAC2OUT3                        0x0001  /*           */
#define WM8985_LDAC2OUT3_MASK                   0x0001  /*           */
#define WM8985_LDAC2OUT3_SHIFT                       0  /*           */
#define WM8985_LDAC2OUT3_WIDTH                       1  /*           */

/*
                                    
 */
#define WM8985_OUT3_2OUT4                       0x0080  /*            */
#define WM8985_OUT3_2OUT4_MASK                  0x0080  /*            */
#define WM8985_OUT3_2OUT4_SHIFT                      7  /*            */
#define WM8985_OUT3_2OUT4_WIDTH                      1  /*            */
#define WM8985_OUT4MUTE                         0x0040  /*          */
#define WM8985_OUT4MUTE_MASK                    0x0040  /*          */
#define WM8985_OUT4MUTE_SHIFT                        6  /*          */
#define WM8985_OUT4MUTE_WIDTH                        1  /*          */
#define WM8985_OUT4ATTN                         0x0020  /*          */
#define WM8985_OUT4ATTN_MASK                    0x0020  /*          */
#define WM8985_OUT4ATTN_SHIFT                        5  /*          */
#define WM8985_OUT4ATTN_WIDTH                        1  /*          */
#define WM8985_LMIX2OUT4                        0x0010  /*           */
#define WM8985_LMIX2OUT4_MASK                   0x0010  /*           */
#define WM8985_LMIX2OUT4_SHIFT                       4  /*           */
#define WM8985_LMIX2OUT4_WIDTH                       1  /*           */
#define WM8985_LDAC2OUT4                        0x0008  /*           */
#define WM8985_LDAC2OUT4_MASK                   0x0008  /*           */
#define WM8985_LDAC2OUT4_SHIFT                       3  /*           */
#define WM8985_LDAC2OUT4_WIDTH                       1  /*           */
#define WM8985_BYPR2OUT4                        0x0004  /*           */
#define WM8985_BYPR2OUT4_MASK                   0x0004  /*           */
#define WM8985_BYPR2OUT4_SHIFT                       2  /*           */
#define WM8985_BYPR2OUT4_WIDTH                       1  /*           */
#define WM8985_RMIX2OUT4                        0x0002  /*           */
#define WM8985_RMIX2OUT4_MASK                   0x0002  /*           */
#define WM8985_RMIX2OUT4_SHIFT                       1  /*           */
#define WM8985_RMIX2OUT4_WIDTH                       1  /*           */
#define WM8985_RDAC2OUT4                        0x0001  /*           */
#define WM8985_RDAC2OUT4_MASK                   0x0001  /*           */
#define WM8985_RDAC2OUT4_SHIFT                       0  /*           */
#define WM8985_RDAC2OUT4_WIDTH                       1  /*           */

/*
                           
 */
#define WM8985_VIDBUFFTST_MASK                  0x01E0  /*                    */
#define WM8985_VIDBUFFTST_SHIFT                      5  /*                    */
#define WM8985_VIDBUFFTST_WIDTH                      4  /*                    */
#define WM8985_HPTOG                            0x0008  /*       */
#define WM8985_HPTOG_MASK                       0x0008  /*       */
#define WM8985_HPTOG_SHIFT                           3  /*       */
#define WM8985_HPTOG_WIDTH                           1  /*       */

/*
                         
 */
#define WM8985_BIASCUT                          0x0100  /*         */
#define WM8985_BIASCUT_MASK                     0x0100  /*         */
#define WM8985_BIASCUT_SHIFT                         8  /*         */
#define WM8985_BIASCUT_WIDTH                         1  /*         */
#define WM8985_HALFIPBIAS                       0x0080  /*            */
#define WM8985_HALFIPBIAS_MASK                  0x0080  /*            */
#define WM8985_HALFIPBIAS_SHIFT                      7  /*            */
#define WM8985_HALFIPBIAS_WIDTH                      1  /*            */
#define WM8985_VBBIASTST_MASK                   0x0060  /*                   */
#define WM8985_VBBIASTST_SHIFT                       5  /*                   */
#define WM8985_VBBIASTST_WIDTH                       2  /*                   */
#define WM8985_BUFBIAS_MASK                     0x0018  /*                 */
#define WM8985_BUFBIAS_SHIFT                         3  /*                 */
#define WM8985_BUFBIAS_WIDTH                         2  /*                 */
#define WM8985_ADCBIAS_MASK                     0x0006  /*                 */
#define WM8985_ADCBIAS_SHIFT                         1  /*                 */
#define WM8985_ADCBIAS_WIDTH                         2  /*                 */
#define WM8985_HALFOPBIAS                       0x0001  /*            */
#define WM8985_HALFOPBIAS_MASK                  0x0001  /*            */
#define WM8985_HALFOPBIAS_SHIFT                      0  /*            */
#define WM8985_HALFOPBIAS_WIDTH                      1  /*            */

enum clk_src {
	WM8985_CLKSRC_MCLK,
	WM8985_CLKSRC_PLL
};

#define WM8985_PLL 0

#endif
