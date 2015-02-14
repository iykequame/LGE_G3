/*
 * Copyright (c) 1996, 2003 VIA Networking Technologies, Inc.
 * All rights reserved.
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *
 * File: wmgr.h
 *
 * Purpose:
 *
 * Author: lyndon chen
 *
 * Date: Jan 2, 2003
 *
 * Functions:
 *
 * Revision History:
 *
 */

#ifndef __WMGR_H__
#define __WMGR_H__

#include "ttype.h"
#include "80211mgr.h"
#include "80211hdr.h"
#include "wcmd.h"
#include "bssdb.h"
#include "wpa2.h"
#include "vntwifi.h"
#include "card.h"

/*                                                                   */



//          
#define PROBE_DELAY                  100  //     
#define SWITCH_CHANNEL_DELAY         200 //     
#define WLAN_SCAN_MINITIME           25   //     
#define WLAN_SCAN_MAXTIME            100  //     
#define TRIVIAL_SYNC_DIFFERENCE      0    //     
#define DEFAULT_IBSS_BI              100  //     

#define WCMD_ACTIVE_SCAN_TIME   50 //    
#define WCMD_PASSIVE_SCAN_TIME  100 //    


#define DEFAULT_MSDU_LIFETIME           512  //   
#define DEFAULT_MSDU_LIFETIME_RES_64us  8000 //     

#define DEFAULT_MGN_LIFETIME            8    //   
#define DEFAULT_MGN_LIFETIME_RES_64us   125  //     

#define MAKE_BEACON_RESERVED            10  //    


#define TIM_MULTICAST_MASK           0x01
#define TIM_BITMAPOFFSET_MASK        0xFE
#define DEFAULT_DTIM_PERIOD             1

#define AP_LONG_RETRY_LIMIT             4

#define DEFAULT_IBSS_CHANNEL            6  //    


/*                                                                   */

/*                                                                   */

/*                                                                   */
#define timer_expire(timer,next_tick)   mod_timer(&timer, RUN_AT(next_tick))
typedef void (*TimerFunction)(unsigned long);


//                

typedef unsigned char NDIS_802_11_MAC_ADDRESS[6];
typedef struct _NDIS_802_11_AI_REQFI
{
    unsigned short Capabilities;
    unsigned short ListenInterval;
    NDIS_802_11_MAC_ADDRESS  CurrentAPAddress;
} NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI;

typedef struct _NDIS_802_11_AI_RESFI
{
    unsigned short Capabilities;
    unsigned short StatusCode;
    unsigned short AssociationId;
} NDIS_802_11_AI_RESFI, *PNDIS_802_11_AI_RESFI;

typedef struct _NDIS_802_11_ASSOCIATION_INFORMATION
{
    unsigned long Length;
    unsigned short          AvailableRequestFixedIEs;
    NDIS_802_11_AI_REQFI    RequestFixedIEs;
    unsigned long RequestIELength;
    unsigned long OffsetRequestIEs;
    unsigned short          AvailableResponseFixedIEs;
    NDIS_802_11_AI_RESFI    ResponseFixedIEs;
    unsigned long ResponseIELength;
    unsigned long OffsetResponseIEs;
} NDIS_802_11_ASSOCIATION_INFORMATION, *PNDIS_802_11_ASSOCIATION_INFORMATION;



typedef struct tagSAssocInfo {
    NDIS_802_11_ASSOCIATION_INFORMATION     AssocInfo;
    unsigned char abyIEs[WLAN_BEACON_FR_MAXLEN+WLAN_BEACON_FR_MAXLEN];
    //                                                       
    unsigned long RequestIELength;
    unsigned char abyReqIEs[WLAN_BEACON_FR_MAXLEN];
} SAssocInfo, *PSAssocInfo;
//   


/*
                                          


                   
                       
                   
                  
                     
                      
                   
                      
                                                                  


                                                       
*/


//                              
/*
                                  
                        
                         
                     
                  

                                       
*/

typedef enum tagWMAC_SCAN_TYPE {

    WMAC_SCAN_ACTIVE,
    WMAC_SCAN_PASSIVE,
    WMAC_SCAN_HYBRID

} WMAC_SCAN_TYPE, *PWMAC_SCAN_TYPE;


typedef enum tagWMAC_SCAN_STATE {

    WMAC_NO_SCANNING,
    WMAC_IS_SCANNING,
    WMAC_IS_PROBEPENDING

} WMAC_SCAN_STATE, *PWMAC_SCAN_STATE;



