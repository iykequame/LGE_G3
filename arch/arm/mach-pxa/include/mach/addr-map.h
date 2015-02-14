#ifndef __ASM_MACH_ADDR_MAP_H
#define __ASM_MACH_ADDR_MAP_H

/*
               
 */
#define PXA_CS0_PHYS		0x00000000
#define PXA_CS1_PHYS		0x04000000
#define PXA_CS2_PHYS		0x08000000
#define PXA_CS3_PHYS		0x0C000000
#define PXA_CS4_PHYS		0x10000000
#define PXA_CS5_PHYS		0x14000000

#define PXA300_CS0_PHYS		0x00000000	/*                      */
#define PXA300_CS1_PHYS		0x30000000	/*                      */
#define PXA3xx_CS2_PHYS		0x10000000
#define PXA3xx_CS3_PHYS		0x14000000

/*
                 
 */
#define PERIPH_PHYS		0x40000000
#define PERIPH_VIRT		IOMEM(0xf2000000)
#define PERIPH_SIZE		0x02000000

/*
                                                                
 */
#define PXA2XX_SMEMC_PHYS	0x48000000
#define PXA3XX_SMEMC_PHYS	0x4a000000
#define SMEMC_VIRT		IOMEM(0xf6000000)
#define SMEMC_SIZE		0x00100000

/*
                                             
 */
#define DMEMC_PHYS		0x48100000
#define DMEMC_VIRT		IOMEM(0xf6100000)
#define DMEMC_SIZE		0x00100000

/*
                                                
 */
#define IMEMC_PHYS		0x58000000
#define IMEMC_VIRT		IOMEM(0xfe000000)
#define IMEMC_SIZE		0x00100000

#endif /*                       */
