/*
 * wm8400 private definitions for audio
 *
 * Copyright 2008 Wolfson Microelectronics plc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __LINUX_MFD_WM8400_AUDIO_H
#define __LINUX_MFD_WM8400_AUDIO_H

#include <linux/mfd/wm8400-audio.h>

/*
                                   
 */
#define WM8400_CODEC_ENA                        0x8000  /*           */
#define WM8400_CODEC_ENA_MASK                   0x8000  /*           */
#define WM8400_CODEC_ENA_SHIFT                      15  /*           */
#define WM8400_CODEC_ENA_WIDTH                       1  /*           */
#define WM8400_SYSCLK_ENA                       0x4000  /*            */
#define WM8400_SYSCLK_ENA_MASK                  0x4000  /*            */
#define WM8400_SYSCLK_ENA_SHIFT                     14  /*            */
#define WM8400_SYSCLK_ENA_WIDTH                      1  /*            */
#define WM8400_SPK_MIX_ENA                      0x2000  /*             */
#define WM8400_SPK_MIX_ENA_MASK                 0x2000  /*             */
#define WM8400_SPK_MIX_ENA_SHIFT                    13  /*             */
#define WM8400_SPK_MIX_ENA_WIDTH                     1  /*             */
#define WM8400_SPK_ENA                          0x1000  /*         */
#define WM8400_SPK_ENA_MASK                     0x1000  /*         */
#define WM8400_SPK_ENA_SHIFT                        12  /*         */
#define WM8400_SPK_ENA_WIDTH                         1  /*         */
#define WM8400_OUT3_ENA                         0x0800  /*          */
#define WM8400_OUT3_ENA_MASK                    0x0800  /*          */
#define WM8400_OUT3_ENA_SHIFT                       11  /*          */
#define WM8400_OUT3_ENA_WIDTH                        1  /*          */
#define WM8400_OUT4_ENA                         0x0400  /*          */
#define WM8400_OUT4_ENA_MASK                    0x0400  /*          */
#define WM8400_OUT4_ENA_SHIFT                       10  /*          */
#define WM8400_OUT4_ENA_WIDTH                        1  /*          */
#define WM8400_LOUT_ENA                         0x0200  /*          */
#define WM8400_LOUT_ENA_MASK                    0x0200  /*          */
#define WM8400_LOUT_ENA_SHIFT                        9  /*          */
#define WM8400_LOUT_ENA_WIDTH                        1  /*          */
#define WM8400_ROUT_ENA                         0x0100  /*          */
#define WM8400_ROUT_ENA_MASK                    0x0100  /*          */
#define WM8400_ROUT_ENA_SHIFT                        8  /*          */
#define WM8400_ROUT_ENA_WIDTH                        1  /*          */
#define WM8400_MIC1BIAS_ENA                     0x0010  /*              */
#define WM8400_MIC1BIAS_ENA_MASK                0x0010  /*              */
#define WM8400_MIC1BIAS_ENA_SHIFT                    4  /*              */
#define WM8400_MIC1BIAS_ENA_WIDTH                    1  /*              */
#define WM8400_VMID_MODE_MASK                   0x0006  /*                   */
#define WM8400_VMID_MODE_SHIFT                       1  /*                   */
#define WM8400_VMID_MODE_WIDTH                       2  /*                   */
#define WM8400_VREF_ENA                         0x0001  /*          */
#define WM8400_VREF_ENA_MASK                    0x0001  /*          */
#define WM8400_VREF_ENA_SHIFT                        0  /*          */
#define WM8400_VREF_ENA_WIDTH                        1  /*          */

/*
                                   
 */
#define WM8400_FLL_ENA                          0x8000  /*         */
#define WM8400_FLL_ENA_MASK                     0x8000  /*         */
#define WM8400_FLL_ENA_SHIFT                        15  /*         */
#define WM8400_FLL_ENA_WIDTH                         1  /*         */
#define WM8400_TSHUT_ENA                        0x4000  /*           */
#define WM8400_TSHUT_ENA_MASK                   0x4000  /*           */
#define WM8400_TSHUT_ENA_SHIFT                      14  /*           */
#define WM8400_TSHUT_ENA_WIDTH                       1  /*           */
#define WM8400_TSHUT_OPDIS                      0x2000  /*             */
#define WM8400_TSHUT_OPDIS_MASK                 0x2000  /*             */
#define WM8400_TSHUT_OPDIS_SHIFT                    13  /*             */
#define WM8400_TSHUT_OPDIS_WIDTH                     1  /*             */
#define WM8400_OPCLK_ENA                        0x0800  /*           */
#define WM8400_OPCLK_ENA_MASK                   0x0800  /*           */
#define WM8400_OPCLK_ENA_SHIFT                      11  /*           */
#define WM8400_OPCLK_ENA_WIDTH                       1  /*           */
#define WM8400_AINL_ENA                         0x0200  /*          */
#define WM8400_AINL_ENA_MASK                    0x0200  /*          */
#define WM8400_AINL_ENA_SHIFT                        9  /*          */
#define WM8400_AINL_ENA_WIDTH                        1  /*          */
#define WM8400_AINR_ENA                         0x0100  /*          */
#define WM8400_AINR_ENA_MASK                    0x0100  /*          */
#define WM8400_AINR_ENA_SHIFT                        8  /*          */
#define WM8400_AINR_ENA_WIDTH                        1  /*          */
#define WM8400_LIN34_ENA                        0x0080  /*           */
#define WM8400_LIN34_ENA_MASK                   0x0080  /*           */
#define WM8400_LIN34_ENA_SHIFT                       7  /*           */
#define WM8400_LIN34_ENA_WIDTH                       1  /*           */
#define WM8400_LIN12_ENA                        0x0040  /*           */
#define WM8400_LIN12_ENA_MASK                   0x0040  /*           */
#define WM8400_LIN12_ENA_SHIFT                       6  /*           */
#define WM8400_LIN12_ENA_WIDTH                       1  /*           */
#define WM8400_RIN34_ENA                        0x0020  /*           */
#define WM8400_RIN34_ENA_MASK                   0x0020  /*           */
#define WM8400_RIN34_ENA_SHIFT                       5  /*           */
#define WM8400_RIN34_ENA_WIDTH                       1  /*           */
#define WM8400_RIN12_ENA                        0x0010  /*           */
#define WM8400_RIN12_ENA_MASK                   0x0010  /*           */
#define WM8400_RIN12_ENA_SHIFT                       4  /*           */
#define WM8400_RIN12_ENA_WIDTH                       1  /*           */
#define WM8400_ADCL_ENA                         0x0002  /*          */
#define WM8400_ADCL_ENA_MASK                    0x0002  /*          */
#define WM8400_ADCL_ENA_SHIFT                        1  /*          */
#define WM8400_ADCL_ENA_WIDTH                        1  /*          */
#define WM8400_ADCR_ENA                         0x0001  /*          */
#define WM8400_ADCR_ENA_MASK                    0x0001  /*          */
#define WM8400_ADCR_ENA_SHIFT                        0  /*          */
#define WM8400_ADCR_ENA_WIDTH                        1  /*          */

/*
                                   
 */
#define WM8400_LON_ENA                          0x2000  /*         */
#define WM8400_LON_ENA_MASK                     0x2000  /*         */
#define WM8400_LON_ENA_SHIFT                        13  /*         */
#define WM8400_LON_ENA_WIDTH                         1  /*         */
#define WM8400_LOP_ENA                          0x1000  /*         */
#define WM8400_LOP_ENA_MASK                     0x1000  /*         */
#define WM8400_LOP_ENA_SHIFT                        12  /*         */
#define WM8400_LOP_ENA_WIDTH                         1  /*         */
#define WM8400_RON_ENA                          0x0800  /*         */
#define WM8400_RON_ENA_MASK                     0x0800  /*         */
#define WM8400_RON_ENA_SHIFT                        11  /*         */
#define WM8400_RON_ENA_WIDTH                         1  /*         */
#define WM8400_ROP_ENA                          0x0400  /*         */
#define WM8400_ROP_ENA_MASK                     0x0400  /*         */
#define WM8400_ROP_ENA_SHIFT                        10  /*         */
#define WM8400_ROP_ENA_WIDTH                         1  /*         */
#define WM8400_LOPGA_ENA                        0x0080  /*           */
#define WM8400_LOPGA_ENA_MASK                   0x0080  /*           */
#define WM8400_LOPGA_ENA_SHIFT                       7  /*           */
#define WM8400_LOPGA_ENA_WIDTH                       1  /*           */
#define WM8400_ROPGA_ENA                        0x0040  /*           */
#define WM8400_ROPGA_ENA_MASK                   0x0040  /*           */
#define WM8400_ROPGA_ENA_SHIFT                       6  /*           */
#define WM8400_ROPGA_ENA_WIDTH                       1  /*           */
#define WM8400_LOMIX_ENA                        0x0020  /*           */
#define WM8400_LOMIX_ENA_MASK                   0x0020  /*           */
#define WM8400_LOMIX_ENA_SHIFT                       5  /*           */
#define WM8400_LOMIX_ENA_WIDTH                       1  /*           */
#define WM8400_ROMIX_ENA                        0x0010  /*           */
#define WM8400_ROMIX_ENA_MASK                   0x0010  /*           */
#define WM8400_ROMIX_ENA_SHIFT                       4  /*           */
#define WM8400_ROMIX_ENA_WIDTH                       1  /*           */
#define WM8400_DACL_ENA                         0x0002  /*          */
#define WM8400_DACL_ENA_MASK                    0x0002  /*          */
#define WM8400_DACL_ENA_SHIFT                        1  /*          */
#define WM8400_DACL_ENA_WIDTH                        1  /*          */
#define WM8400_DACR_ENA                         0x0001  /*          */
#define WM8400_DACR_ENA_MASK                    0x0001  /*          */
#define WM8400_DACR_ENA_SHIFT                        0  /*          */
#define WM8400_DACR_ENA_WIDTH                        1  /*          */

