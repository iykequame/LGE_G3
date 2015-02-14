#ifndef BCM63XX_CPU_H_
#define BCM63XX_CPU_H_

#include <linux/types.h>
#include <linux/init.h>

/*
                                                                     
                                                                    
                  
 */
#define BCM6338_CPU_ID		0x6338
#define BCM6345_CPU_ID		0x6345
#define BCM6348_CPU_ID		0x6348
#define BCM6358_CPU_ID		0x6358
#define BCM6368_CPU_ID		0x6368

void __init bcm63xx_cpu_init(void);
u16 __bcm63xx_get_cpu_id(void);
u16 bcm63xx_get_cpu_rev(void);
unsigned int bcm63xx_get_cpu_freq(void);

#ifdef CONFIG_BCM63XX_CPU_6338
# ifdef bcm63xx_get_cpu_id
#  undef bcm63xx_get_cpu_id
#  define bcm63xx_get_cpu_id()	__bcm63xx_get_cpu_id()
#  define BCMCPU_RUNTIME_DETECT
# else
#  define bcm63xx_get_cpu_id()	BCM6338_CPU_ID
# endif
# define BCMCPU_IS_6338()	(bcm63xx_get_cpu_id() == BCM6338_CPU_ID)
#else
# define BCMCPU_IS_6338()	(0)
#endif

#ifdef CONFIG_BCM63XX_CPU_6345
# ifdef bcm63xx_get_cpu_id
#  undef bcm63xx_get_cpu_id
#  define bcm63xx_get_cpu_id()	__bcm63xx_get_cpu_id()
#  define BCMCPU_RUNTIME_DETECT
# else
#  define bcm63xx_get_cpu_id()	BCM6345_CPU_ID
# endif
# define BCMCPU_IS_6345()	(bcm63xx_get_cpu_id() == BCM6345_CPU_ID)
#else
# define BCMCPU_IS_6345()	(0)
#endif

#ifdef CONFIG_BCM63XX_CPU_6348
# ifdef bcm63xx_get_cpu_id
#  undef bcm63xx_get_cpu_id
#  define bcm63xx_get_cpu_id()	__bcm63xx_get_cpu_id()
#  define BCMCPU_RUNTIME_DETECT
# else
#  define bcm63xx_get_cpu_id()	BCM6348_CPU_ID
# endif
# define BCMCPU_IS_6348()	(bcm63xx_get_cpu_id() == BCM6348_CPU_ID)
#else
# define BCMCPU_IS_6348()	(0)
#endif

#ifdef CONFIG_BCM63XX_CPU_6358
# ifdef bcm63xx_get_cpu_id
#  undef bcm63xx_get_cpu_id
#  define bcm63xx_get_cpu_id()	__bcm63xx_get_cpu_id()
#  define BCMCPU_RUNTIME_DETECT
# else
#  define bcm63xx_get_cpu_id()	BCM6358_CPU_ID
# endif
# define BCMCPU_IS_6358()	(bcm63xx_get_cpu_id() == BCM6358_CPU_ID)
#else
# define BCMCPU_IS_6358()	(0)
#endif

#ifdef CONFIG_BCM63XX_CPU_6368
# ifdef bcm63xx_get_cpu_id
#  undef bcm63xx_get_cpu_id
#  define bcm63xx_get_cpu_id()	__bcm63xx_get_cpu_id()
#  define BCMCPU_RUNTIME_DETECT
# else
#  define bcm63xx_get_cpu_id()	BCM6368_CPU_ID
# endif
# define BCMCPU_IS_6368()	(bcm63xx_get_cpu_id() == BCM6368_CPU_ID)
#else
# define BCMCPU_IS_6368()	(0)
#endif

#ifndef bcm63xx_get_cpu_id
#error "No CPU support configured"
#endif

/*
                                                                   
                                   
 */
enum bcm63xx_regs_set {
	RSET_DSL_LMEM = 0,
	RSET_PERF,
	RSET_TIMER,
	RSET_WDT,
	RSET_UART0,
	RSET_UART1,
	RSET_GPIO,
	RSET_SPI,
	RSET_SPI2,
	RSET_UDC0,
	RSET_OHCI0,
	RSET_OHCI_PRIV,
	RSET_USBH_PRIV,
	RSET_MPI,
	RSET_PCMCIA,
	RSET_DSL,
	RSET_ENET0,
	RSET_ENET1,
	RSET_ENETDMA,
	RSET_ENETDMAC,
	RSET_ENETDMAS,
	RSET_ENETSW,
	RSET_EHCI0,
	RSET_SDRAM,
	RSET_MEMC,
	RSET_DDR,
	RSET_M2M,
	RSET_ATM,
	RSET_XTM,
	RSET_XTMDMA,
	RSET_XTMDMAC,
	RSET_XTMDMAS,
	RSET_PCM,
	RSET_PCMDMA,
	RSET_PCMDMAC,
	RSET_PCMDMAS,
};

#define RSET_DSL_LMEM_SIZE		(64 * 1024 * 4)
#define RSET_DSL_SIZE			4096
#define RSET_WDT_SIZE			12
#define RSET_ENET_SIZE			2048
#define RSET_ENETDMA_SIZE		2048
#define RSET_ENETSW_SIZE		65536
#define RSET_UART_SIZE			24
#define RSET_UDC_SIZE			256
#define RSET_OHCI_SIZE			256
#define RSET_EHCI_SIZE			256
#define RSET_PCMCIA_SIZE		12
#define RSET_M2M_SIZE			256
#define RSET_ATM_SIZE			4096
#define RSET_XTM_SIZE			10240
#define RSET_XTMDMA_SIZE		256
#define RSET_XTMDMAC_SIZE(chans)	(16 * (chans))
#define RSET_XTMDMAS_SIZE(chans)	(16 * (chans))

