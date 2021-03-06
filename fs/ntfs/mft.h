/*
 * mft.h - Defines for mft record handling in NTFS Linux kernel driver.
 *	   Part of the Linux-NTFS project.
 *
 * Copyright (c) 2001-2004 Anton Altaparmakov
 *
 * This program/include file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program/include file is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (in the main directory of the Linux-NTFS
 * distribution in the file COPYING); if not, write to the Free Software
 * Foundation,Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _LINUX_NTFS_MFT_H
#define _LINUX_NTFS_MFT_H

#include <linux/fs.h>
#include <linux/highmem.h>
#include <linux/pagemap.h>

#include "inode.h"

extern MFT_RECORD *map_mft_record(ntfs_inode *ni);
extern void unmap_mft_record(ntfs_inode *ni);

extern MFT_RECORD *map_extent_mft_record(ntfs_inode *base_ni, MFT_REF mref,
		ntfs_inode **ntfs_ino);

static inline void unmap_extent_mft_record(ntfs_inode *ni)
{
	unmap_mft_record(ni);
	return;
}

#ifdef NTFS_RW

/* 
                                                                     
                                           
  
                                                                        
  
                                                                           
                
 */
static inline void flush_dcache_mft_record_page(ntfs_inode *ni)
{
	flush_dcache_page(ni->page);
}

extern void __mark_mft_record_dirty(ntfs_inode *ni);

/* 
                                                                              
                                                    
  
                                                                             
                                                                             
                                                                        
                       
  
                                                                       
 */
static inline void mark_mft_record_dirty(ntfs_inode *ni)
{
	if (!NInoTestSetDirty(ni))
		__mark_mft_record_dirty(ni);
}

extern int ntfs_sync_mft_mirror(ntfs_volume *vol, const unsigned long mft_no,
		MFT_RECORD *m, int sync);

extern int write_mft_record_nolock(ntfs_inode *ni, MFT_RECORD *m, int sync);

/* 
                                                            
                                                             
                                           
                                          
  
                                                                          
                                                                             
                                                                             
                                                                        
                                                      
  
                                                                              
            
  
                                                                          
                                  
 */
static inline int write_mft_record(ntfs_inode *ni, MFT_RECORD *m, int sync)
{
	struct page *page = ni->page;
	int err;

	BUG_ON(!page);
	lock_page(page);
	err = write_mft_record_nolock(ni, m, sync);
	unlock_page(page);
	return err;
}

extern bool ntfs_may_write_mft_record(ntfs_volume *vol,
		const unsigned long mft_no, const MFT_RECORD *m,
		ntfs_inode **locked_ni);

extern ntfs_inode *ntfs_mft_record_alloc(ntfs_volume *vol, const int mode,
		ntfs_inode *base_ni, MFT_RECORD **mrec);
extern int ntfs_extent_mft_record_free(ntfs_inode *ni, MFT_RECORD *m);

#endif /*         */

#endif /*                   */
