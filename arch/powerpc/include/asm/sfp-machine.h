/* Machine-dependent software floating-point definitions.  PPC version.
   Copyright (C) 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Actually, this is a PPC (32bit) version, written based on the
   i386, sparc, and sparc64 versions, by me,
   Peter Maydell (pmaydell@chiark.greenend.org.uk).
   Comments are by and large also mine, although they may be inaccurate.

   In picking out asm fragments I've gone with the lowest common
   denominator, which also happens to be the hardware I have :->
   That is, a SPARC without hardware multiply and divide.
 */

/*                             */
#define _FP_W_TYPE_SIZE		32
#define _FP_W_TYPE		unsigned int
#define _FP_WS_TYPE		signed int
#define _FP_I_TYPE		int

#define __ll_B			((UWtype) 1 << (W_TYPE_SIZE / 2))
#define __ll_lowpart(t)		((UWtype) (t) & (__ll_B - 1))
#define __ll_highpart(t)	((UWtype) (t) >> (W_TYPE_SIZE / 2))

/*                                                              
                                                             
                                                               
                                                  
                                                                  
                              
 */

/*                                                                  
                                                                
                                                        
                                                              
                                                                
                                                                 
                                      
                                                                   
                                                       
                                  
                                                                  
                                                                    
               
                                                                    
                                                      
                   
 */
/*                  
                                                            
                                                                       
                                                                       
  
                                                                             
                                                             
                                                                
  
                 
                                                                               
                                                                               
  
                                                                               
                                                                  
 */

#define _FP_MUL_MEAT_S(R,X,Y)   _FP_MUL_MEAT_1_wide(_FP_WFRACBITS_S,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_D(R,X,Y)   _FP_MUL_MEAT_2_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)

#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_udiv_norm(S,R,X,Y)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_2_udiv(D,R,X,Y)

/*                                                                       
                                                                
 */
#define _FP_NANFRAC_S		((_FP_QNANBIT_S << 1) - 1)
#define _FP_NANFRAC_D		((_FP_QNANBIT_D << 1) - 1), -1
#define _FP_NANFRAC_Q		((_FP_QNANBIT_Q << 1) - 1), -1, -1, -1
#define _FP_NANSIGN_S		0
#define _FP_NANSIGN_D		0
#define _FP_NANSIGN_Q		0

#define _FP_KEEPNANFRACP 1

#ifdef FP_EX_BOOKE_E500_SPE
#define FP_EX_INEXACT		(1 << 21)
#define FP_EX_INVALID		(1 << 20)
#define FP_EX_DIVZERO		(1 << 19)
#define FP_EX_UNDERFLOW		(1 << 18)
#define FP_EX_OVERFLOW		(1 << 17)
#define FP_INHIBIT_RESULTS	0

#define __FPU_FPSCR	(current->thread.spefscr)
#define __FPU_ENABLED_EXC		\
({					\
	(__FPU_FPSCR >> 2) & 0x1f;	\
})
#else
/*                                                                   
                                                                    
                           */
#define FP_EX_INVALID         (1 << (31 - 2))
#define FP_EX_INVALID_SNAN	EFLAG_VXSNAN
#define FP_EX_INVALID_ISI	EFLAG_VXISI
#define FP_EX_INVALID_IDI	EFLAG_VXIDI
#define FP_EX_INVALID_ZDZ	EFLAG_VXZDZ
#define FP_EX_INVALID_IMZ	EFLAG_VXIMZ
#define FP_EX_OVERFLOW        (1 << (31 - 3))
#define FP_EX_UNDERFLOW       (1 << (31 - 4))
#define FP_EX_DIVZERO         (1 << (31 - 5))
#define FP_EX_INEXACT         (1 << (31 - 6))

#define __FPU_FPSCR	(current->thread.fpscr.val)

/*                                                   
                                                  
 */
#define __FPU_ENABLED_EXC \
({						\
	(__FPU_FPSCR >> 3) & 0x1f;	\
})

#endif