/*
                                  
 */
#define WM8400_AIFADCL_SRC                      0x8000  /*             */
#define WM8400_AIFADCL_SRC_MASK                 0x8000  /*             */
#define WM8400_AIFADCL_SRC_SHIFT                    15  /*             */
#define WM8400_AIFADCL_SRC_WIDTH                     1  /*             */
#define WM8400_AIFADCR_SRC                      0x4000  /*             */
#define WM8400_AIFADCR_SRC_MASK                 0x4000  /*             */
#define WM8400_AIFADCR_SRC_SHIFT                    14  /*             */
#define WM8400_AIFADCR_SRC_WIDTH                     1  /*             */
#define WM8400_AIFADC_TDM                       0x2000  /*            */
#define WM8400_AIFADC_TDM_MASK                  0x2000  /*            */
#define WM8400_AIFADC_TDM_SHIFT                     13  /*            */
#define WM8400_AIFADC_TDM_WIDTH                      1  /*            */
#define WM8400_AIFADC_TDM_CHAN                  0x1000  /*                 */
#define WM8400_AIFADC_TDM_CHAN_MASK             0x1000  /*                 */
#define WM8400_AIFADC_TDM_CHAN_SHIFT                12  /*                 */
#define WM8400_AIFADC_TDM_CHAN_WIDTH                 1  /*                 */
#define WM8400_AIF_BCLK_INV                     0x0100  /*              */
#define WM8400_AIF_BCLK_INV_MASK                0x0100  /*              */
#define WM8400_AIF_BCLK_INV_SHIFT                    8  /*              */
#define WM8400_AIF_BCLK_INV_WIDTH                    1  /*              */
#define WM8400_AIF_LRCLK_INV                    0x0080  /*               */
#define WM8400_AIF_LRCLK_INV_MASK               0x0080  /*               */
#define WM8400_AIF_LRCLK_INV_SHIFT                   7  /*               */
#define WM8400_AIF_LRCLK_INV_WIDTH                   1  /*               */
#define WM8400_AIF_WL_MASK                      0x0060  /*                */
#define WM8400_AIF_WL_SHIFT                          5  /*                */
#define WM8400_AIF_WL_WIDTH                          2  /*                */
#define WM8400_AIF_WL_16BITS			(0 << 5)
#define WM8400_AIF_WL_20BITS			(1 << 5)
#define WM8400_AIF_WL_24BITS			(2 << 5)
#define WM8400_AIF_WL_32BITS			(3 << 5)
#define WM8400_AIF_FMT_MASK                     0x0018  /*                 */
#define WM8400_AIF_FMT_SHIFT                         3  /*                 */
#define WM8400_AIF_FMT_WIDTH                         2  /*                 */
#define WM8400_AIF_FMT_RIGHTJ			(0 << 3)
#define WM8400_AIF_FMT_LEFTJ			(1 << 3)
#define WM8400_AIF_FMT_I2S			(2 << 3)
#define WM8400_AIF_FMT_DSP			(3 << 3)

/*
                                  
 */
#define WM8400_DACL_SRC                         0x8000  /*          */
#define WM8400_DACL_SRC_MASK                    0x8000  /*          */
#define WM8400_DACL_SRC_SHIFT                       15  /*          */
#define WM8400_DACL_SRC_WIDTH                        1  /*          */
#define WM8400_DACR_SRC                         0x4000  /*          */
#define WM8400_DACR_SRC_MASK                    0x4000  /*          */
#define WM8400_DACR_SRC_SHIFT                       14  /*          */
#define WM8400_DACR_SRC_WIDTH                        1  /*          */
#define WM8400_AIFDAC_TDM                       0x2000  /*            */
#define WM8400_AIFDAC_TDM_MASK                  0x2000  /*            */
#define WM8400_AIFDAC_TDM_SHIFT                     13  /*            */
#define WM8400_AIFDAC_TDM_WIDTH                      1  /*            */
#define WM8400_AIFDAC_TDM_CHAN                  0x1000  /*                 */
#define WM8400_AIFDAC_TDM_CHAN_MASK             0x1000  /*                 */
#define WM8400_AIFDAC_TDM_CHAN_SHIFT                12  /*                 */
#define WM8400_AIFDAC_TDM_CHAN_WIDTH                 1  /*                 */
#define WM8400_DAC_BOOST_MASK                   0x0C00  /*                     */
#define WM8400_DAC_BOOST_SHIFT                      10  /*                     */
#define WM8400_DAC_BOOST_WIDTH                       2  /*                     */
#define WM8400_DAC_COMP                         0x0010  /*          */
#define WM8400_DAC_COMP_MASK                    0x0010  /*          */
#define WM8400_DAC_COMP_SHIFT                        4  /*          */
#define WM8400_DAC_COMP_WIDTH                        1  /*          */
#define WM8400_DAC_COMPMODE                     0x0008  /*              */
#define WM8400_DAC_COMPMODE_MASK                0x0008  /*              */
#define WM8400_DAC_COMPMODE_SHIFT                    3  /*              */
#define WM8400_DAC_COMPMODE_WIDTH                    1  /*              */
#define WM8400_ADC_COMP                         0x0004  /*          */
#define WM8400_ADC_COMP_MASK                    0x0004  /*          */
#define WM8400_ADC_COMP_SHIFT                        2  /*          */
#define WM8400_ADC_COMP_WIDTH                        1  /*          */
#define WM8400_ADC_COMPMODE                     0x0002  /*              */
#define WM8400_ADC_COMPMODE_MASK                0x0002  /*              */
#define WM8400_ADC_COMPMODE_SHIFT                    1  /*              */
#define WM8400_ADC_COMPMODE_WIDTH                    1  /*              */
#define WM8400_LOOPBACK                         0x0001  /*          */
#define WM8400_LOOPBACK_MASK                    0x0001  /*          */
#define WM8400_LOOPBACK_SHIFT                        0  /*          */
#define WM8400_LOOPBACK_WIDTH                        1  /*          */

/*
                           
 */
#define WM8400_TOCLK_RATE                       0x8000  /*            */
#define WM8400_TOCLK_RATE_MASK                  0x8000  /*            */
#define WM8400_TOCLK_RATE_SHIFT                     15  /*            */
#define WM8400_TOCLK_RATE_WIDTH                      1  /*            */
#define WM8400_TOCLK_ENA                        0x4000  /*           */
#define WM8400_TOCLK_ENA_MASK                   0x4000  /*           */
#define WM8400_TOCLK_ENA_SHIFT                      14  /*           */
#define WM8400_TOCLK_ENA_WIDTH                       1  /*           */
#define WM8400_OPCLKDIV_MASK                    0x1E00  /*                   */
#define WM8400_OPCLKDIV_SHIFT                        9  /*                   */
#define WM8400_OPCLKDIV_WIDTH                        4  /*                   */
#define WM8400_DCLKDIV_MASK                     0x01C0  /*                 */
#define WM8400_DCLKDIV_SHIFT                         6  /*                 */
#define WM8400_DCLKDIV_WIDTH                         3  /*                 */
#define WM8400_BCLK_DIV_MASK                    0x001E  /*                  */
#define WM8400_BCLK_DIV_SHIFT                        1  /*                  */
#define WM8400_BCLK_DIV_WIDTH                        4  /*                  */

/*
                           
 */
