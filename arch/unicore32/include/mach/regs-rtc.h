/*
                                                  
 */
/*
                         
 */
#define RTC_RTAR	(PKUNITY_RTC_BASE + 0x0000)
/*
                         
 */
#define RTC_RCNR	(PKUNITY_RTC_BASE + 0x0004)
/*
                        
 */
#define RTC_RTTR	(PKUNITY_RTC_BASE + 0x0008)
/*
                          
 */
#define RTC_RTSR	(PKUNITY_RTC_BASE + 0x0010)

/*
                             
 */
#define RTC_RTSR_AL		FIELD(1, 1, 0)
/*
                                  
 */
#define RTC_RTSR_HZ		FIELD(1, 1, 1)
/*
                                      
 */
#define RTC_RTSR_ALE		FIELD(1, 1, 2)
/*
                                           
 */
#define RTC_RTSR_HZE		FIELD(1, 1, 3)

