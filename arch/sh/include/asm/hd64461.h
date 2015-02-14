#ifndef __ASM_SH_HD64461
#define __ASM_SH_HD64461
/*
 *	Copyright (C) 2007 Kristoffer Ericson <Kristoffer.Ericson@gmail.com>
 *	Copyright (C) 2004 Paul Mundt
 *	Copyright (C) 2000 YAEGASHI Takeshi
 *
 *		Hitachi HD64461 companion chip support
 *	(please note manual reference 0x10000000 = 0xb0000000)
 */

/*                               */
#define	HD64461_PCC_WINDOW	0x01000000

/*                                         */
#define HD64461_IOBASE		0xb0000000
#define HD64461_IO_OFFSET(x)	(HD64461_IOBASE + (x))
#define	HD64461_PCC0_BASE	HD64461_IO_OFFSET(0x8000000)
#define	HD64461_PCC0_ATTR	(HD64461_PCC0_BASE)				/*             */
#define	HD64461_PCC0_COMM	(HD64461_PCC0_BASE+HD64461_PCC_WINDOW)		/*             */
#define	HD64461_PCC0_IO		(HD64461_PCC0_BASE+2*HD64461_PCC_WINDOW)	/*             */

/*                                    */
#define	HD64461_PCC1_BASE	HD64461_IO_OFFSET(0x4000000)
#define	HD64461_PCC1_ATTR	(HD64461_PCC1_BASE)				/*            */
#define	HD64461_PCC1_COMM	(HD64461_PCC1_BASE+HD64461_PCC_WINDOW)		/*            */

/*                                      */
#define	HD64461_STBCR			HD64461_IO_OFFSET(0x00000000)
#define	HD64461_STBCR_CKIO_STBY		0x2000
#define	HD64461_STBCR_SAFECKE_IST	0x1000
#define	HD64461_STBCR_SLCKE_IST		0x0800
#define	HD64461_STBCR_SAFECKE_OST	0x0400
#define	HD64461_STBCR_SLCKE_OST		0x0200
#define	HD64461_STBCR_SMIAST		0x0100
#define	HD64461_STBCR_SLCDST		0x0080
#define	HD64461_STBCR_SPC0ST		0x0040
#define	HD64461_STBCR_SPC1ST		0x0020
#define	HD64461_STBCR_SAFEST		0x0010
#define	HD64461_STBCR_STM0ST		0x0008
#define	HD64461_STBCR_STM1ST		0x0004
#define	HD64461_STBCR_SIRST		0x0002
#define	HD64461_STBCR_SURTST		0x0001

/*                               */
#define	HD64461_SYSCR		HD64461_IO_OFFSET(0x02)

/*                               */
#define	HD64461_SCPUCR		HD64461_IO_OFFSET(0x04)

/*                       */
#define	HD64461_LCDCBAR		HD64461_IO_OFFSET(0x1000)

/*                        */
#define	HD64461_LCDCLOR		HD64461_IO_OFFSET(0x1002)

/*                         */
#define	HD64461_LCDCCR		HD64461_IO_OFFSET(0x1004)

/*                    */
#define	HD64461_LCDCCR_STBACK	0x0400	/*              */
#define	HD64461_LCDCCR_STREQ	0x0100	/*                 */
#define	HD64461_LCDCCR_MOFF	0x0080	/*            */
#define	HD64461_LCDCCR_REFSEL	0x0040	/*                */
#define	HD64461_LCDCCR_EPON	0x0020	/*              */
#define	HD64461_LCDCCR_SPON	0x0010	/*                */

/*                  */
#define	HD64461_LDR1		HD64461_IO_OFFSET(0x1010)
#define	HD64461_LDR1_DON	0x01	/*            */
#define	HD64461_LDR1_DINV	0x80	/*                */

