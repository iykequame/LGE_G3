#ifndef _INCLUDE_SHANNON_H
#define _INCLUDE_SHANNON_H

/*                                                          
                                      */

#define SHANNON_GPIO_SPI_FLASH		GPIO_GPIO (0)	/*                                           */
#define SHANNON_GPIO_SPI_DSP		GPIO_GPIO (1)	/*                                         */
/*                      */
#define SHANNON_GPIO_SPI_OUTPUT		GPIO_GPIO (10)	/*                            */
#define SHANNON_GPIO_SPI_INPUT		GPIO_GPIO (11)	/*                             */
#define SHANNON_GPIO_SPI_CLOCK		GPIO_GPIO (12)	/*                        */
#define SHANNON_GPIO_SPI_FRAME		GPIO_GPIO (13)	/*                                  */
#define SHANNON_GPIO_SPI_RTS		GPIO_GPIO (14)	/*                            */
#define SHANNON_IRQ_GPIO_SPI_RTS	IRQ_GPIO14
#define SHANNON_GPIO_SPI_CTS		GPIO_GPIO (15)	/*                            */
#define SHANNON_GPIO_IRQ_CODEC		GPIO_GPIO (16)	/*                      */
#define SHANNON_IRQ_GPIO_IRQ_CODEC	IRQ_GPIO16
#define SHANNON_GPIO_DSP_RESET		GPIO_GPIO (17)	/*                                     */
#define SHANNON_GPIO_CODEC_RESET	GPIO_GPIO (18)	/*                                         */
#define SHANNON_GPIO_U3_RTS		GPIO_GPIO (19)	/*    */
#define SHANNON_GPIO_U3_CTS		GPIO_GPIO (20)	/*    */
#define SHANNON_GPIO_SENSE_12V		GPIO_GPIO (21)	/*                                     */
#define SHANNON_GPIO_DISP_EN		22		/*     */
/*                             */
#define SHANNON_GPIO_EJECT_0		24		/*    */
#define SHANNON_GPIO_EJECT_1		25		/*    */
#define SHANNON_GPIO_RDY_0		26		/*    */
#define SHANNON_GPIO_RDY_1		27		/*    */

/*                            */

#define SHANNON_UCB_GPIO_BACKLIGHT	9
#define SHANNON_UCB_GPIO_BRIGHT_MASK  	7
#define SHANNON_UCB_GPIO_BRIGHT		6
#define SHANNON_UCB_GPIO_CONTRAST_MASK	0x3f
#define SHANNON_UCB_GPIO_CONTRAST	0

#endif
