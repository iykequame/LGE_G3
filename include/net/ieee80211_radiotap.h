/*
 * Copyright (c) 2003, 2004 David Young.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of David Young may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY DAVID YOUNG ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL DAVID
 * YOUNG BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */

/*
                                                         
                                            
 */

#ifndef IEEE80211RADIOTAP_H
#define IEEE80211RADIOTAP_H

#include <linux/if_ether.h>
#include <linux/kernel.h>
#include <asm/unaligned.h>

/*                                                 */
#define PKTHDR_RADIOTAP_VERSION		0

/*                                                              
                                                                
                                                      
  
                                                                 
                                                         
  
                                                                    
                                                                 
                                                                     
                                                                        
                                                                     
           
 */

/*
                                                       
                                                            
 */
struct ieee80211_radiotap_header {
	u8 it_version;		/*                          
                           
                                 
                                 
     */
	u8 it_pad;
	__le16 it_len;		/*                    
                                 
                          
                               
     */
	__le32 it_present;	/*                       
                                     
                                 
                                 
                                     
                         
     */
} __packed;

/*                                                        
                                                          
  
                                                                 
  
                                                             
                                                                
                                                           
  
                                                                
  
                                                              
  
                                                              
  
                                                              
                                  
  
                                                            
  
                       
  
                                                                  
                                                                        
  
                                                               
                      
  
                                                                  
                                                                        
  
                                                                  
                  
  
                                                                 
  
                                                                  
                                   
  
                                                                 
  
                                                                 
                                         
  
                                                             
  
                                                            
                                                                 
                                                                    
              
  
                                                             
  
                                                              
                                                          
                                                            
  
                                                                  
  
                                                                   
                                                                   
                                              
  
                                                                  
                                                                        
  
                                                                    
                                                                
                         
  
                                                           
  
                                                                
                      
  
                                                                  
  
                                                                 
                                       
  
                                                           
  
                                                              
  
                                                           
  
                                                                 
  
                                                         
  
                                                      
  
                                                         
  
                                                          
  
                                              
  
                                                              
                     
  
 */
enum ieee80211_radiotap_type {
	IEEE80211_RADIOTAP_TSFT = 0,
	IEEE80211_RADIOTAP_FLAGS = 1,
	IEEE80211_RADIOTAP_RATE = 2,
	IEEE80211_RADIOTAP_CHANNEL = 3,
	IEEE80211_RADIOTAP_FHSS = 4,
	IEEE80211_RADIOTAP_DBM_ANTSIGNAL = 5,
	IEEE80211_RADIOTAP_DBM_ANTNOISE = 6,
	IEEE80211_RADIOTAP_LOCK_QUALITY = 7,
	IEEE80211_RADIOTAP_TX_ATTENUATION = 8,
	IEEE80211_RADIOTAP_DB_TX_ATTENUATION = 9,
	IEEE80211_RADIOTAP_DBM_TX_POWER = 10,
	IEEE80211_RADIOTAP_ANTENNA = 11,
	IEEE80211_RADIOTAP_DB_ANTSIGNAL = 12,
	IEEE80211_RADIOTAP_DB_ANTNOISE = 13,
	IEEE80211_RADIOTAP_RX_FLAGS = 14,
	IEEE80211_RADIOTAP_TX_FLAGS = 15,
	IEEE80211_RADIOTAP_RTS_RETRIES = 16,
	IEEE80211_RADIOTAP_DATA_RETRIES = 17,

	IEEE80211_RADIOTAP_MCS = 19,

	/*                                                          */
	IEEE80211_RADIOTAP_RADIOTAP_NAMESPACE = 29,
	IEEE80211_RADIOTAP_VENDOR_NAMESPACE = 30,
	IEEE80211_RADIOTAP_EXT = 31
};

/*                */
#define	IEEE80211_CHAN_TURBO	0x0010	/*               */
#define	IEEE80211_CHAN_CCK	0x0020	/*             */
#define	IEEE80211_CHAN_OFDM	0x0040	/*              */
#define	IEEE80211_CHAN_2GHZ	0x0080	/*                         */
#define	IEEE80211_CHAN_5GHZ	0x0100	/*                        */
#define	IEEE80211_CHAN_PASSIVE	0x0200	/*                           */
#define	IEEE80211_CHAN_DYN	0x0400	/*                          */
#define	IEEE80211_CHAN_GFSK	0x0800	/*                         */

/*                              */
#define	IEEE80211_RADIOTAP_F_CFP	0x01	/*              
                   
       */
#define	IEEE80211_RADIOTAP_F_SHORTPRE	0x02	/*              
                   
                 
       */
#define	IEEE80211_RADIOTAP_F_WEP	0x04	/*              
                            
       */
#define	IEEE80211_RADIOTAP_F_FRAG	0x08	/*              
                           
       */
#define	IEEE80211_RADIOTAP_F_FCS	0x10	/*                    */
#define	IEEE80211_RADIOTAP_F_DATAPAD	0x20	/*                          
                                  
                             
       */
#define IEEE80211_RADIOTAP_F_BADFCS	0x40	/*         */

/*                                 */
#define IEEE80211_RADIOTAP_F_RX_BADPLCP	0x0002	/*                    */

/*                                 */
#define IEEE80211_RADIOTAP_F_TX_FAIL	0x0001	/*                        
                 */
#define IEEE80211_RADIOTAP_F_TX_CTS	0x0002	/*                       */
#define IEEE80211_RADIOTAP_F_TX_RTS	0x0004	/*                        */
#define IEEE80211_RADIOTAP_F_TX_NOACK	0x0008	/*                     */


/*                            */
#define IEEE80211_RADIOTAP_MCS_HAVE_BW		0x01
#define IEEE80211_RADIOTAP_MCS_HAVE_MCS		0x02
#define IEEE80211_RADIOTAP_MCS_HAVE_GI		0x04
#define IEEE80211_RADIOTAP_MCS_HAVE_FMT		0x08
#define IEEE80211_RADIOTAP_MCS_HAVE_FEC		0x10

#define IEEE80211_RADIOTAP_MCS_BW_MASK		0x03
#define		IEEE80211_RADIOTAP_MCS_BW_20	0
#define		IEEE80211_RADIOTAP_MCS_BW_40	1
#define		IEEE80211_RADIOTAP_MCS_BW_20L	2
#define		IEEE80211_RADIOTAP_MCS_BW_20U	3
#define IEEE80211_RADIOTAP_MCS_SGI		0x04
#define IEEE80211_RADIOTAP_MCS_FMT_GF		0x08
#define IEEE80211_RADIOTAP_MCS_FEC_LDPC		0x10


/*         */
static inline int ieee80211_get_radiotap_len(unsigned char *data)
{
	struct ieee80211_radiotap_header *hdr =
		(struct ieee80211_radiotap_header *)data;

	return get_unaligned_le16(&hdr->it_len);
}

#endif				/*                      */