/*                  */
#define	HD64461_LDR2		HD64461_IO_OFFSET(0x1012)
#define	HD64461_LDHNCR		HD64461_IO_OFFSET(0x1014)	/*                                 */
#define	HD64461_LDHNSR		HD64461_IO_OFFSET(0x1016)	/*                                              */
#define	HD64461_LDVNTR		HD64461_IO_OFFSET(0x1018)	/*                              */
#define	HD64461_LDVNDR		HD64461_IO_OFFSET(0x101a)	/*                                          */
#define	HD64461_LDVSPR		HD64461_IO_OFFSET(0x101c)	/*                                                */

/*                  */
#define	HD64461_LDR3		HD64461_IO_OFFSET(0x101e)

/*                   */
#define	HD64461_CPTWAR		HD64461_IO_OFFSET(0x1030)	/*                                      */
#define	HD64461_CPTWDR		HD64461_IO_OFFSET(0x1032)	/*                                   */
#define	HD64461_CPTRAR		HD64461_IO_OFFSET(0x1034)	/*                                     */
#define	HD64461_CPTRDR		HD64461_IO_OFFSET(0x1036)	/*                                  */

#define	HD64461_GRDOR		HD64461_IO_OFFSET(0x1040)	/*                                    */
#define	HD64461_GRSCR		HD64461_IO_OFFSET(0x1042)	/*                      */
#define	HD64461_GRCFGR		HD64461_IO_OFFSET(0x1044)	/*                                    */

#define	HD64461_GRCFGR_ACCSTATUS	0x10	/*                    */
#define	HD64461_GRCFGR_ACCRESET		0x08	/*                   */
#define	HD64461_GRCFGR_ACCSTART_BITBLT	0x06	/*                          */
#define	HD64461_GRCFGR_ACCSTART_LINE	0x04	/*                                */
#define	HD64461_GRCFGR_COLORDEPTH16	0x01	/*                                    */
#define	HD64461_GRCFGR_COLORDEPTH8	0x01	/*                                   */

/*                        */
#define	HD64461_LNSARH		HD64461_IO_OFFSET(0x1046)	/*                                 */
#define	HD64461_LNSARL		HD64461_IO_OFFSET(0x1048)	/*                                 */
#define	HD64461_LNAXLR		HD64461_IO_OFFSET(0x104a)	/*                            */
#define	HD64461_LNDGR		HD64461_IO_OFFSET(0x104c)	/*                   */
#define	HD64461_LNAXR		HD64461_IO_OFFSET(0x104e)	/*                */
#define	HD64461_LNERTR		HD64461_IO_OFFSET(0x1050)	/*                           */
#define	HD64461_LNMDR		HD64461_IO_OFFSET(0x1052)	/*                    */

/*                  */
#define	HD64461_BBTSSARH	HD64461_IO_OFFSET(0x1054)	/*                                   */
#define	HD64461_BBTSSARL	HD64461_IO_OFFSET(0x1056)	/*                                   */
#define	HD64461_BBTDSARH	HD64461_IO_OFFSET(0x1058)	/*                                        */
#define	HD64461_BBTDSARL	HD64461_IO_OFFSET(0x105a)	/*                                        */
#define	HD64461_BBTDWR		HD64461_IO_OFFSET(0x105c)	/*                                  */
#define	HD64461_BBTDHR		HD64461_IO_OFFSET(0x105e)	/*                                   */
#define	HD64461_BBTPARH		HD64461_IO_OFFSET(0x1060)	/*                                    */
#define	HD64461_BBTPARL		HD64461_IO_OFFSET(0x1062)	/*                                    */
#define	HD64461_BBTMARH		HD64461_IO_OFFSET(0x1064)	/*                                 */
#define	HD64461_BBTMARL		HD64461_IO_OFFSET(0x1066)	/*                                 */
#define	HD64461_BBTROPR		HD64461_IO_OFFSET(0x1068)	/*              */
#define	HD64461_BBTMDR		HD64461_IO_OFFSET(0x106a)	/*                      */