/*
                                  
 */
#define BCM_6338_DSL_LMEM_BASE		(0xfff00000)
#define BCM_6338_PERF_BASE		(0xfffe0000)
#define BCM_6338_BB_BASE		(0xfffe0100)
#define BCM_6338_TIMER_BASE		(0xfffe0200)
#define BCM_6338_WDT_BASE		(0xfffe021c)
#define BCM_6338_UART0_BASE		(0xfffe0300)
#define BCM_6338_UART1_BASE		(0xdeadbeef)
#define BCM_6338_GPIO_BASE		(0xfffe0400)
#define BCM_6338_SPI_BASE		(0xfffe0c00)
#define BCM_6338_SPI2_BASE		(0xdeadbeef)
#define BCM_6338_UDC0_BASE		(0xdeadbeef)
#define BCM_6338_USBDMA_BASE		(0xfffe2400)
#define BCM_6338_OHCI0_BASE		(0xdeadbeef)
#define BCM_6338_OHCI_PRIV_BASE		(0xfffe3000)
#define BCM_6338_USBH_PRIV_BASE		(0xdeadbeef)
#define BCM_6338_MPI_BASE		(0xfffe3160)
#define BCM_6338_PCMCIA_BASE		(0xdeadbeef)
#define BCM_6338_SDRAM_REGS_BASE	(0xfffe3100)
#define BCM_6338_DSL_BASE		(0xfffe1000)
#define BCM_6338_UBUS_BASE		(0xdeadbeef)
#define BCM_6338_ENET0_BASE		(0xfffe2800)
#define BCM_6338_ENET1_BASE		(0xdeadbeef)
#define BCM_6338_ENETDMA_BASE		(0xfffe2400)
#define BCM_6338_ENETDMAC_BASE		(0xfffe2500)
#define BCM_6338_ENETDMAS_BASE		(0xfffe2600)
#define BCM_6338_ENETSW_BASE		(0xdeadbeef)
#define BCM_6338_EHCI0_BASE		(0xdeadbeef)
#define BCM_6338_SDRAM_BASE		(0xfffe3100)
#define BCM_6338_MEMC_BASE		(0xdeadbeef)
#define BCM_6338_DDR_BASE		(0xdeadbeef)
#define BCM_6338_M2M_BASE		(0xdeadbeef)
#define BCM_6338_ATM_BASE		(0xfffe2000)
#define BCM_6338_XTM_BASE		(0xdeadbeef)
#define BCM_6338_XTMDMA_BASE		(0xdeadbeef)
#define BCM_6338_XTMDMAC_BASE		(0xdeadbeef)
#define BCM_6338_XTMDMAS_BASE		(0xdeadbeef)
#define BCM_6338_PCM_BASE		(0xdeadbeef)
#define BCM_6338_PCMDMA_BASE		(0xdeadbeef)
#define BCM_6338_PCMDMAC_BASE		(0xdeadbeef)
#define BCM_6338_PCMDMAS_BASE		(0xdeadbeef)

/*
                                  
 */
#define BCM_6345_DSL_LMEM_BASE		(0xfff00000)
#define BCM_6345_PERF_BASE		(0xfffe0000)
#define BCM_6345_BB_BASE		(0xfffe0100)
#define BCM_6345_TIMER_BASE		(0xfffe0200)
#define BCM_6345_WDT_BASE		(0xfffe021c)
#define BCM_6345_UART0_BASE		(0xfffe0300)
#define BCM_6345_UART1_BASE		(0xdeadbeef)
#define BCM_6345_GPIO_BASE		(0xfffe0400)
#define BCM_6345_SPI_BASE		(0xdeadbeef)
#define BCM_6345_SPI2_BASE		(0xdeadbeef)
#define BCM_6345_UDC0_BASE		(0xdeadbeef)
#define BCM_6345_USBDMA_BASE		(0xfffe2800)
#define BCM_6345_ENET0_BASE		(0xfffe1800)
#define BCM_6345_ENETDMA_BASE		(0xfffe2800)
#define BCM_6345_ENETDMAC_BASE		(0xfffe2900)
#define BCM_6345_ENETDMAS_BASE		(0xfffe2a00)
#define BCM_6345_ENETSW_BASE		(0xdeadbeef)
#define BCM_6345_PCMCIA_BASE		(0xfffe2028)
#define BCM_6345_MPI_BASE		(0xfffe2000)
#define BCM_6345_OHCI0_BASE		(0xfffe2100)
#define BCM_6345_OHCI_PRIV_BASE		(0xfffe2200)
#define BCM_6345_USBH_PRIV_BASE		(0xdeadbeef)
#define BCM_6345_SDRAM_REGS_BASE	(0xfffe2300)
#define BCM_6345_DSL_BASE		(0xdeadbeef)
#define BCM_6345_UBUS_BASE		(0xdeadbeef)
#define BCM_6345_ENET1_BASE		(0xdeadbeef)
#define BCM_6345_EHCI0_BASE		(0xdeadbeef)
#define BCM_6345_SDRAM_BASE		(0xfffe2300)
#define BCM_6345_MEMC_BASE		(0xdeadbeef)
#define BCM_6345_DDR_BASE		(0xdeadbeef)
#define BCM_6345_M2M_BASE		(0xdeadbeef)
#define BCM_6345_ATM_BASE		(0xfffe4000)
#define BCM_6345_XTM_BASE		(0xdeadbeef)
#define BCM_6345_XTMDMA_BASE		(0xdeadbeef)
#define BCM_6345_XTMDMAC_BASE		(0xdeadbeef)
#define BCM_6345_XTMDMAS_BASE		(0xdeadbeef)
#define BCM_6345_PCM_BASE		(0xdeadbeef)
#define BCM_6345_PCMDMA_BASE		(0xdeadbeef)
#define BCM_6345_PCMDMAC_BASE		(0xdeadbeef)
#define BCM_6345_PCMDMAS_BASE		(0xdeadbeef)