//       
//                                                
//                                                               
//                                                                           
//                                                                             
//                                                          
//                                                 
//                                                       
//                                              

typedef enum tagWMAC_BSS_STATE {

    WMAC_STATE_IDLE,
    WMAC_STATE_STARTED,
    WMAC_STATE_JOINTED,
    WMAC_STATE_AUTHPENDING,
    WMAC_STATE_AUTH,
    WMAC_STATE_ASSOCPENDING,
    WMAC_STATE_ASSOC

} WMAC_BSS_STATE, *PWMAC_BSS_STATE;

//                           
typedef enum tagWMAC_CURRENT_MODE {

    WMAC_MODE_STANDBY,
    WMAC_MODE_ESS_STA,
    WMAC_MODE_IBSS_STA,
    WMAC_MODE_ESS_AP

} WMAC_CURRENT_MODE, *PWMAC_CURRENT_MODE;

/*
                                 

                   
                    
                  

                                     
*/


//                                
typedef struct tagSTxMgmtPacket {

    PUWLAN_80211HDR     p80211Header;
    unsigned int cbMPDULen;
    unsigned int cbPayloadLen;

} STxMgmtPacket, *PSTxMgmtPacket;


//                                
typedef struct tagSRxMgmtPacket {

    PUWLAN_80211HDR     p80211Header;
    QWORD               qwLocalTSF;
    unsigned int cbMPDULen;
    unsigned int cbPayloadLen;
    unsigned int uRSSI;
    unsigned char bySQ;
    unsigned char byRxRate;
    unsigned char byRxChannel;

} SRxMgmtPacket, *PSRxMgmtPacket;



typedef struct tagSMgmtObject
{

    void *                   pAdapter;
    //            
    unsigned char abyMACAddr[WLAN_ADDR_LEN];

    //                   
    WMAC_CONFIG_MODE        eConfigMode; //                      
    CARD_PHY_TYPE           eCurrentPHYMode;
    CARD_PHY_TYPE           eConfigPHYMode;


    //                          
    WMAC_CURRENT_MODE       eCurrMode;   //                            
    WMAC_BSS_STATE          eCurrState;  //                      

    PKnownBSS               pCurrBSS;
    unsigned char byCSSGK;
    unsigned char byCSSPK;

//                                                                      
//                                                                         

    //                   
    unsigned int	uCurrChannel;
    unsigned char abyCurrSuppRates[WLAN_IEHDR_LEN + WLAN_RATES_MAXLEN + 1];
    unsigned char abyCurrExtSuppRates[WLAN_IEHDR_LEN + WLAN_RATES_MAXLEN + 1];
    unsigned char abyCurrSSID[WLAN_IEHDR_LEN + WLAN_SSID_MAXLEN + 1];
    unsigned char abyCurrBSSID[WLAN_BSSID_LEN];
    unsigned short wCurrCapInfo;
    unsigned short wCurrAID;
    unsigned short wCurrATIMWindow;
    unsigned short wCurrBeaconPeriod;
    bool bIsDS;
    unsigned char byERPContext;

    CMD_STATE               eCommandState;
    unsigned int	uScanChannel;

    //                         
    unsigned char abyDesireSSID[WLAN_IEHDR_LEN + WLAN_SSID_MAXLEN + 1];
    unsigned char abyDesireBSSID[WLAN_BSSID_LEN];

    //                               
  //                                                                  
    unsigned short wIBSSBeaconPeriod;
    unsigned short wIBSSATIMWindow;
    unsigned int	uIBSSChannel;
    unsigned char abyIBSSSuppRates[WLAN_IEHDR_LEN + WLAN_RATES_MAXLEN + 1];
    unsigned char byAPBBType;
    unsigned char abyWPAIE[MAX_WPA_IE_LEN];
    unsigned short wWPAIELen;

    unsigned int	uAssocCount;
    bool bMoreData;

    //                
    WMAC_SCAN_STATE         eScanState;
    WMAC_SCAN_TYPE          eScanType;
    unsigned int	uScanStartCh;
    unsigned int	uScanEndCh;
    unsigned short wScanSteps;
    unsigned int	uScanBSSType;
    //                    
    unsigned char abyScanSSID[WLAN_IEHDR_LEN + WLAN_SSID_MAXLEN + 1];
    unsigned char abyScanBSSID[WLAN_BSSID_LEN];

    //        
    WMAC_AUTHENTICATION_MODE eAuthenMode;
    WMAC_ENCRYPTION_MODE    eEncryptionMode;
    bool bShareKeyAlgorithm;
    unsigned char abyChallenge[WLAN_CHALLENGE_LEN];
    bool bPrivacyInvoked;

    //                           
    bool bInTIM;
    bool bMulticastTIM;
    unsigned char byDTIMCount;
    unsigned char byDTIMPeriod;

    //                        
    WMAC_POWER_MODE         ePSMode;
    unsigned short wListenInterval;
    unsigned short wCountToWakeUp;
    bool bInTIMWake;
    unsigned char *pbyPSPacketPool;
    unsigned char byPSPacketPool[sizeof(STxMgmtPacket) + WLAN_NULLDATA_FR_MAXLEN];
    bool bRxBeaconInTBTTWake;
    unsigned char abyPSTxMap[MAX_NODE_NUM + 1];

    //                           
    unsigned int	uCmdBusy;
    unsigned int	uCmdHostAPBusy;

    //                       
    unsigned char *pbyMgmtPacketPool;
    unsigned char byMgmtPacketPool[sizeof(STxMgmtPacket) + WLAN_A3FR_MAXLEN];


    //                          
    struct timer_list	    sTimerSecondCallback;

    //                                      
    SRxMgmtPacket           sRxPacket;

    //                                        
    KnownBSS                sBSSList[MAX_BSS_NUM];



    //                         
    //                                                   
    //                                                             
    KnownNodeDB             sNodeDBTable[MAX_NODE_NUM + 1];



    //                 
    SPMKIDCache             gsPMKIDCache;
    bool bRoaming;

    //                    



    //               
    SAssocInfo              sAssocInfo;


    //            
    bool b11hEnable;
    bool bSwitchChannel;
    unsigned char byNewChannel;
    PWLAN_IE_MEASURE_REP    pCurrMeasureEIDRep;
    unsigned int	uLengthOfRepEIDs;
    unsigned char abyCurrentMSRReq[sizeof(STxMgmtPacket) + WLAN_A3FR_MAXLEN];
    unsigned char abyCurrentMSRRep[sizeof(STxMgmtPacket) + WLAN_A3FR_MAXLEN];
    unsigned char abyIECountry[WLAN_A3FR_MAXLEN];
    unsigned char abyIBSSDFSOwner[6];
    unsigned char byIBSSDFSRecovery;

    struct sk_buff  skb;

} SMgmtObject, *PSMgmtObject;


