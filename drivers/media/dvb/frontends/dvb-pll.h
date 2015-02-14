/*
                                                       
 */

#ifndef __DVB_PLL_H__
#define __DVB_PLL_H__

#include <linux/i2c.h>
#include "dvb_frontend.h"

#define DVB_PLL_UNDEFINED               0
#define DVB_PLL_THOMSON_DTT7579         1
#define DVB_PLL_THOMSON_DTT759X         2
#define DVB_PLL_LG_Z201                 3
#define DVB_PLL_UNKNOWN_1               4
#define DVB_PLL_TUA6010XS               5
#define DVB_PLL_ENV57H1XD5              6
#define DVB_PLL_TUA6034                 7
#define DVB_PLL_TDA665X                 8
#define DVB_PLL_TDED4                   9
#define DVB_PLL_TDHU2                  10
#define DVB_PLL_SAMSUNG_TBMV           11
#define DVB_PLL_PHILIPS_SD1878_TDA8261 12
#define DVB_PLL_OPERA1                 13
#define DVB_PLL_SAMSUNG_DTOS403IH102A  14
#define DVB_PLL_SAMSUNG_TDTC9251DH0    15
#define DVB_PLL_SAMSUNG_TBDU18132      16
#define DVB_PLL_SAMSUNG_TBMU24112      17
#define DVB_PLL_TDEE4		       18

/* 
                                                       
  
                                   
                                                    
                                                           
                                          
                                                       
 */
#if defined(CONFIG_DVB_PLL) || (defined(CONFIG_DVB_PLL_MODULE) && defined(MODULE))
extern struct dvb_frontend *dvb_pll_attach(struct dvb_frontend *fe,
					   int pll_addr,
					   struct i2c_adapter *i2c,
					   unsigned int pll_desc_id);
#else
static inline struct dvb_frontend *dvb_pll_attach(struct dvb_frontend *fe,
					   int pll_addr,
					   struct i2c_adapter *i2c,
					   unsigned int pll_desc_id)
{
	printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
	return NULL;
}
#endif

#endif
