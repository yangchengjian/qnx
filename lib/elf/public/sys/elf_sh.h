/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */



/*
 *  sys/elf_sh.h
 *

 */
#ifndef __ELF_SH_H_INCLUDED
#define __ELF_SH_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

#ifndef __ELF_H_INCLUDED
#include _NTO_HDR_(sys/elf.h)
#endif

__BEGIN_DECLS

enum elf_sh_e_r {
	R_SH_NONE = 0,
	R_SH_DIR32,
	R_SH_REL32,
	R_SH_DIR8WPN,
	R_SH_IND12W,
	R_SH_DIR8WPL,
	R_SH_DIR8WPZ,
	R_SH_DIR8BP,
	R_SH_DIR8W,
	R_SH_DIR8L,
	R_SH_GOT32 = 0xa0,
	R_SH_PLT32,
	R_SH_COPY,
	R_SH_GLOB_DAT,
	R_SH_JMP_SLOT,
	R_SH_RELATIVE,
	R_SH_GOTOFF,
	R_SH_GOTPC,
	R_SH_LAST
};

__END_DECLS

#endif
