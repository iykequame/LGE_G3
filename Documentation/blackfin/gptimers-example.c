/*
 * Simple gptimers example
 *	http://docs.blackfin.uclinux.org/doku.php?id=linux-kernel:drivers:gptimers
 *
 * Copyright 2007-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#include <linux/interrupt.h>
#include <linux/module.h>

#include <asm/gptimers.h>
#include <asm/portmux.h>

/*                                */

#define DRIVER_NAME "gptimer_example"

struct gptimer_data {
	uint32_t period, width;
};
static struct gptimer_data data;

/*                             */

static irqreturn_t gptimer_example_irq(int irq, void *dev_id)
{
	struct gptimer_data *data = dev_id;

	/*                                                       */
	if (!get_gptimer_intr(TIMER5_id))
		return IRQ_NONE;

	/*                                                                  */
	data->width = get_gptimer_pwidth(TIMER5_id);
	data->period = get_gptimer_period(TIMER5_id);

	/*                           */
	clear_gptimer_intr(TIMER5_id);

	/*                                              */
	return IRQ_HANDLED;
}

/*                            */

static int __init gptimer_example_init(void)
{
	int ret;

	/*                          */
	ret = peripheral_request(P_TMR5, DRIVER_NAME);
	if (ret) {
		printk(KERN_NOTICE DRIVER_NAME ": peripheral request failed\n");
		return ret;
	}

	/*                            */
	ret = request_irq(IRQ_TIMER5, gptimer_example_irq, IRQF_SHARED, DRIVER_NAME, &data);
	if (ret) {
		printk(KERN_NOTICE DRIVER_NAME ": IRQ request failed\n");
		peripheral_free(P_TMR5);
		return ret;
	}

	/*                               */
	set_gptimer_config(TIMER5_id, WDTH_CAP | PULSE_HI | PERIOD_CNT | IRQ_ENA);
	enable_gptimers(TIMER5bit);

	return 0;
}
module_init(gptimer_example_init);

static void __exit gptimer_example_exit(void)
{
	disable_gptimers(TIMER5bit);
	free_irq(IRQ_TIMER5, &data);
	peripheral_free(P_TMR5);
}
module_exit(gptimer_example_exit);

MODULE_LICENSE("BSD");
