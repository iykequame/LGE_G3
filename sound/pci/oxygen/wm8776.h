#ifndef WM8776_H_INCLUDED
#define WM8776_H_INCLUDED

/*
 * the following register names are from:
 * wm8776.h  --  WM8776 ASoC driver
 *
 * Copyright 2009 Wolfson Microelectronics plc
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#define WM8776_HPLVOL		0x00
#define WM8776_HPRVOL		0x01
#define WM8776_HPMASTER		0x02
#define WM8776_DACLVOL		0x03
#define WM8776_DACRVOL		0x04
#define WM8776_DACMASTER	0x05
#define WM8776_PHASESWAP	0x06
#define WM8776_DACCTRL1		0x07
#define WM8776_DACMUTE		0x08
#define WM8776_DACCTRL2		0x09
#define WM8776_DACIFCTRL	0x0a
#define WM8776_ADCIFCTRL	0x0b
#define WM8776_MSTRCTRL		0x0c
#define WM8776_PWRDOWN		0x0d
#define WM8776_ADCLVOL		0x0e
#define WM8776_ADCRVOL		0x0f
#define WM8776_ALCCTRL1		0x10
#define WM8776_ALCCTRL2		0x11
#define WM8776_ALCCTRL3		0x12
#define WM8776_NOISEGATE	0x13
#define WM8776_LIMITER		0x14
#define WM8776_ADCMUX		0x15
#define WM8776_OUTMUX		0x16
#define WM8776_RESET		0x17


/*                        */
#define WM8776_HPATT_MASK	0x07f
#define WM8776_HPZCEN		0x080
#define WM8776_UPDATE		0x100

/*                           */
#define WM8776_DATT_MASK	0x0ff
/*                            */

/*           */
#define WM8776_PH_MASK		0x003

/*          */
#define WM8776_DZCEN		0x001
#define WM8776_ATC		0x002
#define WM8776_IZD		0x004
#define WM8776_TOD		0x008
#define WM8776_PL_LEFT_MASK	0x030
#define WM8776_PL_LEFT_MUTE	0x000
#define WM8776_PL_LEFT_LEFT	0x010
#define WM8776_PL_LEFT_RIGHT	0x020
#define WM8776_PL_LEFT_LRMIX	0x030
#define WM8776_PL_RIGHT_MASK	0x0c0
#define WM8776_PL_RIGHT_MUTE	0x000
#define WM8776_PL_RIGHT_LEFT	0x040
#define WM8776_PL_RIGHT_RIGHT	0x080
#define WM8776_PL_RIGHT_LRMIX	0x0c0

/*         */
#define WM8776_DMUTE		0x001

/*          */
#define WM8776_DEEMPH		0x001
#define WM8776_DZFM_MASK	0x006
#define WM8776_DZFM_NONE	0x000
#define WM8776_DZFM_LR		0x002
#define WM8776_DZFM_BOTH	0x004
#define WM8776_DZFM_EITHER	0x006

/*           */
#define WM8776_DACFMT_MASK	0x003
#define WM8776_DACFMT_RJUST	0x000
#define WM8776_DACFMT_LJUST	0x001
#define WM8776_DACFMT_I2S	0x002
#define WM8776_DACFMT_DSP	0x003
#define WM8776_DACLRP		0x004
#define WM8776_DACBCP		0x008
#define WM8776_DACWL_MASK	0x030
#define WM8776_DACWL_16		0x000
#define WM8776_DACWL_20		0x010
#define WM8776_DACWL_24		0x020
#define WM8776_DACWL_32		0x030

/*           */
#define WM8776_ADCFMT_MASK	0x003
#define WM8776_ADCFMT_RJUST	0x000
#define WM8776_ADCFMT_LJUST	0x001
#define WM8776_ADCFMT_I2S	0x002
#define WM8776_ADCFMT_DSP	0x003
#define WM8776_ADCLRP		0x004
#define WM8776_ADCBCP		0x008
#define WM8776_ADCWL_MASK	0x030
#define WM8776_ADCWL_16		0x000
#define WM8776_ADCWL_20		0x010
#define WM8776_ADCWL_24		0x020
#define WM8776_ADCWL_32		0x030
#define WM8776_ADCMCLK		0x040
#define WM8776_ADCHPD		0x100

/*          */
#define WM8776_ADCRATE_MASK	0x007
#define WM8776_ADCRATE_256	0x002
#define WM8776_ADCRATE_384	0x003
#define WM8776_ADCRATE_512	0x004
#define WM8776_ADCRATE_768	0x005
#define WM8776_ADCOSR		0x008
#define WM8776_DACRATE_MASK	0x070
#define WM8776_DACRATE_128	0x000
#define WM8776_DACRATE_192	0x010
#define WM8776_DACRATE_256	0x020
#define WM8776_DACRATE_384	0x030
#define WM8776_DACRATE_512	0x040
#define WM8776_DACRATE_768	0x050
#define WM8776_DACMS		0x080
#define WM8776_ADCMS		0x100

/*         */
#define WM8776_PDWN		0x001
#define WM8776_ADCPD		0x002
#define WM8776_DACPD		0x004
#define WM8776_HPPD		0x008
#define WM8776_AINPD		0x040

/*                 */
#define WM8776_AGMASK		0x0ff
#define WM8776_ZCA		0x100

/*          */
#define WM8776_LCT_MASK		0x00f
#define WM8776_MAXGAIN_MASK	0x070
#define WM8776_LCSEL_MASK	0x180
#define WM8776_LCSEL_LIMITER	0x000
#define WM8776_LCSEL_ALC_RIGHT 0x080
#define WM8776_LCSEL_ALC_LEFT	0x100
#define WM8776_LCSEL_ALC_STEREO	0x180

/*          */
#define WM8776_HLD_MASK		0x00f
#define WM8776_ALCZC		0x080
#define WM8776_LCEN		0x100

/*          */
#define WM8776_ATK_MASK		0x00f
#define WM8776_DCY_MASK		0x0f0

/*           */
#define WM8776_NGAT		0x001
#define WM8776_NGTH_MASK	0x01c

/*         */
#define WM8776_MAXATTEN_MASK	0x00f
#define WM8776_TRANWIN_MASK	0x070

/*        */
#define WM8776_AMX_MASK		0x01f
#define WM8776_MUTERA		0x040
#define WM8776_MUTELA		0x080
#define WM8776_LRBOTH		0x100

/*        */
#define WM8776_MX_DAC		0x001
#define WM8776_MX_AUX		0x002
#define WM8776_MX_BYPASS	0x004

#endif