/*
                                  
 */
#define BCM_6348_DSL_LMEM_BASE		(0xfff00000)
#define BCM_6348_PERF_BASE		(0xfffe0000)
#define BCM_6348_TIMER_BASE		(0xfffe0200)
#define BCM_6348_WDT_BASE		(0xfffe021c)
#define BCM_6348_UART0_BASE		(0xfffe0300)
#define BCM_6348_UART1_BASE		(0xdeadbeef)
#define BCM_6348_GPIO_BASE		(0xfffe0400)
#define BCM_6348_SPI_BASE		(0xfffe0c00)
#define BCM_6348_SPI2_BASE		(0xdeadbeef)
#define BCM_6348_UDC0_BASE		(0xfffe1000)
#define BCM_6348_OHCI0_BASE		(0xfffe1b00)
#define BCM_6348_OHCI_PRIV_BASE		(0xfffe1c00)
#define BCM_6348_USBH_PRIV_BASE		(0xdeadbeef)
#define BCM_6348_MPI_BASE		(0xfffe2000)
#define BCM_6348_PCMCIA_BASE		(0xfffe2054)
#define BCM_6348_SDRAM_REGS_BASE	(0xfffe2300)
#define BCM_6348_M2M_BASE		(0xfffe2800)
#define BCM_6348_DSL_BASE		(0xfffe3000)
#define BCM_6348_ENET0_BASE		(0xfffe6000)
#define BCM_6348_ENET1_BASE		(0xfffe6800)
#define BCM_6348_ENETDMA_BASE		(0xfffe7000)
#define BCM_6348_ENETDMAC_BASE		(0xfffe7100)
#define BCM_6348_ENETDMAS_BASE		(0xfffe7200)
#define BCM_6348_ENETSW_BASE		(0xdeadbeef)
#define BCM_6348_EHCI0_BASE		(0xdeadbeef)
#define BCM_6348_SDRAM_BASE		(0xfffe2300)
#define BCM_6348_MEMC_BASE		(0xdeadbeef)
#define BCM_6348_DDR_BASE		(0xdeadbeef)
#define BCM_6348_ATM_BASE		(0xfffe4000)
#define BCM_6348_XTM_BASE		(0xdeadbeef)
#define BCM_6348_XTMDMA_BASE		(0xdeadbeef)
#define BCM_6348_XTMDMAC_BASE		(0xdeadbeef)
#define BCM_6348_XTMDMAS_BASE		(0xdeadbeef)
#define BCM_6348_PCM_BASE		(0xdeadbeef)
#define BCM_6348_PCMDMA_BASE		(0xdeadbeef)
#define BCM_6348_PCMDMAC_BASE		(0xdeadbeef)
#define BCM_6348_PCMDMAS_BASE		(0xdeadbeef)

/*
                                  
 */
#define BCM_6358_DSL_LMEM_BASE		(0xfff00000)
#define BCM_6358_PERF_BASE		(0xfffe0000)
#define BCM_6358_TIMER_BASE		(0xfffe0040)
#define BCM_6358_WDT_BASE		(0xfffe005c)
#define BCM_6358_UART0_BASE		(0xfffe0100)
#define BCM_6358_UART1_BASE		(0xfffe0120)
#define BCM_6358_GPIO_BASE		(0xfffe0080)
#define BCM_6358_SPI_BASE		(0xdeadbeef)
#define BCM_6358_SPI2_BASE		(0xfffe0800)
#define BCM_6358_UDC0_BASE		(0xfffe0800)
#define BCM_6358_OHCI0_BASE		(0xfffe1400)
#define BCM_6358_OHCI_PRIV_BASE		(0xdeadbeef)
#define BCM_6358_USBH_PRIV_BASE		(0xfffe1500)
#define BCM_6358_MPI_BASE		(0xfffe1000)
#define BCM_6358_PCMCIA_BASE		(0xfffe1054)
#define BCM_6358_SDRAM_REGS_BASE	(0xfffe2300)
#define BCM_6358_M2M_BASE		(0xdeadbeef)
#define BCM_6358_DSL_BASE		(0xfffe3000)
#define BCM_6358_ENET0_BASE		(0xfffe4000)
#define BCM_6358_ENET1_BASE		(0xfffe4800)
#define BCM_6358_ENETDMA_BASE		(0xfffe5000)
#define BCM_6358_ENETDMAC_BASE		(0xfffe5100)
#define BCM_6358_ENETDMAS_BASE		(0xfffe5200)
#define BCM_6358_ENETSW_BASE		(0xdeadbeef)
#define BCM_6358_EHCI0_BASE		(0xfffe1300)
#define BCM_6358_SDRAM_BASE		(0xdeadbeef)
#define BCM_6358_MEMC_BASE		(0xfffe1200)
#define BCM_6358_DDR_BASE		(0xfffe12a0)
#define BCM_6358_ATM_BASE		(0xfffe2000)
#define BCM_6358_XTM_BASE		(0xdeadbeef)
#define BCM_6358_XTMDMA_BASE		(0xdeadbeef)
#define BCM_6358_XTMDMAC_BASE		(0xdeadbeef)
#define BCM_6358_XTMDMAS_BASE		(0xdeadbeef)
#define BCM_6358_PCM_BASE		(0xfffe1600)
#define BCM_6358_PCMDMA_BASE		(0xfffe1800)
#define BCM_6358_PCMDMAC_BASE		(0xfffe1900)
#define BCM_6358_PCMDMAS_BASE		(0xfffe1a00)