#define WM8400_MCLK_SRC                         0x8000  /*          */
#define WM8400_MCLK_SRC_MASK                    0x8000  /*          */
#define WM8400_MCLK_SRC_SHIFT                       15  /*          */
#define WM8400_MCLK_SRC_WIDTH                        1  /*          */
#define WM8400_SYSCLK_SRC                       0x4000  /*            */
#define WM8400_SYSCLK_SRC_MASK                  0x4000  /*            */
#define WM8400_SYSCLK_SRC_SHIFT                     14  /*            */
#define WM8400_SYSCLK_SRC_WIDTH                      1  /*            */
#define WM8400_CLK_FORCE                        0x2000  /*           */
#define WM8400_CLK_FORCE_MASK                   0x2000  /*           */
#define WM8400_CLK_FORCE_SHIFT                      13  /*           */
#define WM8400_CLK_FORCE_WIDTH                       1  /*           */
#define WM8400_MCLK_DIV_MASK                    0x1800  /*                    */
#define WM8400_MCLK_DIV_SHIFT                       11  /*                    */
#define WM8400_MCLK_DIV_WIDTH                        2  /*                    */
#define WM8400_MCLK_INV                         0x0400  /*          */
#define WM8400_MCLK_INV_MASK                    0x0400  /*          */
#define WM8400_MCLK_INV_SHIFT                       10  /*          */
#define WM8400_MCLK_INV_WIDTH                        1  /*          */
#define WM8400_ADC_CLKDIV_MASK                  0x00E0  /*                    */
#define WM8400_ADC_CLKDIV_SHIFT                      5  /*                    */
#define WM8400_ADC_CLKDIV_WIDTH                      3  /*                    */
#define WM8400_DAC_CLKDIV_MASK                  0x001C  /*                    */
#define WM8400_DAC_CLKDIV_SHIFT                      2  /*                    */
#define WM8400_DAC_CLKDIV_WIDTH                      3  /*                    */

/*
                                  
 */
#define WM8400_AIF_MSTR1                        0x8000  /*           */
#define WM8400_AIF_MSTR1_MASK                   0x8000  /*           */
#define WM8400_AIF_MSTR1_SHIFT                      15  /*           */
#define WM8400_AIF_MSTR1_WIDTH                       1  /*           */
#define WM8400_AIF_MSTR2                        0x4000  /*           */
#define WM8400_AIF_MSTR2_MASK                   0x4000  /*           */
#define WM8400_AIF_MSTR2_SHIFT                      14  /*           */
#define WM8400_AIF_MSTR2_WIDTH                       1  /*           */
#define WM8400_AIF_SEL                          0x2000  /*         */
#define WM8400_AIF_SEL_MASK                     0x2000  /*         */
#define WM8400_AIF_SEL_SHIFT                        13  /*         */
#define WM8400_AIF_SEL_WIDTH                         1  /*         */
#define WM8400_ADCLRC_DIR                       0x0800  /*            */
#define WM8400_ADCLRC_DIR_MASK                  0x0800  /*            */
#define WM8400_ADCLRC_DIR_SHIFT                     11  /*            */
#define WM8400_ADCLRC_DIR_WIDTH                      1  /*            */
#define WM8400_ADCLRC_RATE_MASK                 0x07FF  /*                      */
#define WM8400_ADCLRC_RATE_SHIFT                     0  /*                      */
#define WM8400_ADCLRC_RATE_WIDTH                    11  /*                      */

/*
                                   
 */
#define WM8400_ALRCGPIO1                        0x8000  /*           */
#define WM8400_ALRCGPIO1_MASK                   0x8000  /*           */
#define WM8400_ALRCGPIO1_SHIFT                      15  /*           */
#define WM8400_ALRCGPIO1_WIDTH                       1  /*           */
#define WM8400_ALRCBGPIO6                       0x4000  /*            */
#define WM8400_ALRCBGPIO6_MASK                  0x4000  /*            */
#define WM8400_ALRCBGPIO6_SHIFT                     14  /*            */
#define WM8400_ALRCBGPIO6_WIDTH                      1  /*            */
#define WM8400_AIF_TRIS                         0x2000  /*          */
#define WM8400_AIF_TRIS_MASK                    0x2000  /*          */
#define WM8400_AIF_TRIS_SHIFT                       13  /*          */
#define WM8400_AIF_TRIS_WIDTH                        1  /*          */
#define WM8400_DACLRC_DIR                       0x0800  /*            */
#define WM8400_DACLRC_DIR_MASK                  0x0800  /*            */
#define WM8400_DACLRC_DIR_SHIFT                     11  /*            */
#define WM8400_DACLRC_DIR_WIDTH                      1  /*            */
#define WM8400_DACLRC_RATE_MASK                 0x07FF  /*                      */
#define WM8400_DACLRC_RATE_SHIFT                     0  /*                      */
#define WM8400_DACLRC_RATE_WIDTH                    11  /*                      */

/*
                        
 */
#define WM8400_DAC_SDMCLK_RATE                  0x2000  /*                 */
#define WM8400_DAC_SDMCLK_RATE_MASK             0x2000  /*                 */
#define WM8400_DAC_SDMCLK_RATE_SHIFT                13  /*                 */
#define WM8400_DAC_SDMCLK_RATE_WIDTH                 1  /*                 */
#define WM8400_AIF_LRCLKRATE                    0x0400  /*               */
#define WM8400_AIF_LRCLKRATE_MASK               0x0400  /*               */
#define WM8400_AIF_LRCLKRATE_SHIFT                  10  /*               */
#define WM8400_AIF_LRCLKRATE_WIDTH                   1  /*               */
#define WM8400_DAC_MONO                         0x0200  /*          */
#define WM8400_DAC_MONO_MASK                    0x0200  /*          */
#define WM8400_DAC_MONO_SHIFT                        9  /*          */
#define WM8400_DAC_MONO_WIDTH                        1  /*          */
#define WM8400_DAC_SB_FILT                      0x0100  /*             */
#define WM8400_DAC_SB_FILT_MASK                 0x0100  /*             */
#define WM8400_DAC_SB_FILT_SHIFT                     8  /*             */
#define WM8400_DAC_SB_FILT_WIDTH                     1  /*             */
#define WM8400_DAC_MUTERATE                     0x0080  /*              */
#define WM8400_DAC_MUTERATE_MASK                0x0080  /*              */
#define WM8400_DAC_MUTERATE_SHIFT                    7  /*              */
#define WM8400_DAC_MUTERATE_WIDTH                    1  /*              */
#define WM8400_DAC_MUTEMODE                     0x0040  /*              */
#define WM8400_DAC_MUTEMODE_MASK                0x0040  /*              */
#define WM8400_DAC_MUTEMODE_SHIFT                    6  /*              */
#define WM8400_DAC_MUTEMODE_WIDTH                    1  /*              */
#define WM8400_DEEMP_MASK                       0x0030  /*               */
#define WM8400_DEEMP_SHIFT                           4  /*               */
#define WM8400_DEEMP_WIDTH                           2  /*               */
#define WM8400_DAC_MUTE                         0x0004  /*          */
#define WM8400_DAC_MUTE_MASK                    0x0004  /*          */
#define WM8400_DAC_MUTE_SHIFT                        2  /*          */
#define WM8400_DAC_MUTE_WIDTH                        1  /*          */
#define WM8400_DACL_DATINV                      0x0002  /*             */
#define WM8400_DACL_DATINV_MASK                 0x0002  /*             */
#define WM8400_DACL_DATINV_SHIFT                     1  /*             */
#define WM8400_DACL_DATINV_WIDTH                     1  /*             */
#define WM8400_DACR_DATINV                      0x0001  /*             */
#define WM8400_DACR_DATINV_MASK                 0x0001  /*             */
#define WM8400_DACR_DATINV_SHIFT                     0  /*             */
#define WM8400_DACR_DATINV_WIDTH                     1  /*             */

/*
                                       
 */
#define WM8400_DAC_VU                           0x0100  /*        */
#define WM8400_DAC_VU_MASK                      0x0100  /*        */
#define WM8400_DAC_VU_SHIFT                          8  /*        */
#define WM8400_DAC_VU_WIDTH                          1  /*        */
#define WM8400_DACL_VOL_MASK                    0x00FF  /*                  */
#define WM8400_DACL_VOL_SHIFT                        0  /*                  */
#define WM8400_DACL_VOL_WIDTH                        8  /*                  */

/*
                                        
 */
#define WM8400_DAC_VU                           0x0100  /*        */
#define WM8400_DAC_VU_MASK                      0x0100  /*        */
#define WM8400_DAC_VU_SHIFT                          8  /*        */
#define WM8400_DAC_VU_WIDTH                          1  /*        */
#define WM8400_DACR_VOL_MASK                    0x00FF  /*                  */
#define WM8400_DACR_VOL_SHIFT                        0  /*                  */
#define WM8400_DACR_VOL_WIDTH                        8  /*                  */

/*
                                 
 */
