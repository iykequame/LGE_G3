/*
 * stv0900_init.h
 *
 * Driver for ST STV0900 satellite demodulator IC.
 *
 * Copyright (C) ST Microelectronics.
 * Copyright (C) 2009 NetUP Inc.
 * Copyright (C) 2009 Igor M. Liplianin <liplianin@netup.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef STV0900_INIT_H
#define STV0900_INIT_H

#include "stv0900_priv.h"

/*                         */
static const struct stv0900_table stv0900_s2_cn = {
	55,
	{
		{ -30,	13348 }, /*        */
		{ -20,	12640 }, /*        */
		{ -10,	11883 }, /*        */
		{ 0,	11101 }, /*        */
		{ 5,	10718 }, /*         */
		{ 10,	10339 }, /*         */
		{ 15,	9947 }, /*         */
		{ 20,	9552 }, /*         */
		{ 25,	9183 }, /*         */
		{ 30,	8799 }, /*         */
		{ 35,	8422 }, /*         */
		{ 40,	8062 }, /*         */
		{ 45,	7707 }, /*         */
		{ 50,	7353 }, /*         */
		{ 55,	7025 }, /*         */
		{ 60,	6684 }, /*         */
		{ 65,	6331 }, /*         */
		{ 70,	6036 }, /*         */
		{ 75,	5727 }, /*         */
		{ 80,	5437 }, /*         */
		{ 85,	5164 }, /*         */
		{ 90,	4902 }, /*         */
		{ 95,	4653 }, /*         */
		{ 100,	4408 }, /*          */
		{ 105,	4187 }, /*          */
		{ 110,	3961 }, /*          */
		{ 115,	3751 }, /*          */
		{ 120,	3558 }, /*          */
		{ 125,	3368 }, /*          */
		{ 130,	3191 }, /*          */
		{ 135,	3017 }, /*          */
		{ 140,	2862 }, /*          */
		{ 145,	2710 }, /*          */
		{ 150,	2565 }, /*          */
		{ 160,	2300 }, /*          */
		{ 170,	2058 }, /*          */
		{ 180,	1849 }, /*          */
		{ 190,	1663 }, /*          */
		{ 200,	1495 }, /*          */
		{ 210,	1349 }, /*          */
		{ 220,	1222 }, /*          */
		{ 230,	1110 }, /*          */
		{ 240,	1011 }, /*          */
		{ 250,	925 }, /*          */
		{ 260,	853 }, /*          */
		{ 270,	789 }, /*          */
		{ 280,	734 }, /*          */
		{ 290,	690 }, /*          */
		{ 300,	650 }, /*          */
		{ 310,	619 }, /*          */
		{ 320,	593 }, /*          */
		{ 330,	571 }, /*          */
		{ 400,	498 }, /*          */
		{ 450,	484 }, /*          */
		{ 500,	481 }  /*          */
	}
};

/*                            */
static const struct stv0900_table stv0900_rf = {
	14,
	{
		{ -5, 0xCAA1 }, /*     */
		{ -10, 0xC229 }, /*      */
		{ -15, 0xBB08 }, /*      */
		{ -20, 0xB4BC }, /*      */
		{ -25, 0xAD5A }, /*      */
		{ -30, 0xA298 }, /*      */
		{ -35, 0x98A8 }, /*      */
		{ -40, 0x8389 }, /*      */
		{ -45, 0x59BE }, /*      */
		{ -50, 0x3A14 }, /*      */
		{ -55, 0x2D11 }, /*      */
		{ -60, 0x210D }, /*      */
		{ -65, 0xA14F }, /*      */
		{ -70, 0x7AA }	/*      */
	}
};