/*
                                  
 */
#define BCM_6368_DSL_LMEM_BASE		(0xdeadbeef)
#define BCM_6368_PERF_BASE		(0xb0000000)
#define BCM_6368_TIMER_BASE		(0xb0000040)
#define BCM_6368_WDT_BASE		(0xb000005c)
#define BCM_6368_UART0_BASE		(0xb0000100)
#define BCM_6368_UART1_BASE		(0xb0000120)
#define BCM_6368_GPIO_BASE		(0xb0000080)
#define BCM_6368_SPI_BASE		(0xdeadbeef)
#define BCM_6368_SPI2_BASE		(0xb0000800)
#define BCM_6368_UDC0_BASE		(0xdeadbeef)
#define BCM_6368_OHCI0_BASE		(0xb0001600)
#define BCM_6368_OHCI_PRIV_BASE		(0xdeadbeef)
#define BCM_6368_USBH_PRIV_BASE		(0xb0001700)
#define BCM_6368_MPI_BASE		(0xb0001000)
#define BCM_6368_PCMCIA_BASE		(0xb0001054)
#define BCM_6368_SDRAM_REGS_BASE	(0xdeadbeef)
#define BCM_6368_M2M_BASE		(0xdeadbeef)
#define BCM_6368_DSL_BASE		(0xdeadbeef)
#define BCM_6368_ENET0_BASE		(0xdeadbeef)
#define BCM_6368_ENET1_BASE		(0xdeadbeef)
#define BCM_6368_ENETDMA_BASE		(0xb0006800)
#define BCM_6368_ENETDMAC_BASE		(0xb0006a00)
#define BCM_6368_ENETDMAS_BASE		(0xb0006c00)
#define BCM_6368_ENETSW_BASE		(0xb0f00000)
#define BCM_6368_EHCI0_BASE		(0xb0001500)
#define BCM_6368_SDRAM_BASE		(0xdeadbeef)
#define BCM_6368_MEMC_BASE		(0xb0001200)
#define BCM_6368_DDR_BASE		(0xb0001280)
#define BCM_6368_ATM_BASE		(0xdeadbeef)
#define BCM_6368_XTM_BASE		(0xb0001800)
#define BCM_6368_XTMDMA_BASE		(0xb0005000)
#define BCM_6368_XTMDMAC_BASE		(0xb0005200)
#define BCM_6368_XTMDMAS_BASE		(0xb0005400)
#define BCM_6368_PCM_BASE		(0xb0004000)
#define BCM_6368_PCMDMA_BASE		(0xb0005800)
#define BCM_6368_PCMDMAC_BASE		(0xb0005a00)
#define BCM_6368_PCMDMAS_BASE		(0xb0005c00)


extern const unsigned long *bcm63xx_regs_base;

#define __GEN_RSET_BASE(__cpu, __rset)					\
	case RSET_## __rset :						\
		return BCM_## __cpu ##_## __rset ##_BASE;

#define __GEN_RSET(__cpu)						\
	switch (set) {							\
	__GEN_RSET_BASE(__cpu, DSL_LMEM)				\
	__GEN_RSET_BASE(__cpu, PERF)					\
	__GEN_RSET_BASE(__cpu, TIMER)					\
	__GEN_RSET_BASE(__cpu, WDT)					\
	__GEN_RSET_BASE(__cpu, UART0)					\
	__GEN_RSET_BASE(__cpu, UART1)					\
	__GEN_RSET_BASE(__cpu, GPIO)					\
	__GEN_RSET_BASE(__cpu, SPI)					\
	__GEN_RSET_BASE(__cpu, SPI2)					\
	__GEN_RSET_BASE(__cpu, UDC0)					\
	__GEN_RSET_BASE(__cpu, OHCI0)					\
	__GEN_RSET_BASE(__cpu, OHCI_PRIV)				\
	__GEN_RSET_BASE(__cpu, USBH_PRIV)				\
	__GEN_RSET_BASE(__cpu, MPI)					\
	__GEN_RSET_BASE(__cpu, PCMCIA)					\
	__GEN_RSET_BASE(__cpu, DSL)					\
	__GEN_RSET_BASE(__cpu, ENET0)					\
	__GEN_RSET_BASE(__cpu, ENET1)					\
	__GEN_RSET_BASE(__cpu, ENETDMA)					\
	__GEN_RSET_BASE(__cpu, ENETDMAC)				\
	__GEN_RSET_BASE(__cpu, ENETDMAS)				\
	__GEN_RSET_BASE(__cpu, ENETSW)					\
	__GEN_RSET_BASE(__cpu, EHCI0)					\
	__GEN_RSET_BASE(__cpu, SDRAM)					\
	__GEN_RSET_BASE(__cpu, MEMC)					\
	__GEN_RSET_BASE(__cpu, DDR)					\
	__GEN_RSET_BASE(__cpu, M2M)					\
	__GEN_RSET_BASE(__cpu, ATM)					\
	__GEN_RSET_BASE(__cpu, XTM)					\
	__GEN_RSET_BASE(__cpu, XTMDMA)					\
	__GEN_RSET_BASE(__cpu, XTMDMAC)					\
	__GEN_RSET_BASE(__cpu, XTMDMAS)					\
	__GEN_RSET_BASE(__cpu, PCM)					\
	__GEN_RSET_BASE(__cpu, PCMDMA)					\
	__GEN_RSET_BASE(__cpu, PCMDMAC)					\
	__GEN_RSET_BASE(__cpu, PCMDMAS)					\
	}

