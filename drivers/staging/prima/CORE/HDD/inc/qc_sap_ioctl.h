/*
 * Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
/*
 * Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _QC_SAP_IOCTL_H_
#define _QC_SAP_IOCTL_H_

/*
                
 */

/*
                                                              
                                                               
                                                      
 */
#define QCSAP_MAX_OPT_IE        256
#define QCSAP_MAX_WSC_IE        256
#define QCSAP_MAX_GET_STA_INFO  512

typedef struct sSSID
{
    u_int8_t       length;
    u_int8_t       ssId[32];
} tSSID;

typedef struct sSSIDInfo
{
   tSSID     ssid;   
   u_int8_t  ssidHidden;
}tSSIDInfo;

typedef enum {
    eQC_DOT11_MODE_ALL = 0,
    eQC_DOT11_MODE_ABG = 0x0001,    //                                   
    eQC_DOT11_MODE_11A = 0x0002,
    eQC_DOT11_MODE_11B = 0x0004,
    eQC_DOT11_MODE_11G = 0x0008,
    eQC_DOT11_MODE_11N = 0x0010,
    eQC_DOT11_MODE_11G_ONLY = 0x0020,
    eQC_DOT11_MODE_11N_ONLY = 0x0040,
    eQC_DOT11_MODE_11B_ONLY = 0x0080,
    eQC_DOT11_MODE_11A_ONLY = 0x0100,
    //                                                                                                         
    //                          
    eQC_DOT11_MODE_AUTO = 0x0200,

} tQcPhyMode;

#define QCSAP_ADDR_LEN  6

typedef u_int8_t qcmacaddr[QCSAP_ADDR_LEN];

struct qc_mac_acl_entry {
    qcmacaddr addr;
    int vlan_id;
};

typedef enum {
    eQC_AUTH_TYPE_OPEN_SYSTEM,
    eQC_AUTH_TYPE_SHARED_KEY,
    eQC_AUTH_TYPE_AUTO_SWITCH
} eQcAuthType; 

typedef enum {
    eQC_WPS_BEACON_IE,
    eQC_WPS_PROBE_RSP_IE,
    eQC_WPS_ASSOC_RSP_IE
} eQCWPSType;

typedef struct s_CommitConfig {

    tSSIDInfo SSIDinfo;

    u_int32_t beacon_int;       /*                 */

    tQcPhyMode hw_mode;         /*               */

    u_int32_t channel;          /*                   */

    u_int32_t max_num_sta;      /*                                         */

    u_int32_t dtim_period;      /*               */
    u_int32_t max_listen_interval;

    enum {
        QC_ACCEPT_UNLESS_DENIED = 0,
        QC_DENY_UNLESS_ACCEPTED = 1,
    } qc_macaddr_acl;
    
    struct qc_mac_acl_entry *accept_mac; /*               */
    u_int32_t num_accept_mac;
    struct qc_mac_acl_entry *deny_mac;   /*               */
    u_int32_t num_deny_mac;

    u_int32_t ap_table_max_size;
    u_int32_t ap_table_expiration_time;

    int qcsap80211d;

    u_int32_t countryCode[3];  //                       

    u_int32_t ht_op_mode_fixed;
    
    /*                                                      
                                                                       
                                                                          
                                                            
                                                            */
    u_int16_t ht_capab;

    u_int32_t qcsap80211n;

    eQcAuthType authType;

    u_int8_t privacy;

    u_int8_t set_ieee8021x;

    u_int8_t RSNWPAReqIE[QCSAP_MAX_OPT_IE];     //                                                  
    u_int16_t RSNWPAReqIELength;  //                                      

    u_int8_t wps_state; //                                               
} s_CommitConfig_t;


/*
                                                     
                                                                                   
 */
struct sQcSapreq_mlme {
    u_int8_t    im_op;          /*                      */
#define QCSAP_MLME_ASSOC        1       /*                   */
#define QCSAP_MLME_DISASSOC     2       /*                      */
#define QCSAP_MLME_DEAUTH       3       /*                        */
#define QCSAP_MLME_AUTHORIZE    4       /*                   */
#define QCSAP_MLME_UNAUTHORIZE  5       /*                     */
#define QCSAP_MLME_MICFAILURE   6       /*                 */
    u_int16_t   im_reason;      /*                    */
    u_int8_t    im_macaddr[QCSAP_ADDR_LEN];
};


/*
                                                                      
 */
struct sQcSapreq_wpaie {
    u_int8_t    wpa_ie[QCSAP_MAX_OPT_IE];
    u_int8_t    wpa_macaddr[QCSAP_ADDR_LEN];
};

/*
                                                                  
 */
struct sQcSapreq_wscie {
    u_int8_t    wsc_macaddr[QCSAP_ADDR_LEN];
    u_int8_t    wsc_ie[QCSAP_MAX_WSC_IE];
};