#define WM8400_ADCL_DAC_SVOL_MASK               0x1E00  /*                          */
#define WM8400_ADCL_DAC_SVOL_SHIFT                   9  /*                          */
#define WM8400_ADCL_DAC_SVOL_WIDTH                   4  /*                          */
#define WM8400_ADCR_DAC_SVOL_MASK               0x01E0  /*                       */
#define WM8400_ADCR_DAC_SVOL_SHIFT                   5  /*                       */
#define WM8400_ADCR_DAC_SVOL_WIDTH                   4  /*                       */
#define WM8400_ADC_TO_DACL_MASK                 0x000C  /*                     */
#define WM8400_ADC_TO_DACL_SHIFT                     2  /*                     */
#define WM8400_ADC_TO_DACL_WIDTH                     2  /*                     */
#define WM8400_ADC_TO_DACR_MASK                 0x0003  /*                     */
#define WM8400_ADC_TO_DACR_SHIFT                     0  /*                     */
#define WM8400_ADC_TO_DACR_WIDTH                     2  /*                     */

/*
                        
 */
#define WM8400_ADC_HPF_ENA                      0x0100  /*             */
#define WM8400_ADC_HPF_ENA_MASK                 0x0100  /*             */
#define WM8400_ADC_HPF_ENA_SHIFT                     8  /*             */
#define WM8400_ADC_HPF_ENA_WIDTH                     1  /*             */
#define WM8400_ADC_HPF_CUT_MASK                 0x0060  /*                     */
#define WM8400_ADC_HPF_CUT_SHIFT                     5  /*                     */
#define WM8400_ADC_HPF_CUT_WIDTH                     2  /*                     */
#define WM8400_ADCL_DATINV                      0x0002  /*             */
#define WM8400_ADCL_DATINV_MASK                 0x0002  /*             */
#define WM8400_ADCL_DATINV_SHIFT                     1  /*             */
#define WM8400_ADCL_DATINV_WIDTH                     1  /*             */
#define WM8400_ADCR_DATINV                      0x0001  /*             */
#define WM8400_ADCR_DATINV_MASK                 0x0001  /*             */
#define WM8400_ADCR_DATINV_SHIFT                     0  /*             */
#define WM8400_ADCR_DATINV_WIDTH                     1  /*             */

/*
                                       
 */
#define WM8400_ADC_VU                           0x0100  /*        */
#define WM8400_ADC_VU_MASK                      0x0100  /*        */
#define WM8400_ADC_VU_SHIFT                          8  /*        */
#define WM8400_ADC_VU_WIDTH                          1  /*        */
#define WM8400_ADCL_VOL_MASK                    0x00FF  /*                  */
#define WM8400_ADCL_VOL_SHIFT                        0  /*                  */
#define WM8400_ADCL_VOL_WIDTH                        8  /*                  */

/*
                                        
 */
#define WM8400_ADC_VU                           0x0100  /*        */
#define WM8400_ADC_VU_MASK                      0x0100  /*        */
#define WM8400_ADC_VU_SHIFT                          8  /*        */
#define WM8400_ADC_VU_WIDTH                          1  /*        */
#define WM8400_ADCR_VOL_MASK                    0x00FF  /*                  */
#define WM8400_ADCR_VOL_SHIFT                        0  /*                  */
#define WM8400_ADCR_VOL_WIDTH                        8  /*                  */

/*
                                          
 */
#define WM8400_IPVU                             0x0100  /*      */
#define WM8400_IPVU_MASK                        0x0100  /*      */
#define WM8400_IPVU_SHIFT                            8  /*      */
#define WM8400_IPVU_WIDTH                            1  /*      */
#define WM8400_LI12MUTE                         0x0080  /*          */
#define WM8400_LI12MUTE_MASK                    0x0080  /*          */
#define WM8400_LI12MUTE_SHIFT                        7  /*          */
#define WM8400_LI12MUTE_WIDTH                        1  /*          */
#define WM8400_LI12ZC                           0x0040  /*        */
#define WM8400_LI12ZC_MASK                      0x0040  /*        */
#define WM8400_LI12ZC_SHIFT                          6  /*        */
#define WM8400_LI12ZC_WIDTH                          1  /*        */
#define WM8400_LIN12VOL_MASK                    0x001F  /*                  */
#define WM8400_LIN12VOL_SHIFT                        0  /*                  */
#define WM8400_LIN12VOL_WIDTH                        5  /*                  */

/*
                                          
 */
#define WM8400_IPVU                             0x0100  /*      */
#define WM8400_IPVU_MASK                        0x0100  /*      */
#define WM8400_IPVU_SHIFT                            8  /*      */
#define WM8400_IPVU_WIDTH                            1  /*      */
#define WM8400_LI34MUTE                         0x0080  /*          */
#define WM8400_LI34MUTE_MASK                    0x0080  /*          */
#define WM8400_LI34MUTE_SHIFT                        7  /*          */
#define WM8400_LI34MUTE_WIDTH                        1  /*          */
#define WM8400_LI34ZC                           0x0040  /*        */
#define WM8400_LI34ZC_MASK                      0x0040  /*        */
#define WM8400_LI34ZC_SHIFT                          6  /*        */
#define WM8400_LI34ZC_WIDTH                          1  /*        */
#define WM8400_LIN34VOL_MASK                    0x001F  /*                  */
#define WM8400_LIN34VOL_SHIFT                        0  /*                  */
#define WM8400_LIN34VOL_WIDTH                        5  /*                  */

/*
                                           
 */
#define WM8400_IPVU                             0x0100  /*      */
#define WM8400_IPVU_MASK                        0x0100  /*      */
#define WM8400_IPVU_SHIFT                            8  /*      */
#define WM8400_IPVU_WIDTH                            1  /*      */
#define WM8400_RI12MUTE                         0x0080  /*          */
#define WM8400_RI12MUTE_MASK                    0x0080  /*          */
#define WM8400_RI12MUTE_SHIFT                        7  /*          */
#define WM8400_RI12MUTE_WIDTH                        1  /*          */
#define WM8400_RI12ZC                           0x0040  /*        */
#define WM8400_RI12ZC_MASK                      0x0040  /*        */
#define WM8400_RI12ZC_SHIFT                          6  /*        */
#define WM8400_RI12ZC_WIDTH                          1  /*        */
#define WM8400_RIN12VOL_MASK                    0x001F  /*                  */
#define WM8400_RIN12VOL_SHIFT                        0  /*                  */
#define WM8400_RIN12VOL_WIDTH                        5  /*                  */

/*
                                           
 */
#define WM8400_IPVU                             0x0100  /*      */
#define WM8400_IPVU_MASK                        0x0100  /*      */
#define WM8400_IPVU_SHIFT                            8  /*      */
#define WM8400_IPVU_WIDTH                            1  /*      */
#define WM8400_RI34MUTE                         0x0080  /*          */
#define WM8400_RI34MUTE_MASK                    0x0080  /*          */
#define WM8400_RI34MUTE_SHIFT                        7  /*          */
#define WM8400_RI34MUTE_WIDTH                        1  /*          */
#define WM8400_RI34ZC                           0x0040  /*        */
#define WM8400_RI34ZC_MASK                      0x0040  /*        */
#define WM8400_RI34ZC_SHIFT                          6  /*        */
#define WM8400_RI34ZC_WIDTH                          1  /*        */
#define WM8400_RIN34VOL_MASK                    0x001F  /*                  */
#define WM8400_RIN34VOL_SHIFT                        0  /*                  */
#define WM8400_RIN34VOL_WIDTH                        5  /*                  */

/*
                                  
 */
#define WM8400_OPVU                             0x0100  /*      */
#define WM8400_OPVU_MASK                        0x0100  /*      */
#define WM8400_OPVU_SHIFT                            8  /*      */
#define WM8400_OPVU_WIDTH                            1  /*      */
#define WM8400_LOZC                             0x0080  /*      */
#define WM8400_LOZC_MASK                        0x0080  /*      */
#define WM8400_LOZC_SHIFT                            7  /*      */
#define WM8400_LOZC_WIDTH                            1  /*      */
#define WM8400_LOUTVOL_MASK                     0x007F  /*                 */
#define WM8400_LOUTVOL_SHIFT                         0  /*                 */
#define WM8400_LOUTVOL_WIDTH                         7  /*                 */

/*
                                   
 */
#define WM8400_OPVU                             0x0100  /*      */
#define WM8400_OPVU_MASK                        0x0100  /*      */
#define WM8400_OPVU_SHIFT                            8  /*      */
#define WM8400_OPVU_WIDTH                            1  /*      */
#define WM8400_ROZC                             0x0080  /*      */
#define WM8400_ROZC_MASK                        0x0080  /*      */
#define WM8400_ROZC_SHIFT                            7  /*      */
#define WM8400_ROZC_WIDTH                            1  /*      */
#define WM8400_ROUTVOL_MASK                     0x007F  /*                 */
#define WM8400_ROUTVOL_SHIFT                         0  /*                 */
#define WM8400_ROUTVOL_WIDTH                         7  /*                 */

