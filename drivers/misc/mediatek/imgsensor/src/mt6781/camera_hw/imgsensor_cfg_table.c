/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "kd_imgsensor.h"

#include "mclk/mclk.h"
#include "regulator/regulator.h"
#include "gpio/gpio.h"

#include "imgsensor_hw.h"
#include "imgsensor_cfg_table.h"
enum IMGSENSOR_RETURN (*hw_open[IMGSENSOR_HW_ID_MAX_NUM])
	(struct IMGSENSOR_HW_DEVICE **) = {
	imgsensor_hw_mclk_open,
	imgsensor_hw_regulator_open,
	imgsensor_hw_gpio_open
};

struct IMGSENSOR_HW_CFG imgsensor_custom_config[] = {
	{
		IMGSENSOR_SENSOR_IDX_MAIN,
		IMGSENSOR_I2C_DEV_0,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
#ifdef CONFIG_REGULATOR_RT5133
			{IMGSENSOR_HW_PIN_AVDD1,  IMGSENSOR_HW_ID_REGULATOR},
#endif
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB,
		IMGSENSOR_I2C_DEV_1,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
#ifdef MIPI_SWITCH
			{IMGSENSOR_HW_PIN_MIPI_SWITCH_EN, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_MIPI_SWITCH_SEL,
				IMGSENSOR_HW_ID_GPIO},
#endif
			{IMGSENSOR_HW_PIN_NONE, IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_MAIN2,
		IMGSENSOR_I2C_DEV_1,
		{

			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
#ifdef MIPI_SWITCH
			{IMGSENSOR_HW_PIN_MIPI_SWITCH_EN, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_MIPI_SWITCH_SEL,
				IMGSENSOR_HW_ID_GPIO},
#endif
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB2,
		IMGSENSOR_I2C_DEV_3,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_MAIN3,
		IMGSENSOR_I2C_DEV_4,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},

			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB3,
		IMGSENSOR_I2C_DEV_5,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_MAIN4,
		IMGSENSOR_I2C_DEV_6,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB4,
		IMGSENSOR_I2C_DEV_7,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_MAIN5,
		IMGSENSOR_I2C_DEV_7,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB5,
		IMGSENSOR_I2C_DEV_7,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_MAIN6,
		IMGSENSOR_I2C_DEV_7,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},
	{
		IMGSENSOR_SENSOR_IDX_SUB6,
		IMGSENSOR_I2C_DEV_7,
		{
			{IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
			{IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_PDN,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_RST,	 IMGSENSOR_HW_ID_GPIO},
			{IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
		},
	},

	{IMGSENSOR_SENSOR_IDX_NONE}
};

struct IMGSENSOR_HW_POWER_SEQ platform_power_sequence[] = {
#ifdef MIPI_SWITCH
	{
		PLATFORM_POWER_SEQ_NAME,
		{
			{
				IMGSENSOR_HW_PIN_MIPI_SWITCH_EN,
				IMGSENSOR_HW_PIN_STATE_LEVEL_0,
				0,
				IMGSENSOR_HW_PIN_STATE_LEVEL_HIGH,
				0
			},
			{
				IMGSENSOR_HW_PIN_MIPI_SWITCH_SEL,
				IMGSENSOR_HW_PIN_STATE_LEVEL_0,
				0,
				IMGSENSOR_HW_PIN_STATE_LEVEL_0,
				0
			},
		},
		IMGSENSOR_SENSOR_IDX_SUB,
	},
	{
		PLATFORM_POWER_SEQ_NAME,
		{
			{
				IMGSENSOR_HW_PIN_MIPI_SWITCH_EN,
				IMGSENSOR_HW_PIN_STATE_LEVEL_0,
				0,
				IMGSENSOR_HW_PIN_STATE_LEVEL_HIGH,
				0
			},
			{
				IMGSENSOR_HW_PIN_MIPI_SWITCH_SEL,
				IMGSENSOR_HW_PIN_STATE_LEVEL_HIGH,
				0,
				IMGSENSOR_HW_PIN_STATE_LEVEL_0,
				0
			},
		},
		IMGSENSOR_SENSOR_IDX_MAIN2,
	},
#endif

	{NULL}
};

