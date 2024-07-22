/* SPDX-License-Identifier: GPL-2.0 */	
/*	
 * Copyright (c) 2019 MediaTek Inc.	
*/
u8 GT9110P_SX_GROUP0[] = {
	0x00, 0xB0, 0x04, 0x80, 0x07, 0x0A, 0x35, 0x10, 0x01, 0x0A, 0x32, 0x0F,
	0x50, 0x3C, 0x03, 0x04, 0x00, 0x00, 0x08, 0x00, 0x24, 0x00, 0x06, 0x18,
	0x1A, 0x1D, 0x14, 0x95, 0x35, 0xFF, 0x37, 0x39, 0x12, 0x0C, 0x00, 0x00,
	0x00, 0xBB, 0x02, 0x2C, 0x14, 0x15, 0x17, 0x00, 0x03, 0x03, 0x50, 0x3C,
	0x2B, 0x4A, 0x30, 0x28, 0x5A, 0x94, 0xC5, 0x02, 0x07, 0x00, 0x00, 0x04,
	0x8C, 0x2B, 0x00, 0x83, 0x33, 0xAA, 0x7C, 0x3C, 0x55, 0x76, 0x46, 0x00,
	0x72, 0x53, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x33, 0x0A, 0x0A, 0x28, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13,
	0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x00, 0x01,
	0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D,
	0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x2A, 0x29, 0x28, 0x27, 0x26,
	0x25, 0x24, 0x23, 0x22, 0x21, 0x20, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x19,
	0x18, 0x17, 0x16, 0x15, 0xBD, 0x01};

/* TODO puts your group2 config info here,if need. */
u8 GT9110P_SX_GROUP1[] = {0};

/* TODO puts your group3 config info here,if need. */
u8 GT9110P_SX_GROUP2[] = {0};

/* TODO: define your config for Sensor_ID == 3 here, if needed */
u8 GT9110P_SX_GROUP3[] = {0};

/* TODO: define your config for Sensor_ID == 4 here, if needed */
u8 GT9110P_SX_GROUP4[] = {0};

/* TODO: define your config for Sensor_ID == 5 here, if needed */
u8 GT9110P_SX_GROUP5[] = {0};

struct ctp_cfg GT9110P_SX_CFG = {
	.lens = {CFG_GROUP_LEN(GT9110P_SX_GROUP0),
		 CFG_GROUP_LEN(GT9110P_SX_GROUP1),
		 CFG_GROUP_LEN(GT9110P_SX_GROUP2),
		 CFG_GROUP_LEN(GT9110P_SX_GROUP3),
		 CFG_GROUP_LEN(GT9110P_SX_GROUP4),
		 CFG_GROUP_LEN(GT9110P_SX_GROUP5)},
	.info = {GT9110P_SX_GROUP0, GT9110P_SX_GROUP1, GT9110P_SX_GROUP2,
		 GT9110P_SX_GROUP3, GT9110P_SX_GROUP4, GT9110P_SX_GROUP5} };