/*
                                          
 */
typedef struct sQcSapreq_WPSPBCProbeReqIES {
    u_int8_t    macaddr[QCSAP_ADDR_LEN];
    u_int16_t   probeReqIELen;
    u_int8_t    probeReqIE[512]; 
} sQcSapreq_WPSPBCProbeReqIES_t ;

/*
                    
 */

typedef struct
{
    v_U8_t            num_channels;    
    v_U8_t            channels[WNI_CFG_VALID_CHANNEL_LIST_LEN];
}tChannelListInfo, *tpChannelListInfo;


#ifdef __linux__
/*
                                                     
  
                                                                         
                                                           
 */

#define QCSAP_IOCTL_SETPARAM          (SIOCIWFIRSTPRIV+0)
#define QCSAP_IOCTL_GETPARAM          (SIOCIWFIRSTPRIV+1)
#define QCSAP_IOCTL_COMMIT            (SIOCIWFIRSTPRIV+2)
#define QCSAP_IOCTL_SETMLME           (SIOCIWFIRSTPRIV+3)

#define QCSAP_IOCTL_GET_STAWPAIE      (SIOCIWFIRSTPRIV+4)
#define QCSAP_IOCTL_SETWPAIE          (SIOCIWFIRSTPRIV+5)
#define QCSAP_IOCTL_STOPBSS           (SIOCIWFIRSTPRIV+6)
#define QCSAP_IOCTL_VERSION           (SIOCIWFIRSTPRIV+7)
#define QCSAP_IOCTL_GET_WPS_PBC_PROBE_REQ_IES       (SIOCIWFIRSTPRIV+8)
#define QCSAP_IOCTL_GET_CHANNEL       (SIOCIWFIRSTPRIV+9)
#define QCSAP_IOCTL_ASSOC_STA_MACADDR (SIOCIWFIRSTPRIV+10)
#define QCSAP_IOCTL_DISASSOC_STA      (SIOCIWFIRSTPRIV+11)
#define QCSAP_IOCTL_AP_STATS          (SIOCIWFIRSTPRIV+12)
#define QCSAP_IOCTL_GET_STATS         (SIOCIWFIRSTPRIV+13)
#define QCSAP_IOCTL_CLR_STATS         (SIOCIWFIRSTPRIV+14)

#define QCSAP_IOCTL_PRIV_SET_THREE_INT_GET_NONE (SIOCIWFIRSTPRIV+15)
#define WE_SET_WLAN_DBG 1
#define QCSAP_IOCTL_PRIV_SET_VAR_INT_GET_NONE (SIOCIWFIRSTPRIV+16)
#define WE_LOG_DUMP_CMD 1
#define QCSAP_IOCTL_SET_CHANNEL_RANGE (SIOCIWFIRSTPRIV+17)

#define WE_P2P_NOA_CMD  2
//                             
#define WE_MCC_CONFIG_CREDENTIAL 3
#define WE_MCC_CONFIG_PARAMS  4

#define QCSAP_IOCTL_MODIFY_ACL          (SIOCIWFIRSTPRIV+18)
#define QCSAP_IOCTL_GET_CHANNEL_LIST    (SIOCIWFIRSTPRIV+19)
#define QCSAP_IOCTL_SET_TX_POWER        (SIOCIWFIRSTPRIV+20) 
#define QCSAP_IOCTL_GET_STA_INFO        (SIOCIWFIRSTPRIV+21)
#define QCSAP_IOCTL_SET_MAX_TX_POWER    (SIOCIWFIRSTPRIV+22)
#define QCSAP_IOCTL_DATAPATH_SNAP_SHOT  (SIOCIWFIRSTPRIV+23)
#define QCSAP_IOCTL_SET_TRAFFIC_MONITOR (SIOCIWFIRSTPRIV+24)

#define MAX_VAR_ARGS         7
#define QCSAP_IOCTL_PRIV_GET_SOFTAP_LINK_SPEED (SIOCIWFIRSTPRIV + 31)

enum { 
    QCSAP_PARAM_MAX_ASSOC = 1,
    QCSAP_PARAM_GET_WLAN_DBG = 4,
    QCSAP_PARAM_MODULE_DOWN_IND = 5,
    QCSAP_PARAM_CLR_ACL = 6,
    QCSAP_PARAM_ACL_MODE = 7,
    QCSAP_PARAM_HIDE_SSID = 8,
    QCSAP_PARAM_AUTO_CHANNEL = 9,
    QCSAP_PARAM_SET_MC_RATE = 10,
};

int iw_softap_get_channel_list(struct net_device *dev, 
                               struct iw_request_info *info,
                               union iwreq_data *wrqu, char *extra);

#endif /*           */

#endif /*                */
