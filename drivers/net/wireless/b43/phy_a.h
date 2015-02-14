#ifndef LINUX_B43_PHY_A_H_
#define LINUX_B43_PHY_A_H_

#include "phy_common.h"


/*                        */
#define B43_PHY_VERSION_OFDM		B43_PHY_OFDM(0x00)	/*                               */
#define B43_PHY_BBANDCFG		B43_PHY_OFDM(0x01)	/*                 */
#define  B43_PHY_BBANDCFG_RXANT		0x180	/*                      */
#define  B43_PHY_BBANDCFG_RXANT_SHIFT	7
#define B43_PHY_PWRDOWN			B43_PHY_OFDM(0x03)	/*           */
#define B43_PHY_CRSTHRES1_R1		B43_PHY_OFDM(0x06)	/*                                  */
#define B43_PHY_LNAHPFCTL		B43_PHY_OFDM(0x1C)	/*                 */
#define B43_PHY_LPFGAINCTL		B43_PHY_OFDM(0x20)	/*                  */
#define B43_PHY_ADIVRELATED		B43_PHY_OFDM(0x27)	/*              */
#define B43_PHY_CRS0			B43_PHY_OFDM(0x29)
#define  B43_PHY_CRS0_EN		0x4000
#define B43_PHY_PEAK_COUNT		B43_PHY_OFDM(0x30)
#define B43_PHY_ANTDWELL		B43_PHY_OFDM(0x2B)	/*               */
#define  B43_PHY_ANTDWELL_AUTODIV1	0x0100	/*                                      */
#define B43_PHY_ENCORE			B43_PHY_OFDM(0x49)	/*                                  */
#define  B43_PHY_ENCORE_EN		0x0200	/*               */
#define B43_PHY_LMS			B43_PHY_OFDM(0x55)
#define B43_PHY_OFDM61			B43_PHY_OFDM(0x61)	/*              */
#define  B43_PHY_OFDM61_10		0x0010	/*              */
#define B43_PHY_IQBAL			B43_PHY_OFDM(0x69)	/*             */
#define B43_PHY_BBTXDC_BIAS		B43_PHY_OFDM(0x6B)	/*                     */
#define B43_PHY_OTABLECTL		B43_PHY_OFDM(0x72)	/*                                */
#define  B43_PHY_OTABLEOFF		0x03FF	/*                               */
#define  B43_PHY_OTABLENR		0xFC00	/*                               */
#define  B43_PHY_OTABLENR_SHIFT		10
#define B43_PHY_OTABLEI			B43_PHY_OFDM(0x73)	/*                   */
#define B43_PHY_OTABLEQ			B43_PHY_OFDM(0x74)	/*                   */
#define B43_PHY_HPWR_TSSICTL		B43_PHY_OFDM(0x78)	/*                             */
#define B43_PHY_ADCCTL			B43_PHY_OFDM(0x7A)	/*             */
#define B43_PHY_IDLE_TSSI		B43_PHY_OFDM(0x7B)
#define B43_PHY_A_TEMP_SENSE		B43_PHY_OFDM(0x7C)	/*                         */
#define B43_PHY_NRSSITHRES		B43_PHY_OFDM(0x8A)	/*                 */
#define B43_PHY_ANTWRSETT		B43_PHY_OFDM(0x8C)	/*                   */
#define  B43_PHY_ANTWRSETT_ARXDIV	0x2000	/*                                */
#define B43_PHY_CLIPPWRDOWNT		B43_PHY_OFDM(0x93)	/*                          */
#define B43_PHY_OFDM9B			B43_PHY_OFDM(0x9B)	/*              */
#define B43_PHY_N1P1GAIN		B43_PHY_OFDM(0xA0)
#define B43_PHY_P1P2GAIN		B43_PHY_OFDM(0xA1)
#define B43_PHY_N1N2GAIN		B43_PHY_OFDM(0xA2)
#define B43_PHY_CLIPTHRES		B43_PHY_OFDM(0xA3)
#define B43_PHY_CLIPN1P2THRES		B43_PHY_OFDM(0xA4)
#define B43_PHY_CCKSHIFTBITS_WA		B43_PHY_OFDM(0xA5)	/*                                        */
#define B43_PHY_CCKSHIFTBITS		B43_PHY_OFDM(0xA7)	/*              */
#define B43_PHY_DIVSRCHIDX		B43_PHY_OFDM(0xA8)	/*                           */
#define B43_PHY_CLIPP2THRES		B43_PHY_OFDM(0xA9)
#define B43_PHY_CLIPP3THRES		B43_PHY_OFDM(0xAA)
#define B43_PHY_DIVP1P2GAIN		B43_PHY_OFDM(0xAB)
#define B43_PHY_DIVSRCHGAINBACK		B43_PHY_OFDM(0xAD)	/*                          */
#define B43_PHY_DIVSRCHGAINCHNG		B43_PHY_OFDM(0xAE)	/*                            */
#define B43_PHY_CRSTHRES1		B43_PHY_OFDM(0xC0)	/*                                     */
#define B43_PHY_CRSTHRES2		B43_PHY_OFDM(0xC1)	/*                                     */
#define B43_PHY_TSSIP_LTBASE		B43_PHY_OFDM(0x380)	/*                              */
#define B43_PHY_DC_LTBASE		B43_PHY_OFDM(0x3A0)	/*                      */
#define B43_PHY_GAIN_LTBASE		B43_PHY_OFDM(0x3C0)	/*                        */

