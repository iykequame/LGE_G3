/*
 * Common routines for the Motorola SPS MPC106/8240/107 Host bridge/Mem
 * ctlr/EPIC/etc.
 *
 * Author: Mark A. Greer
 *         mgreer@mvista.com
 *
 * 2001 (c) MontaVista, Software, Inc.  This file is licensed under
 * the terms of the GNU General Public License version 2.  This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __PPC_KERNEL_MPC10X_H
#define __PPC_KERNEL_MPC10X_H

#include <linux/pci_ids.h>
#include <asm/pci-bridge.h>

/*
                                                                          
         
  
                   
                                                                           
                                                                           
                                                                 
                                                                    
  
                   
                                                                           
                                                                           
                                                                 
                                                                    
 */

/*
                                                                           
                    
 */
#define	MPC10X_BRIDGE_106	((PCI_DEVICE_ID_MOTOROLA_MPC106 << 16) |  \
				  PCI_VENDOR_ID_MOTOROLA)
#define	MPC10X_BRIDGE_8240	((0x0003 << 16) | PCI_VENDOR_ID_MOTOROLA)
#define	MPC10X_BRIDGE_107	((0x0004 << 16) | PCI_VENDOR_ID_MOTOROLA)
#define	MPC10X_BRIDGE_8245	((0x0006 << 16) | PCI_VENDOR_ID_MOTOROLA)

/*                               */
#define	MPC10X_MEM_MAP_A		1
#define	MPC10X_MEM_MAP_B		2

/*                          */
#define	MPC10X_MAPA_CNFG_ADDR		0x80000cf8
#define	MPC10X_MAPA_CNFG_DATA		0x80000cfc

#define MPC10X_MAPA_ISA_IO_BASE		0x80000000
#define MPC10X_MAPA_ISA_MEM_BASE	0xc0000000
#define	MPC10X_MAPA_DRAM_OFFSET		0x80000000

#define	MPC10X_MAPA_PCI_INTACK_ADDR	0xbffffff0
#define	MPC10X_MAPA_PCI_IO_START	0x00000000
#define	MPC10X_MAPA_PCI_IO_END	       (0x00800000 - 1)
#define	MPC10X_MAPA_PCI_MEM_START	0x00000000
#define	MPC10X_MAPA_PCI_MEM_END	       (0x20000000 - 1)

#define	MPC10X_MAPA_PCI_MEM_OFFSET	(MPC10X_MAPA_ISA_MEM_BASE -	\
					 MPC10X_MAPA_PCI_MEM_START)

/*                          */
#define	MPC10X_MAPB_CNFG_ADDR		0xfec00000
#define	MPC10X_MAPB_CNFG_DATA		0xfee00000

#define MPC10X_MAPB_ISA_IO_BASE		0xfe000000
#define MPC10X_MAPB_ISA_MEM_BASE	0x80000000
#define	MPC10X_MAPB_DRAM_OFFSET		0x00000000

#define	MPC10X_MAPB_PCI_INTACK_ADDR	0xfef00000
#define	MPC10X_MAPB_PCI_IO_START	0x00000000
#define	MPC10X_MAPB_PCI_IO_END	       (0x00c00000 - 1)
#define	MPC10X_MAPB_PCI_MEM_START	0x80000000
#define	MPC10X_MAPB_PCI_MEM_END	       (0xc0000000 - 1)

#define	MPC10X_MAPB_PCI_MEM_OFFSET	(MPC10X_MAPB_ISA_MEM_BASE -	\
					 MPC10X_MAPB_PCI_MEM_START)

/*                                                             */
#define	MPC10X_SETUP_HOSE(hose, map) {					\
	(hose)->pci_mem_offset = MPC10X_MAP##map##_PCI_MEM_OFFSET;	\
	(hose)->io_space.start = MPC10X_MAP##map##_PCI_IO_START;	\
	(hose)->io_space.end = MPC10X_MAP##map##_PCI_IO_END;		\
	(hose)->mem_space.start = MPC10X_MAP##map##_PCI_MEM_START;	\
	(hose)->mem_space.end = MPC10X_MAP##map##_PCI_MEM_END;		\
	(hose)->io_base_virt = (void *)MPC10X_MAP##map##_ISA_IO_BASE;	\
}


/*                                              */
#define	MPC10X_CFG_PIR_REG		0x09
#define	MPC10X_CFG_PIR_HOST_BRIDGE	0x00
#define	MPC10X_CFG_PIR_AGENT		0x01

#define	MPC10X_CFG_EUMBBAR		0x78

