/*
 * vsp1_lut.h  --  R-Car VSP1 Look-Up Table
 *
 * Copyright (C) 2013 Renesas Corporation
 *
 * Contact: Laurent Pinchart (laurent.pinchart@ideasonboard.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#ifndef __VSP1_LUT_H__
#define __VSP1_LUT_H__

#include <media/media-entity.h>
#include <media/v4l2-subdev.h>

#include "vsp1_entity.h"

struct vsp1_device;

#define LUT_PAD_SINK				0
#define LUT_PAD_SOURCE				1

struct vsp1_lut {
	struct vsp1_entity entity;
	u32 lut[256];
};

static inline struct vsp1_lut *to_lut(struct v4l2_subdev *subdev)
{
	return container_of(subdev, struct vsp1_lut, entity.subdev);
}

struct vsp1_lut *vsp1_lut_create(struct vsp1_device *vsp1);

#endif /* __VSP1_LUT_H__ */
