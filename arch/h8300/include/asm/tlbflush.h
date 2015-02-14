#ifndef _H8300_TLBFLUSH_H
#define _H8300_TLBFLUSH_H

/*
 * Copyright (C) 2000 Lineo, David McCullough <davidm@uclinux.org>
 * Copyright (C) 2000-2002, Greg Ungerer <gerg@snapgear.com>
 */

#include <asm/setup.h>

/*
                                    
 */
static inline void __flush_tlb(void)
{
	BUG();
}

static inline void __flush_tlb_one(unsigned long addr)
{
	BUG();
}

#define flush_tlb() __flush_tlb()

/*
                                                              
 */
static inline void flush_tlb_all(void)
{
	BUG();
}

static inline void flush_tlb_mm(struct mm_struct *mm)
{
	BUG();
}

static inline void flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
{
	BUG();
}

static inline void flush_tlb_range(struct mm_struct *mm,
				   unsigned long start, unsigned long end)
{
	BUG();
}

static inline void flush_tlb_kernel_page(unsigned long addr)
{
	BUG();
}

#endif /*                   */