/*                                                                   */


/*                                                                   */


void
vMgrObjectInit(
    void *hDeviceContext
    );

void
vMgrTimerInit(
    void *hDeviceContext
    );

void
vMgrObjectReset(
    void *hDeviceContext
    );

void
vMgrAssocBeginSta(
    void *hDeviceContext,
    PSMgmtObject pMgmt,
    PCMD_STATUS pStatus
    );

void
vMgrReAssocBeginSta(
    void *hDeviceContext,
    PSMgmtObject pMgmt,
    PCMD_STATUS pStatus
    );

void
vMgrDisassocBeginSta(
    void *hDeviceContext,
    PSMgmtObject pMgmt,
    unsigned char *abyDestAddress,
    unsigned short wReason,
    PCMD_STATUS pStatus
    );

void
vMgrAuthenBeginSta(
    void *hDeviceContext,
    PSMgmtObject pMgmt,
    PCMD_STATUS pStatus
    );

void
vMgrCreateOwnIBSS(
    void *hDeviceContext,
    PCMD_STATUS pStatus
    );

void
vMgrJoinBSSBegin(
    void *hDeviceContext,
    PCMD_STATUS pStatus
    );

void
vMgrRxManagePacket(
    void *hDeviceContext,
    PSMgmtObject pMgmt,
    PSRxMgmtPacket pRxPacket
    );

/*
    
              
                         
                       
      
*/

void
vMgrDeAuthenBeginSta(
    void *hDeviceContext,
    PSMgmtObject  pMgmt,
    unsigned char *abyDestAddress,
    unsigned short wReason,
    PCMD_STATUS pStatus
    );

bool
bMgrPrepareBeaconToSend(
    void *hDeviceContext,
    PSMgmtObject pMgmt
    );


bool
bAdd_PMKID_Candidate (
    void *hDeviceContext,
    unsigned char *pbyBSSID,
    PSRSNCapObject psRSNCapObj
    );

void
vFlush_PMKID_Candidate (
    void *hDeviceContext
    );

#endif //           