#define __GEN_CPU_REGS_TABLE(__cpu)					\
	[RSET_DSL_LMEM]		= BCM_## __cpu ##_DSL_LMEM_BASE,	\
	[RSET_PERF]		= BCM_## __cpu ##_PERF_BASE,		\
	[RSET_TIMER]		= BCM_## __cpu ##_TIMER_BASE,		\
	[RSET_WDT]		= BCM_## __cpu ##_WDT_BASE,		\
	[RSET_UART0]		= BCM_## __cpu ##_UART0_BASE,		\
	[RSET_UART1]		= BCM_## __cpu ##_UART1_BASE,		\
	[RSET_GPIO]		= BCM_## __cpu ##_GPIO_BASE,		\
	[RSET_SPI]		= BCM_## __cpu ##_SPI_BASE,		\
	[RSET_SPI2]		= BCM_## __cpu ##_SPI2_BASE,		\
	[RSET_UDC0]		= BCM_## __cpu ##_UDC0_BASE,		\
	[RSET_OHCI0]		= BCM_## __cpu ##_OHCI0_BASE,		\
	[RSET_OHCI_PRIV]	= BCM_## __cpu ##_OHCI_PRIV_BASE,	\
	[RSET_USBH_PRIV]	= BCM_## __cpu ##_USBH_PRIV_BASE,	\
	[RSET_MPI]		= BCM_## __cpu ##_MPI_BASE,		\
	[RSET_PCMCIA]		= BCM_## __cpu ##_PCMCIA_BASE,		\
	[RSET_DSL]		= BCM_## __cpu ##_DSL_BASE,		\
	[RSET_ENET0]		= BCM_## __cpu ##_ENET0_BASE,		\
	[RSET_ENET1]		= BCM_## __cpu ##_ENET1_BASE,		\
	[RSET_ENETDMA]		= BCM_## __cpu ##_ENETDMA_BASE,		\
	[RSET_ENETDMAC]		= BCM_## __cpu ##_ENETDMAC_BASE,	\
	[RSET_ENETDMAS]		= BCM_## __cpu ##_ENETDMAS_BASE,	\
	[RSET_ENETSW]		= BCM_## __cpu ##_ENETSW_BASE,		\
	[RSET_EHCI0]		= BCM_## __cpu ##_EHCI0_BASE,		\
	[RSET_SDRAM]		= BCM_## __cpu ##_SDRAM_BASE,		\
	[RSET_MEMC]		= BCM_## __cpu ##_MEMC_BASE,		\
	[RSET_DDR]		= BCM_## __cpu ##_DDR_BASE,		\
	[RSET_M2M]		= BCM_## __cpu ##_M2M_BASE,		\
	[RSET_ATM]		= BCM_## __cpu ##_ATM_BASE,		\
	[RSET_XTM]		= BCM_## __cpu ##_XTM_BASE,		\
	[RSET_XTMDMA]		= BCM_## __cpu ##_XTMDMA_BASE,		\
	[RSET_XTMDMAC]		= BCM_## __cpu ##_XTMDMAC_BASE,		\
	[RSET_XTMDMAS]		= BCM_## __cpu ##_XTMDMAS_BASE,		\
	[RSET_PCM]		= BCM_## __cpu ##_PCM_BASE,		\
	[RSET_PCMDMA]		= BCM_## __cpu ##_PCMDMA_BASE,		\
	[RSET_PCMDMAC]		= BCM_## __cpu ##_PCMDMAC_BASE,		\
	[RSET_PCMDMAS]		= BCM_## __cpu ##_PCMDMAS_BASE,		\


static inline unsigned long bcm63xx_regset_address(enum bcm63xx_regs_set set)
{
#ifdef BCMCPU_RUNTIME_DETECT
	return bcm63xx_regs_base[set];
#else
#ifdef CONFIG_BCM63XX_CPU_6338
	__GEN_RSET(6338)
#endif
#ifdef CONFIG_BCM63XX_CPU_6345
	__GEN_RSET(6345)
#endif
#ifdef CONFIG_BCM63XX_CPU_6348
	__GEN_RSET(6348)
#endif
#ifdef CONFIG_BCM63XX_CPU_6358
	__GEN_RSET(6358)
#endif
#ifdef CONFIG_BCM63XX_CPU_6368
	__GEN_RSET(6368)
#endif
#endif
	/*           */
	return 0;
}

/*
                                    
 */