/*                        */
#define B43_OFDMTAB(number, offset)	(((number) << B43_PHY_OTABLENR_SHIFT) | (offset))
#define B43_OFDMTAB_AGC1		B43_OFDMTAB(0x00, 0)
#define B43_OFDMTAB_GAIN0		B43_OFDMTAB(0x00, 0)
#define B43_OFDMTAB_GAINX		B43_OFDMTAB(0x01, 0)	//           
#define B43_OFDMTAB_GAIN1		B43_OFDMTAB(0x01, 4)
#define B43_OFDMTAB_AGC3		B43_OFDMTAB(0x02, 0)
#define B43_OFDMTAB_GAIN2		B43_OFDMTAB(0x02, 3)
#define B43_OFDMTAB_LNAHPFGAIN1		B43_OFDMTAB(0x03, 0)
#define B43_OFDMTAB_WRSSI		B43_OFDMTAB(0x04, 0)
#define B43_OFDMTAB_LNAHPFGAIN2		B43_OFDMTAB(0x04, 0)
#define B43_OFDMTAB_NOISESCALE		B43_OFDMTAB(0x05, 0)
#define B43_OFDMTAB_AGC2		B43_OFDMTAB(0x06, 0)
#define B43_OFDMTAB_ROTOR		B43_OFDMTAB(0x08, 0)
#define B43_OFDMTAB_ADVRETARD		B43_OFDMTAB(0x09, 0)
#define B43_OFDMTAB_DAC			B43_OFDMTAB(0x0C, 0)
#define B43_OFDMTAB_DC			B43_OFDMTAB(0x0E, 7)
#define B43_OFDMTAB_PWRDYN2		B43_OFDMTAB(0x0E, 12)
#define B43_OFDMTAB_LNAGAIN		B43_OFDMTAB(0x0E, 13)
#define B43_OFDMTAB_UNKNOWN_0F		B43_OFDMTAB(0x0F, 0)	//           
#define B43_OFDMTAB_UNKNOWN_APHY	B43_OFDMTAB(0x0F, 7)	//           
#define B43_OFDMTAB_LPFGAIN		B43_OFDMTAB(0x0F, 12)
#define B43_OFDMTAB_RSSI		B43_OFDMTAB(0x10, 0)
#define B43_OFDMTAB_UNKNOWN_11		B43_OFDMTAB(0x11, 4)	//           
#define B43_OFDMTAB_AGC1_R1		B43_OFDMTAB(0x13, 0)
#define B43_OFDMTAB_GAINX_R1		B43_OFDMTAB(0x14, 0)	//            
#define B43_OFDMTAB_MINSIGSQ		B43_OFDMTAB(0x14, 0)
#define B43_OFDMTAB_AGC3_R1		B43_OFDMTAB(0x15, 0)
#define B43_OFDMTAB_WRSSI_R1		B43_OFDMTAB(0x15, 4)
#define B43_OFDMTAB_TSSI		B43_OFDMTAB(0x15, 0)
#define B43_OFDMTAB_DACRFPABB		B43_OFDMTAB(0x16, 0)
#define B43_OFDMTAB_DACOFF		B43_OFDMTAB(0x17, 0)
#define B43_OFDMTAB_DCBIAS		B43_OFDMTAB(0x18, 0)

u16 b43_ofdmtab_read16(struct b43_wldev *dev, u16 table, u16 offset);
void b43_ofdmtab_write16(struct b43_wldev *dev, u16 table,
			 u16 offset, u16 value);
u32 b43_ofdmtab_read32(struct b43_wldev *dev, u16 table, u16 offset);
void b43_ofdmtab_write32(struct b43_wldev *dev, u16 table,
			 u16 offset, u32 value);


struct b43_phy_a {
	/*                                       
                           */
	const s8 *tssi2dbm;
	/*                  */
	int tgt_idle_tssi;
	/*                   */
	int cur_idle_tssi;//                             

	/*                               */
	u16 txpwr_offset;

	//                          
};

/* 
                                               
                                         
 */
void b43_phy_inita(struct b43_wldev *dev);


struct b43_phy_operations;
extern const struct b43_phy_operations b43_phyops_a;

#endif /*                    */
