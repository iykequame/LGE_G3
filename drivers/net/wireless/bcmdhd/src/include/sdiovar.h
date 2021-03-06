/*
 * Structure used by apps whose drivers access SDIO drivers.
 * Pulled out separately so dhdu and wlu can both use it.
 *
 * Copyright (C) 1999-2014, Broadcom Corporation
 * 
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 * 
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 * 
 *      Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a license
 * other than the GPL, without Broadcom's express prior written consent.
 *
 * $Id: sdiovar.h 241182 2011-02-17 21:50:03Z $
 */

#ifndef _sdiovar_h_
#define _sdiovar_h_

#include <typedefs.h>

/*                                   */
#define BWL_DEFAULT_PACKING
#include <packed_section_start.h>

typedef struct sdreg {
	int func;
	int offset;
	int value;
} sdreg_t;

/*                           */
#define SDH_ERROR_VAL		0x0001	/*       */
#define SDH_TRACE_VAL		0x0002	/*       */
#define SDH_INFO_VAL		0x0004	/*      */
#define SDH_DEBUG_VAL		0x0008	/*       */
#define SDH_DATA_VAL		0x0010	/*      */
#define SDH_CTRL_VAL		0x0020	/*              */
#define SDH_LOG_VAL		0x0040	/*               */
#define SDH_DMA_VAL		0x0080	/*     */

#define NUM_PREV_TRANSACTIONS	16

#ifdef BCMSPI
/*                           */
struct spierrstats_t {
	uint32  dna;	/*                                      */
	uint32  rdunderflow;	/*                                                            */
	uint32  wroverflow;	/*                                                                */

	uint32  f2interrupt;	/*                                        */
	uint32  f3interrupt;	/*                                        */

	uint32  f2rxnotready;	/*                                                   */
	uint32  f3rxnotready;	/*                                                   */

	uint32  hostcmddataerr;	/*                                                        
                                      
                          */
	uint32  f2pktavailable;	/*                                   */
	uint32  f3pktavailable;	/*                                   */

	uint32	dstatus[NUM_PREV_TRANSACTIONS];	/*                                           */
	uint32  spicmd[NUM_PREV_TRANSACTIONS];
};
#endif /*        */

#include <packed_section_end.h>

#endif /*             */