/*
                                   
 */
#define WM8400_LONMUTE                          0x0040  /*         */
#define WM8400_LONMUTE_MASK                     0x0040  /*         */
#define WM8400_LONMUTE_SHIFT                         6  /*         */
#define WM8400_LONMUTE_WIDTH                         1  /*         */
#define WM8400_LOPMUTE                          0x0020  /*         */
#define WM8400_LOPMUTE_MASK                     0x0020  /*         */
#define WM8400_LOPMUTE_SHIFT                         5  /*         */
#define WM8400_LOPMUTE_WIDTH                         1  /*         */
#define WM8400_LOATTN                           0x0010  /*        */
#define WM8400_LOATTN_MASK                      0x0010  /*        */
#define WM8400_LOATTN_SHIFT                          4  /*        */
#define WM8400_LOATTN_WIDTH                          1  /*        */
#define WM8400_RONMUTE                          0x0004  /*         */
#define WM8400_RONMUTE_MASK                     0x0004  /*         */
#define WM8400_RONMUTE_SHIFT                         2  /*         */
#define WM8400_RONMUTE_WIDTH                         1  /*         */
#define WM8400_ROPMUTE                          0x0002  /*         */
#define WM8400_ROPMUTE_MASK                     0x0002  /*         */
#define WM8400_ROPMUTE_SHIFT                         1  /*         */
#define WM8400_ROPMUTE_WIDTH                         1  /*         */
#define WM8400_ROATTN                           0x0001  /*        */
#define WM8400_ROATTN_MASK                      0x0001  /*        */
#define WM8400_ROATTN_SHIFT                          0  /*        */
#define WM8400_ROATTN_WIDTH                          1  /*        */

/*
                             
 */
#define WM8400_OUT3MUTE                         0x0020  /*          */
#define WM8400_OUT3MUTE_MASK                    0x0020  /*          */
#define WM8400_OUT3MUTE_SHIFT                        5  /*          */
#define WM8400_OUT3MUTE_WIDTH                        1  /*          */
#define WM8400_OUT3ATTN                         0x0010  /*          */
#define WM8400_OUT3ATTN_MASK                    0x0010  /*          */
#define WM8400_OUT3ATTN_SHIFT                        4  /*          */
#define WM8400_OUT3ATTN_WIDTH                        1  /*          */
#define WM8400_OUT4MUTE                         0x0002  /*          */
#define WM8400_OUT4MUTE_MASK                    0x0002  /*          */
#define WM8400_OUT4MUTE_SHIFT                        1  /*          */
#define WM8400_OUT4MUTE_WIDTH                        1  /*          */
#define WM8400_OUT4ATTN                         0x0001  /*          */
#define WM8400_OUT4ATTN_MASK                    0x0001  /*          */
#define WM8400_OUT4ATTN_SHIFT                        0  /*          */
#define WM8400_OUT4ATTN_WIDTH                        1  /*          */

/*
                                
 */
#define WM8400_OPVU                             0x0100  /*      */
#define WM8400_OPVU_MASK                        0x0100  /*      */
#define WM8400_OPVU_SHIFT                            8  /*      */
#define WM8400_OPVU_WIDTH                            1  /*      */
#define WM8400_LOPGAZC                          0x0080  /*         */
#define WM8400_LOPGAZC_MASK                     0x0080  /*         */
#define WM8400_LOPGAZC_SHIFT                         7  /*         */
#define WM8400_LOPGAZC_WIDTH                         1  /*         */
#define WM8400_LOPGAVOL_MASK                    0x007F  /*                  */
#define WM8400_LOPGAVOL_SHIFT                        0  /*                  */
#define WM8400_LOPGAVOL_WIDTH                        7  /*                  */

/*
                                 
 */
#define WM8400_OPVU                             0x0100  /*      */
#define WM8400_OPVU_MASK                        0x0100  /*      */
#define WM8400_OPVU_SHIFT                            8  /*      */
#define WM8400_OPVU_WIDTH                            1  /*      */
#define WM8400_ROPGAZC                          0x0080  /*         */
#define WM8400_ROPGAZC_MASK                     0x0080  /*         */
#define WM8400_ROPGAZC_SHIFT                         7  /*         */
#define WM8400_ROPGAZC_WIDTH                         1  /*         */
#define WM8400_ROPGAVOL_MASK                    0x007F  /*                  */
#define WM8400_ROPGAVOL_SHIFT                        0  /*                  */
#define WM8400_ROPGAVOL_WIDTH                        7  /*                  */

/*
                              
 */
#define WM8400_SPKATTN_MASK                     0x0003  /*                 */
#define WM8400_SPKATTN_SHIFT                         0  /*                 */
#define WM8400_SPKATTN_WIDTH                         2  /*                 */

/*
                       
 */
#define WM8400_CDMODE                           0x0100  /*        */
#define WM8400_CDMODE_MASK                      0x0100  /*        */
#define WM8400_CDMODE_SHIFT                          8  /*        */
#define WM8400_CDMODE_WIDTH                          1  /*        */
#define WM8400_CLASSD_CLK_SEL                   0x0080  /*                */
#define WM8400_CLASSD_CLK_SEL_MASK              0x0080  /*                */
#define WM8400_CLASSD_CLK_SEL_SHIFT                  7  /*                */
#define WM8400_CLASSD_CLK_SEL_WIDTH                  1  /*                */
#define WM8400_CD_SRCTRL                        0x0040  /*           */
#define WM8400_CD_SRCTRL_MASK                   0x0040  /*           */
#define WM8400_CD_SRCTRL_SHIFT                       6  /*           */
#define WM8400_CD_SRCTRL_WIDTH                       1  /*           */
#define WM8400_SPKNOPOP                         0x0020  /*          */
#define WM8400_SPKNOPOP_MASK                    0x0020  /*          */
#define WM8400_SPKNOPOP_SHIFT                        5  /*          */
#define WM8400_SPKNOPOP_WIDTH                        1  /*          */
#define WM8400_DBLERATE                         0x0010  /*          */
#define WM8400_DBLERATE_MASK                    0x0010  /*          */
#define WM8400_DBLERATE_SHIFT                        4  /*          */
#define WM8400_DBLERATE_WIDTH                        1  /*          */
#define WM8400_LOOPTEST                         0x0008  /*          */
#define WM8400_LOOPTEST_MASK                    0x0008  /*          */
#define WM8400_LOOPTEST_SHIFT                        3  /*          */
#define WM8400_LOOPTEST_WIDTH                        1  /*          */
#define WM8400_HALFABBIAS                       0x0004  /*            */
#define WM8400_HALFABBIAS_MASK                  0x0004  /*            */
#define WM8400_HALFABBIAS_SHIFT                      2  /*            */
#define WM8400_HALFABBIAS_WIDTH                      1  /*            */
#define WM8400_TRIDEL_MASK                      0x0003  /*                */
#define WM8400_TRIDEL_SHIFT                          0  /*                */
#define WM8400_TRIDEL_WIDTH                          2  /*                */

/*
                       
 */
#define WM8400_DCGAIN_MASK                      0x0038  /*                */
#define WM8400_DCGAIN_SHIFT                          3  /*                */
#define WM8400_DCGAIN_WIDTH                          3  /*                */
#define WM8400_ACGAIN_MASK                      0x0007  /*                */
#define WM8400_ACGAIN_SHIFT                          0  /*                */
#define WM8400_ACGAIN_WIDTH                          3  /*                */

/*
                            
 */
#define WM8400_AINLMODE_MASK                    0x000C  /*                  */
#define WM8400_AINLMODE_SHIFT                        2  /*                  */
#define WM8400_AINLMODE_WIDTH                        2  /*                  */
#define WM8400_AINRMODE_MASK                    0x0003  /*                  */
#define WM8400_AINRMODE_SHIFT                        0  /*                  */
#define WM8400_AINRMODE_WIDTH                        2  /*                  */

/*
                            
 */
