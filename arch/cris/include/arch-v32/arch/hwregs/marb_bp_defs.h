#ifndef __marb_bp_defs_h
#define __marb_bp_defs_h

/*
                                  
                                                              
                                
                                             
  
                                                                                                                                                                     
                                                                       
                                 
  
                              
 */
/*                    */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

/*                                   */

/*                                                */
typedef unsigned int reg_marb_bp_rw_first_addr;
#define REG_RD_ADDR_marb_bp_rw_first_addr 0
#define REG_WR_ADDR_marb_bp_rw_first_addr 0

/*                                               */
typedef unsigned int reg_marb_bp_rw_last_addr;
#define REG_RD_ADDR_marb_bp_rw_last_addr 4
#define REG_WR_ADDR_marb_bp_rw_last_addr 4

/*                                        */
typedef struct {
  unsigned int read         : 1;
  unsigned int write        : 1;
  unsigned int read_excl    : 1;
  unsigned int pri_write    : 1;
  unsigned int us_read      : 1;
  unsigned int us_write     : 1;
  unsigned int us_read_excl : 1;
  unsigned int us_pri_write : 1;
  unsigned int dummy1       : 24;
} reg_marb_bp_rw_op;
#define REG_RD_ADDR_marb_bp_rw_op 8
#define REG_WR_ADDR_marb_bp_rw_op 8

/*                                             */
typedef struct {
  unsigned int dma0  : 1;
  unsigned int dma1  : 1;
  unsigned int dma2  : 1;
  unsigned int dma3  : 1;
  unsigned int dma4  : 1;
  unsigned int dma5  : 1;
  unsigned int dma6  : 1;
  unsigned int dma7  : 1;
  unsigned int dma8  : 1;
  unsigned int dma9  : 1;
  unsigned int cpui  : 1;
  unsigned int cpud  : 1;
  unsigned int iop   : 1;
  unsigned int slave : 1;
  unsigned int dummy1 : 18;
} reg_marb_bp_rw_clients;
#define REG_RD_ADDR_marb_bp_rw_clients 12
#define REG_WR_ADDR_marb_bp_rw_clients 12

/*                                             */
typedef struct {
  unsigned int wrap : 1;
  unsigned int dummy1 : 31;
} reg_marb_bp_rw_options;
#define REG_RD_ADDR_marb_bp_rw_options 16
#define REG_WR_ADDR_marb_bp_rw_options 16

/*                                              */
typedef unsigned int reg_marb_bp_r_break_addr;
#define REG_RD_ADDR_marb_bp_r_break_addr 20

/*                                            */
typedef struct {
  unsigned int read         : 1;
  unsigned int write        : 1;
  unsigned int read_excl    : 1;
  unsigned int pri_write    : 1;
  unsigned int us_read      : 1;
  unsigned int us_write     : 1;
  unsigned int us_read_excl : 1;
  unsigned int us_pri_write : 1;
  unsigned int dummy1       : 24;
} reg_marb_bp_r_break_op;
#define REG_RD_ADDR_marb_bp_r_break_op 24

/*                                                 */
typedef struct {
  unsigned int dma0  : 1;
  unsigned int dma1  : 1;
  unsigned int dma2  : 1;
  unsigned int dma3  : 1;
  unsigned int dma4  : 1;
  unsigned int dma5  : 1;
  unsigned int dma6  : 1;
  unsigned int dma7  : 1;
  unsigned int dma8  : 1;
  unsigned int dma9  : 1;
  unsigned int cpui  : 1;
  unsigned int cpud  : 1;
  unsigned int iop   : 1;
  unsigned int slave : 1;
  unsigned int dummy1 : 18;
} reg_marb_bp_r_break_clients;
#define REG_RD_ADDR_marb_bp_r_break_clients 28

/*                                                      */
typedef struct {
  unsigned int dma0  : 1;
  unsigned int dma1  : 1;
  unsigned int dma2  : 1;
  unsigned int dma3  : 1;
  unsigned int dma4  : 1;
  unsigned int dma5  : 1;
  unsigned int dma6  : 1;
  unsigned int dma7  : 1;
  unsigned int dma8  : 1;
  unsigned int dma9  : 1;
  unsigned int cpui  : 1;
  unsigned int cpud  : 1;
  unsigned int iop   : 1;
  unsigned int slave : 1;
  unsigned int dummy1 : 18;
} reg_marb_bp_r_break_first_client;
#define REG_RD_ADDR_marb_bp_r_break_first_client 32

/*                                              */
typedef unsigned int reg_marb_bp_r_break_size;
#define REG_RD_ADDR_marb_bp_r_break_size 36

/*                                         */
typedef unsigned int reg_marb_bp_rw_ack;
#define REG_RD_ADDR_marb_bp_rw_ack 40
#define REG_WR_ADDR_marb_bp_rw_ack 40


/*           */
enum {
  regk_marb_bp_no                          = 0x00000000,
  regk_marb_bp_rw_op_default               = 0x00000000,
  regk_marb_bp_rw_options_default          = 0x00000000,
  regk_marb_bp_yes                         = 0x00000001
};
#endif /*                  */