struct stv0900_car_loop_optim {
	enum fe_stv0900_modcode modcode;
	u8 car_loop_pilots_on_2;
	u8 car_loop_pilots_off_2;
	u8 car_loop_pilots_on_5;
	u8 car_loop_pilots_off_5;
	u8 car_loop_pilots_on_10;
	u8 car_loop_pilots_off_10;
	u8 car_loop_pilots_on_20;
	u8 car_loop_pilots_off_20;
	u8 car_loop_pilots_on_30;
	u8 car_loop_pilots_off_30;

};

struct stv0900_short_frames_car_loop_optim {
	enum fe_stv0900_modulation modulation;
	u8 car_loop_cut12_2;    /*                          */
	u8 car_loop_cut20_2;    /*                          */
	u8 car_loop_cut12_5;    /*                          */
	u8 car_loop_cut20_5;    /*                          */
	u8 car_loop_cut12_10;   /*                          */
	u8 car_loop_cut20_10;   /*                          */
	u8 car_loop_cut12_20;   /*                          */
	u8 car_loop_cut20_20;   /*                          */
	u8 car_loop_cut12_30;   /*                          */
	u8 car_loop_cut20_30;   /*                          */

};

struct stv0900_short_frames_car_loop_optim_vs_mod {
	enum fe_stv0900_modulation modulation;
	u8 car_loop_2;	  /*               */
	u8 car_loop_5;	  /*               */
	u8 car_loop_10;   /*               */
	u8 car_loop_20;   /*               */
	u8 car_loop_30;   /*               */
};

/*                                                                        */
static const struct stv0900_car_loop_optim FE_STV0900_S2CarLoop[14] = {
	/*                                          
                                            */
	{ STV0900_QPSK_12,	0x1C,	0x0D,	0x1B,	0x2C,	0x3A,
				0x1C,	0x2A,	0x3B,	0x2A,	0x1B },
	{ STV0900_QPSK_35,	0x2C,	0x0D,	0x2B,	0x2C,	0x3A,
				0x0C,	0x3A,	0x2B,	0x2A,	0x0B },
	{ STV0900_QPSK_23,	0x2C,	0x0D,	0x2B,	0x2C,	0x0B,
				0x0C,	0x3A,	0x1B,	0x2A,	0x3A },
	{ STV0900_QPSK_34,	0x3C,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_45,	0x3C,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_56,	0x0D,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_89,	0x0D,	0x0D,	0x3B,	0x1C,	0x1B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_910,	0x1D,	0x0D,	0x3B,	0x1C,	0x1B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_8PSK_35,	0x29,	0x3B,	0x09,	0x2B,	0x38,
				0x0B,	0x18,	0x1A,	0x08,	0x0A },
	{ STV0900_8PSK_23,	0x0A,	0x3B,	0x29,	0x2B,	0x19,
				0x0B,	0x38,	0x1A,	0x18,	0x0A },
	{ STV0900_8PSK_34,	0x3A,	0x3B,	0x2A,	0x2B,	0x39,
				0x0B,	0x19,	0x1A,	0x38,	0x0A },
	{ STV0900_8PSK_56,	0x1B,	0x3B,	0x0B,	0x2B,	0x1A,
				0x0B,	0x39,	0x1A,	0x19,	0x0A },
	{ STV0900_8PSK_89,	0x3B,	0x3B,	0x0B,	0x2B,	0x2A,
				0x0B,	0x39,	0x1A,	0x29,	0x39 },
	{ STV0900_8PSK_910,	0x3B,	0x3B, 	0x0B,	0x2B, 	0x2A,
				0x0B,	0x39,	0x1A,	0x29,	0x39 }
};