#define WM8400_LMP4                             0x0080  /*      */
#define WM8400_LMP4_MASK                        0x0080  /*      */
#define WM8400_LMP4_SHIFT                            7  /*      */
#define WM8400_LMP4_WIDTH                            1  /*      */
#define WM8400_LMN3                             0x0040  /*      */
#define WM8400_LMN3_MASK                        0x0040  /*      */
#define WM8400_LMN3_SHIFT                            6  /*      */
#define WM8400_LMN3_WIDTH                            1  /*      */
#define WM8400_LMP2                             0x0020  /*      */
#define WM8400_LMP2_MASK                        0x0020  /*      */
#define WM8400_LMP2_SHIFT                            5  /*      */
#define WM8400_LMP2_WIDTH                            1  /*      */
#define WM8400_LMN1                             0x0010  /*      */
#define WM8400_LMN1_MASK                        0x0010  /*      */
#define WM8400_LMN1_SHIFT                            4  /*      */
#define WM8400_LMN1_WIDTH                            1  /*      */
#define WM8400_RMP4                             0x0008  /*      */
#define WM8400_RMP4_MASK                        0x0008  /*      */
#define WM8400_RMP4_SHIFT                            3  /*      */
#define WM8400_RMP4_WIDTH                            1  /*      */
#define WM8400_RMN3                             0x0004  /*      */
#define WM8400_RMN3_MASK                        0x0004  /*      */
#define WM8400_RMN3_SHIFT                            2  /*      */
#define WM8400_RMN3_WIDTH                            1  /*      */
#define WM8400_RMP2                             0x0002  /*      */
#define WM8400_RMP2_MASK                        0x0002  /*      */
#define WM8400_RMP2_SHIFT                            1  /*      */
#define WM8400_RMP2_WIDTH                            1  /*      */
#define WM8400_RMN1                             0x0001  /*      */
#define WM8400_RMN1_MASK                        0x0001  /*      */
#define WM8400_RMN1_SHIFT                            0  /*      */
#define WM8400_RMN1_WIDTH                            1  /*      */

/*
                            
 */
#define WM8400_L34MNB                           0x0100  /*        */
#define WM8400_L34MNB_MASK                      0x0100  /*        */
#define WM8400_L34MNB_SHIFT                          8  /*        */
#define WM8400_L34MNB_WIDTH                          1  /*        */
#define WM8400_L34MNBST                         0x0080  /*          */
#define WM8400_L34MNBST_MASK                    0x0080  /*          */
#define WM8400_L34MNBST_SHIFT                        7  /*          */
#define WM8400_L34MNBST_WIDTH                        1  /*          */
#define WM8400_L12MNB                           0x0020  /*        */
#define WM8400_L12MNB_MASK                      0x0020  /*        */
#define WM8400_L12MNB_SHIFT                          5  /*        */
#define WM8400_L12MNB_WIDTH                          1  /*        */
#define WM8400_L12MNBST                         0x0010  /*          */
#define WM8400_L12MNBST_MASK                    0x0010  /*          */
#define WM8400_L12MNBST_SHIFT                        4  /*          */
#define WM8400_L12MNBST_WIDTH                        1  /*          */
#define WM8400_LDBVOL_MASK                      0x0007  /*                */
#define WM8400_LDBVOL_SHIFT                          0  /*                */
#define WM8400_LDBVOL_WIDTH                          3  /*                */

/*
                            
 */
#define WM8400_R34MNB                           0x0100  /*        */
#define WM8400_R34MNB_MASK                      0x0100  /*        */
#define WM8400_R34MNB_SHIFT                          8  /*        */
#define WM8400_R34MNB_WIDTH                          1  /*        */
#define WM8400_R34MNBST                         0x0080  /*          */
#define WM8400_R34MNBST_MASK                    0x0080  /*          */
#define WM8400_R34MNBST_SHIFT                        7  /*          */
#define WM8400_R34MNBST_WIDTH                        1  /*          */
#define WM8400_R12MNB                           0x0020  /*        */
#define WM8400_R12MNB_MASK                      0x0020  /*        */
#define WM8400_R12MNB_SHIFT                          5  /*        */
#define WM8400_R12MNB_WIDTH                          1  /*        */
#define WM8400_R12MNBST                         0x0010  /*          */
#define WM8400_R12MNBST_MASK                    0x0010  /*          */
#define WM8400_R12MNBST_SHIFT                        4  /*          */
#define WM8400_R12MNBST_WIDTH                        1  /*          */
#define WM8400_RDBVOL_MASK                      0x0007  /*                */
#define WM8400_RDBVOL_SHIFT                          0  /*                */
#define WM8400_RDBVOL_WIDTH                          3  /*                */

/*
                            
 */
#define WM8400_LI2BVOL_MASK                     0x01C0  /*                 */
#define WM8400_LI2BVOL_SHIFT                         6  /*                 */
#define WM8400_LI2BVOL_WIDTH                         3  /*                 */
#define WM8400_LR4BVOL_MASK                     0x0038  /*                 */
#define WM8400_LR4BVOL_SHIFT                         3  /*                 */
#define WM8400_LR4BVOL_WIDTH                         3  /*                 */
#define WM8400_LL4BVOL_MASK                     0x0007  /*                 */
#define WM8400_LL4BVOL_SHIFT                         0  /*                 */
#define WM8400_LL4BVOL_WIDTH                         3  /*                 */

/*
                            
 */
#define WM8400_RI2BVOL_MASK                     0x01C0  /*                 */
#define WM8400_RI2BVOL_SHIFT                         6  /*                 */
#define WM8400_RI2BVOL_WIDTH                         3  /*                 */
#define WM8400_RL4BVOL_MASK                     0x0038  /*                 */
#define WM8400_RL4BVOL_SHIFT                         3  /*                 */
#define WM8400_RL4BVOL_WIDTH                         3  /*                 */
#define WM8400_RR4BVOL_MASK                     0x0007  /*                 */
#define WM8400_RR4BVOL_SHIFT                         0  /*                 */
#define WM8400_RR4BVOL_WIDTH                         3  /*                 */

/*
                             
 */
#define WM8400_LRBLO                            0x0080  /*       */
#define WM8400_LRBLO_MASK                       0x0080  /*       */
#define WM8400_LRBLO_SHIFT                           7  /*       */
#define WM8400_LRBLO_WIDTH                           1  /*       */
#define WM8400_LLBLO                            0x0040  /*       */
#define WM8400_LLBLO_MASK                       0x0040  /*       */
#define WM8400_LLBLO_SHIFT                           6  /*       */
#define WM8400_LLBLO_WIDTH                           1  /*       */
#define WM8400_LRI3LO                           0x0020  /*        */
#define WM8400_LRI3LO_MASK                      0x0020  /*        */
#define WM8400_LRI3LO_SHIFT                          5  /*        */
#define WM8400_LRI3LO_WIDTH                          1  /*        */
#define WM8400_LLI3LO                           0x0010  /*        */
#define WM8400_LLI3LO_MASK                      0x0010  /*        */
#define WM8400_LLI3LO_SHIFT                          4  /*        */
#define WM8400_LLI3LO_WIDTH                          1  /*        */
#define WM8400_LR12LO                           0x0008  /*        */
#define WM8400_LR12LO_MASK                      0x0008  /*        */
#define WM8400_LR12LO_SHIFT                          3  /*        */
#define WM8400_LR12LO_WIDTH                          1  /*        */
#define WM8400_LL12LO                           0x0004  /*        */
#define WM8400_LL12LO_MASK                      0x0004  /*        */
#define WM8400_LL12LO_SHIFT                          2  /*        */
#define WM8400_LL12LO_WIDTH                          1  /*        */
#define WM8400_LDLO                             0x0001  /*      */
#define WM8400_LDLO_MASK                        0x0001  /*      */
#define WM8400_LDLO_SHIFT                            0  /*      */
#define WM8400_LDLO_WIDTH                            1  /*      */

/*
                             
 */
#define WM8400_RLBRO                            0x0080  /*       */
#define WM8400_RLBRO_MASK                       0x0080  /*       */
#define WM8400_RLBRO_SHIFT                           7  /*       */
#define WM8400_RLBRO_WIDTH                           1  /*       */
#define WM8400_RRBRO                            0x0040  /*       */
#define WM8400_RRBRO_MASK                       0x0040  /*       */
#define WM8400_RRBRO_SHIFT                           6  /*       */
#define WM8400_RRBRO_WIDTH                           1  /*       */
#define WM8400_RLI3RO                           0x0020  /*        */
#define WM8400_RLI3RO_MASK                      0x0020  /*        */
#define WM8400_RLI3RO_SHIFT                          5  /*        */
#define WM8400_RLI3RO_WIDTH                          1  /*        */
#define WM8400_RRI3RO                           0x0010  /*        */
#define WM8400_RRI3RO_MASK                      0x0010  /*        */
#define WM8400_RRI3RO_SHIFT                          4  /*        */
#define WM8400_RRI3RO_WIDTH                          1  /*        */
#define WM8400_RL12RO                           0x0008  /*        */
#define WM8400_RL12RO_MASK                      0x0008  /*        */
#define WM8400_RL12RO_SHIFT                          3  /*        */
#define WM8400_RL12RO_WIDTH                          1  /*        */
#define WM8400_RR12RO                           0x0004  /*        */
#define WM8400_RR12RO_MASK                      0x0004  /*        */
#define WM8400_RR12RO_SHIFT                          2  /*        */
#define WM8400_RR12RO_WIDTH                          1  /*        */
#define WM8400_RDRO                             0x0001  /*      */
#define WM8400_RDRO_MASK                        0x0001  /*      */
#define WM8400_RDRO_SHIFT                            0  /*      */
#define WM8400_RDRO_WIDTH                            1  /*      */

