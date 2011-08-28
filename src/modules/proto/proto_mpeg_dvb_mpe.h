/*
 *  This file is part of pom-ng.
 *  Copyright (C) 2011 Guy Martin <gmsoft@tuxicoman.be>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __PROTO_MPEG_DVB_MPE_H__
#define __PROTO_MPEG_DVB_MPE_H__

#define PROTO_MPEG_DVB_MPE_FIELD_NUM 1

enum proto_mpeg_dvb_mpe_fields {
	proto_mpeg_dvb_mpe_field_dst,
};

int proto_mpeg_dvb_mpe_init(struct registry_instance *i);
int proto_mpeg_dvb_mpe_process(struct packet *p, struct proto_process_stack *stack, unsigned int stack_index);
int proto_mpeg_dvb_mpe_cleanup();

#endif