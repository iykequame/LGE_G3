#ifndef HOSTAP_CONFIG_H
#define HOSTAP_CONFIG_H

/*                                                                           
                                                                         
                                                                               
                                                                             
                                                     */
/*                                         */

/*                                                    */
#define PRISM2_MAX_INTERRUPT_EVENTS 20

/*                                                                 */
#define PRISM2_DOWNLOAD_SUPPORT

/*                                                        */
#if !defined(PRISM2_DOWNLOAD_SUPPORT) && defined(CONFIG_HOSTAP_FIRMWARE)
#define PRISM2_DOWNLOAD_SUPPORT
#endif

/*                                                                     */
#ifdef CONFIG_HOSTAP_FIRMWARE_NVRAM
#define PRISM2_NON_VOLATILE_DOWNLOAD
#endif

/*                                                                            
 */
/*                         */

/*                                                                            
                                                                           
                                                                       
        
                                                                       
 */

/*                                               */
/*                         */

/*                                                         */
/*                                */

/*                                                                             
 */
/*                                 */

#endif /*                 */
