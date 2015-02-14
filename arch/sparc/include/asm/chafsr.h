#ifndef _SPARC64_CHAFSR_H
#define _SPARC64_CHAFSR_H

/*                                                                   */

/*                                                                       
                        
                 
                       
                  
 */

/*                                                               
                                                                    
 */

/*                                                                      
                         
 */
#define CHAFSR_TL1		(1UL << 63UL) /*     */

/*                                                     
                             
 */
#define CHPAFSR_DTO		(1UL << 59UL) /*     */

/*                                                            
                 
 */
#define CHPAFSR_DBERR		(1UL << 58UL) /*     */

/*                                          */
#define CHPAFSR_THCE		(1UL << 57UL) /*     */
/*                                                    */
#define JPAFSR_JETO		(1UL << 57UL) /*    */

/*                                              */
#define CHPAFSR_TSCE		(1UL << 56UL) /*     */
/*                                      */
#define JPAFSR_SCE		(1UL << 56UL) /*    */

/*                                     */
#define CHPAFSR_TUE		(1UL << 55UL) /*     */
/*                                                           */
#define JPAFSR_JEIC		(1UL << 55UL) /*    */

/*                                                        
                        
 */
#define CHPAFSR_DUE		(1UL << 54UL) /*     */
/*                                                          */
#define JPAFSR_JEIT		(1UL << 54UL) /*    */

/*                                                                      
                                                                         
                                                                    
                                                                 
  
                                                                    
                                                                    
                 
  
                                                                      
                                                                         
                                                                     
                                                 
 */
#define CHAFSR_ME		(1UL << 53UL) /*           */

/*                                                                       
                                     
 */
#define CHAFSR_PRIV		(1UL << 52UL) /*           */

/*                                                                       
                                                                      
                                                                        
 */

/*                                                                   
                                                                    
                              
 */
#define CHAFSR_PERR		(1UL << 51UL) /*           */

/*                                                            
                                                                    
                              
 */
#define CHAFSR_IERR		(1UL << 50UL) /*           */

/*                                                 */
#define CHAFSR_ISAP		(1UL << 49UL) /*           */

/*                                        */
#define CHAFSR_EMC		(1UL << 48UL) /*        */
/*                                   */
#define JPAFSR_ETP		(1UL << 48UL) /*    */

/*                                         */
#define CHAFSR_EMU		(1UL << 47UL) /*        */
/*                                        */
#define JPAFSR_OM		(1UL << 47UL) /*    */

/*                                                                     */
#define CHAFSR_IVC		(1UL << 46UL) /*        */
/*                                */
#define JPAFSR_UMS		(1UL << 46UL) /*    */

/*                                                                      */
#define CHAFSR_IVU		(1UL << 45UL) /*           */

/*                                */
#define CHAFSR_TO		(1UL << 44UL) /*           */

/*                                    */
#define CHAFSR_BERR		(1UL << 43UL) /*           */

/*                                                                      
                         
 */
#define CHAFSR_UCC		(1UL << 42UL) /*           */

/*                                                                     
                         
 */
#define CHAFSR_UCU		(1UL << 41UL) /*           */

/*                                */
#define CHAFSR_CPC		(1UL << 40UL) /*           */

/*                                 */
#define CHAFSR_CPU		(1UL << 39UL) /*           */

/*                                                   */
#define CHAFSR_WDC		(1UL << 38UL) /*           */

/*                                                    */
#define CHAFSR_WDU		(1UL << 37UL) /*           */

/*                                                                   */
#define CHAFSR_EDC		(1UL << 36UL) /*           */

/*                                                                    */
#define CHAFSR_EDU		(1UL << 35UL) /*           */

/*                                                                   */
#define CHAFSR_UE		(1UL << 34UL) /*           */

/*                                                                  */
#define CHAFSR_CE		(1UL << 33UL) /*           */

/*                                                  */
#define JPAFSR_RUE		(1UL << 32UL) /*    */

/*                                                */
#define JPAFSR_RCE		(1UL << 31UL) /*    */

