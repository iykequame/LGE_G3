/*
 * AD5624R SPI DAC driver
 *
 * Copyright 2010-2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2.
 */
#ifndef SPI_AD5624R_H_
#define SPI_AD5624R_H_

#define AD5624R_DAC_CHANNELS			4

#define AD5624R_ADDR_DAC0			0x0
#define AD5624R_ADDR_DAC1			0x1
#define AD5624R_ADDR_DAC2			0x2
#define AD5624R_ADDR_DAC3			0x3
#define AD5624R_ADDR_ALL_DAC			0x7

#define AD5624R_CMD_WRITE_INPUT_N		0x0
#define AD5624R_CMD_UPDATE_DAC_N		0x1
#define AD5624R_CMD_WRITE_INPUT_N_UPDATE_ALL	0x2
#define AD5624R_CMD_WRITE_INPUT_N_UPDATE_N	0x3
#define AD5624R_CMD_POWERDOWN_DAC		0x4
#define AD5624R_CMD_RESET			0x5
#define AD5624R_CMD_LDAC_SETUP			0x6
#define AD5624R_CMD_INTERNAL_REFER_SETUP	0x7

#define AD5624R_LDAC_PWRDN_NONE			0x0
#define AD5624R_LDAC_PWRDN_1K			0x1
#define AD5624R_LDAC_PWRDN_100K			0x2
#define AD5624R_LDAC_PWRDN_3STATE		0x3

/* 
                                                       
                                       
                                                             
 */

struct ad5624r_chip_info {
	const struct iio_chan_spec	*channels;
	u16				int_vref_mv;
};

/* 
                                                      
                                         
                    
                                                                  
                          
                                           
                                 
                                         
 */

struct ad5624r_state {
	struct spi_device		*us;
	const struct ad5624r_chip_info	*chip_info;
	struct regulator		*reg;
	unsigned short			vref_mv;
	unsigned			pwr_down_mask;
	unsigned			pwr_down_mode;
};

/* 
                                
                                                    
                                            
 */

enum ad5624r_supported_device_ids {
	ID_AD5624R3,
	ID_AD5644R3,
	ID_AD5664R3,
	ID_AD5624R5,
	ID_AD5644R5,
	ID_AD5664R5,
};

#endif /*                */