/*
                             
 */
#define WM8400_LLI3LOVOL_MASK                   0x01C0  /*                   */
#define WM8400_LLI3LOVOL_SHIFT                       6  /*                   */
#define WM8400_LLI3LOVOL_WIDTH                       3  /*                   */
#define WM8400_LR12LOVOL_MASK                   0x0038  /*                   */
#define WM8400_LR12LOVOL_SHIFT                       3  /*                   */
#define WM8400_LR12LOVOL_WIDTH                       3  /*                   */
#define WM8400_LL12LOVOL_MASK                   0x0007  /*                   */
#define WM8400_LL12LOVOL_SHIFT                       0  /*                   */
#define WM8400_LL12LOVOL_WIDTH                       3  /*                   */

/*
                             
 */
#define WM8400_RRI3ROVOL_MASK                   0x01C0  /*                   */
#define WM8400_RRI3ROVOL_SHIFT                       6  /*                   */
#define WM8400_RRI3ROVOL_WIDTH                       3  /*                   */
#define WM8400_RL12ROVOL_MASK                   0x0038  /*                   */
#define WM8400_RL12ROVOL_SHIFT                       3  /*                   */
#define WM8400_RL12ROVOL_WIDTH                       3  /*                   */
#define WM8400_RR12ROVOL_MASK                   0x0007  /*                   */
#define WM8400_RR12ROVOL_SHIFT                       0  /*                   */
#define WM8400_RR12ROVOL_WIDTH                       3  /*                   */

/*
                             
 */
#define WM8400_LRI3LOVOL_MASK                   0x01C0  /*                   */
#define WM8400_LRI3LOVOL_SHIFT                       6  /*                   */
#define WM8400_LRI3LOVOL_WIDTH                       3  /*                   */
#define WM8400_LRBLOVOL_MASK                    0x0038  /*                  */
#define WM8400_LRBLOVOL_SHIFT                        3  /*                  */
#define WM8400_LRBLOVOL_WIDTH                        3  /*                  */
#define WM8400_LLBLOVOL_MASK                    0x0007  /*                  */
#define WM8400_LLBLOVOL_SHIFT                        0  /*                  */
#define WM8400_LLBLOVOL_WIDTH                        3  /*                  */

/*
                             
 */
#define WM8400_RLI3ROVOL_MASK                   0x01C0  /*                   */
#define WM8400_RLI3ROVOL_SHIFT                       6  /*                   */
#define WM8400_RLI3ROVOL_WIDTH                       3  /*                   */
#define WM8400_RLBROVOL_MASK                    0x0038  /*                  */
#define WM8400_RLBROVOL_SHIFT                        3  /*                  */
#define WM8400_RLBROVOL_WIDTH                        3  /*                  */
#define WM8400_RRBROVOL_MASK                    0x0007  /*                  */
#define WM8400_RRBROVOL_SHIFT                        0  /*                  */
#define WM8400_RRBROVOL_WIDTH                        3  /*                  */

/*
                            
 */
#define WM8400_VSEL_MASK                        0x0180  /*              */
#define WM8400_VSEL_SHIFT                            7  /*              */
#define WM8400_VSEL_WIDTH                            2  /*              */
#define WM8400_LI4O3                            0x0020  /*       */
#define WM8400_LI4O3_MASK                       0x0020  /*       */
#define WM8400_LI4O3_SHIFT                           5  /*       */
#define WM8400_LI4O3_WIDTH                           1  /*       */
#define WM8400_LPGAO3                           0x0010  /*        */
#define WM8400_LPGAO3_MASK                      0x0010  /*        */
#define WM8400_LPGAO3_SHIFT                          4  /*        */
#define WM8400_LPGAO3_WIDTH                          1  /*        */
#define WM8400_RI4O4                            0x0002  /*       */
#define WM8400_RI4O4_MASK                       0x0002  /*       */
#define WM8400_RI4O4_SHIFT                           1  /*       */
#define WM8400_RI4O4_WIDTH                           1  /*       */
#define WM8400_RPGAO4                           0x0001  /*        */
#define WM8400_RPGAO4_MASK                      0x0001  /*        */
#define WM8400_RPGAO4_SHIFT                          0  /*        */
#define WM8400_RPGAO4_WIDTH                          1  /*        */

/*
                           
 */
#define WM8400_LLOPGALON                        0x0040  /*           */
#define WM8400_LLOPGALON_MASK                   0x0040  /*           */
#define WM8400_LLOPGALON_SHIFT                       6  /*           */
#define WM8400_LLOPGALON_WIDTH                       1  /*           */
#define WM8400_LROPGALON                        0x0020  /*           */
#define WM8400_LROPGALON_MASK                   0x0020  /*           */
#define WM8400_LROPGALON_SHIFT                       5  /*           */
#define WM8400_LROPGALON_WIDTH                       1  /*           */
#define WM8400_LOPLON                           0x0010  /*        */
#define WM8400_LOPLON_MASK                      0x0010  /*        */
#define WM8400_LOPLON_SHIFT                          4  /*        */
#define WM8400_LOPLON_WIDTH                          1  /*        */
#define WM8400_LR12LOP                          0x0004  /*         */
#define WM8400_LR12LOP_MASK                     0x0004  /*         */
#define WM8400_LR12LOP_SHIFT                         2  /*         */
#define WM8400_LR12LOP_WIDTH                         1  /*         */
#define WM8400_LL12LOP                          0x0002  /*         */
#define WM8400_LL12LOP_MASK                     0x0002  /*         */
#define WM8400_LL12LOP_SHIFT                         1  /*         */
#define WM8400_LL12LOP_WIDTH                         1  /*         */
#define WM8400_LLOPGALOP                        0x0001  /*           */
#define WM8400_LLOPGALOP_MASK                   0x0001  /*           */
#define WM8400_LLOPGALOP_SHIFT                       0  /*           */
#define WM8400_LLOPGALOP_WIDTH                       1  /*           */

/*
                           
 */
#define WM8400_RROPGARON                        0x0040  /*           */
#define WM8400_RROPGARON_MASK                   0x0040  /*           */
#define WM8400_RROPGARON_SHIFT                       6  /*           */
#define WM8400_RROPGARON_WIDTH                       1  /*           */
#define WM8400_RLOPGARON                        0x0020  /*           */
#define WM8400_RLOPGARON_MASK                   0x0020  /*           */
#define WM8400_RLOPGARON_SHIFT                       5  /*           */
#define WM8400_RLOPGARON_WIDTH                       1  /*           */
#define WM8400_ROPRON                           0x0010  /*        */
#define WM8400_ROPRON_MASK                      0x0010  /*        */
#define WM8400_ROPRON_SHIFT                          4  /*        */
#define WM8400_ROPRON_WIDTH                          1  /*        */
#define WM8400_RL12ROP                          0x0004  /*         */
#define WM8400_RL12ROP_MASK                     0x0004  /*         */
#define WM8400_RL12ROP_SHIFT                         2  /*         */
#define WM8400_RL12ROP_WIDTH                         1  /*         */
#define WM8400_RR12ROP                          0x0002  /*         */
#define WM8400_RR12ROP_MASK                     0x0002  /*         */
#define WM8400_RR12ROP_SHIFT                         1  /*         */
#define WM8400_RR12ROP_WIDTH                         1  /*         */
#define WM8400_RROPGAROP                        0x0001  /*           */
#define WM8400_RROPGAROP_MASK                   0x0001  /*           */
#define WM8400_RROPGAROP_SHIFT                       0  /*           */
#define WM8400_RROPGAROP_WIDTH                       1  /*           */

/*
                             
 */