enum bcm63xx_irq {
	IRQ_TIMER = 0,
	IRQ_UART0,
	IRQ_UART1,
	IRQ_DSL,
	IRQ_ENET0,
	IRQ_ENET1,
	IRQ_ENET_PHY,
	IRQ_OHCI0,
	IRQ_EHCI0,
	IRQ_ENET0_RXDMA,
	IRQ_ENET0_TXDMA,
	IRQ_ENET1_RXDMA,
	IRQ_ENET1_TXDMA,
	IRQ_PCI,
	IRQ_PCMCIA,
	IRQ_ATM,
	IRQ_ENETSW_RXDMA0,
	IRQ_ENETSW_RXDMA1,
	IRQ_ENETSW_RXDMA2,
	IRQ_ENETSW_RXDMA3,
	IRQ_ENETSW_TXDMA0,
	IRQ_ENETSW_TXDMA1,
	IRQ_ENETSW_TXDMA2,
	IRQ_ENETSW_TXDMA3,
	IRQ_XTM,
	IRQ_XTM_DMA0,
};

/*
            
 */
#define BCM_6338_TIMER_IRQ		(IRQ_INTERNAL_BASE + 0)
#define BCM_6338_UART0_IRQ		(IRQ_INTERNAL_BASE + 2)
#define BCM_6338_UART1_IRQ		0
#define BCM_6338_DSL_IRQ		(IRQ_INTERNAL_BASE + 5)
#define BCM_6338_ENET0_IRQ		(IRQ_INTERNAL_BASE + 8)
#define BCM_6338_ENET1_IRQ		0
#define BCM_6338_ENET_PHY_IRQ		(IRQ_INTERNAL_BASE + 9)
#define BCM_6338_OHCI0_IRQ		0
#define BCM_6338_EHCI0_IRQ		0
#define BCM_6338_ENET0_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 15)
#define BCM_6338_ENET0_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 16)
#define BCM_6338_ENET1_RXDMA_IRQ	0
#define BCM_6338_ENET1_TXDMA_IRQ	0
#define BCM_6338_PCI_IRQ		0
#define BCM_6338_PCMCIA_IRQ		0
#define BCM_6338_ATM_IRQ		0
#define BCM_6338_ENETSW_RXDMA0_IRQ	0
#define BCM_6338_ENETSW_RXDMA1_IRQ	0
#define BCM_6338_ENETSW_RXDMA2_IRQ	0
#define BCM_6338_ENETSW_RXDMA3_IRQ	0
#define BCM_6338_ENETSW_TXDMA0_IRQ	0
#define BCM_6338_ENETSW_TXDMA1_IRQ	0
#define BCM_6338_ENETSW_TXDMA2_IRQ	0
#define BCM_6338_ENETSW_TXDMA3_IRQ	0
#define BCM_6338_XTM_IRQ		0
#define BCM_6338_XTM_DMA0_IRQ		0

/*
            
 */
#define BCM_6345_TIMER_IRQ		(IRQ_INTERNAL_BASE + 0)
#define BCM_6345_UART0_IRQ		(IRQ_INTERNAL_BASE + 2)
#define BCM_6345_UART1_IRQ		0
#define BCM_6345_DSL_IRQ		(IRQ_INTERNAL_BASE + 3)
#define BCM_6345_ENET0_IRQ		(IRQ_INTERNAL_BASE + 8)
#define BCM_6345_ENET1_IRQ		0
#define BCM_6345_ENET_PHY_IRQ		(IRQ_INTERNAL_BASE + 12)
#define BCM_6345_OHCI0_IRQ		0
#define BCM_6345_EHCI0_IRQ		0
#define BCM_6345_ENET0_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 13 + 1)
#define BCM_6345_ENET0_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 13 + 2)
#define BCM_6345_ENET1_RXDMA_IRQ	0
#define BCM_6345_ENET1_TXDMA_IRQ	0
#define BCM_6345_PCI_IRQ		0
#define BCM_6345_PCMCIA_IRQ		0
#define BCM_6345_ATM_IRQ		0
#define BCM_6345_ENETSW_RXDMA0_IRQ	0
#define BCM_6345_ENETSW_RXDMA1_IRQ	0
#define BCM_6345_ENETSW_RXDMA2_IRQ	0
#define BCM_6345_ENETSW_RXDMA3_IRQ	0
#define BCM_6345_ENETSW_TXDMA0_IRQ	0
#define BCM_6345_ENETSW_TXDMA1_IRQ	0
#define BCM_6345_ENETSW_TXDMA2_IRQ	0
#define BCM_6345_ENETSW_TXDMA3_IRQ	0
#define BCM_6345_XTM_IRQ		0
#define BCM_6345_XTM_DMA0_IRQ		0

/*
            
 */
