/*  =====================================================================
    VTX - 0MQ virtual transport interface - UDP driver

    ---------------------------------------------------------------------
    Copyright (c) 1991-2011 iMatix Corporation <www.imatix.com>
    Copyright other contributors as noted in the AUTHORS file.

    This file is part of VTX, the 0MQ virtual transport interface:
    http://vtx.zeromq.org.

    This is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or (at
    your option) any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program. If not, see
    <http://www.gnu.org/licenses/>.
    =====================================================================
*/

#ifndef __VTX_UDP_INCLUDED__
#define __VTX_UDP_INCLUDED__

#include "vtx.h"

//  Maximum size of a message we'll send over UDP
#define VTX_UDP_MSGMAX    512
#define VTX_UDP_LINKTTL   30000     //  msecs

#ifdef __cplusplus
extern "C" {
#endif

void vtx_udp_driver (void *args, zctx_t *ctx, void *pipe);

#ifdef __cplusplus
}
#endif

#endif
