/*
 * Copyright (C) 2017 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include "mapper_h/p8c8.h"
#include "mapper_h/m1.h"
#include "mapper_h/m2.h"
#include "mapper_h/m4.h"
#include "mapper_h/m4add.h"
#include "mapper_h/m7.h"
#include "mapper_h/m9.h"
#include "mapper_h/m10.h"
#include "mapper_h/m13.h"
#include "mapper_h/m15.h"
#include "mapper_h/p32c8.h"
#include "mapper.h"
#include "mapperList.h"

mapperList_t mapperList[256] = {
	{ p32c8init,	p32c8get8,		m0_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ m1init,		m1get8,			m1set8,			m1chrGet8,		m1chrSet8,		NULL },
	{ m2init,		m2get8,			m2set8,			m2chrGet8,		m2chrSet8,		NULL },
	{ p8c8init,		p8c8get8,		m3_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ m4init,		m4get8,			m4set8,			m4chrGet8,		m4chrSet8,		m4cycle },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ m7init,		m7get8,			m7set8,			m7chrGet8,		m7chrSet8,		NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ m9init,		m9get8,			m9set8,			m9chrGet8,		m9chrSet8,		NULL },
	{ m10init,		m10get8,		m10set8,		m10chrGet8,		m10chrSet8,		NULL },
	{ p32c8init,	p32c8get8,		m11_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ m13init,		m13get8,		m13set8,		m13chrGet8,		m13chrSet8,		NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ m15init,		m15get8,		m15set8,		m15chrGet8,		m15chrSet8,		NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	m36_p32c8get8,	m36_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ m37_init,		m4get8,			m37_set8,		m4chrGet8,		m4chrSet8,		m4cycle },
	{ p32c8init,	p32c8get8,		m38_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ m44_init,		m4get8,			m44_set8,		m4chrGet8,		m4chrSet8,		m4cycle },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m46_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ m47_init,		m4get8,			m47_set8,		m4chrGet8,		m4chrSet8,		m4cycle },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m66_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m79_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p8c8init,		p8c8get8,		m87_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p8c8init,		p8c8get8,		m99_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p8c8init,		p8c8get8,		m101_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m113_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m133_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m140_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m144_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ p8c8init,		p8c8get8,		m145_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ p32c8init,	p32c8get8,		m79_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ p32c8init,	p32c8get8,		m147_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ p32c8init,	p32c8get8,		m148_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ p8c8init,		p8c8get8,		m149_set8,		p8c8chrGet8,	p8c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p8c8init,		p8c8get8,		m185_set8,		m185_chrGet8,	p8c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m240_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ p32c8init,	p32c8get8,		m242_set8,		p32c8chrGet8,	p32c8chrSet8,	NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
	{ NULL,			NULL,			NULL,			NULL,			NULL,			NULL },
};