#define BCM_6348_TIMER_IRQ		(IRQ_INTERNAL_BASE + 0)
#define BCM_6348_UART0_IRQ		(IRQ_INTERNAL_BASE + 2)
#define BCM_6348_UART1_IRQ		0
#define BCM_6348_DSL_IRQ		(IRQ_INTERNAL_BASE + 4)
#define BCM_6348_ENET0_IRQ		(IRQ_INTERNAL_BASE + 8)
#define BCM_6348_ENET1_IRQ		(IRQ_INTERNAL_BASE + 7)
#define BCM_6348_ENET_PHY_IRQ		(IRQ_INTERNAL_BASE + 9)
#define BCM_6348_OHCI0_IRQ		(IRQ_INTERNAL_BASE + 12)
#define BCM_6348_EHCI0_IRQ		0
#define BCM_6348_ENET0_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 20)
#define BCM_6348_ENET0_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 21)
#define BCM_6348_ENET1_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 22)
#define BCM_6348_ENET1_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 23)
#define BCM_6348_PCI_IRQ		(IRQ_INTERNAL_BASE + 24)
#define BCM_6348_PCMCIA_IRQ		(IRQ_INTERNAL_BASE + 24)
#define BCM_6348_ATM_IRQ		(IRQ_INTERNAL_BASE + 5)
#define BCM_6348_ENETSW_RXDMA0_IRQ	0
#define BCM_6348_ENETSW_RXDMA1_IRQ	0
#define BCM_6348_ENETSW_RXDMA2_IRQ	0
#define BCM_6348_ENETSW_RXDMA3_IRQ	0
#define BCM_6348_ENETSW_TXDMA0_IRQ	0
#define BCM_6348_ENETSW_TXDMA1_IRQ	0
#define BCM_6348_ENETSW_TXDMA2_IRQ	0
#define BCM_6348_ENETSW_TXDMA3_IRQ	0
#define BCM_6348_XTM_IRQ		0
#define BCM_6348_XTM_DMA0_IRQ		0

/*
            
 */
#define BCM_6358_TIMER_IRQ		(IRQ_INTERNAL_BASE + 0)
#define BCM_6358_UART0_IRQ		(IRQ_INTERNAL_BASE + 2)
#define BCM_6358_UART1_IRQ		(IRQ_INTERNAL_BASE + 3)
#define BCM_6358_DSL_IRQ		(IRQ_INTERNAL_BASE + 29)
#define BCM_6358_ENET0_IRQ		(IRQ_INTERNAL_BASE + 8)
#define BCM_6358_ENET1_IRQ		(IRQ_INTERNAL_BASE + 6)
#define BCM_6358_ENET_PHY_IRQ		(IRQ_INTERNAL_BASE + 9)
#define BCM_6358_OHCI0_IRQ		(IRQ_INTERNAL_BASE + 5)
#define BCM_6358_EHCI0_IRQ		(IRQ_INTERNAL_BASE + 10)
#define BCM_6358_ENET0_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 15)
#define BCM_6358_ENET0_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 16)
#define BCM_6358_ENET1_RXDMA_IRQ	(IRQ_INTERNAL_BASE + 17)
#define BCM_6358_ENET1_TXDMA_IRQ	(IRQ_INTERNAL_BASE + 18)
#define BCM_6358_PCI_IRQ		(IRQ_INTERNAL_BASE + 31)
#define BCM_6358_PCMCIA_IRQ		(IRQ_INTERNAL_BASE + 24)
#define BCM_6358_ATM_IRQ		(IRQ_INTERNAL_BASE + 19)
#define BCM_6358_ENETSW_RXDMA0_IRQ	0
#define BCM_6358_ENETSW_RXDMA1_IRQ	0
#define BCM_6358_ENETSW_RXDMA2_IRQ	0
#define BCM_6358_ENETSW_RXDMA3_IRQ	0
#define BCM_6358_ENETSW_TXDMA0_IRQ	0
#define BCM_6358_ENETSW_TXDMA1_IRQ	0
#define BCM_6358_ENETSW_TXDMA2_IRQ	0
#define BCM_6358_ENETSW_TXDMA3_IRQ	0
#define BCM_6358_XTM_IRQ		0
#define BCM_6358_XTM_DMA0_IRQ		0

#define BCM_6358_PCM_DMA0_IRQ		(IRQ_INTERNAL_BASE + 23)
#define BCM_6358_PCM_DMA1_IRQ		(IRQ_INTERNAL_BASE + 24)
#define BCM_6358_EXT_IRQ0		(IRQ_INTERNAL_BASE + 25)
#define BCM_6358_EXT_IRQ1		(IRQ_INTERNAL_BASE + 26)
#define BCM_6358_EXT_IRQ2		(IRQ_INTERNAL_BASE + 27)
#define BCM_6358_EXT_IRQ3		(IRQ_INTERNAL_BASE + 28)

/*
            
 */
#define BCM_6368_HIGH_IRQ_BASE		(IRQ_INTERNAL_BASE + 32)

#define BCM_6368_TIMER_IRQ		(IRQ_INTERNAL_BASE + 0)
#define BCM_6368_UART0_IRQ		(IRQ_INTERNAL_BASE + 2)
#define BCM_6368_UART1_IRQ		(IRQ_INTERNAL_BASE + 3)
#define BCM_6368_DSL_IRQ		(IRQ_INTERNAL_BASE + 4)
#define BCM_6368_ENET0_IRQ		0
#define BCM_6368_ENET1_IRQ		0
#define BCM_6368_ENET_PHY_IRQ		(IRQ_INTERNAL_BASE + 15)
#define BCM_6368_OHCI0_IRQ		(IRQ_INTERNAL_BASE + 5)
#define BCM_6368_EHCI0_IRQ		(IRQ_INTERNAL_BASE + 7)
#define BCM_6368_PCMCIA_IRQ		0
#define BCM_6368_ENET0_RXDMA_IRQ	0
#define BCM_6368_ENET0_TXDMA_IRQ	0
#define BCM_6368_ENET1_RXDMA_IRQ	0
#define BCM_6368_ENET1_TXDMA_IRQ	0
#define BCM_6368_PCI_IRQ		(IRQ_INTERNAL_BASE + 13)
#define BCM_6368_ATM_IRQ		0
#define BCM_6368_ENETSW_RXDMA0_IRQ	(BCM_6368_HIGH_IRQ_BASE + 0)
#define BCM_6368_ENETSW_RXDMA1_IRQ	(BCM_6368_HIGH_IRQ_BASE + 1)
#define BCM_6368_ENETSW_RXDMA2_IRQ	(BCM_6368_HIGH_IRQ_BASE + 2)
#define BCM_6368_ENETSW_RXDMA3_IRQ	(BCM_6368_HIGH_IRQ_BASE + 3)
#define BCM_6368_ENETSW_TXDMA0_IRQ	(BCM_6368_HIGH_IRQ_BASE + 4)
#define BCM_6368_ENETSW_TXDMA1_IRQ	(BCM_6368_HIGH_IRQ_BASE + 5)
#define BCM_6368_ENETSW_TXDMA2_IRQ	(BCM_6368_HIGH_IRQ_BASE + 6)
#define BCM_6368_ENETSW_TXDMA3_IRQ	(BCM_6368_HIGH_IRQ_BASE + 7)
#define BCM_6368_XTM_IRQ		(IRQ_INTERNAL_BASE + 11)
#define BCM_6368_XTM_DMA0_IRQ		(BCM_6368_HIGH_IRQ_BASE + 8)