/*
                                                
                                             
 */
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)			\
  do {								\
    if ((_FP_FRAC_HIGH_RAW_##fs(Y) & _FP_QNANBIT_##fs)		\
	&& !(_FP_FRAC_HIGH_RAW_##fs(X) & _FP_QNANBIT_##fs))	\
      {								\
	R##_s = X##_s;						\
	_FP_FRAC_COPY_##wc(R,X);				\
      }								\
    else							\
      {								\
	R##_s = Y##_s;						\
	_FP_FRAC_COPY_##wc(R,Y);				\
      }								\
    R##_c = FP_CLS_NAN;						\
  } while (0)


#include <linux/kernel.h>
#include <linux/sched.h>

#define __FPU_TRAP_P(bits) \
	((__FPU_ENABLED_EXC & (bits)) != 0)

#define __FP_PACK_S(val,X)			\
({  int __exc = _FP_PACK_CANONICAL(S,1,X);	\
    if(!__exc || !__FPU_TRAP_P(__exc))		\
        _FP_PACK_RAW_1_P(S,val,X);		\
    __exc;					\
})

#define __FP_PACK_D(val,X)			\
   do {									\
	_FP_PACK_CANONICAL(D, 2, X);					\
	if (!FP_CUR_EXCEPTIONS || !__FPU_TRAP_P(FP_CUR_EXCEPTIONS))	\
		_FP_PACK_RAW_2_P(D, val, X);				\
   } while (0)

#define __FP_PACK_DS(val,X)							\
   do {										\
	   FP_DECL_S(__X);							\
	   FP_CONV(S, D, 1, 2, __X, X);						\
	   _FP_PACK_CANONICAL(S, 1, __X);					\
	   if (!FP_CUR_EXCEPTIONS || !__FPU_TRAP_P(FP_CUR_EXCEPTIONS)) {	\
		   _FP_UNPACK_CANONICAL(S, 1, __X);				\
		   FP_CONV(D, S, 2, 1, X, __X);					\
		   _FP_PACK_CANONICAL(D, 2, X);					\
		   if (!FP_CUR_EXCEPTIONS || !__FPU_TRAP_P(FP_CUR_EXCEPTIONS))	\
		   _FP_PACK_RAW_2_P(D, val, X);					\
	   }									\
   } while (0)

/*                                   */
#define FP_ROUNDMODE			\
({					\
	__FPU_FPSCR & 0x3;		\
})

/*                                                                  
                    
 */

#include <linux/types.h>
#include <asm/byteorder.h>

/*                                                         
                                                                           
                                                             
                                                                     
                                                                     
                                                                         
                                                        
 */
#define add_ssaaaa(sh, sl, ah, al, bh, bl)				\
  do {									\
    if (__builtin_constant_p (bh) && (bh) == 0)				\
      __asm__ ("{a%I4|add%I4c} %1,%3,%4\n\t{aze|addze} %0,%2"		\
	     : "=r" ((USItype)(sh)),					\
	       "=&r" ((USItype)(sl))					\
	     : "%r" ((USItype)(ah)),					\
	       "%r" ((USItype)(al)),					\
	       "rI" ((USItype)(bl)));					\
    else if (__builtin_constant_p (bh) && (bh) ==~(USItype) 0)		\
      __asm__ ("{a%I4|add%I4c} %1,%3,%4\n\t{ame|addme} %0,%2"		\
	     : "=r" ((USItype)(sh)),					\
	       "=&r" ((USItype)(sl))					\
	     : "%r" ((USItype)(ah)),					\
	       "%r" ((USItype)(al)),					\
	       "rI" ((USItype)(bl)));					\
    else								\
      __asm__ ("{a%I5|add%I5c} %1,%4,%5\n\t{ae|adde} %0,%2,%3"		\
	     : "=r" ((USItype)(sh)),					\
	       "=&r" ((USItype)(sl))					\
	     : "%r" ((USItype)(ah)),					\
	       "r" ((USItype)(bh)),					\
	       "%r" ((USItype)(al)),					\
	       "rI" ((USItype)(bl)));					\
  } while (0)

/*                                                                          
                                                                                
                                                                         
                                                                           
                                                                          
                                                                          
                                                                         
               
 */
#define sub_ddmmss(sh, sl, ah, al, bh, bl)				\
  do {									\
    if (__builtin_constant_p (ah) && (ah) == 0)				\
      __asm__ ("{sf%I3|subf%I3c} %1,%4,%3\n\t{sfze|subfze} %0,%2"	\
	       : "=r" ((USItype)(sh)),					\
		 "=&r" ((USItype)(sl))					\
	       : "r" ((USItype)(bh)),					\
		 "rI" ((USItype)(al)),					\
		 "r" ((USItype)(bl)));					\
    else if (__builtin_constant_p (ah) && (ah) ==~(USItype) 0)		\
      __asm__ ("{sf%I3|subf%I3c} %1,%4,%3\n\t{sfme|subfme} %0,%2"	\
	       : "=r" ((USItype)(sh)),					\
		 "=&r" ((USItype)(sl))					\
	       : "r" ((USItype)(bh)),					\
		 "rI" ((USItype)(al)),					\
		 "r" ((USItype)(bl)));					\
    else if (__builtin_constant_p (bh) && (bh) == 0)			\
      __asm__ ("{sf%I3|subf%I3c} %1,%4,%3\n\t{ame|addme} %0,%2"		\
	       : "=r" ((USItype)(sh)),					\
		 "=&r" ((USItype)(sl))					\
	       : "r" ((USItype)(ah)),					\
		 "rI" ((USItype)(al)),					\
		 "r" ((USItype)(bl)));					\
    else if (__builtin_constant_p (bh) && (bh) ==~(USItype) 0)		\
      __asm__ ("{sf%I3|subf%I3c} %1,%4,%3\n\t{aze|addze} %0,%2"		\
	       : "=r" ((USItype)(sh)),					\
		 "=&r" ((USItype)(sl))					\
	       : "r" ((USItype)(ah)),					\
		 "rI" ((USItype)(al)),					\
		 "r" ((USItype)(bl)));					\
    else								\
      __asm__ ("{sf%I4|subf%I4c} %1,%5,%4\n\t{sfe|subfe} %0,%3,%2"	\
	       : "=r" ((USItype)(sh)),					\
		 "=&r" ((USItype)(sl))					\
	       : "r" ((USItype)(ah)),					\
		 "r" ((USItype)(bh)),					\
		 "rI" ((USItype)(al)),					\
		 "r" ((USItype)(bl)));					\
  } while (0)

/*                               */

/*                                                                       
                                                                         
                                          
 */
#define umul_ppmm(ph, pl, m0, m1)					\
  do {									\
    USItype __m0 = (m0), __m1 = (m1);					\
    __asm__ ("mulhwu %0,%1,%2"						\
	     : "=r" ((USItype)(ph))					\
	     : "%r" (__m0),						\
               "r" (__m1));						\
    (pl) = __m0 * __m1;							\
  } while (0)

/*                                                               
                                                                  
                                                                           
                                                                           
                                                                     
                                                                          
                                            
 */
#define udiv_qrnnd(q, r, n1, n0, d)					\
  do {									\
    UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m;			\
    __d1 = __ll_highpart (d);						\
    __d0 = __ll_lowpart (d);						\
									\
    __r1 = (n1) % __d1;							\
    __q1 = (n1) / __d1;							\
    __m = (UWtype) __q1 * __d0;						\
    __r1 = __r1 * __ll_B | __ll_highpart (n0);				\
    if (__r1 < __m)							\
      {									\
	__q1--, __r1 += (d);						\
	if (__r1 >= (d)) /*                                         */	\
	  if (__r1 < __m)						\
	    __q1--, __r1 += (d);					\
      }									\
    __r1 -= __m;							\
									\
    __r0 = __r1 % __d1;							\
    __q0 = __r1 / __d1;							\
    __m = (UWtype) __q0 * __d0;						\
    __r0 = __r0 * __ll_B | __ll_lowpart (n0);				\
    if (__r0 < __m)							\
      {									\
	__q0--, __r0 += (d);						\
	if (__r0 >= (d))						\
	  if (__r0 < __m)						\
	    __q0--, __r0 += (d);					\
      }									\
    __r0 -= __m;							\
									\
    (q) = (UWtype) __q1 * __ll_B | __q0;				\
    (r) = __r0;								\
  } while (0)

#define UDIV_NEEDS_NORMALIZATION 1

#define abort()								\
	return 0

#ifdef __BIG_ENDIAN
#define __BYTE_ORDER __BIG_ENDIAN
#else
#define __BYTE_ORDER __LITTLE_ENDIAN
#endif

/*                  */
#define EFLAG_INVALID		(1 << (31 - 2))
#define EFLAG_OVERFLOW		(1 << (31 - 3))
#define EFLAG_UNDERFLOW		(1 << (31 - 4))
#define EFLAG_DIVZERO		(1 << (31 - 5))
#define EFLAG_INEXACT		(1 << (31 - 6))

#define EFLAG_VXSNAN		(1 << (31 - 7))
#define EFLAG_VXISI		(1 << (31 - 8))
#define EFLAG_VXIDI		(1 << (31 - 9))
#define EFLAG_VXZDZ		(1 << (31 - 10))
#define EFLAG_VXIMZ		(1 << (31 - 11))
#define EFLAG_VXVC		(1 << (31 - 12))
#define EFLAG_VXSOFT		(1 << (31 - 21))
#define EFLAG_VXSQRT		(1 << (31 - 22))
#define EFLAG_VXCVI		(1 << (31 - 23))