/*                              */
/*                         */
#define	HD64461_PCC0ISR		HD64461_IO_OFFSET(0x2000)	/*                           */
#define	HD64461_PCC0GCR		HD64461_IO_OFFSET(0x2002)	/*                          */
#define	HD64461_PCC0CSCR	HD64461_IO_OFFSET(0x2004)	/*                             */
#define	HD64461_PCC0CSCIER	HD64461_IO_OFFSET(0x2006)	/*                                              */
#define	HD64461_PCC0SCR		HD64461_IO_OFFSET(0x2008)	/*                           */
/*                         */
#define	HD64461_PCC1ISR		HD64461_IO_OFFSET(0x2010)	/*                           */
#define	HD64461_PCC1GCR		HD64461_IO_OFFSET(0x2012)	/*                          */
#define	HD64461_PCC1CSCR	HD64461_IO_OFFSET(0x2014)	/*                             */
#define	HD64461_PCC1CSCIER	HD64461_IO_OFFSET(0x2016)	/*                                              */
#define	HD64461_PCC1SCR		HD64461_IO_OFFSET(0x2018)	/*                           */

/*                               */
#define	HD64461_PCCISR_READY		0x80	/*            */
#define	HD64461_PCCISR_MWP		0x40	/*                      */
#define	HD64461_PCCISR_VS2		0x20	/*                      */
#define	HD64461_PCCISR_VS1		0x10	/*                      */
#define	HD64461_PCCISR_CD2		0x08	/*               */
#define	HD64461_PCCISR_CD1		0x04	/*               */
#define	HD64461_PCCISR_BVD2		0x02	/*           */
#define	HD64461_PCCISR_BVD1		0x01	/*           */

#define	HD64461_PCCISR_PCD_MASK		0x0c	/*             */
#define	HD64461_PCCISR_BVD_MASK		0x03	/*                 */
#define	HD64461_PCCISR_BVD_BATGOOD	0x03	/*              */
#define	HD64461_PCCISR_BVD_BATWARN	0x01	/*                     */
#define	HD64461_PCCISR_BVD_BATDEAD1	0x02	/*              */
#define	HD64461_PCCISR_BVD_BATDEAD2	0x00	/*              */

/*                              */
#define	HD64461_PCCGCR_DRVE		0x80	/*              */
#define	HD64461_PCCGCR_PCCR		0x40	/*               */
#define	HD64461_PCCGCR_PCCT		0x20	/*                               */
#define	HD64461_PCCGCR_VCC0		0x10	/*                              */
#define	HD64461_PCCGCR_PMMOD		0x08	/*             */
#define	HD64461_PCCGCR_PA25		0x04	/*         */
#define	HD64461_PCCGCR_PA24		0x02	/*         */
#define	HD64461_PCCGCR_REG		0x01	/*              */

/*                                 */
#define	HD64461_PCCCSCR_SCDI		0x80	/*                     */
#define	HD64461_PCCCSCR_SRV1		0x40	/*          */
#define	HD64461_PCCCSCR_IREQ		0x20	/*               */
#define	HD64461_PCCCSCR_SC		0x10	/*                            */
#define	HD64461_PCCCSCR_CDC		0x08	/*                         */
#define	HD64461_PCCCSCR_RC		0x04	/*              */
#define	HD64461_PCCCSCR_BW		0x02	/*                        */
#define	HD64461_PCCCSCR_BD		0x01	/*                     */

/*                                                  */
#define	HD64461_PCCCSCIER_CRE		0x80	/*                     */
#define	HD64461_PCCCSCIER_IREQE_MASK	0x60	/*             */
#define	HD64461_PCCCSCIER_IREQE_DISABLED 0x00	/*               */
#define	HD64461_PCCCSCIER_IREQE_LEVEL	0x20	/*                      */
#define	HD64461_PCCCSCIER_IREQE_FALLING	0x40	/*                        */
#define	HD64461_PCCCSCIER_IREQE_RISING	0x60	/*                       */

