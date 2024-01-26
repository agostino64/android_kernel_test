/* Copyright (C) 2013-2016, Shenzhen Huiding Technology Co., Ltd.
 * Copyright (C) 2021 XiaoMi, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


u8 gf_fw[] = {
		0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X08, 0X12, 0XB0, 0X12,
		0XD0, 0XE2, 0X5F, 0X43, 0XB0, 0X12, 0X3A, 0XE5, 0X5F, 0X43,
		0XB0, 0X12, 0XFE, 0XE3, 0X7F, 0X40, 0XE4, 0XFF, 0XB0, 0X12,
		0X8A, 0XE3, 0X92, 0X43, 0X70, 0X01, 0XB0, 0X12, 0X4A, 0XE2,
		0X5B, 0X42, 0X34, 0X80, 0XF2, 0X42, 0XE4, 0X82, 0XC2, 0X43,
		0XE9, 0X82, 0XC2, 0X9B, 0X40, 0X83, 0XBB, 0X24, 0XD2, 0X43,
		0XE0, 0X82, 0XD2, 0X43, 0XDE, 0X82, 0XE2, 0X92, 0X40, 0X83,
		0XA7, 0X24, 0X1D, 0X42, 0X48, 0X83, 0XC2, 0X4B, 0X40, 0X83,
		0X7A, 0X40, 0X07, 0X00, 0X48, 0X43, 0X19, 0X4D, 0X9C, 0X00,
		0X6B, 0X93, 0X83, 0X24, 0X7B, 0X90, 0X56, 0X00, 0X7A, 0X24,
		0X7B, 0X90, 0X03, 0X00, 0X70, 0X24, 0X4B, 0X93, 0X5A, 0X20,
		0X7A, 0X40, 0X03, 0X00, 0X58, 0X43, 0X7B, 0X90, 0X07, 0X00,
		0X0A, 0X24, 0X1D, 0X42, 0X48, 0X83, 0X7B, 0X90, 0X06, 0X00,
		0X4C, 0X24, 0X5A, 0XFD, 0X10, 0X00, 0X4F, 0X4A, 0XB0, 0X12,
		0X6C, 0XED, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X93, 0X09, 0X00,
		0X3E, 0X20, 0XDF, 0X93, 0X02, 0X00, 0X3B, 0X24, 0XD2, 0X93,
		0X41, 0X83, 0X38, 0X24, 0X4F, 0X43, 0XB0, 0X12, 0X3A, 0XE5,
		0X48, 0X93, 0X05, 0X24, 0XB0, 0X12, 0X4E, 0XF0, 0X4F, 0X48,
		0XB0, 0X12, 0XEC, 0XF0, 0XC2, 0X93, 0XE9, 0X82, 0X24, 0X20,
		0XE2, 0X93, 0XE6, 0X82, 0X21, 0X24, 0X82, 0X49, 0XEC, 0X82,
		0X82, 0X59, 0XE2, 0X82, 0X1F, 0X42, 0X3C, 0X83, 0XDF, 0X93,
		0X09, 0X00, 0X0F, 0X24, 0XD2, 0X93, 0X41, 0X83, 0X04, 0X24,
		0X5F, 0X43, 0XB0, 0X12, 0XFE, 0XE3, 0X9E, 0X3F, 0XC2, 0X43,
		0X41, 0X83, 0X1F, 0X42, 0X48, 0X83, 0X92, 0X4F, 0XCA, 0X00,
		0XEC, 0X82, 0XF4, 0X3F, 0XC2, 0X93, 0XD8, 0X82, 0XEE, 0X27,
		0XB2, 0X40, 0X0A, 0X00, 0XEC, 0X82, 0XF2, 0X53, 0XD8, 0X82,
		0XE8, 0X3F, 0XB2, 0X40, 0X14, 0X00, 0XEC, 0X82, 0XB2, 0X50,
		0XE8, 0X03, 0XE2, 0X82, 0XDC, 0X3F, 0XB2, 0X40, 0X10, 0X27,
		0XE2, 0X82, 0XC7, 0X3F, 0X19, 0X4D, 0X9E, 0X00, 0XB6, 0X3F,
		0X6B, 0X92, 0X0C, 0X24, 0X7B, 0X90, 0X14, 0X00, 0X09, 0X24,
		0X7B, 0X90, 0X05, 0X00, 0X03, 0X24, 0X7B, 0X90, 0X07, 0X00,
		0XA3, 0X23, 0X7A, 0X40, 0X03, 0X00, 0X9B, 0X3F, 0X7A, 0X40,
		0X03, 0X00, 0X19, 0X4D, 0XA4, 0X00, 0X68, 0X43, 0X95, 0X3F,
		0X4A, 0X43, 0X58, 0X43, 0X19, 0X4D, 0XA2, 0X00, 0XE2, 0X42,
		0XE4, 0X82, 0X8E, 0X3F, 0X58, 0X43, 0X3F, 0X40, 0X0C, 0X00,
		0XB0, 0X12, 0XAA, 0XFE, 0X88, 0X3F, 0XE2, 0X42, 0XE4, 0X82,
		0X92, 0X4D, 0XC8, 0X00, 0XEC, 0X82, 0X8D, 0X93, 0XC6, 0X00,
		0X0D, 0X20, 0X4F, 0X43, 0XB0, 0X12, 0XFE, 0XE3, 0X4F, 0X43,
		0XB0, 0X12, 0X6C, 0XED, 0XF2, 0X40, 0X06, 0X00, 0X34, 0X80,
		0X6F, 0X43, 0XB0, 0X12, 0X3A, 0XE5, 0X49, 0X3F, 0X4F, 0X43,
		0XB0, 0X12, 0X6C, 0XED, 0XA3, 0X3F, 0X1D, 0X42, 0X48, 0X83,
		0X5E, 0X4D, 0XA9, 0X00, 0X5F, 0X4D, 0X0A, 0X00, 0X4E, 0X9F,
		0X53, 0X2F, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X43, 0X09, 0X00,
		0X4C, 0X3F, 0X1D, 0X42, 0X48, 0X83, 0X4D, 0X3F, 0X38, 0X41,
		0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41, 0X4A, 0X01,
		0X10, 0X00, 0X3C, 0X42, 0X00, 0X04, 0X64, 0X12, 0X00, 0X03,
		0X40, 0X12, 0X00, 0X00, 0X42, 0X12, 0X00, 0X00, 0X0C, 0X10,
		0X06, 0X01, 0X20, 0X12, 0X32, 0X3A, 0X22, 0X12, 0X32, 0X32,
		0X44, 0X12, 0X02, 0X02, 0X46, 0X12, 0X02, 0X02, 0X72, 0X01,
		0X27, 0X95, 0X38, 0X01, 0X02, 0X04, 0X3A, 0X01, 0XD4, 0X30,
		0X5A, 0X01, 0X01, 0X00, 0X72, 0X01, 0X66, 0X22, 0X00, 0X51,
		0X02, 0X00, 0X18, 0X50, 0X00, 0X00, 0X00, 0X50, 0X05, 0X00,
		0X02, 0X50, 0X40, 0X00, 0X54, 0X50, 0X01, 0X01, 0X5E, 0X50,
		0X01, 0X01, 0X76, 0X01, 0X0C, 0X04, 0X76, 0X01, 0X67, 0X6C,
		0X00, 0X52, 0X00, 0X00, 0X24, 0X42, 0X10, 0X3D, 0X0B, 0X12,
		0X0B, 0X4F, 0X4C, 0X4E, 0X4D, 0X43, 0X4D, 0X9E, 0X0B, 0X2C,
		0X4F, 0X4D, 0X0F, 0X5F, 0X0F, 0X5F, 0X0F, 0X5B, 0X2E, 0X4F,
		0X9E, 0X4F, 0X02, 0X00, 0X00, 0X00, 0X5D, 0X53, 0X4D, 0X9C,
		0XF5, 0X2B, 0X3B, 0X41, 0X30, 0X41, 0X1C, 0X42, 0X48, 0X83,
		0X3D, 0X40, 0XA5, 0XA5, 0X0E, 0X43, 0X0F, 0X4E, 0X0F, 0X5F,
		0X0F, 0X5C, 0X2D, 0X5F, 0X1E, 0X53, 0X3E, 0X90, 0X7F, 0X00,
		0XF8, 0X2B, 0X0D, 0X93, 0X0E, 0X24, 0X92, 0X52, 0XEC, 0X82,
		0XD0, 0X82, 0XB2, 0X90, 0X4D, 0X1D, 0XD0, 0X82, 0X0A, 0X28,
		0X82, 0X43, 0XD0, 0X82, 0X7F, 0X40, 0XE3, 0XFF, 0XB0, 0X12,
		0X8A, 0XE3, 0X03, 0X3C, 0X82, 0X43, 0XD0, 0X82, 0XF2, 0X3F,
		0XF2, 0X40, 0XC6, 0XFF, 0X30, 0X80, 0X30, 0X41, 0XB1, 0XC0,
		0X10, 0X00, 0X0A, 0X00, 0XB2, 0X40, 0X10, 0X00, 0X32, 0X01,
		0XD2, 0X53, 0X4C, 0X83, 0XD2, 0X53, 0X4D, 0X83, 0X30, 0X41,
		0XB1, 0XC0, 0X10, 0X00, 0X0A, 0X00, 0XB2, 0X40, 0X20, 0X00,
		0X32, 0X01, 0XD2, 0X53, 0XCE, 0X82, 0X82, 0X43, 0X18, 0X50,
		0X30, 0X41, 0XB1, 0XC0, 0X10, 0X00, 0X0A, 0X00, 0XB2, 0X40,
		0X40, 0X00, 0X32, 0X01, 0XD2, 0X43, 0XE7, 0X82, 0X30, 0X41,
		0XB2, 0X40, 0X47, 0X46, 0X00, 0X80, 0XB2, 0X40, 0X35, 0X32,
		0X02, 0X80, 0XB2, 0X40, 0X31, 0X36, 0X04, 0X80, 0XB2, 0X40,
		0X5F, 0X04, 0X06, 0X80, 0XB2, 0X40, 0X11, 0X31, 0X08, 0X80,
		0XB2, 0X40, 0X92, 0XE2, 0X18, 0X80, 0XB2, 0X40, 0XA8, 0XE2,
		0X1A, 0X80, 0XB2, 0X40, 0XBE, 0XE2, 0X1C, 0X80, 0X0E, 0X41,
		0X3F, 0X40, 0X30, 0X80, 0X3F, 0XE3, 0X3F, 0X50, 0XE9, 0XFE,
		0X0E, 0X5F, 0X0D, 0X4E, 0X4E, 0X43, 0X3F, 0X40, 0X42, 0X81,
		0XB0, 0X12, 0X4E, 0XFE, 0XB2, 0X40, 0X36, 0X80, 0XD2, 0X82,
		0XB2, 0X40, 0X42, 0X80, 0X48, 0X83, 0X5F, 0X42, 0XD8, 0X80,
		0X5F, 0XD3, 0X7F, 0XF3, 0X82, 0X4F, 0X26, 0X42, 0X5F, 0X42,
		0XD9, 0X80, 0X3F, 0XD0, 0X01, 0X40, 0X3F, 0XF0, 0XF7, 0X40,
		0X82, 0X4F, 0X28, 0X42, 0X7E, 0X40, 0X19, 0X00, 0X3F, 0X40,
		0XC0, 0XE1, 0XB0, 0X12, 0X24, 0XE2, 0XF2, 0X40, 0X06, 0X00,
		0X34, 0X80, 0XB2, 0X40, 0X9C, 0X81, 0X3C, 0X83, 0XD2, 0X43,
		0XA3, 0X81, 0XC2, 0X43, 0X46, 0X83, 0X1F, 0X42, 0XD2, 0X82,
		0XCF, 0X43, 0X05, 0X00, 0XB2, 0X40, 0X40, 0X00, 0XA6, 0X82,
		0XB2, 0X40, 0X40, 0X00, 0XA8, 0X82, 0XF2, 0X43, 0XDC, 0X82,
		0XF2, 0X43, 0XDD, 0X82, 0XD2, 0X43, 0X32, 0X80, 0XD2, 0X43,
		0X33, 0X80, 0X32, 0XD2, 0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12,
		0X4E, 0X4F, 0X7A, 0X40, 0X06, 0X00, 0X7B, 0X40, 0X09, 0X00,
		0X7F, 0X90, 0XC0, 0XFF, 0X23, 0X24, 0X7F, 0X90, 0XC2, 0XFF,
		0X20, 0X24, 0X4F, 0X4E, 0XB0, 0X12, 0XC6, 0XFE, 0XC2, 0X43,
		0X4D, 0X83, 0XC2, 0X4A, 0XDD, 0X82, 0X1E, 0X42, 0XD2, 0X82,
		0XCE, 0X93, 0X01, 0X00, 0X1C, 0X24, 0X5F, 0X42, 0X4D, 0X83,
		0XC2, 0X9F, 0XDD, 0X82, 0XF8, 0X2F, 0X92, 0X43, 0X70, 0X01,
		0X4B, 0X93, 0X08, 0X24, 0XB0, 0X12, 0XD0, 0XFE, 0XC2, 0X43,
		0X4D, 0X83, 0XC2, 0X4A, 0XDD, 0X82, 0X7B, 0X53, 0XEA, 0X3F,
		0XCE, 0X43, 0X01, 0X00, 0X08, 0X3C, 0X1F, 0X42, 0XD2, 0X82,
		0XEF, 0X43, 0X00, 0X00, 0X7A, 0X40, 0X0A, 0X00, 0X6B, 0X42,
		0XD8, 0X3F, 0XF2, 0X43, 0XDD, 0X82, 0X3A, 0X41, 0X3B, 0X41,
		0X30, 0X41, 0XB2, 0X40, 0X27, 0X95, 0X72, 0X01, 0X6F, 0X93,
		0X92, 0X24, 0X7F, 0X90, 0X03, 0X00, 0X8B, 0X24, 0XE2, 0X93,
		0X40, 0X83, 0X03, 0X24, 0XB2, 0XF0, 0XFF, 0XF5, 0X28, 0X42,
		0X82, 0X43, 0X28, 0X12, 0X82, 0X43, 0X2A, 0X12, 0X82, 0X43,
		0X10, 0X12, 0X82, 0X43, 0X2C, 0X12, 0XB2, 0X40, 0X55, 0X01,
		0X3E, 0X50, 0XB2, 0X40, 0X00, 0X01, 0X50, 0X50, 0XB2, 0X40,
		0X01, 0X01, 0X52, 0X50, 0XB2, 0X40, 0XE3, 0X0F, 0X44, 0X01,
		0X6F, 0X92, 0X4C, 0X24, 0X92, 0XD3, 0X3C, 0X01, 0X92, 0XC3,
		0X26, 0X42, 0X5F, 0X93, 0X49, 0X24, 0XB2, 0X42, 0X4E, 0X01,
		0XB2, 0X40, 0X00, 0X0F, 0X38, 0X01, 0XB2, 0X40, 0X11, 0X00,
		0X6A, 0X01, 0XB2, 0X40, 0X10, 0XFD, 0X24, 0X42, 0X03, 0X43,
		0X3F, 0X40, 0X24, 0X42, 0XBF, 0X40, 0XF0, 0XFD, 0X00, 0X00,
		0X92, 0X43, 0X48, 0X01, 0XBF, 0X40, 0X50, 0XFD, 0X00, 0X00,
		0XB2, 0X40, 0X02, 0X04, 0X38, 0X01, 0X03, 0X43, 0XB2, 0X40,
		0X10, 0X3D, 0X24, 0X42, 0X3F, 0X40, 0X15, 0X00, 0XB0, 0X12,
		0X90, 0XFE, 0X3E, 0X40, 0X26, 0X42, 0X9E, 0X43, 0X00, 0X00,
		0XB2, 0X40, 0X50, 0XA4, 0X3C, 0X01, 0XB2, 0X40, 0X7D, 0X00,
		0X52, 0X01, 0X3F, 0X40, 0X50, 0X01, 0XBF, 0X40, 0X00, 0X04,
		0X00, 0X00, 0XBF, 0X40, 0X03, 0X04, 0X00, 0X00, 0X1F, 0X42,
		0X48, 0X83, 0X5F, 0X4F, 0X96, 0X00, 0X5F, 0XD3, 0X7F, 0XF3,
		0X8E, 0X4F, 0X00, 0X00, 0XB2, 0XB0, 0X00, 0X0A, 0X28, 0X42,
		0X03, 0X20, 0XB2, 0XD0, 0X00, 0X0A, 0X28, 0X42, 0X3F, 0X40,
		0XF4, 0X01, 0XB0, 0X12, 0X90, 0XFE, 0X82, 0X43, 0X4E, 0X01,
		0X27, 0X3C, 0X82, 0X93, 0XEC, 0X82, 0XCD, 0X27, 0XB2, 0X40,
		0X19, 0X00, 0X6A, 0X01, 0X92, 0X42, 0XEC, 0X82, 0X52, 0X01,
		0X3F, 0X40, 0X50, 0X01, 0XBF, 0X40, 0X00, 0X01, 0X00, 0X00,
		0XBF, 0X40, 0X03, 0X01, 0X00, 0X00, 0XB2, 0X40, 0X10, 0X7D,
		0X24, 0X42, 0X03, 0X43, 0X3F, 0X40, 0X24, 0X42, 0XBF, 0X40,
		0XD0, 0X7D, 0X00, 0X00, 0X92, 0X43, 0X48, 0X01, 0XBF, 0X40,
		0X50, 0X7D, 0X00, 0X00, 0XB0, 0X3F, 0XB2, 0XD0, 0X00, 0X80,
		0X3C, 0X01, 0X03, 0X3C, 0XB2, 0XF0, 0XFF, 0X7F, 0X3C, 0X01,
		0XB2, 0X40, 0X66, 0X22, 0X72, 0X01, 0X30, 0X41, 0X0B, 0X12,
		0X0A, 0X12, 0X4A, 0X4F, 0X4B, 0X43, 0XB2, 0X90, 0X10, 0X27,
		0XE2, 0X82, 0X02, 0X2C, 0X4F, 0X93, 0X53, 0X24, 0X82, 0X43,
		0XE2, 0X82, 0XB2, 0XF0, 0XEF, 0XFF, 0X82, 0X01, 0X3F, 0X40,
		0X06, 0X00, 0XB0, 0X12, 0XAA, 0XFE, 0X7B, 0X90, 0X10, 0X00,
		0X42, 0X2C, 0X4F, 0X4B, 0X82, 0X4F, 0X82, 0X01, 0X3F, 0X40,
		0X0A, 0X00, 0XB0, 0X12, 0X90, 0XFE, 0X82, 0X93, 0X84, 0X01,
		0X02, 0X20, 0X5B, 0X53, 0XF1, 0X3F, 0X1F, 0X42, 0XD2, 0X82,
		0XCF, 0X4B, 0X06, 0X00, 0XC2, 0X9B, 0XDA, 0X82, 0X2B, 0X2C,
		0X4F, 0X4B, 0X5F, 0X82, 0XDA, 0X82, 0X1E, 0X42, 0X48, 0X83,
		0X5F, 0X9E, 0X99, 0X00, 0X02, 0X28, 0X4A, 0X93, 0X1C, 0X24,
		0X6A, 0X93, 0X09, 0X24, 0X5A, 0X93, 0X04, 0X24, 0XB2, 0XD0,
		0X10, 0X00, 0X82, 0X01, 0X22, 0X3C, 0XC2, 0X4B, 0XDA, 0X82,
		0XF9, 0X3F, 0X5F, 0X9E, 0X9A, 0X00, 0XF4, 0X2B, 0X3D, 0X40,
		0X0A, 0X01, 0X4E, 0X43, 0X3F, 0X40, 0X9C, 0X81, 0XB0, 0X12,
		0X4E, 0XFE, 0X1F, 0X42, 0X3C, 0X83, 0XDF, 0X43, 0X07, 0X00,
		0XC2, 0X43, 0XDF, 0X82, 0XE8, 0X3F, 0X7F, 0X40, 0XD0, 0XFF,
		0XB0, 0X12, 0X8A, 0XE3, 0XE7, 0X3F, 0X5F, 0X42, 0XDA, 0X82,
		0X4F, 0X8B, 0XD4, 0X3F, 0X1F, 0X42, 0XD2, 0X82, 0XFF, 0X43,
		0X06, 0X00, 0XDA, 0X3F, 0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41,
		0XA0, 0X10, 0X00, 0X00, 0XA8, 0X10, 0X26, 0X00, 0XAC, 0X10,
		0X00, 0X00, 0XB6, 0X10, 0X00, 0X00, 0X4A, 0X01, 0X10, 0X00,
		0X04, 0X50, 0X02, 0X00, 0X70, 0X10, 0X00, 0X00, 0X30, 0X10,
		0X02, 0X00, 0X14, 0X10, 0X03, 0X00, 0X50, 0X12, 0X00, 0X00,
		0X80, 0X10, 0X02, 0X00, 0X88, 0X10, 0X02, 0X00, 0X8C, 0X10,
		0X04, 0X00, 0X90, 0X10, 0X18, 0X00, 0XA4, 0X10, 0X00, 0X00,
		0XB0, 0X10, 0X00, 0X00, 0X28, 0X12, 0X40, 0X04, 0X7F, 0XF3,
		0X1F, 0X52, 0X48, 0X83, 0X5F, 0X4F, 0X48, 0X00, 0X7F, 0XF3,
		0X3F, 0XD0, 0X00, 0X4C, 0XC2, 0X43, 0XE7, 0X82, 0X82, 0X4F,
		0X76, 0X01, 0XC2, 0X93, 0XE7, 0X82, 0XFD, 0X27, 0X1F, 0XD3,
		0X82, 0X4F, 0X76, 0X01, 0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12,
		0X09, 0X12, 0X49, 0X4F, 0X09, 0X59, 0X0F, 0X49, 0X3F, 0X50,
		0X92, 0X81, 0XBF, 0X90, 0XB8, 0X0B, 0X00, 0X00, 0X04, 0X2C,
		0XBF, 0X90, 0X08, 0X07, 0X00, 0X00, 0X12, 0X2C, 0X2E, 0X4F,
		0X3E, 0X50, 0XA0, 0XF6, 0X1F, 0X42, 0X48, 0X83, 0X1F, 0X4F,
		0X04, 0X00, 0X1F, 0X53, 0X0C, 0X4E, 0X0A, 0X4F, 0XB0, 0X12,
		0XE8, 0XF2, 0X89, 0X5C, 0XA6, 0X82, 0X1F, 0X42, 0X3C, 0X83,
		0XCF, 0X43, 0X08, 0X00, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41,
		0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X08, 0X12,
		0X07, 0X12, 0X06, 0X12, 0X05, 0X12, 0X04, 0X12, 0X31, 0X80,
		0X06, 0X00, 0X06, 0X4F, 0X75, 0X43, 0XB1, 0X40, 0XFF, 0X03,
		0X00, 0X00, 0X81, 0X43, 0X02, 0X00, 0XC1, 0X43, 0X04, 0X00,
		0XCF, 0X93, 0X08, 0X00, 0XDA, 0X20, 0XCF, 0X93, 0X00, 0X00,
		0XD5, 0X20, 0XEF, 0X93, 0X06, 0X00, 0XCF, 0X28, 0XE2, 0X92,
		0X4A, 0X83, 0XCA, 0X2C, 0XE2, 0X92, 0X42, 0X83, 0XC7, 0X2C,
		0X55, 0X43, 0XC6, 0X43, 0X04, 0X00, 0XC6, 0X43, 0X05, 0X00,
		0XC2, 0X43, 0X42, 0X83, 0XC2, 0X43, 0X4A, 0X83, 0X75, 0X93,
		0X67, 0X25, 0X6E, 0X46, 0X4F, 0X4E, 0X4E, 0X93, 0XB6, 0X24,
		0X48, 0X4E, 0X78, 0X50, 0X1F, 0X00, 0X7F, 0X50, 0X20, 0X00,
		0X48, 0X9F, 0X24, 0X2C, 0X34, 0X40, 0X1A, 0X82, 0X65, 0X93,
		0XA9, 0X24, 0XD6, 0X43, 0X08, 0X00, 0X49, 0X48, 0X0C, 0X49,
		0X0C, 0X5C, 0X07, 0X4C, 0X37, 0X50, 0XD4, 0X81, 0X45, 0X93,
		0X9C, 0X24, 0X5E, 0X46, 0X06, 0X00, 0X1C, 0X4C, 0X1A, 0X82,
		0X0A, 0X4E, 0XB0, 0X12, 0XCC, 0XF2, 0X87, 0X4C, 0X00, 0X00,
		0X09, 0X59, 0X09, 0X54, 0X89, 0X43, 0X00, 0X00, 0XD6, 0X43,
		0X07, 0X00, 0X58, 0X53, 0X6E, 0X46, 0X4F, 0X4E, 0X7F, 0X50,
		0X20, 0X00, 0X48, 0X9F, 0XDE, 0X2B, 0X4E, 0X93, 0X02, 0X24,
		0X55, 0X93, 0X03, 0X24, 0XC6, 0X43, 0X06, 0X00, 0X31, 0X3D,
		0X1F, 0X42, 0X48, 0X83, 0XCF, 0X93, 0X11, 0X00, 0XF8, 0X27,
		0X4F, 0X4E, 0X0B, 0X4F, 0X0B, 0X5B, 0X1A, 0X4B, 0X94, 0X81,
		0XCF, 0X93, 0XA9, 0X82, 0X2F, 0X20, 0X4B, 0X43, 0X2A, 0X41,
		0X1A, 0X51, 0X02, 0X00, 0X12, 0XC3, 0X0A, 0X10, 0X09, 0X4A,
		0X39, 0XD0, 0X00, 0X50, 0X82, 0X49, 0X76, 0X01, 0X6F, 0X46,
		0X7F, 0X53, 0XB0, 0X12, 0X3E, 0XE6, 0X18, 0X42, 0X7A, 0X01,
		0X38, 0X90, 0XB8, 0X0B, 0X18, 0X2C, 0X81, 0X4A, 0X02, 0X00,
		0X5B, 0X53, 0X7B, 0X90, 0X0A, 0X00, 0XE7, 0X2B, 0X6F, 0X46,
		0X3F, 0X50, 0XAA, 0X82, 0XDF, 0X43, 0XFF, 0XFF, 0X6E, 0X46,
		0X37, 0X40, 0XD4, 0X81, 0X4F, 0X4E, 0X0F, 0X5F, 0X0F, 0X57,
		0X8F, 0X48, 0X3E, 0X00, 0X6F, 0X46, 0X0F, 0X5F, 0X8F, 0X49,
		0X94, 0X81, 0XC4, 0X3F, 0X81, 0X4A, 0X00, 0X00, 0XE7, 0X3F,
		0X37, 0X40, 0XD4, 0X81, 0X18, 0X4B, 0X12, 0X82, 0X38, 0X90,
		0XDC, 0X05, 0X35, 0X2C, 0XD1, 0X43, 0X04, 0X00, 0X1A, 0X53,
		0XC1, 0X93, 0X04, 0X00, 0X04, 0X20, 0X09, 0X4A, 0X39, 0XD0,
		0X00, 0X50, 0XE2, 0X3F, 0X3A, 0XF0, 0XFF, 0X53, 0X82, 0X4A,
		0X76, 0X01, 0X6F, 0X46, 0X7F, 0X53, 0XB0, 0X12, 0X3E, 0XE6,
		0X3B, 0X40, 0X7A, 0X01, 0X29, 0X4B, 0X1F, 0X43, 0XB0, 0X12,
		0XAA, 0XFE, 0X6F, 0X46, 0X7F, 0X53, 0XB0, 0X12, 0X3E, 0XE6,
		0X28, 0X4B, 0X1F, 0X43, 0XB0, 0X12, 0XAA, 0XFE, 0X6F, 0X46,
		0X7F, 0X53, 0XB0, 0X12, 0X3E, 0XE6, 0X2B, 0X4B, 0X08, 0X99,
		0X09, 0X2C, 0X09, 0X9B, 0X05, 0X28, 0X08, 0X9B, 0X01, 0X2C,
		0X08, 0X4B, 0X6E, 0X46, 0XD8, 0X3F, 0X08, 0X49, 0XFC, 0X3F,
		0X0B, 0X99, 0XFC, 0X2B, 0X0B, 0X98, 0XF8, 0X2F, 0XF6, 0X3F,
		0X38, 0X90, 0XD9, 0X0E, 0XCB, 0X2B, 0XE1, 0X43, 0X04, 0X00,
		0X3A, 0X53, 0XC7, 0X3F, 0X1C, 0X4C, 0X60, 0X82, 0X68, 0X3F,
		0X49, 0X48, 0X68, 0X3F, 0X48, 0X43, 0X4B, 0X3F, 0X65, 0X43,
		0X38, 0X3F, 0XD2, 0X43, 0X41, 0X83, 0X35, 0X3F, 0X45, 0X43,
		0X33, 0X3F, 0X5F, 0X4F, 0X04, 0X00, 0X4F, 0X9E, 0X6E, 0X28,
		0XC6, 0X43, 0X03, 0X00, 0X6E, 0X46, 0X4E, 0X93, 0X66, 0X20,
		0XC2, 0X93, 0XE5, 0X82, 0X5E, 0X20, 0XD2, 0X43, 0XE5, 0X82,
		0XD2, 0X43, 0X41, 0X83, 0X6E, 0X46, 0X4F, 0X4E, 0X1F, 0X52,
		0X48, 0X83, 0XD6, 0X9F, 0XBE, 0X00, 0X02, 0X00, 0X4C, 0X2C,
		0XE2, 0X93, 0X40, 0X83, 0X49, 0X24, 0XB2, 0X90, 0X32, 0X00,
		0X92, 0X81, 0X04, 0X28, 0XB2, 0X90, 0X32, 0X00, 0X94, 0X81,
		0X07, 0X2C, 0XC6, 0X93, 0X00, 0X00, 0X04, 0X20, 0XC6, 0X43,
		0X09, 0X00, 0XD2, 0X43, 0X3A, 0X83, 0XC6, 0X93, 0X09, 0X00,
		0X13, 0X20, 0XC6, 0X93, 0X02, 0X00, 0X10, 0X20, 0XF6, 0X90,
		0X03, 0X00, 0X04, 0X00, 0X04, 0X2C, 0XF6, 0X90, 0X03, 0X00,
		0X05, 0X00, 0X0E, 0X28, 0XF2, 0X90, 0X10, 0X00, 0X42, 0X83,
		0X0A, 0X2C, 0XF2, 0X90, 0X10, 0X00, 0X4A, 0X83, 0X06, 0X2C,
		0XD2, 0X93, 0X3A, 0X83, 0X03, 0X24, 0X75, 0X93, 0XEE, 0X22,
		0XB3, 0X3F, 0XC2, 0X43, 0X3A, 0X83, 0X5E, 0X46, 0X06, 0X00,
		0X5F, 0X42, 0XE4, 0X82, 0X4E, 0X9F, 0X11, 0X24, 0XC2, 0X9E,
		0XE4, 0X82, 0X01, 0X2C, 0X65, 0X43, 0XC6, 0X93, 0X00, 0X00,
		0XDE, 0X22, 0X4F, 0X43, 0XB0, 0X12, 0X64, 0XE6, 0X5F, 0X43,
		0XB0, 0X12, 0X64, 0XE6, 0XC6, 0X93, 0X08, 0X00, 0XD5, 0X22,
		0X9A, 0X3F, 0XD6, 0X93, 0X07, 0X00, 0XF0, 0X23, 0X55, 0X43,
		0XEE, 0X3F, 0XC6, 0X43, 0X02, 0X00, 0XD6, 0XD3, 0X09, 0X00,
		0X45, 0X43, 0XB1, 0X3F, 0XC2, 0X43, 0XE5, 0X82, 0XD6, 0X53,
		0X02, 0X00, 0XA1, 0X3F, 0XD6, 0X53, 0X02, 0X00, 0X9F, 0X3F,
		0X7F, 0X90, 0X03, 0X00, 0X28, 0X2C, 0XC6, 0X9D, 0X05, 0X00,
		0X25, 0X28, 0XC6, 0X43, 0X02, 0X00, 0X6E, 0X46, 0X4E, 0X93,
		0X1D, 0X20, 0XC2, 0X93, 0XE5, 0X82, 0X15, 0X20, 0XD2, 0X43,
		0XE5, 0X82, 0XD2, 0X43, 0X41, 0X83, 0X6E, 0X46, 0X4F, 0X4E,
		0X1F, 0X52, 0X48, 0X83, 0XD6, 0X9F, 0XC2, 0X00, 0X03, 0X00,
		0X03, 0X2C, 0XE2, 0X93, 0X40, 0X83, 0X8C, 0X23, 0X45, 0X43,
		0XC6, 0X43, 0X03, 0X00, 0XD6, 0XC3, 0X09, 0X00, 0X86, 0X3F,
		0XC2, 0X43, 0XE5, 0X82, 0XD6, 0X53, 0X03, 0X00, 0XEA, 0X3F,
		0XD6, 0X53, 0X03, 0X00, 0XE8, 0X3F, 0XC6, 0X43, 0X02, 0X00,
		0XC6, 0X43, 0X03, 0X00, 0XC2, 0X43, 0XE5, 0X82, 0X77, 0X3F,
		0X31, 0X50, 0X06, 0X00, 0X34, 0X41, 0X35, 0X41, 0X36, 0X41,
		0X37, 0X41, 0X38, 0X41, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41,
		0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X0B, 0X4F,
		0X09, 0X4D, 0X4F, 0X4C, 0X0C, 0X4E, 0X4A, 0X4F, 0X0F, 0X4A,
		0X0F, 0X5F, 0X0E, 0X4F, 0X3E, 0X50, 0X60, 0X82, 0X1D, 0X4F,
		0XD4, 0X81, 0X2D, 0X8E, 0X1F, 0X4F, 0X1A, 0X82, 0X2F, 0X8E,
		0X0E, 0X4F, 0XCB, 0X93, 0X00, 0X00, 0X06, 0X20, 0XDB, 0XB3,
		0X09, 0X00, 0X03, 0X24, 0X09, 0X9C, 0X27, 0X2C, 0X0C, 0X89,
		0X0D, 0X9C, 0X1C, 0X38, 0XDB, 0X53, 0X04, 0X00, 0XDB, 0X93,
		0X08, 0X00, 0X0D, 0X24, 0X0E, 0X9C, 0X03, 0X38, 0XD2, 0X53,
		0X42, 0X83, 0X1E, 0X3C, 0X0F, 0X4E, 0X3F, 0XE3, 0X1F, 0X53,
		0X0F, 0X99, 0X19, 0X38, 0XD2, 0X53, 0X4A, 0X83, 0X16, 0X3C,
		0X3D, 0X90, 0X30, 0X00, 0XF2, 0X37, 0X0F, 0X4D, 0X3F, 0XE3,
		0X1F, 0X53, 0X3F, 0X90, 0X28, 0X00, 0X0D, 0X38, 0XF3, 0X3F,
		0X0F, 0X4D, 0X3F, 0XE3, 0X1F, 0X53, 0X0F, 0X99, 0XE1, 0X3B,
		0XDB, 0X53, 0X05, 0X00, 0XDE, 0X3F, 0X0F, 0X49, 0X0F, 0X8C,
		0X0C, 0X4F, 0XD6, 0X3F, 0X0A, 0X5A, 0X9A, 0X5A, 0X60, 0X82,
		0X1A, 0X82, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41,
		0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X49, 0X4F, 0X0A, 0X43,
		0X4B, 0X43, 0X4F, 0X49, 0XB0, 0X12, 0X3E, 0XE6, 0X1A, 0X52,
		0X7A, 0X01, 0X5B, 0X53, 0X7B, 0X92, 0XF8, 0X2B, 0X0F, 0X4A,
		0X12, 0XC3, 0X0F, 0X10, 0X0F, 0X11, 0X12, 0XC3, 0X0F, 0X10,
		0X82, 0X4F, 0XD6, 0X82, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41,
		0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X08, 0X12,
		0X07, 0X12, 0X06, 0X12, 0X05, 0X12, 0X49, 0X4F, 0X45, 0X43,
		0XC2, 0X93, 0X41, 0X83, 0X86, 0X20, 0X4B, 0X4F, 0X0B, 0X5B,
		0X0B, 0X5B, 0X0B, 0X5B, 0X7F, 0XF3, 0X0F, 0X5F, 0X0B, 0X5F,
		0X0B, 0X5F, 0X0B, 0X5F, 0X08, 0X4B, 0X38, 0X50, 0XAA, 0X81,
		0X3E, 0X40, 0X76, 0X01, 0X47, 0X49, 0X0A, 0X4F, 0X1F, 0X52,
		0X48, 0X83, 0X9E, 0X4F, 0X3C, 0X00, 0X00, 0X00, 0X9E, 0X4F,
		0X30, 0X00, 0X00, 0X00, 0X9E, 0X4F, 0X42, 0X00, 0X00, 0X00,
		0X9E, 0X4A, 0X96, 0X81, 0X00, 0X00, 0X0F, 0X47, 0X3F, 0XD0,
		0X04, 0X58, 0X8E, 0X4F, 0X00, 0X00, 0XC8, 0X93, 0X08, 0X00,
		0X13, 0X20, 0X3D, 0X40, 0X0E, 0X00, 0X4E, 0X43, 0X0F, 0X48,
		0XB0, 0X12, 0X4E, 0XFE, 0X59, 0X53, 0XCB, 0X49, 0XAA, 0X81,
		0XD8, 0X43, 0X07, 0X00, 0X8A, 0X43, 0XA0, 0X82, 0X5D, 0X43,
		0X5E, 0X43, 0X0F, 0X48, 0XB0, 0X12, 0XB0, 0XE6, 0X4D, 0X3C,
		0X4F, 0X49, 0XB0, 0X12, 0X8C, 0XEA, 0X16, 0X42, 0XD6, 0X82,
		0X0C, 0X4A, 0X3C, 0X50, 0XD4, 0X81, 0X1E, 0X4C, 0X40, 0X00,
		0X0E, 0X86, 0X1B, 0X42, 0X48, 0X83, 0X0D, 0X4A, 0X0D, 0X5B,
		0X1F, 0X4D, 0X12, 0X00, 0X12, 0XC3, 0X0F, 0X10, 0X0E, 0X9F,
		0X2D, 0X38, 0X55, 0X43, 0X45, 0X93, 0X12, 0X20, 0X0F, 0X47,
		0X0F, 0X5F, 0X8F, 0X46, 0XA0, 0X82, 0XD8, 0X53, 0X06, 0X00,
		0X79, 0X50, 0X20, 0X00, 0X0F, 0X5B, 0X4C, 0X49, 0X1D, 0X4F,
		0X18, 0X00, 0X1E, 0X4F, 0X12, 0X00, 0X0F, 0X48, 0XB0, 0X12,
		0XEE, 0XE9, 0XD0, 0X3F, 0X1F, 0X43, 0XB0, 0X12, 0XAA, 0XFE,
		0X4F, 0X49, 0XB0, 0X12, 0X8C, 0XEA, 0X65, 0X93, 0X0C, 0X24,
		0X55, 0X93, 0X03, 0X24, 0X1B, 0X42, 0X48, 0X83, 0XE1, 0X3F,
		0X1F, 0X42, 0XD6, 0X82, 0X06, 0X9F, 0XF9, 0X2F, 0X16, 0X42,
		0XD6, 0X82, 0XF6, 0X3F, 0X82, 0X96, 0XD6, 0X82, 0XFA, 0X2B,
		0XF0, 0X3F, 0X0E, 0X46, 0X1E, 0X8C, 0X40, 0X00, 0X1F, 0X4D,
		0X18, 0X00, 0X12, 0XC3, 0X0F, 0X10, 0X0E, 0X9F, 0XCB, 0X3B,
		0X65, 0X43, 0XC9, 0X3F, 0X35, 0X41, 0X36, 0X41, 0X37, 0X41,
		0X38, 0X41, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41,
		0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X08, 0X12, 0X07, 0X12,
		0X78, 0X40, 0X20, 0X00, 0X47, 0X43, 0X39, 0X40, 0X1A, 0X00,
		0X1F, 0X42, 0X3C, 0X83, 0X5B, 0X4F, 0X07, 0X00, 0XB0, 0X12,
		0XF6, 0XEF, 0X7E, 0X40, 0X11, 0X00, 0X3F, 0X40, 0XFA, 0XE5,
		0XB0, 0X12, 0X24, 0XE2, 0X1F, 0X42, 0X48, 0X83, 0X92, 0X4F,
		0XB8, 0X00, 0X24, 0X01, 0X92, 0X4F, 0XBA, 0X00, 0X26, 0X01,
		0X92, 0X4F, 0XBC, 0X00, 0X28, 0X01, 0X5F, 0X4F, 0X0B, 0X00,
		0X7F, 0XF3, 0X82, 0X4F, 0X84, 0X10, 0X5B, 0X93, 0X82, 0X24,
		0X77, 0X40, 0X10, 0X00, 0XB2, 0X40, 0X00, 0X55, 0X20, 0X10,
		0XB2, 0X40, 0X32, 0X01, 0X10, 0X10, 0XB2, 0X40, 0X32, 0X00,
		0X00, 0X11, 0X39, 0X40, 0X3A, 0X00, 0X1F, 0X42, 0X3C, 0X83,
		0XDF, 0X53, 0X06, 0X00, 0X5F, 0X43, 0X4F, 0X8B, 0X4A, 0X4F,
		0X0A, 0X5A, 0X92, 0X4A, 0XA6, 0X82, 0X18, 0X11, 0XC2, 0X4F,
		0XA3, 0X81, 0X0F, 0X49, 0XB0, 0X12, 0X92, 0XF0, 0X92, 0X43,
		0X00, 0X10, 0XB0, 0X12, 0XAA, 0XF0, 0X3F, 0X40, 0X05, 0X00,
		0XB0, 0X12, 0X90, 0XFE, 0X1F, 0X42, 0X76, 0X51, 0X12, 0XC3,
		0X0F, 0X10, 0X0F, 0X11, 0X0F, 0X11, 0X12, 0XC3, 0X0F, 0X10,
		0X8A, 0X4F, 0X92, 0X81, 0X4B, 0X47, 0X49, 0X43, 0X47, 0X98,
		0X5B, 0X2C, 0X4C, 0X4B, 0X0E, 0X4C, 0X0E, 0X5E, 0X4F, 0X49,
		0X9E, 0X4F, 0X36, 0X51, 0X60, 0X82, 0X1F, 0X42, 0X3C, 0X83,
		0XCF, 0X93, 0X09, 0X00, 0X0F, 0X24, 0X1D, 0X4E, 0X60, 0X82,
		0X1D, 0X8A, 0X92, 0X81, 0X8E, 0X9D, 0XF0, 0X82, 0X38, 0X34,
		0X0F, 0X4D, 0X1F, 0X8E, 0XF0, 0X82, 0X82, 0X5F, 0X38, 0X83,
		0X0C, 0X5C, 0X8C, 0X4D, 0XF0, 0X82, 0X4B, 0X93, 0X21, 0X24,
		0X7B, 0X90, 0X03, 0X00, 0X1E, 0X24, 0X7B, 0X90, 0X1F, 0X00,
		0X1B, 0X24, 0X7B, 0X90, 0X1C, 0X00, 0X18, 0X24, 0X4E, 0X4B,
		0X7E, 0XF0, 0X03, 0X00, 0X4F, 0X4B, 0X6F, 0X82, 0X7F, 0X90,
		0X18, 0X00, 0X15, 0X2C, 0X4E, 0X93, 0X13, 0X24, 0X7E, 0X90,
		0X03, 0X00, 0X10, 0X24, 0X1F, 0X42, 0X48, 0X83, 0X4C, 0X4B,
		0X1D, 0X4F, 0X08, 0X00, 0X1E, 0X4F, 0X06, 0X00, 0X1F, 0X42,
		0X3C, 0X83, 0XB0, 0X12, 0XEE, 0XE9, 0X69, 0X53, 0X5B, 0X53,
		0X4B, 0X98, 0XBE, 0X2B, 0X18, 0X3C, 0X1F, 0X42, 0X48, 0X83,
		0X4C, 0X4B, 0X1D, 0X4F, 0X0E, 0X00, 0X1E, 0X4F, 0X0C, 0X00,
		0XEF, 0X3F, 0X1F, 0X4E, 0XF0, 0X82, 0X0F, 0X8D, 0XC7, 0X3F,
		0X78, 0X40, 0X10, 0X00, 0XB2, 0X40, 0X55, 0X00, 0X20, 0X10,
		0XB2, 0X40, 0X2D, 0X01, 0X10, 0X10, 0XB2, 0X40, 0X2D, 0X00,
		0X00, 0X11, 0X83, 0X3F, 0X37, 0X41, 0X38, 0X41, 0X39, 0X41,
		0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12,
		0X09, 0X12, 0X08, 0X12, 0X49, 0X4F, 0X1F, 0X42, 0X48, 0X83,
		0X5B, 0X4F, 0X0A, 0X00, 0X48, 0X4B, 0X1A, 0X42, 0XEC, 0X82,
		0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X43, 0X00, 0X00, 0X82, 0X43,
		0X38, 0X83, 0XB0, 0X12, 0XF4, 0XEB, 0XE2, 0X92, 0X40, 0X83,
		0X0F, 0X25, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X93, 0X09, 0X00,
		0X0B, 0X20, 0XFF, 0X90, 0X03, 0X00, 0X04, 0X00, 0X07, 0X2C,
		0XFF, 0X90, 0X03, 0X00, 0X05, 0X00, 0X03, 0X2C, 0XCF, 0X93,
		0X08, 0X00, 0X20, 0X20, 0X1F, 0X42, 0X48, 0X83, 0X92, 0X4F,
		0XCA, 0X00, 0XEC, 0X82, 0X5F, 0X43, 0XB0, 0X12, 0XFE, 0XE3,
		0X3F, 0X40, 0X96, 0X00, 0XB0, 0X12, 0X90, 0XFE, 0XB0, 0X12,
		0XF4, 0XEB, 0X82, 0X4A, 0XEC, 0X82, 0XE2, 0X92, 0X40, 0X83,
		0XE5, 0X24, 0XC2, 0X93, 0X40, 0X83, 0XDC, 0X24, 0XF2, 0X90,
		0X03, 0X00, 0X40, 0X83, 0XD8, 0X24, 0XF2, 0X90, 0X05, 0X00,
		0X40, 0X83, 0XD4, 0X24, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X93,
		0X09, 0X00, 0XCC, 0X20, 0XFF, 0X90, 0X03, 0X00, 0X04, 0X00,
		0X04, 0X2C, 0XFF, 0X90, 0X03, 0X00, 0X05, 0X00, 0XC4, 0X28,
		0XF2, 0X93, 0X46, 0X83, 0XBC, 0X24, 0XD2, 0X53, 0X46, 0X83,
		0X6F, 0X42, 0XB0, 0X12, 0XFE, 0XE3, 0X4D, 0X48, 0X4E, 0X4B,
		0X1F, 0X42, 0X3C, 0X83, 0XB0, 0X12, 0XB0, 0XE6, 0X1E, 0X42,
		0X3C, 0X83, 0X1F, 0X42, 0XD2, 0X82, 0XDF, 0X4E, 0X09, 0X00,
		0X08, 0X00, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X93, 0X09, 0X00,
		0X14, 0X24, 0XC2, 0X93, 0XE0, 0X82, 0X11, 0X24, 0XC2, 0X93,
		0X40, 0X83, 0X03, 0X20, 0XD2, 0X93, 0X33, 0X80, 0X97, 0X24,
		0XF2, 0X90, 0X03, 0X00, 0X40, 0X83, 0X90, 0X24, 0XC2, 0X93,
		0X40, 0X83, 0X8A, 0X24, 0XF2, 0X90, 0X03, 0X00, 0X40, 0X83,
		0X86, 0X24, 0XC2, 0X43, 0XE0, 0X82, 0X5A, 0X4F, 0X09, 0X00,
		0X6F, 0X43, 0XB0, 0X12, 0XFE, 0XE3, 0X3F, 0X40, 0X76, 0X01,
		0XBF, 0X40, 0X30, 0X68, 0X00, 0X00, 0XBF, 0X40, 0X08, 0X74,
		0X00, 0X00, 0XB2, 0X40, 0X50, 0X00, 0X4A, 0X01, 0X59, 0XB3,
		0X6C, 0X24, 0X4F, 0X43, 0XB0, 0X12, 0XC0, 0XEA, 0XC2, 0X93,
		0XB3, 0X81, 0X02, 0X24, 0X7A, 0XD0, 0X10, 0X00, 0X69, 0XB3,
		0X5C, 0X24, 0X5F, 0X43, 0XB0, 0X12, 0XC0, 0XEA, 0XC2, 0X93,
		0XC1, 0X81, 0X01, 0X24, 0X6A, 0XD2, 0X69, 0XB2, 0X4D, 0X24,
		0X6F, 0X43, 0XB0, 0X12, 0XC0, 0XEA, 0XC2, 0X93, 0XCF, 0X81,
		0X01, 0X24, 0X5A, 0XD3, 0XB2, 0X40, 0X07, 0X58, 0X76, 0X01,
		0X7F, 0X40, 0X03, 0X00, 0XB0, 0X12, 0XFE, 0XE3, 0XC2, 0X93,
		0XE8, 0X82, 0X39, 0X20, 0X1E, 0X42, 0XD2, 0X82, 0X5F, 0X4E,
		0X05, 0X00, 0X7F, 0XF0, 0X03, 0X00, 0X6F, 0X93, 0X2B, 0X24,
		0X5B, 0X42, 0XDF, 0X82, 0X4B, 0XEA, 0X4B, 0X5B, 0X4B, 0XDA,
		0XC2, 0X4A, 0XDF, 0X82, 0XCE, 0X4B, 0X05, 0X00, 0XE2, 0X93,
		0X40, 0X83, 0X60, 0X24, 0X7B, 0XB0, 0X2A, 0X00, 0X17, 0X20,
		0XF2, 0X90, 0X11, 0X00, 0X40, 0X83, 0X13, 0X24, 0X7B, 0XF0,
		0X03, 0X00, 0X7B, 0X90, 0X03, 0X00, 0X0B, 0X24, 0X6B, 0X93,
		0X52, 0X20, 0XC2, 0X43, 0XE6, 0X82, 0XF2, 0X90, 0X56, 0X00,
		0X40, 0X83, 0X4C, 0X24, 0XC2, 0X43, 0X40, 0X80, 0X49, 0X3C,
		0XD2, 0X43, 0XE6, 0X82, 0X46, 0X3C, 0X7F, 0X40, 0XB0, 0XFF,
		0XB0, 0X12, 0X8A, 0XE3, 0XE8, 0X3F, 0XD2, 0X43, 0XE8, 0X82,
		0X7F, 0X40, 0XD0, 0XFF, 0XB0, 0X12, 0X8A, 0XE3, 0X1E, 0X42,
		0XD2, 0X82, 0XCC, 0X3F, 0XC2, 0X93, 0X41, 0X83, 0XB7, 0X23,
		0XC2, 0X43, 0XCE, 0X81, 0XB4, 0X3F, 0XC2, 0X93, 0X41, 0X83,
		0XA8, 0X23, 0XC2, 0X43, 0XC0, 0X81, 0XA5, 0X3F, 0XC2, 0X93,
		0X41, 0X83, 0X99, 0X23, 0XC2, 0X43, 0XB2, 0X81, 0X96, 0X3F,
		0XD2, 0X43, 0X40, 0X80, 0X77, 0X3F, 0XD2, 0X93, 0X32, 0X80,
		0X6D, 0X23, 0XD2, 0XC3, 0XDF, 0X82, 0XC2, 0X43, 0X40, 0X80,
		0X6F, 0X3F, 0XC2, 0X43, 0X46, 0X83, 0XCF, 0X43, 0X08, 0X00,
		0X41, 0X3F, 0XC2, 0X43, 0X46, 0X83, 0X3E, 0X3F, 0X1F, 0X42,
		0X48, 0X83, 0X1F, 0X4F, 0X52, 0X00, 0X4B, 0X4F, 0X26, 0X3F,
		0X1F, 0X42, 0X48, 0X83, 0X5B, 0X4F, 0XA9, 0X00, 0X58, 0X4F,
		0XB2, 0X00, 0X1F, 0X3F, 0X1F, 0X42, 0X3C, 0X83, 0XCF, 0X93,
		0X07, 0X00, 0XFC, 0X26, 0XED, 0X3E, 0X38, 0X41, 0X39, 0X41,
		0X3A, 0X41, 0X3B, 0X41, 0X30, 0X41, 0X4A, 0X01, 0X30, 0X00,
		0X28, 0X12, 0XF0, 0X0F, 0X50, 0X12, 0X00, 0X00, 0X10, 0X10,
		0X4F, 0X01, 0X00, 0X11, 0X4F, 0X00, 0XA0, 0X10, 0X12, 0X00,
		0XA8, 0X10, 0X0A, 0X00, 0XAC, 0X10, 0X10, 0X00, 0XB6, 0X10,
		0X0A, 0X00, 0X04, 0X50, 0X00, 0X00, 0X3F, 0X40, 0X72, 0X01,
		0XBF, 0X40, 0X27, 0X95, 0X00, 0X00, 0XB2, 0X40, 0X10, 0X06,
		0X44, 0X01, 0XBF, 0X40, 0X66, 0X22, 0X00, 0X00, 0X92, 0X43,
		0X10, 0X12, 0XB2, 0X40, 0X00, 0X02, 0X2A, 0X12, 0XB2, 0X40,
		0XF2, 0X0F, 0X2C, 0X12, 0X92, 0X43, 0X4E, 0X12, 0XB2, 0X40,
		0X00, 0X01, 0X3E, 0X50, 0XB2, 0X40, 0X01, 0X01, 0X50, 0X50,
		0XB2, 0X40, 0X00, 0X01, 0X52, 0X50, 0X92, 0X43, 0X0A, 0X52,
		0X82, 0X43, 0X18, 0X50, 0X3F, 0X40, 0X4E, 0X01, 0XBF, 0X40,
		0X10, 0X00, 0X00, 0X00, 0X8F, 0X43, 0X00, 0X00, 0X82, 0X43,
		0X34, 0X10, 0X30, 0X41, 0X4D, 0X43, 0XC2, 0X93, 0XE6, 0X82,
		0X12, 0X24, 0X1E, 0X42, 0X48, 0X83, 0X1F, 0X42, 0X38, 0X83,
		0X8E, 0X9F, 0X54, 0X00, 0X0F, 0X28, 0XD2, 0X93, 0XE6, 0X82,
		0X0C, 0X24, 0XBE, 0X93, 0X54, 0X00, 0X06, 0X24, 0XC2, 0X43,
		0XE6, 0X82, 0X4F, 0X4D, 0XB0, 0X12, 0XAA, 0XFE, 0X30, 0X41,
		0X5D, 0X4E, 0X50, 0X00, 0XF7, 0X3F, 0XBE, 0X93, 0X54, 0X00,
		0XF4, 0X27, 0XE2, 0X43, 0XE6, 0X82, 0X5D, 0X4E, 0X51, 0X00,
		0XF1, 0X3F, 0X0C, 0X4F, 0X4D, 0X43, 0X4E, 0X4D, 0X0F, 0X4E,
		0X0F, 0X5F, 0X0E, 0X5C, 0X8F, 0X4E, 0X30, 0X50, 0X5D, 0X53,
		0X6D, 0X92, 0XF7, 0X2B, 0X30, 0X41, 0XB2, 0X40, 0X00, 0X01,
		0X00, 0X10, 0X3F, 0X40, 0X00, 0X14, 0X8F, 0X93, 0X00, 0X00,
		0XFD, 0X23, 0X30, 0X41, 0X0B, 0X12, 0X0B, 0X4F, 0X0C, 0X4E,
		0X1F, 0X42, 0X48, 0X83, 0XCF, 0X93, 0X9B, 0X00, 0X01, 0X20,
		0X0C, 0X43, 0X4D, 0X43, 0X4E, 0X4D, 0X0F, 0X4E, 0X0F, 0X5F,
		0X0F, 0X5F, 0X0E, 0X5B, 0X6E, 0X4E, 0X0E, 0X5C, 0X8F, 0X4E,
		0X10, 0X11, 0X5D, 0X53, 0X6D, 0X92, 0XF4, 0X2B, 0X3B, 0X41,
		0X30, 0X41, 0X0B, 0X12, 0X0A, 0X12, 0X09, 0X12, 0X08, 0X12,
		0X07, 0X12, 0X06, 0X12, 0X05, 0X12, 0X08, 0X4F, 0X4B, 0X43,
		0X76, 0X40, 0X10, 0X00, 0X69, 0X42, 0X4A, 0X43, 0X75, 0X40,
		0XC0, 0XFF, 0X1F, 0X42, 0X48, 0X83, 0X5F, 0X4F, 0X4E, 0X00,
		0X47, 0X4F, 0XC2, 0X93, 0X40, 0X80, 0XD1, 0X20, 0XF2, 0X90,
		0X56, 0X00, 0X40, 0X83, 0X0F, 0X24, 0XF2, 0X90, 0X14, 0X00,
		0X40, 0X83, 0X0B, 0X24, 0X1F, 0X42, 0X3C, 0X83, 0XDF, 0X93,
		0X09, 0X00, 0XC4, 0X20, 0XC2, 0X93, 0XE6, 0X82, 0X03, 0X24,
		0XE2, 0X92, 0X40, 0X83, 0XBE, 0X20, 0XD2, 0X43, 0XE9, 0X82,
		0XE2, 0X42, 0XD8, 0X82, 0XB2, 0XB0, 0X00, 0X0A, 0X28, 0X42,
		0X03, 0X20, 0XB2, 0XD0, 0X00, 0X0A, 0X28, 0X42, 0X3F, 0X40,
		0X8A, 0X02, 0XB0, 0X12, 0X90, 0XFE, 0XB0, 0X12, 0XF6, 0XEF,
		0X7E, 0X40, 0X0A, 0X00, 0X3F, 0X40, 0XCE, 0XEF, 0XB0, 0X12,
		0X24, 0XE2, 0X1E, 0X42, 0X48, 0X83, 0X92, 0X4E, 0X4C, 0X00,
		0X84, 0X10, 0X5F, 0X4E, 0X4B, 0X00, 0X7F, 0XF3, 0X82, 0X4F,
		0X14, 0X10, 0X92, 0X4E, 0X68, 0X00, 0X24, 0X01, 0X92, 0X4E,
		0X6A, 0X00, 0X26, 0X01, 0X92, 0X4E, 0X6C, 0X00, 0X28, 0X01,
		0XC2, 0X43, 0XCE, 0X82, 0X28, 0X93, 0X89, 0X24, 0XC2, 0X43,
		0X4C, 0X83, 0XF2, 0X40, 0X3C, 0X00, 0XDC, 0X82, 0X92, 0X43,
		0X00, 0X10, 0X1F, 0X42, 0XD2, 0X82, 0XCF, 0X93, 0X00, 0X00,
		0X03, 0X20, 0XC2, 0X96, 0XCE, 0X82, 0X26, 0X2C, 0X82, 0X93,
		0X00, 0X14, 0X11, 0X20, 0X6B, 0X92, 0X0F, 0X2C, 0XD2, 0X93,
		0XCE, 0X82, 0X6C, 0X24, 0X4A, 0X93, 0X21, 0X24, 0X82, 0X43,
		0X70, 0X10, 0XA2, 0X42, 0X20, 0X10, 0X5F, 0X43, 0X4F, 0X8A,
		0X4A, 0X4F, 0XB2, 0X40, 0X00, 0X01, 0X00, 0X10, 0X5F, 0X42,
		0X4C, 0X83, 0XC2, 0X9F, 0XDC, 0X82, 0XDF, 0X2F, 0X3B, 0X40,
		0X0A, 0X52, 0X9B, 0X43, 0X00, 0X00, 0X2F, 0X43, 0XB0, 0X12,
		0XAA, 0XFE, 0X9B, 0X43, 0X00, 0X00, 0X3F, 0X40, 0X64, 0X00,
		0XB0, 0X12, 0XAA, 0XFE, 0X92, 0X43, 0X0A, 0X52, 0XF2, 0X43,
		0XDC, 0X82, 0X56, 0X3C, 0X82, 0X47, 0X70, 0X10, 0X6B, 0X93,
		0X37, 0X24, 0X7B, 0X90, 0X03, 0X00, 0X26, 0X24, 0X5B, 0X93,
		0X1E, 0X24, 0X1F, 0X42, 0X48, 0X83, 0X3F, 0X50, 0X56, 0X00,
		0X1E, 0X42, 0X72, 0X81, 0XB0, 0X12, 0XBC, 0XF0, 0XB2, 0X40,
		0X0F, 0X00, 0X20, 0X10, 0X3F, 0X40, 0X0C, 0X00, 0XB0, 0X12,
		0X92, 0XF0, 0X28, 0X93, 0X09, 0X24, 0X79, 0X53, 0X4F, 0X49,
		0X82, 0X4F, 0X30, 0X10, 0X49, 0X93, 0XC3, 0X23, 0X5B, 0X53,
		0X69, 0X42, 0XC0, 0X3F, 0X92, 0X43, 0X30, 0X10, 0X5B, 0X53,
		0XBC, 0X3F, 0XB2, 0X40, 0XF0, 0X00, 0X20, 0X10, 0X3F, 0X40,
		0X1C, 0X00, 0XE9, 0X3F, 0X1F, 0X42, 0X48, 0X83, 0X3F, 0X50,
		0X60, 0X00, 0X1E, 0X42, 0X7A, 0X81, 0XB0, 0X12, 0XBC, 0XF0,
		0XB2, 0X40, 0X00, 0X70, 0X20, 0X10, 0X3F, 0X40, 0X38, 0X00,
		0XDB, 0X3F, 0X1F, 0X42, 0X48, 0X83, 0X3F, 0X50, 0X5C, 0X00,
		0X1E, 0X42, 0X7A, 0X81, 0XB0, 0X12, 0XBC, 0XF0, 0XB2, 0X40,
		0X00, 0X0F, 0X20, 0X10, 0X3F, 0X40, 0X2C, 0X00, 0XCD, 0X3F,
		0X4A, 0X93, 0X94, 0X23, 0X4F, 0X45, 0XB0, 0X12, 0X8A, 0XE3,
		0X8E, 0X3F, 0X66, 0X42, 0X75, 0X40, 0XC2, 0XFF, 0X5F, 0X4E,
		0XB3, 0X00, 0X47, 0X4F, 0X70, 0X3F, 0X35, 0X41, 0X36, 0X41,
		0X37, 0X41, 0X38, 0X41, 0X39, 0X41, 0X3A, 0X41, 0X3B, 0X41,
		0X30, 0X41, 0X0E, 0XEE, 0X3B, 0X40, 0X11, 0X00, 0X05, 0X3C,
		0X0D, 0X10, 0X0E, 0X6E, 0X0E, 0X9A, 0X01, 0X28, 0X0E, 0X8A,
		0X0C, 0X6C, 0X0D, 0X6D, 0X1B, 0X83, 0XF7, 0X23, 0X30, 0X41,
		0X0D, 0X43, 0X3C, 0XB0, 0X00, 0X80, 0X03, 0X28, 0X3C, 0XE3,
		0X1C, 0X53, 0X2D, 0XD2, 0X3A, 0XB0, 0X00, 0X80, 0X03, 0X28,
		0X3A, 0XE3, 0X1A, 0X53, 0X3D, 0XD2, 0XB0, 0X12, 0XCC, 0XF2,
		0X0D, 0X10, 0X2D, 0XB2, 0X04, 0X28, 0X3E, 0XE3, 0X1E, 0X53,
		0X3C, 0XE3, 0X1C, 0X53, 0X3D, 0XB2, 0X02, 0X28, 0X3C, 0XE3,
		0X1C, 0X53, 0X30, 0X41, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X98, 0XFD
};


u8 gf_cfg[] = {
		0X00, 0X01, 0X90, 0X01, 0X90, 0X01, 0X90, 0X01, 0X00, 0X01,
		0X00, 0X01, 0X80, 0X00, 0X00, 0X04, 0X00, 0X04, 0XC8, 0X00,
		0X00, 0X03, 0X00, 0X03, 0XA0, 0X00, 0X00, 0X02, 0X00, 0X02,
		0X20, 0X01, 0X1F, 0X64, 0X1F, 0X64, 0X25, 0X64, 0X00, 0X50,
		0X00, 0X50, 0X00, 0X50, 0X37, 0X5C, 0X37, 0X5C, 0X36, 0X5C,
		0X01, 0X60, 0X01, 0X60, 0X01, 0X60, 0X20, 0X20, 0X10, 0X03,
		0XBF, 0X00, 0X03, 0X01, 0X00, 0X01, 0X0F, 0X00, 0X80, 0X00,
		0X4E, 0X5B, 0X40, 0X61, 0X41, 0X00, 0X59, 0X66, 0X4B, 0X6C,
		0X59, 0X66, 0X4B, 0X6C, 0X00, 0X00, 0X5C, 0X00, 0X49, 0X44,
		0XB4, 0XBB, 0XFB, 0X8F, 0X00, 0X03, 0XFF, 0X0C, 0X13, 0X0C,
		0X3C, 0X18, 0X68, 0XFC, 0X01, 0X28, 0X00, 0X2C, 0X12, 0X30,
		0X0A, 0X34, 0X00, 0X24, 0X13, 0X0C, 0X3C, 0X18, 0X74, 0XFC,
		0X01, 0X28, 0X00, 0X2C, 0X10, 0X24, 0X57, 0X00, 0X00, 0X44,
		0X00, 0X00, 0X00, 0X00, 0X4B, 0X9B, 0X08, 0X02, 0X02, 0X01,
		0XB4, 0X00, 0X60, 0X01, 0X01, 0X01, 0XCA, 0X01, 0XB4, 0X00,
		0X00, 0X00, 0X10, 0X06, 0XD0, 0X00, 0X88, 0X00, 0X90, 0X00,
		0X58, 0X00, 0X06, 0X01, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X01, 0X02, 0X02, 0X02, 0X02, 0X02,
		0X02, 0X02, 0X00, 0X00, 0X00, 0X30, 0X26, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
		0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XE1, 0X21, 0X00, 0X01
};
