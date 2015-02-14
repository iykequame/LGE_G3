#ifndef __dma_defs_h
#define __dma_defs_h

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

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/*                               */

/*                                      */
typedef unsigned int reg_dma_rw_data;
#define REG_RD_ADDR_dma_rw_data 0
#define REG_WR_ADDR_dma_rw_data 0

/*                                           */
typedef unsigned int reg_dma_rw_data_next;
#define REG_RD_ADDR_dma_rw_data_next 4
#define REG_WR_ADDR_dma_rw_data_next 4

/*                                          */
typedef unsigned int reg_dma_rw_data_buf;
#define REG_RD_ADDR_dma_rw_data_buf 8
#define REG_WR_ADDR_dma_rw_data_buf 8

/*                                           */
typedef struct {
  unsigned int eol     : 1;
  unsigned int dummy1  : 2;
  unsigned int out_eop : 1;
  unsigned int intr    : 1;
  unsigned int wait    : 1;
  unsigned int dummy2  : 26;
} reg_dma_rw_data_ctrl;
#define REG_RD_ADDR_dma_rw_data_ctrl 12
#define REG_WR_ADDR_dma_rw_data_ctrl 12

/*                                           */
typedef struct {
  unsigned int dummy1 : 3;
  unsigned int in_eop : 1;
  unsigned int dummy2 : 28;
} reg_dma_rw_data_stat;
#define REG_RD_ADDR_dma_rw_data_stat 16
#define REG_WR_ADDR_dma_rw_data_stat 16