#define	MPC10X_CFG_PICR1_REG		0xa8
#define	MPC10X_CFG_PICR1_ADDR_MAP_MASK	0x00010000
#define	MPC10X_CFG_PICR1_ADDR_MAP_A	0x00010000
#define	MPC10X_CFG_PICR1_ADDR_MAP_B	0x00000000
#define	MPC10X_CFG_PICR1_SPEC_PCI_RD	0x00000004
#define	MPC10X_CFG_PICR1_ST_GATH_EN	0x00000040

#define	MPC10X_CFG_PICR2_REG		0xac
#define	MPC10X_CFG_PICR2_COPYBACK_OPT	0x00000001

#define	MPC10X_CFG_MAPB_OPTIONS_REG	0xe0
#define	MPC10X_CFG_MAPB_OPTIONS_CFAE	0x80	/*                 */
#define	MPC10X_CFG_MAPB_OPTIONS_PFAE	0x40	/*                 */
#define	MPC10X_CFG_MAPB_OPTIONS_DR	0x20	/*           */
#define	MPC10X_CFG_MAPB_OPTIONS_PCICH	0x08	/*                        */
#define	MPC10X_CFG_MAPB_OPTIONS_PROCCH	0x04	/*                         */

/*                                                                        */
#define MPC10X_MCTLR_MEM_START_1	0x80	/*           */
#define MPC10X_MCTLR_MEM_START_2	0x84	/*           */
#define MPC10X_MCTLR_EXT_MEM_START_1	0x88	/*           */
#define MPC10X_MCTLR_EXT_MEM_START_2	0x8c	/*           */

#define MPC10X_MCTLR_MEM_END_1		0x90	/*           */
#define MPC10X_MCTLR_MEM_END_2		0x94	/*           */
#define MPC10X_MCTLR_EXT_MEM_END_1	0x98	/*           */
#define MPC10X_MCTLR_EXT_MEM_END_2	0x9c	/*           */

#define MPC10X_MCTLR_MEM_BANK_ENABLES	0xa0

/*                                */
#define	MPC10X_EUMB_SIZE		0x00100000 /*                       */

#define MPC10X_EUMB_MU_OFFSET		0x00000000 /*                     */
#define MPC10X_EUMB_MU_SIZE		0x00001000 /*                   */
#define MPC10X_EUMB_DMA_OFFSET		0x00001000 /*                     */
#define MPC10X_EUMB_DMA_SIZE		0x00001000 /*                    */
#define MPC10X_EUMB_ATU_OFFSET		0x00002000 /*                       */
#define MPC10X_EUMB_ATU_SIZE		0x00001000 /*                      */
#define MPC10X_EUMB_I2C_OFFSET		0x00003000 /*                     */
#define MPC10X_EUMB_I2C_SIZE		0x00001000 /*                    */
#define MPC10X_EUMB_DUART_OFFSET	0x00004000 /*                              */
#define MPC10X_EUMB_DUART_SIZE		0x00001000 /*                            */
#define	MPC10X_EUMB_EPIC_OFFSET		0x00040000 /*                     */
#define	MPC10X_EUMB_EPIC_SIZE		0x00030000 /*           */
#define MPC10X_EUMB_PM_OFFSET		0x000fe000 /*                                       */
#define MPC10X_EUMB_PM_SIZE		0x00001000 /*                                     */
#define MPC10X_EUMB_WP_OFFSET		0x000ff000 /*                                             */
#define MPC10X_EUMB_WP_SIZE		0x00001000 /*                                           */

/*
                                                       
                                                                           
 */
extern unsigned long			ioremap_base;
#define	MPC10X_MAPA_EUMB_BASE		(ioremap_base - MPC10X_EUMB_SIZE)
#define	MPC10X_MAPB_EUMB_BASE		MPC10X_MAPA_EUMB_BASE

enum ppc_sys_devices {
	MPC10X_IIC1,
	MPC10X_DMA0,
	MPC10X_DMA1,
	MPC10X_UART0,
	MPC10X_UART1,
	NUM_PPC_SYS_DEVS,
};

int mpc10x_bridge_init(struct pci_controller *hose,
		       uint current_map,
		       uint new_map,
		       uint phys_eumb_base);
unsigned long mpc10x_get_mem_size(uint mem_map);
int mpc10x_enable_store_gathering(struct pci_controller *hose);
int mpc10x_disable_store_gathering(struct pci_controller *hose);

/*                                                 */
void mpc10x_set_openpic(void);

#endif	/*                       */