/*                                                                        */
static const struct stv0900_car_loop_optim FE_STV0900_S2CarLoopCut20[14] = {
	/*                                           
                                            */
	{ STV0900_QPSK_12,	0x1F,	0x3F,	0x1E,	0x3F,	0x3D,
				0x1F,	0x3D,	0x3E,	0x3D,	0x1E },
	{ STV0900_QPSK_35,	0x2F,	0x3F,	0x2E,	0x2F,	0x3D,
				0x0F,	0x0E,	0x2E,	0x3D,	0x0E },
	{ STV0900_QPSK_23,	0x2F,	0x3F,	0x2E,	0x2F,	0x0E,
				0x0F,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_34,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_45,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_56,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_89,	0x3F,	0x3F,	0x3E,	0x1F,	0x1E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_910,	0x3F,	0x3F,	0x3E,	0x1F,	0x1E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_8PSK_35,	0x3c,	0x0c,	0x1c,	0x3b,	0x0c,
				0x3b,	0x2b,	0x2b,	0x1b,	0x2b },
	{ STV0900_8PSK_23,	0x1d,	0x0c,	0x3c,	0x0c,	0x2c,
				0x3b,	0x0c,	0x2b,	0x2b,	0x2b },
	{ STV0900_8PSK_34,	0x0e,	0x1c,	0x3d,	0x0c,	0x0d,
				0x3b,	0x2c,	0x3b,	0x0c,	0x2b },
	{ STV0900_8PSK_56,	0x2e,	0x3e,	0x1e,	0x2e,	0x2d,
				0x1e,	0x3c,	0x2d,	0x2c,	0x1d },
	{ STV0900_8PSK_89,	0x3e,	0x3e,	0x1e,	0x2e,	0x3d,
				0x1e,	0x0d,	0x2d,	0x3c,	0x1d },
	{ STV0900_8PSK_910,	0x3e,	0x3e, 	0x1e,	0x2e, 	0x3d,
				0x1e,	0x1d,	0x2d,	0x0d,	0x1d },
};