/*                                         */
typedef struct {
  unsigned int md : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_data_md;
#define REG_RD_ADDR_dma_rw_data_md 20
#define REG_WR_ADDR_dma_rw_data_md 20

/*                                           */
typedef struct {
  unsigned int md_s : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_data_md_s;
#define REG_RD_ADDR_dma_rw_data_md_s 24
#define REG_WR_ADDR_dma_rw_data_md_s 24

/*                                            */
typedef unsigned int reg_dma_rw_data_after;
#define REG_RD_ADDR_dma_rw_data_after 28
#define REG_WR_ADDR_dma_rw_data_after 28

/*                                      */
typedef unsigned int reg_dma_rw_ctxt;
#define REG_RD_ADDR_dma_rw_ctxt 32
#define REG_WR_ADDR_dma_rw_ctxt 32

/*                                           */
typedef unsigned int reg_dma_rw_ctxt_next;
#define REG_RD_ADDR_dma_rw_ctxt_next 36
#define REG_WR_ADDR_dma_rw_ctxt_next 36

/*                                           */
typedef struct {
  unsigned int eol        : 1;
  unsigned int dummy1     : 3;
  unsigned int intr       : 1;
  unsigned int dummy2     : 1;
  unsigned int store_mode : 1;
  unsigned int en         : 1;
  unsigned int dummy3     : 24;
} reg_dma_rw_ctxt_ctrl;
#define REG_RD_ADDR_dma_rw_ctxt_ctrl 40
#define REG_WR_ADDR_dma_rw_ctxt_ctrl 40

/*                                           */
typedef struct {
  unsigned int dummy1 : 7;
  unsigned int dis : 1;
  unsigned int dummy2 : 24;
} reg_dma_rw_ctxt_stat;
#define REG_RD_ADDR_dma_rw_ctxt_stat 44
#define REG_WR_ADDR_dma_rw_ctxt_stat 44

/*                                          */
typedef struct {
  unsigned int md0 : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_ctxt_md0;
#define REG_RD_ADDR_dma_rw_ctxt_md0 48
#define REG_WR_ADDR_dma_rw_ctxt_md0 48

/*                                            */
typedef struct {
  unsigned int md0_s : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_ctxt_md0_s;
#define REG_RD_ADDR_dma_rw_ctxt_md0_s 52
#define REG_WR_ADDR_dma_rw_ctxt_md0_s 52

/*                                          */
typedef unsigned int reg_dma_rw_ctxt_md1;
#define REG_RD_ADDR_dma_rw_ctxt_md1 56
#define REG_WR_ADDR_dma_rw_ctxt_md1 56

/*                                            */
typedef unsigned int reg_dma_rw_ctxt_md1_s;
#define REG_RD_ADDR_dma_rw_ctxt_md1_s 60
#define REG_WR_ADDR_dma_rw_ctxt_md1_s 60

/*                                          */
typedef unsigned int reg_dma_rw_ctxt_md2;
#define REG_RD_ADDR_dma_rw_ctxt_md2 64
#define REG_WR_ADDR_dma_rw_ctxt_md2 64

/*                                            */
typedef unsigned int reg_dma_rw_ctxt_md2_s;
#define REG_RD_ADDR_dma_rw_ctxt_md2_s 68
#define REG_WR_ADDR_dma_rw_ctxt_md2_s 68

/*                                          */
typedef unsigned int reg_dma_rw_ctxt_md3;
#define REG_RD_ADDR_dma_rw_ctxt_md3 72
#define REG_WR_ADDR_dma_rw_ctxt_md3 72

/*                                            */
typedef unsigned int reg_dma_rw_ctxt_md3_s;
#define REG_RD_ADDR_dma_rw_ctxt_md3_s 76
#define REG_WR_ADDR_dma_rw_ctxt_md3_s 76

/*                                          */
typedef unsigned int reg_dma_rw_ctxt_md4;
#define REG_RD_ADDR_dma_rw_ctxt_md4 80
#define REG_WR_ADDR_dma_rw_ctxt_md4 80

/*                                            */
typedef unsigned int reg_dma_rw_ctxt_md4_s;
#define REG_RD_ADDR_dma_rw_ctxt_md4_s 84
#define REG_WR_ADDR_dma_rw_ctxt_md4_s 84

/*                                            */
typedef unsigned int reg_dma_rw_saved_data;
#define REG_RD_ADDR_dma_rw_saved_data 88
#define REG_WR_ADDR_dma_rw_saved_data 88

/*                                                */
typedef unsigned int reg_dma_rw_saved_data_buf;
#define REG_RD_ADDR_dma_rw_saved_data_buf 92
#define REG_WR_ADDR_dma_rw_saved_data_buf 92

/*                                       */
typedef unsigned int reg_dma_rw_group;
#define REG_RD_ADDR_dma_rw_group 96
#define REG_WR_ADDR_dma_rw_group 96

/*                                            */
typedef unsigned int reg_dma_rw_group_next;
#define REG_RD_ADDR_dma_rw_group_next 100
#define REG_WR_ADDR_dma_rw_group_next 100

/*                                            */
typedef struct {
  unsigned int eol  : 1;
  unsigned int tol  : 1;
  unsigned int bol  : 1;
  unsigned int dummy1 : 1;
  unsigned int intr : 1;
  unsigned int dummy2 : 2;
  unsigned int en   : 1;
  unsigned int dummy3 : 24;
} reg_dma_rw_group_ctrl;
#define REG_RD_ADDR_dma_rw_group_ctrl 104
#define REG_WR_ADDR_dma_rw_group_ctrl 104

/*                                            */
typedef struct {
  unsigned int dummy1 : 7;
  unsigned int dis : 1;
  unsigned int dummy2 : 24;
} reg_dma_rw_group_stat;
#define REG_RD_ADDR_dma_rw_group_stat 108
#define REG_WR_ADDR_dma_rw_group_stat 108

/*                                          */
typedef struct {
  unsigned int md : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_group_md;
#define REG_RD_ADDR_dma_rw_group_md 112
#define REG_WR_ADDR_dma_rw_group_md 112

/*                                            */
typedef struct {
  unsigned int md_s : 16;
  unsigned int dummy1 : 16;
} reg_dma_rw_group_md_s;
#define REG_RD_ADDR_dma_rw_group_md_s 116
#define REG_WR_ADDR_dma_rw_group_md_s 116

/*                                          */
typedef unsigned int reg_dma_rw_group_up;
#define REG_RD_ADDR_dma_rw_group_up 120
#define REG_WR_ADDR_dma_rw_group_up 120

/*                                            */
typedef unsigned int reg_dma_rw_group_down;
#define REG_RD_ADDR_dma_rw_group_down 124
#define REG_WR_ADDR_dma_rw_group_down 124

/*                                     */
typedef struct {
  unsigned int cont_data : 1;
  unsigned int dummy1    : 31;
} reg_dma_rw_cmd;
#define REG_RD_ADDR_dma_rw_cmd 128
#define REG_WR_ADDR_dma_rw_cmd 128

/*                                     */
typedef struct {
  unsigned int en   : 1;
  unsigned int stop : 1;
  unsigned int dummy1 : 30;
} reg_dma_rw_cfg;
#define REG_RD_ADDR_dma_rw_cfg 132
#define REG_WR_ADDR_dma_rw_cfg 132

/*                                      */
typedef struct {
  unsigned int mode           : 5;
  unsigned int list_state     : 3;
  unsigned int stream_cmd_src : 8;
  unsigned int dummy1         : 8;
  unsigned int buf            : 8;
} reg_dma_rw_stat;
#define REG_RD_ADDR_dma_rw_stat 136
#define REG_WR_ADDR_dma_rw_stat 136

/*                                           */
typedef struct {
  unsigned int group      : 1;
  unsigned int ctxt       : 1;
  unsigned int data       : 1;
  unsigned int in_eop     : 1;
  unsigned int stream_cmd : 1;
  unsigned int dummy1     : 27;
} reg_dma_rw_intr_mask;
#define REG_RD_ADDR_dma_rw_intr_mask 140
#define REG_WR_ADDR_dma_rw_intr_mask 140

/*                                          */
typedef struct {
  unsigned int group      : 1;
  unsigned int ctxt       : 1;
  unsigned int data       : 1;
  unsigned int in_eop     : 1;
  unsigned int stream_cmd : 1;
  unsigned int dummy1     : 27;
} reg_dma_rw_ack_intr;
#define REG_RD_ADDR_dma_rw_ack_intr 144
#define REG_WR_ADDR_dma_rw_ack_intr 144

/*                                    */
typedef struct {
  unsigned int group      : 1;
  unsigned int ctxt       : 1;
  unsigned int data       : 1;
  unsigned int in_eop     : 1;
  unsigned int stream_cmd : 1;
  unsigned int dummy1     : 27;
} reg_dma_r_intr;
#define REG_RD_ADDR_dma_r_intr 148

/*                                           */
typedef struct {
  unsigned int group      : 1;
  unsigned int ctxt       : 1;
  unsigned int data       : 1;
  unsigned int in_eop     : 1;
  unsigned int stream_cmd : 1;
  unsigned int dummy1     : 27;
} reg_dma_r_masked_intr;
#define REG_RD_ADDR_dma_r_masked_intr 152

/*                                            */
typedef struct {
  unsigned int cmd  : 10;
  unsigned int dummy1 : 6;
  unsigned int n    : 8;
  unsigned int dummy2 : 7;
  unsigned int busy : 1;
} reg_dma_rw_stream_cmd;
#define REG_RD_ADDR_dma_rw_stream_cmd 156
#define REG_WR_ADDR_dma_rw_stream_cmd 156


/*           */
enum {
  regk_dma_ack_pkt                         = 0x00000100,
  regk_dma_anytime                         = 0x00000001,
  regk_dma_array                           = 0x00000008,
  regk_dma_burst                           = 0x00000020,
  regk_dma_client                          = 0x00000002,
  regk_dma_copy_next                       = 0x00000010,
  regk_dma_copy_up                         = 0x00000020,
  regk_dma_data_at_eol                     = 0x00000001,
  regk_dma_dis_c                           = 0x00000010,
  regk_dma_dis_g                           = 0x00000020,
  regk_dma_idle                            = 0x00000001,
  regk_dma_intern                          = 0x00000004,
  regk_dma_load_c                          = 0x00000200,
  regk_dma_load_c_n                        = 0x00000280,
  regk_dma_load_c_next                     = 0x00000240,
  regk_dma_load_d                          = 0x00000140,
  regk_dma_load_g                          = 0x00000300,
  regk_dma_load_g_down                     = 0x000003c0,
  regk_dma_load_g_next                     = 0x00000340,
  regk_dma_load_g_up                       = 0x00000380,
  regk_dma_next_en                         = 0x00000010,
  regk_dma_next_pkt                        = 0x00000010,
  regk_dma_no                              = 0x00000000,
  regk_dma_only_at_wait                    = 0x00000000,
  regk_dma_restore                         = 0x00000020,
  regk_dma_rst                             = 0x00000001,
  regk_dma_running                         = 0x00000004,
  regk_dma_rw_cfg_default                  = 0x00000000,
  regk_dma_rw_cmd_default                  = 0x00000000,
  regk_dma_rw_intr_mask_default            = 0x00000000,
  regk_dma_rw_stat_default                 = 0x00000101,
  regk_dma_rw_stream_cmd_default           = 0x00000000,
  regk_dma_save_down                       = 0x00000020,
  regk_dma_save_up                         = 0x00000020,
  regk_dma_set_reg                         = 0x00000050,
  regk_dma_set_w_size1                     = 0x00000190,
  regk_dma_set_w_size2                     = 0x000001a0,
  regk_dma_set_w_size4                     = 0x000001c0,
  regk_dma_stopped                         = 0x00000002,
  regk_dma_store_c                         = 0x00000002,
  regk_dma_store_descr                     = 0x00000000,
  regk_dma_store_g                         = 0x00000004,
  regk_dma_store_md                        = 0x00000001,
  regk_dma_sw                              = 0x00000008,
  regk_dma_update_down                     = 0x00000020,
  regk_dma_yes                             = 0x00000001
};
#endif /*              */
