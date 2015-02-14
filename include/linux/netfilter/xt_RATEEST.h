#ifndef _XT_RATEEST_TARGET_H
#define _XT_RATEEST_TARGET_H

#include <linux/types.h>

struct xt_rateest_target_info {
	char			name[IFNAMSIZ];
	__s8			interval;
	__u8		ewma_log;

	/*                               */
	struct xt_rateest	*est __attribute__((aligned(8)));
};

#endif /*                      */