#define WM8400_LB2SPK                           0x0080  /*        */
#define WM8400_LB2SPK_MASK                      0x0080  /*        */
#define WM8400_LB2SPK_SHIFT                          7  /*        */
#define WM8400_LB2SPK_WIDTH                          1  /*        */
#define WM8400_RB2SPK                           0x0040  /*        */
#define WM8400_RB2SPK_MASK                      0x0040  /*        */
#define WM8400_RB2SPK_SHIFT                          6  /*        */
#define WM8400_RB2SPK_WIDTH                          1  /*        */
#define WM8400_LI2SPK                           0x0020  /*        */
#define WM8400_LI2SPK_MASK                      0x0020  /*        */
#define WM8400_LI2SPK_SHIFT                          5  /*        */
#define WM8400_LI2SPK_WIDTH                          1  /*        */
#define WM8400_RI2SPK                           0x0010  /*        */
#define WM8400_RI2SPK_MASK                      0x0010  /*        */
#define WM8400_RI2SPK_SHIFT                          4  /*        */
#define WM8400_RI2SPK_WIDTH                          1  /*        */
#define WM8400_LOPGASPK                         0x0008  /*          */
#define WM8400_LOPGASPK_MASK                    0x0008  /*          */
#define WM8400_LOPGASPK_SHIFT                        3  /*          */
#define WM8400_LOPGASPK_WIDTH                        1  /*          */
#define WM8400_ROPGASPK                         0x0004  /*          */
#define WM8400_ROPGASPK_MASK                    0x0004  /*          */
#define WM8400_ROPGASPK_SHIFT                        2  /*          */
#define WM8400_ROPGASPK_WIDTH                        1  /*          */
#define WM8400_LDSPK                            0x0002  /*       */
#define WM8400_LDSPK_MASK                       0x0002  /*       */
#define WM8400_LDSPK_SHIFT                           1  /*       */
#define WM8400_LDSPK_WIDTH                           1  /*       */
#define WM8400_RDSPK                            0x0001  /*       */
#define WM8400_RDSPK_MASK                       0x0001  /*       */
#define WM8400_RDSPK_SHIFT                           0  /*       */
#define WM8400_RDSPK_WIDTH                           1  /*       */

/*
                                  
 */
#define WM8400_VROI                             0x0001  /*      */
#define WM8400_VROI_MASK                        0x0001  /*      */
#define WM8400_VROI_SHIFT                            0  /*      */
#define WM8400_VROI_WIDTH                            1  /*      */

/*
                        
 */
#define WM8400_DIS_LLINE                        0x0020  /*           */
#define WM8400_DIS_LLINE_MASK                   0x0020  /*           */
#define WM8400_DIS_LLINE_SHIFT                       5  /*           */
#define WM8400_DIS_LLINE_WIDTH                       1  /*           */
#define WM8400_DIS_RLINE                        0x0010  /*           */
#define WM8400_DIS_RLINE_MASK                   0x0010  /*           */
#define WM8400_DIS_RLINE_SHIFT                       4  /*           */
#define WM8400_DIS_RLINE_WIDTH                       1  /*           */
#define WM8400_DIS_OUT3                         0x0008  /*          */
#define WM8400_DIS_OUT3_MASK                    0x0008  /*          */
#define WM8400_DIS_OUT3_SHIFT                        3  /*          */
#define WM8400_DIS_OUT3_WIDTH                        1  /*          */
#define WM8400_DIS_OUT4                         0x0004  /*          */
#define WM8400_DIS_OUT4_MASK                    0x0004  /*          */
#define WM8400_DIS_OUT4_SHIFT                        2  /*          */
#define WM8400_DIS_OUT4_WIDTH                        1  /*          */
#define WM8400_DIS_LOUT                         0x0002  /*          */
#define WM8400_DIS_LOUT_MASK                    0x0002  /*          */
#define WM8400_DIS_LOUT_SHIFT                        1  /*          */
#define WM8400_DIS_LOUT_WIDTH                        1  /*          */
#define WM8400_DIS_ROUT                         0x0001  /*          */
#define WM8400_DIS_ROUT_MASK                    0x0001  /*          */
#define WM8400_DIS_ROUT_SHIFT                        0  /*          */
#define WM8400_DIS_ROUT_WIDTH                        1  /*          */

/*
                        
 */
#define WM8400_SOFTST                           0x0040  /*        */
#define WM8400_SOFTST_MASK                      0x0040  /*        */
#define WM8400_SOFTST_SHIFT                          6  /*        */
#define WM8400_SOFTST_WIDTH                          1  /*        */
#define WM8400_BUFIOEN                          0x0008  /*         */
#define WM8400_BUFIOEN_MASK                     0x0008  /*         */
#define WM8400_BUFIOEN_SHIFT                         3  /*         */
#define WM8400_BUFIOEN_WIDTH                         1  /*         */
#define WM8400_BUFDCOPEN                        0x0004  /*           */
#define WM8400_BUFDCOPEN_MASK                   0x0004  /*           */
#define WM8400_BUFDCOPEN_SHIFT                       2  /*           */
#define WM8400_BUFDCOPEN_WIDTH                       1  /*           */
#define WM8400_POBCTRL                          0x0002  /*         */
#define WM8400_POBCTRL_MASK                     0x0002  /*         */
#define WM8400_POBCTRL_SHIFT                         1  /*         */
#define WM8400_POBCTRL_WIDTH                         1  /*         */
#define WM8400_VMIDTOG                          0x0001  /*         */
#define WM8400_VMIDTOG_MASK                     0x0001  /*         */
#define WM8400_VMIDTOG_SHIFT                         0  /*         */
#define WM8400_VMIDTOG_WIDTH                         1  /*         */

/*
                       
 */
#define WM8400_MCDSCTH_MASK                     0x00C0  /*                 */
#define WM8400_MCDSCTH_SHIFT                         6  /*                 */
#define WM8400_MCDSCTH_WIDTH                         2  /*                 */
#define WM8400_MCDTHR_MASK                      0x0038  /*                */
#define WM8400_MCDTHR_SHIFT                          3  /*                */
#define WM8400_MCDTHR_WIDTH                          3  /*                */
#define WM8400_MCD                              0x0004  /*     */
#define WM8400_MCD_MASK                         0x0004  /*     */
#define WM8400_MCD_SHIFT                             2  /*     */
#define WM8400_MCD_WIDTH                             1  /*     */
#define WM8400_MBSEL                            0x0001  /*       */
#define WM8400_MBSEL_MASK                       0x0001  /*       */
#define WM8400_MBSEL_SHIFT                           0  /*       */
#define WM8400_MBSEL_WIDTH                           1  /*       */

/*
                             
 */
#define WM8400_FLL_REF_FREQ                     0x1000  /*              */
#define WM8400_FLL_REF_FREQ_MASK                0x1000  /*              */
#define WM8400_FLL_REF_FREQ_SHIFT                   12  /*              */
#define WM8400_FLL_REF_FREQ_WIDTH                    1  /*              */
#define WM8400_FLL_CLK_SRC_MASK                 0x0C00  /*                       */
#define WM8400_FLL_CLK_SRC_SHIFT                    10  /*                       */
#define WM8400_FLL_CLK_SRC_WIDTH                     2  /*                       */
#define WM8400_FLL_FRAC                         0x0200  /*          */
#define WM8400_FLL_FRAC_MASK                    0x0200  /*          */
#define WM8400_FLL_FRAC_SHIFT                        9  /*          */
#define WM8400_FLL_FRAC_WIDTH                        1  /*          */
#define WM8400_FLL_OSC_ENA                      0x0100  /*             */
#define WM8400_FLL_OSC_ENA_MASK                 0x0100  /*             */
#define WM8400_FLL_OSC_ENA_SHIFT                     8  /*             */
#define WM8400_FLL_OSC_ENA_WIDTH                     1  /*             */
#define WM8400_FLL_CTRL_RATE_MASK               0x00E0  /*                       */
#define WM8400_FLL_CTRL_RATE_SHIFT                   5  /*                       */
#define WM8400_FLL_CTRL_RATE_WIDTH                   3  /*                       */
#define WM8400_FLL_FRATIO_MASK                  0x001F  /*                    */
#define WM8400_FLL_FRATIO_SHIFT                      0  /*                    */
#define WM8400_FLL_FRATIO_WIDTH                      5  /*                    */

/*
                             
 */
#define WM8400_FLL_K_MASK                       0xFFFF  /*                */
#define WM8400_FLL_K_SHIFT                           0  /*                */
#define WM8400_FLL_K_WIDTH                          16  /*                */

/*
                             
 */
#define WM8400_FLL_N_MASK                       0x03FF  /*               */
#define WM8400_FLL_N_SHIFT                           0  /*               */
#define WM8400_FLL_N_WIDTH                          10  /*               */

/*
                             
 */
#define WM8400_FLL_TRK_GAIN_MASK                0x0078  /*                      */
#define WM8400_FLL_TRK_GAIN_SHIFT                    3  /*                      */
#define WM8400_FLL_TRK_GAIN_WIDTH                    4  /*                      */
#define WM8400_FLL_OUTDIV_MASK                  0x0007  /*                    */
#define WM8400_FLL_OUTDIV_SHIFT                      0  /*                    */
#define WM8400_FLL_OUTDIV_WIDTH                      3  /*                    */

struct wm8400;
void wm8400_reset_codec_reg_cache(struct wm8400 *wm8400);

#endif