/*                                         */
#define JPAFSR_BP		(1UL << 30UL) /*    */

/*                                                        */
#define JPAFSR_WBP		(1UL << 29UL) /*    */

/*                                                      */
#define JPAFSR_FRC		(1UL << 28UL) /*    */

/*                                                        */
#define JPAFSR_FRU		(1UL << 27UL) /*    */

#define CHAFSR_ERRORS		(CHAFSR_PERR | CHAFSR_IERR | CHAFSR_ISAP | CHAFSR_EMC | \
				 CHAFSR_EMU | CHAFSR_IVC | CHAFSR_IVU | CHAFSR_TO | \
				 CHAFSR_BERR | CHAFSR_UCC | CHAFSR_UCU | CHAFSR_CPC | \
				 CHAFSR_CPU | CHAFSR_WDC | CHAFSR_WDU | CHAFSR_EDC | \
				 CHAFSR_EDU | CHAFSR_UE | CHAFSR_CE)
#define CHPAFSR_ERRORS		(CHPAFSR_DTO | CHPAFSR_DBERR | CHPAFSR_THCE | \
				 CHPAFSR_TSCE | CHPAFSR_TUE | CHPAFSR_DUE | \
				 CHAFSR_PERR | CHAFSR_IERR | CHAFSR_ISAP | CHAFSR_EMC | \
				 CHAFSR_EMU | CHAFSR_IVC | CHAFSR_IVU | CHAFSR_TO | \
				 CHAFSR_BERR | CHAFSR_UCC | CHAFSR_UCU | CHAFSR_CPC | \
				 CHAFSR_CPU | CHAFSR_WDC | CHAFSR_WDU | CHAFSR_EDC | \
				 CHAFSR_EDU | CHAFSR_UE | CHAFSR_CE)
#define JPAFSR_ERRORS		(JPAFSR_JETO | JPAFSR_SCE | JPAFSR_JEIC | \
				 JPAFSR_JEIT | CHAFSR_PERR | CHAFSR_IERR | \
				 CHAFSR_ISAP | JPAFSR_ETP | JPAFSR_OM | \
				 JPAFSR_UMS | CHAFSR_IVU | CHAFSR_TO | \
				 CHAFSR_BERR | CHAFSR_UCC | CHAFSR_UCU | \
				 CHAFSR_CPC | CHAFSR_CPU | CHAFSR_WDC | \
				 CHAFSR_WDU | CHAFSR_EDC | CHAFSR_EDU | \
				 CHAFSR_UE | CHAFSR_CE | JPAFSR_RUE | \
				 JPAFSR_RCE | JPAFSR_BP | JPAFSR_WBP | \
				 JPAFSR_FRC | JPAFSR_FRU)

/*                                                */
#define JPAFSR_JBREQ		(0x7UL << 24UL) /*    */
#define JPAFSR_JBREQ_SHIFT	24UL

/*                          */
#define JPAFSR_ETW		(0x3UL << 22UL) /*    */
#define JPAFSR_ETW_SHIFT	22UL

/*                                                                     
                                                                         
                                                                           
                                                                           
                                                                         
 */
#define CHAFSR_M_SYNDROME	(0xfUL << 16UL) /*           */
#define CHAFSR_M_SYNDROME_SHIFT	16UL

/*                                                          */
#define JPAFSR_AID		(0x1fUL << 9UL) /*    */
#define JPAFSR_AID_SHIFT	9UL

/*                                                                         
                                                                         
                                                                            
                                                                                
                                                                          
 */
#define CHAFSR_E_SYNDROME	(0x1ffUL << 0UL) /*           */
#define CHAFSR_E_SYNDROME_SHIFT	0UL

/*                                                                                 
                                                                                
                                                                                  
                                                                                
                                                                
  
                                                                             
                                                                              
                                                                                
                                                                                  
                                                                                 
                                                                                
                                                                                   
                                                                                 
                                                                  
 */

#endif /*                   */