#define	HD64461_PCCCSCIER_SCE		0x10	/*                      */
#define	HD64461_PCCCSCIER_CDE		0x08	/*                           */
#define	HD64461_PCCCSCIER_RE		0x04	/*                     */
#define	HD64461_PCCCSCIER_BWE		0x02	/*                            */
#define	HD64461_PCCCSCIER_BDE		0x01	/*                           */

/*                               */
#define	HD64461_PCCSCR_VCC1		0x02	/*                       */
#define	HD64461_PCCSCR_SWP		0x01	/*               */

/*                                   */
#define	HD64461_P0OCR		HD64461_IO_OFFSET(0x202a)

/*                                   */
#define	HD64461_P1OCR		HD64461_IO_OFFSET(0x202c)

/*                                  */
#define	HD64461_PGCR		HD64461_IO_OFFSET(0x202e)

/*                        */
#define	HD64461_GPACR		HD64461_IO_OFFSET(0x4000)	/*                             */
#define	HD64461_GPBCR		HD64461_IO_OFFSET(0x4002)	/*                       */
#define	HD64461_GPCCR		HD64461_IO_OFFSET(0x4004)	/*                           */
#define	HD64461_GPDCR		HD64461_IO_OFFSET(0x4006)	/*                           */

/*                             */
#define	HD64461_GPADR		HD64461_IO_OFFSET(0x4010)	/*   */
#define	HD64461_GPBDR		HD64461_IO_OFFSET(0x4012)	/*   */
#define	HD64461_GPCDR		HD64461_IO_OFFSET(0x4014)	/*   */
#define	HD64461_GPDDR		HD64461_IO_OFFSET(0x4016)	/*   */

/*                             */
#define	HD64461_GPAICR		HD64461_IO_OFFSET(0x4020)	/*   */
#define	HD64461_GPBICR		HD64461_IO_OFFSET(0x4022)	/*   */
#define	HD64461_GPCICR		HD64461_IO_OFFSET(0x4024)	/*   */
#define	HD64461_GPDICR		HD64461_IO_OFFSET(0x4026)	/*   */

/*                            */
#define	HD64461_GPAISR		HD64461_IO_OFFSET(0x4040)	/*   */
#define	HD64461_GPBISR		HD64461_IO_OFFSET(0x4042)	/*   */
#define	HD64461_GPCISR		HD64461_IO_OFFSET(0x4044)	/*   */
#define	HD64461_GPDISR		HD64461_IO_OFFSET(0x4046)	/*   */

/*                                                      */
#define	HD64461_NIRR		HD64461_IO_OFFSET(0x5000)
#define	HD64461_NIMR		HD64461_IO_OFFSET(0x5002)

#define	HD64461_IRQBASE		OFFCHIP_IRQ_BASE
#define	OFFCHIP_IRQ_BASE	64
#define	HD64461_IRQ_NUM		16

#define	HD64461_IRQ_UART	(HD64461_IRQBASE+5)
#define	HD64461_IRQ_IRDA	(HD64461_IRQBASE+6)
#define	HD64461_IRQ_TMU1	(HD64461_IRQBASE+9)
#define	HD64461_IRQ_TMU0	(HD64461_IRQBASE+10)
#define	HD64461_IRQ_GPIO	(HD64461_IRQBASE+11)
#define	HD64461_IRQ_AFE		(HD64461_IRQBASE+12)
#define	HD64461_IRQ_PCC1	(HD64461_IRQBASE+13)
#define	HD64461_IRQ_PCC0	(HD64461_IRQBASE+14)

#define __IO_PREFIX	hd64461
#include <asm/io_generic.h>

/*                                        */
void hd64461_register_irq_demux(int irq,
				int (*demux) (int irq, void *dev), void *dev);
void hd64461_unregister_irq_demux(int irq);

#endif