/*                                                                            */
static const struct stv0900_car_loop_optim FE_STV0900_S2APSKCarLoopCut20[11] = {
	/*                                           
                                            */
	{ STV0900_16APSK_23,	0x0C,	0x0C,	0x0C,	0x0C,	0x1D,
				0x0C,	0x3C,	0x0C,	0x2C,	0x0C },
	{ STV0900_16APSK_34,	0x0C,	0x0C,	0x0C,	0x0C,	0x0E,
				0x0C,	0x2D,	0x0C,	0x1D,	0x0C },
	{ STV0900_16APSK_45,	0x0C,	0x0C,	0x0C,	0x0C,	0x1E,
				0x0C,	0x3D,	0x0C,	0x2D,	0x0C },
	{ STV0900_16APSK_56,	0x0C,	0x0C,	0x0C,	0x0C,	0x1E,
				0x0C,	0x3D,	0x0C,	0x2D,	0x0C },
	{ STV0900_16APSK_89,	0x0C,	0x0C,	0x0C,	0x0C,	0x2E,
				0x0C,	0x0E,	0x0C,	0x3D,	0x0C },
	{ STV0900_16APSK_910,	0x0C,	0x0C,	0x0C,	0x0C,	0x2E,
				0x0C,	0x0E,	0x0C,	0x3D,	0x0C },
	{ STV0900_32APSK_34,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_45,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_56,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_89,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_910,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
};


/*                                                                       */
static const struct stv0900_car_loop_optim FE_STV0900_S2LowQPCarLoopCut20[3] = {
	/*                                           
                                            */
	{ STV0900_QPSK_14,	0x0F,	0x3F,	0x0E,	0x3F,	0x2D,
				0x2F,	0x2D,	0x1F,	0x3D,	0x3E },
	{ STV0900_QPSK_13,	0x0F,	0x3F,	0x0E,	0x3F,	0x2D,
				0x2F,	0x3D,	0x0F,	0x3D,	0x2E },
	{ STV0900_QPSK_25,	0x1F,	0x3F,	0x1E,	0x3F,	0x3D,
				0x1F,	0x3D,	0x3E,	0x3D,	0x2E }
};


/*                                                                     */
static const
struct stv0900_short_frames_car_loop_optim FE_STV0900_S2ShortCarLoop[4] = {
	/*                                                  
                                                     */
	{ STV0900_QPSK,		0x3C,	0x2F,	0x2B,	0x2E,	0x0B,
				0x0E,	0x3A,	0x0E,	0x2A,	0x3D },
	{ STV0900_8PSK,		0x0B,	0x3E,	0x2A,	0x0E,	0x0A,
				0x2D,	0x19,	0x0D,	0x09,	0x3C },
	{ STV0900_16APSK,	0x1B,	0x1E,	0x1B,	0x1E,	0x1B,
				0x1E,	0x3A,	0x3D,	0x2A,	0x2D },
	{ STV0900_32APSK,	0x1B,	0x1E,	0x1B,	0x1E,	0x1B,
				0x1E,	0x3A,	0x3D,	0x2A,	0x2D }
};

static	const struct stv0900_car_loop_optim FE_STV0900_S2CarLoopCut30[14] = {
	/*                                          
                                            */
	{ STV0900_QPSK_12,	0x3C,	0x2C,	0x0C,	0x2C,	0x1B,
				0x2C,	0x1B,	0x1C,	0x0B, 	0x3B },
	{ STV0900_QPSK_35,	0x0D,	0x0D,	0x0C,	0x0D,	0x1B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_23,	0x1D,	0x0D,	0x0C,	0x1D,	0x2B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_34,	0x1D,	0x1D,	0x0C,	0x1D,	0x2B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_45,	0x2D,	0x1D,	0x1C,	0x1D,	0x2B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_56,	0x2D,	0x1D,	0x1C,	0x1D,	0x2B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_89,	0x3D,	0x2D,	0x1C,	0x1D,	0x3B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_910,	0x3D,	0x2D,	0x1C,	0x1D,	0x3B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_8PSK_35,	0x39,	0x19,	0x39,	0x19,	0x19,
				0x19,	0x19,	0x19,	0x09,	0x19 },
	{ STV0900_8PSK_23,	0x2A,	0x39,	0x1A,	0x0A,	0x39,
				0x0A,	0x29,	0x39,	0x29,	0x0A },
	{ STV0900_8PSK_34,	0x0B,	0x3A,	0x0B,	0x0B,	0x3A,
				0x1B,	0x1A,	0x0B,	0x1A,	0x3A },
	{ STV0900_8PSK_56,	0x0C,	0x1B,	0x3B,	0x2B,	0x1B,
				0x3B,	0x3A,	0x3B,	0x3A,	0x1B },
	{ STV0900_8PSK_89,	0x2C,	0x2C,	0x2C,	0x1C,	0x2B,
				0x0C,	0x0B,	0x3B,	0x0B,	0x1B },
	{ STV0900_8PSK_910,	0x2C,	0x3C,	0x2C,	0x1C,	0x3B,
				0x1C,	0x0B,	0x3B,	0x0B,	0x1B }
};

static	const
struct stv0900_car_loop_optim FE_STV0900_S2APSKCarLoopCut30[11] = {
	/*                                          
                                            */
	{ STV0900_16APSK_23,	0x0A,	0x0A,	0x0A,	0x0A,	0x1A,
				0x0A,	0x3A,	0x0A,	0x2A,	0x0A },
	{ STV0900_16APSK_34,	0x0A,	0x0A,	0x0A,	0x0A,	0x0B,
				0x0A,	0x3B,	0x0A,	0x1B,	0x0A },
	{ STV0900_16APSK_45,	0x0A,	0x0A,	0x0A,	0x0A,	0x1B,
				0x0A,	0x3B,	0x0A,	0x2B,	0x0A },
	{ STV0900_16APSK_56,	0x0A,	0x0A,	0x0A,	0x0A,	0x1B,
				0x0A,	0x3B,	0x0A,	0x2B,	0x0A },
	{ STV0900_16APSK_89,	0x0A,	0x0A,	0x0A,	0x0A,	0x2B,
				0x0A,	0x0C,	0x0A,	0x3B,	0x0A },
	{ STV0900_16APSK_910,	0x0A,	0x0A,	0x0A,	0x0A,	0x2B,
				0x0A,	0x0C,	0x0A,	0x3B,	0x0A },
	{ STV0900_32APSK_34,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_45,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_56,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_89,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_910,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A }
};

static	const
struct stv0900_car_loop_optim FE_STV0900_S2LowQPCarLoopCut30[3] = {
	/*                                          
                                           */
	{ STV0900_QPSK_14,	0x0C,	0x3C,	0x0B,	0x3C,	0x2A,
				0x2C,	0x2A,	0x1C,	0x3A,	0x3B },
	{ STV0900_QPSK_13,	0x0C,	0x3C,	0x0B,	0x3C,	0x2A,
				0x2C,	0x3A,	0x0C,	0x3A,	0x2B },
	{ STV0900_QPSK_25,	0x1C,	0x3C,	0x1B,	0x3C,	0x3A,
				0x1C,	0x3A,	0x3B,	0x3A,	0x2B }
};

static	const struct stv0900_short_frames_car_loop_optim_vs_mod
FE_STV0900_S2ShortCarLoopCut30[4] = {
	/*                                                    */
	{ STV0900_QPSK,		0x2C,	0x2B,	0x0B,	0x0B,	0x3A },
	{ STV0900_8PSK,		0x3B,	0x0B,	0x2A,	0x0A,	0x39 },
	{ STV0900_16APSK,	0x1B,	0x1B,	0x1B,	0x3A,	0x2A },
	{ STV0900_32APSK,	0x1B,	0x1B,	0x1B,	0x3A,	0x2A },

};

static const u16 STV0900_InitVal[181][2] = {
	{ R0900_OUTCFG		, 0x00	},
	{ R0900_AGCRF1CFG	, 0x11	},
	{ R0900_AGCRF2CFG	, 0x13	},
	{ R0900_TSGENERAL1X	, 0x14	},
	{ R0900_TSTTNR2		, 0x21	},
	{ R0900_TSTTNR4		, 0x21	},
	{ R0900_P2_DISTXCTL	, 0x22	},
	{ R0900_P2_F22TX	, 0xc0	},
	{ R0900_P2_F22RX	, 0xc0	},
	{ R0900_P2_DISRXCTL	, 0x00	},
	{ R0900_P2_TNRSTEPS	, 0x87	},
	{ R0900_P2_TNRGAIN	, 0x09	},
	{ R0900_P2_DMDCFGMD	, 0xF9	},
	{ R0900_P2_DEMOD	, 0x08	},
	{ R0900_P2_DMDCFG3	, 0xc4	},
	{ R0900_P2_CARFREQ	, 0xed	},
	{ R0900_P2_TNRCFG2	, 0x02	},
	{ R0900_P2_TNRCFG3	, 0x02	},
	{ R0900_P2_LDT		, 0xd0	},
	{ R0900_P2_LDT2		, 0xb8	},
	{ R0900_P2_TMGCFG	, 0xd2	},
	{ R0900_P2_TMGTHRISE	, 0x20	},
	{ R0900_P2_TMGTHFALL	, 0x00	},
	{ R0900_P2_FECSPY	, 0x88	},
	{ R0900_P2_FSPYDATA	, 0x3a	},
	{ R0900_P2_FBERCPT4	, 0x00	},
	{ R0900_P2_FSPYBER	, 0x10	},
	{ R0900_P2_ERRCTRL1	, 0x35	},
	{ R0900_P2_ERRCTRL2	, 0xc1	},
	{ R0900_P2_CFRICFG	, 0xf8	},
	{ R0900_P2_NOSCFG	, 0x1c	},
	{ R0900_P2_DMDT0M	, 0x20	},
	{ R0900_P2_CORRELMANT	, 0x70	},
	{ R0900_P2_CORRELABS	, 0x88	},
	{ R0900_P2_AGC2O	, 0x5b	},
	{ R0900_P2_AGC2REF	, 0x38	},
	{ R0900_P2_CARCFG	, 0xe4	},
	{ R0900_P2_ACLC		, 0x1A	},
	{ R0900_P2_BCLC		, 0x09	},
	{ R0900_P2_CARHDR	, 0x08	},
	{ R0900_P2_KREFTMG	, 0xc1	},
	{ R0900_P2_SFRUPRATIO	, 0xf0	},
	{ R0900_P2_SFRLOWRATIO	, 0x70	},
	{ R0900_P2_SFRSTEP	, 0x58	},
	{ R0900_P2_TMGCFG2	, 0x01	},
	{ R0900_P2_CAR2CFG	, 0x26	},
	{ R0900_P2_BCLC2S2Q	, 0x86	},
	{ R0900_P2_BCLC2S28	, 0x86	},
	{ R0900_P2_SMAPCOEF7	, 0x77	},
	{ R0900_P2_SMAPCOEF6	, 0x85	},
	{ R0900_P2_SMAPCOEF5	, 0x77	},
	{ R0900_P2_TSCFGL	, 0x20	},
	{ R0900_P2_DMDCFG2	, 0x3b	},
	{ R0900_P2_MODCODLST0	, 0xff	},
	{ R0900_P2_MODCODLST1	, 0xff	},
	{ R0900_P2_MODCODLST2	, 0xff	},
	{ R0900_P2_MODCODLST3	, 0xff	},
	{ R0900_P2_MODCODLST4	, 0xff	},
	{ R0900_P2_MODCODLST5	, 0xff	},
	{ R0900_P2_MODCODLST6	, 0xff	},
	{ R0900_P2_MODCODLST7	, 0xcc	},
	{ R0900_P2_MODCODLST8	, 0xcc	},
	{ R0900_P2_MODCODLST9	, 0xcc	},
	{ R0900_P2_MODCODLSTA	, 0xcc	},
	{ R0900_P2_MODCODLSTB	, 0xcc	},
	{ R0900_P2_MODCODLSTC	, 0xcc	},
	{ R0900_P2_MODCODLSTD	, 0xcc	},
	{ R0900_P2_MODCODLSTE	, 0xcc	},
	{ R0900_P2_MODCODLSTF	, 0xcf	},
	{ R0900_P1_DISTXCTL	, 0x22	},
	{ R0900_P1_F22TX	, 0xc0	},
	{ R0900_P1_F22RX	, 0xc0	},
	{ R0900_P1_DISRXCTL	, 0x00	},
	{ R0900_P1_TNRSTEPS	, 0x87	},
	{ R0900_P1_TNRGAIN	, 0x09	},
	{ R0900_P1_DMDCFGMD	, 0xf9	},
	{ R0900_P1_DEMOD	, 0x08	},
	{ R0900_P1_DMDCFG3	, 0xc4	},
	{ R0900_P1_DMDT0M	, 0x20	},
	{ R0900_P1_CARFREQ	, 0xed	},
	{ R0900_P1_TNRCFG2	, 0x82	},
	{ R0900_P1_TNRCFG3	, 0x02	},
	{ R0900_P1_LDT		, 0xd0	},
	{ R0900_P1_LDT2		, 0xb8	},
	{ R0900_P1_TMGCFG	, 0xd2	},
	{ R0900_P1_TMGTHRISE	, 0x20	},
	{ R0900_P1_TMGTHFALL	, 0x00	},
	{ R0900_P1_SFRUPRATIO	, 0xf0	},
	{ R0900_P1_SFRLOWRATIO	, 0x70	},
	{ R0900_P1_TSCFGL	, 0x20	},
	{ R0900_P1_FECSPY	, 0x88	},
	{ R0900_P1_FSPYDATA	, 0x3a	},
	{ R0900_P1_FBERCPT4	, 0x00	},
	{ R0900_P1_FSPYBER	, 0x10	},
	{ R0900_P1_ERRCTRL1	, 0x35	},
	{ R0900_P1_ERRCTRL2	, 0xc1	},
	{ R0900_P1_CFRICFG	, 0xf8	},
	{ R0900_P1_NOSCFG	, 0x1c	},
	{ R0900_P1_CORRELMANT	, 0x70	},
	{ R0900_P1_CORRELABS	, 0x88	},
	{ R0900_P1_AGC2O	, 0x5b	},
	{ R0900_P1_AGC2REF	, 0x38	},
	{ R0900_P1_CARCFG	, 0xe4	},
	{ R0900_P1_ACLC		, 0x1A	},
	{ R0900_P1_BCLC		, 0x09	},
	{ R0900_P1_CARHDR	, 0x08	},
	{ R0900_P1_KREFTMG	, 0xc1	},
	{ R0900_P1_SFRSTEP	, 0x58	},
	{ R0900_P1_TMGCFG2	, 0x01	},
	{ R0900_P1_CAR2CFG	, 0x26	},
	{ R0900_P1_BCLC2S2Q	, 0x86	},
	{ R0900_P1_BCLC2S28	, 0x86	},
	{ R0900_P1_SMAPCOEF7	, 0x77	},
	{ R0900_P1_SMAPCOEF6	, 0x85	},
	{ R0900_P1_SMAPCOEF5	, 0x77	},
	{ R0900_P1_DMDCFG2	, 0x3b	},
	{ R0900_P1_MODCODLST0	, 0xff	},
	{ R0900_P1_MODCODLST1	, 0xff	},
	{ R0900_P1_MODCODLST2	, 0xff	},
	{ R0900_P1_MODCODLST3	, 0xff	},
	{ R0900_P1_MODCODLST4	, 0xff	},
	{ R0900_P1_MODCODLST5	, 0xff	},
	{ R0900_P1_MODCODLST6	, 0xff	},
	{ R0900_P1_MODCODLST7	, 0xcc	},
	{ R0900_P1_MODCODLST8	, 0xcc	},
	{ R0900_P1_MODCODLST9	, 0xcc	},
	{ R0900_P1_MODCODLSTA	, 0xcc	},
	{ R0900_P1_MODCODLSTB	, 0xcc	},
	{ R0900_P1_MODCODLSTC	, 0xcc	},
	{ R0900_P1_MODCODLSTD	, 0xcc	},
	{ R0900_P1_MODCODLSTE	, 0xcc	},
	{ R0900_P1_MODCODLSTF	, 0xcf	},
	{ R0900_GENCFG		, 0x1d	},
	{ R0900_NBITER_NF4	, 0x37	},
	{ R0900_NBITER_NF5	, 0x29	},
	{ R0900_NBITER_NF6	, 0x37	},
	{ R0900_NBITER_NF7	, 0x33	},
	{ R0900_NBITER_NF8	, 0x31	},
	{ R0900_NBITER_NF9	, 0x2f	},
	{ R0900_NBITER_NF10	, 0x39	},
	{ R0900_NBITER_NF11	, 0x3a	},
	{ R0900_NBITER_NF12	, 0x29	},
	{ R0900_NBITER_NF13	, 0x37	},
	{ R0900_NBITER_NF14	, 0x33	},
	{ R0900_NBITER_NF15	, 0x2f	},
	{ R0900_NBITER_NF16	, 0x39	},
	{ R0900_NBITER_NF17	, 0x3a	},
	{ R0900_NBITERNOERR	, 0x04	},
	{ R0900_GAINLLR_NF4	, 0x0C	},
	{ R0900_GAINLLR_NF5	, 0x0F	},
	{ R0900_GAINLLR_NF6	, 0x11	},
	{ R0900_GAINLLR_NF7	, 0x14	},
	{ R0900_GAINLLR_NF8	, 0x17	},
	{ R0900_GAINLLR_NF9	, 0x19	},
	{ R0900_GAINLLR_NF10	, 0x20	},
	{ R0900_GAINLLR_NF11	, 0x21	},
	{ R0900_GAINLLR_NF12	, 0x0D	},
	{ R0900_GAINLLR_NF13	, 0x0F	},
	{ R0900_GAINLLR_NF14	, 0x13	},
	{ R0900_GAINLLR_NF15	, 0x1A	},
	{ R0900_GAINLLR_NF16	, 0x1F	},
	{ R0900_GAINLLR_NF17	, 0x21	},
	{ R0900_RCCFG2		, 0x20	},
	{ R0900_P1_FECM		, 0x01	}, /*                 */
	{ R0900_P2_FECM		, 0x01	}, /*                 */
	{ R0900_P1_PRVIT	, 0x2F	}, /*                         */
	{ R0900_P2_PRVIT	, 0x2F	}, /*                         */
	{ R0900_STROUT1CFG	, 0x4c	},
	{ R0900_STROUT2CFG	, 0x4c	},
	{ R0900_CLKOUT1CFG	, 0x50	},
	{ R0900_CLKOUT2CFG	, 0x50	},
	{ R0900_DPN1CFG		, 0x4a	},
	{ R0900_DPN2CFG		, 0x4a	},
	{ R0900_DATA71CFG	, 0x52	},
	{ R0900_DATA72CFG	, 0x52	},
	{ R0900_P1_TSCFGM	, 0xc0	},
	{ R0900_P2_TSCFGM	, 0xc0	},
	{ R0900_P1_TSCFGH	, 0xe0	}, /*                */
	{ R0900_P2_TSCFGH	, 0xe0	}, /*                */
	{ R0900_P1_TSSPEED	, 0x40	},
	{ R0900_P2_TSSPEED	, 0x40	},
};

static const u16 STV0900_Cut20_AddOnVal[32][2] = {
	{ R0900_P2_DMDCFG3	, 0xe8	},
	{ R0900_P2_DMDCFG4	, 0x10	},
	{ R0900_P2_CARFREQ	, 0x38	},
	{ R0900_P2_CARHDR	, 0x20	},
	{ R0900_P2_KREFTMG	, 0x5a	},
	{ R0900_P2_SMAPCOEF7	, 0x06	},
	{ R0900_P2_SMAPCOEF6	, 0x00	},
	{ R0900_P2_SMAPCOEF5	, 0x04	},
	{ R0900_P2_NOSCFG	, 0x0c	},
	{ R0900_P1_DMDCFG3	, 0xe8	},
	{ R0900_P1_DMDCFG4	, 0x10	},
	{ R0900_P1_CARFREQ	, 0x38	},
	{ R0900_P1_CARHDR	, 0x20	},
	{ R0900_P1_KREFTMG	, 0x5a	},
	{ R0900_P1_SMAPCOEF7	, 0x06	},
	{ R0900_P1_SMAPCOEF6	, 0x00	},
	{ R0900_P1_SMAPCOEF5	, 0x04	},
	{ R0900_P1_NOSCFG	, 0x0c	},
	{ R0900_GAINLLR_NF4	, 0x21	},
	{ R0900_GAINLLR_NF5	, 0x21	},
	{ R0900_GAINLLR_NF6	, 0x20	},
	{ R0900_GAINLLR_NF7	, 0x1F	},
	{ R0900_GAINLLR_NF8	, 0x1E	},
	{ R0900_GAINLLR_NF9	, 0x1E	},
	{ R0900_GAINLLR_NF10	, 0x1D	},
	{ R0900_GAINLLR_NF11	, 0x1B	},
	{ R0900_GAINLLR_NF12	, 0x20	},
	{ R0900_GAINLLR_NF13	, 0x20	},
	{ R0900_GAINLLR_NF14	, 0x20	},
	{ R0900_GAINLLR_NF15	, 0x20	},
	{ R0900_GAINLLR_NF16	, 0x20	},
	{ R0900_GAINLLR_NF17	, 0x21	}

};

#endif