#define BCM_6368_PCM_DMA0_IRQ		(BCM_6368_HIGH_IRQ_BASE + 30)
#define BCM_6368_PCM_DMA1_IRQ		(BCM_6368_HIGH_IRQ_BASE + 31)
#define BCM_6368_EXT_IRQ0		(IRQ_INTERNAL_BASE + 20)
#define BCM_6368_EXT_IRQ1		(IRQ_INTERNAL_BASE + 21)
#define BCM_6368_EXT_IRQ2		(IRQ_INTERNAL_BASE + 22)
#define BCM_6368_EXT_IRQ3		(IRQ_INTERNAL_BASE + 23)
#define BCM_6368_EXT_IRQ4		(IRQ_INTERNAL_BASE + 24)
#define BCM_6368_EXT_IRQ5		(IRQ_INTERNAL_BASE + 25)

extern const int *bcm63xx_irqs;

#define __GEN_CPU_IRQ_TABLE(__cpu)					\
	[IRQ_TIMER]		= BCM_## __cpu ##_TIMER_IRQ,		\
	[IRQ_UART0]		= BCM_## __cpu ##_UART0_IRQ,		\
	[IRQ_UART1]		= BCM_## __cpu ##_UART1_IRQ,		\
	[IRQ_DSL]		= BCM_## __cpu ##_DSL_IRQ,		\
	[IRQ_ENET0]		= BCM_## __cpu ##_ENET0_IRQ,		\
	[IRQ_ENET1]		= BCM_## __cpu ##_ENET1_IRQ,		\
	[IRQ_ENET_PHY]		= BCM_## __cpu ##_ENET_PHY_IRQ,		\
	[IRQ_OHCI0]		= BCM_## __cpu ##_OHCI0_IRQ,		\
	[IRQ_EHCI0]		= BCM_## __cpu ##_EHCI0_IRQ,		\
	[IRQ_ENET0_RXDMA]	= BCM_## __cpu ##_ENET0_RXDMA_IRQ,	\
	[IRQ_ENET0_TXDMA]	= BCM_## __cpu ##_ENET0_TXDMA_IRQ,	\
	[IRQ_ENET1_RXDMA]	= BCM_## __cpu ##_ENET1_RXDMA_IRQ,	\
	[IRQ_ENET1_TXDMA]	= BCM_## __cpu ##_ENET1_TXDMA_IRQ,	\
	[IRQ_PCI]		= BCM_## __cpu ##_PCI_IRQ,		\
	[IRQ_PCMCIA]		= BCM_## __cpu ##_PCMCIA_IRQ,		\
	[IRQ_ATM]		= BCM_## __cpu ##_ATM_IRQ,		\
	[IRQ_ENETSW_RXDMA0]	= BCM_## __cpu ##_ENETSW_RXDMA0_IRQ,	\
	[IRQ_ENETSW_RXDMA1]	= BCM_## __cpu ##_ENETSW_RXDMA1_IRQ,	\
	[IRQ_ENETSW_RXDMA2]	= BCM_## __cpu ##_ENETSW_RXDMA2_IRQ,	\
	[IRQ_ENETSW_RXDMA3]	= BCM_## __cpu ##_ENETSW_RXDMA3_IRQ,	\
	[IRQ_ENETSW_TXDMA0]	= BCM_## __cpu ##_ENETSW_TXDMA0_IRQ,	\
	[IRQ_ENETSW_TXDMA1]	= BCM_## __cpu ##_ENETSW_TXDMA1_IRQ,	\
	[IRQ_ENETSW_TXDMA2]	= BCM_## __cpu ##_ENETSW_TXDMA2_IRQ,	\
	[IRQ_ENETSW_TXDMA3]	= BCM_## __cpu ##_ENETSW_TXDMA3_IRQ,	\
	[IRQ_XTM]		= BCM_## __cpu ##_XTM_IRQ,		\
	[IRQ_XTM_DMA0]		= BCM_## __cpu ##_XTM_DMA0_IRQ,		\

static inline int bcm63xx_get_irq_number(enum bcm63xx_irq irq)
{
	return bcm63xx_irqs[irq];
}

/*
                               
 */
unsigned int bcm63xx_get_memory_size(void);

void bcm63xx_machine_halt(void);

void bcm63xx_machine_reboot(void);

#endif /*                 */
