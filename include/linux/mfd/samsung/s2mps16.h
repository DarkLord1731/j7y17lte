/*
 * s2mps16.h
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd
 *              http://www.samsung.com
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __LINUX_MFD_S2MPS16_H
#define __LINUX_MFD_S2MPS16_H

/* S2MPS16 registers */
enum S2MPS16_reg {
	S2MPS16_REG_ID,
	S2MPS16_REG_INT1,
	S2MPS16_REG_INT2,
	S2MPS16_REG_INT3,
	S2MPS16_REG_INT4,
	S2MPS16_REG_INT1M,
	S2MPS16_REG_INT2M,
	S2MPS16_REG_INT3M,
	S2MPS16_REG_INT4M,
	S2MPS16_REG_ST1,
	S2MPS16_REG_ST2,
	S2MPS16_REG_PWRONSRC,
	S2MPS16_REG_OFFSRC,
	S2MPS16_REG_BU_CHG,
	S2MPS16_REG_RTC_BUF,
	S2MPS16_REG_CTRL1,
	S2MPS16_REG_CTRL2,
	S2MPS16_REG_ETC_TEST,
	S2MPS16_REG_OTP_ADRL,
	S2MPS16_REG_OTP_ADRH,
	S2MPS16_REG_OTP_DATA,
	S2MPS16_REG_CTRL3,
	S2MPS16_REG_ETC_OTP,
	S2MPS16_REG_UVLO_OTP,
	S2MPS16_REG_CFG1,
	S2MPS16_REG_CFG2,
	S2MPS16_REG_B1CTRL1,
	S2MPS16_REG_B1CTRL2,
	S2MPS16_REG_B2CTRL1,
	S2MPS16_REG_B2CTRL2,
	S2MPS16_REG_B3CTRL1,
	S2MPS16_REG_B3CTRL2,
	S2MPS16_REG_B4CTRL1,
	S2MPS16_REG_B4CTRL2,
	S2MPS16_REG_B5CTRL1,
	S2MPS16_REG_B5CTRL2,
	S2MPS16_REG_B6CTRL1,
	S2MPS16_REG_B6CTRL2,
	S2MPS16_REG_B6CTRL3,
	S2MPS16_REG_B7CTRL1,
	S2MPS16_REG_B7CTRL2,
	S2MPS16_REG_B8CTRL1,
	S2MPS16_REG_B8CTRL2,
	S2MPS16_REG_B9CTRL1,
	S2MPS16_REG_B9CTRL2,	/* Buck10 for CP */
	S2MPS16_REG_B11CTRL1 = 0x30,
	S2MPS16_REG_B11CTRL2,
	S2MPS16_REG_BB1CTRL1,
	S2MPS16_REG_BB1CTRL2,
	S2MPS16_REG_BUCK_RAMP,
	S2MPS16_REG_LDO7_DVS,
	S2MPS16_REG_LDO8_DVS,
	S2MPS16_REG_LDO9_DVS,
	S2MPS16_REG_LDO10_DVS,
	S2MPS16_REG_LDO11_DVS,
	S2MPS16_REG_L1CTRL,
	S2MPS16_REG_L2CTRL,
	S2MPS16_REG_L3CTRL,
	S2MPS16_REG_L4CTRL,
	S2MPS16_REG_L5CTRL,
	S2MPS16_REG_L6CTRL,
	S2MPS16_REG_L7CTRL,
	S2MPS16_REG_L8CTRL,
	S2MPS16_REG_L9CTRL,
	S2MPS16_REG_L10CTRL,
	S2MPS16_REG_L11CTRL,
	S2MPS16_REG_L12CTRL,
	S2MPS16_REG_L13CTRL,	/* LDO14~24 for CP */
	S2MPS16_REG_L25CTRL = 0x55,
	S2MPS16_REG_L26CTRL,
	S2MPS16_REG_L27CTRL,
	S2MPS16_REG_L28CTRL,
	S2MPS16_REG_L29CTRL,
	S2MPS16_REG_L30CTRL,
	S2MPS16_REG_L31CTRL,
	S2MPS16_REG_L32CTRL,
	S2MPS16_REG_L33CTRL,
	S2MPS16_REG_L34CTRL,
	S2MPS16_REG_L35CTRL,
	S2MPS16_REG_L36CTRL,
	S2MPS16_REG_L37CTRL,
	S2MPS16_REG_L38CTRL,
	S2MPS16_REG_LDO_DSCH,
	S2MPS16_REG_LDO_CTRL0,
	S2MPS16_REG_LDO_CTRL1,
	S2MPS16_REG_LDO_CTRL2,
	S2MPS16_REG_LDO_OCP,
	S2MPS16_REG_IOCONF,
	S2MPS16_REG_AVP,
	S2MPS16_REG_ADC_CTRL1,
	S2MPS16_REG_ADC_CTRL2,
	S2MPS16_REG_ADC_DATA,
	S2MPS16_REG_TCXO_CTRL,
	S2MPS16_REG_SELMIF,
	S2MPS16_REG_SQE_CTRL,
};

/* S2MPS16 regulator ids */
enum S2MPS16_regulators {
	S2MPS16_LDO1,
	S2MPS16_LDO2,
	S2MPS16_LDO3,
	S2MPS16_LDO4,
	S2MPS16_LDO5,
	S2MPS16_LDO6,
	S2MPS16_LDO7,
	S2MPS16_LDO8,
	S2MPS16_LDO9,
	S2MPS16_LDO10,
	S2MPS16_LDO11,
	S2MPS16_LDO12,
	S2MPS16_LDO13,	/* LDO14~24 for CP */
	S2MPS16_LDO25,
	S2MPS16_LDO26,
	S2MPS16_LDO27,
	S2MPS16_LDO28,
	S2MPS16_LDO29,
	S2MPS16_LDO30,
	S2MPS16_LDO31,
	S2MPS16_LDO32,
	S2MPS16_LDO33,
	S2MPS16_LDO34,
	S2MPS16_LDO35,
	S2MPS16_LDO36,
	S2MPS16_LDO37,
	S2MPS16_LDO38,
	S2MPS16_BUCK1,
	S2MPS16_BUCK2,
	S2MPS16_BUCK3,
	S2MPS16_BUCK4,
	S2MPS16_BUCK5,
	S2MPS16_BUCK6,
	S2MPS16_BUCK7,
	S2MPS16_BUCK8,
	S2MPS16_BUCK9,	/* Buck10 for CP */
	S2MPS16_BUCK11,
	S2MPS16_BB1,
	S2MPS16_AP_EN32KHZ,
	S2MPS16_CP_EN32KHZ,
	S2MPS16_BT_EN32KHZ,
	S2MPS16_REG_MAX,
};

#define S2MPS16_BUCK_MIN1	300000
#define S2MPS16_BUCK_MIN2	600000
#define S2MPS16_BUCK_MIN3	2600000
#define S2MPS16_LDO_MIN1	300000
#define S2MPS16_LDO_MIN2	500000
#define S2MPS16_LDO_MIN3	700000
#define S2MPS16_LDO_MIN4	1800000
#define S2MPS16_BUCK_STEP1	6250
#define S2MPS16_BUCK_STEP2	12500
#define S2MPS16_LDO_STEP1	12500
#define S2MPS16_LDO_STEP2	25000
#define S2MPS16_LDO_VSEL_MASK	0x3F
#define S2MPS16_BUCK_VSEL_MASK	0xFF
#define S2MPS16_ENABLE_MASK	(0x03 << S2MPS16_ENABLE_SHIFT)
#define S2MPS16_RAMP_DELAY	12000

#define S2MPS16_ENABLE_TIME_LDO		128
#define S2MPS16_ENABLE_TIME_BUCK1	95
#define S2MPS16_ENABLE_TIME_BUCK2	95
#define S2MPS16_ENABLE_TIME_BUCK3	95
#define S2MPS16_ENABLE_TIME_BUCK4	95
#define S2MPS16_ENABLE_TIME_BUCK5	95
#define S2MPS16_ENABLE_TIME_BUCK6	128
#define S2MPS16_ENABLE_TIME_BUCK7	95
#define S2MPS16_ENABLE_TIME_BUCK8	106
#define S2MPS16_ENABLE_TIME_BUCK9	150
#define S2MPS16_ENABLE_TIME_BUCK10	95
#define S2MPS16_ENABLE_TIME_BUCK11	95
#define S2MPS16_ENABLE_TIME_BB		217

#define S2MPS16_ENABLE_SHIFT	0x06
#define S2MPS16_LDO_N_VOLTAGES	(S2MPS16_LDO_VSEL_MASK + 1)
#define S2MPS16_BUCK_N_VOLTAGES (S2MPS16_BUCK_VSEL_MASK + 1)

#define S2MPS16_PMIC_EN_SHIFT	6
#define S2MPS16_REGULATOR_MAX (S2MPS16_REG_MAX)

#define S2MPS16_MAX_ADC_CHANNEL		8
#define S2MPS16_BUCK_MAX		11
#define S2MPS16_LDO_START		0x41
#define S2MPS16_LDO_END			0x55
#define S2MPS16_BUCK_START		0x1
#define S2MPS16_BUCK_END		0xc
#define S2MPS16_ADC_SMP_NUM_MAX		0x8
#define S2MPS16_ADC_DIV_RATIO_MAX	0xf
#define S2MPS16_ADCEN_MASK		0x80
#define S2MPS16_SMP_NUM_MASK		0x0F
#define S2MPS16_SMP_NUM_SHIFT		0
#define S2MPS16_DIV_RATIO_MASK		0x0F

#define S2MPS16_BS			15625
#define S2MPS16_BD			31250
#define S2MPS16_BT			46875
#define S2MPS16_BV			15625
#define S2MPS16_BB			15625
#define S2MPS16_L150			1172
#define S2MPS16_L300			2344
#define S2MPS16_L450			3516
#define S2MPS16_L600			4687


#endif /*  __LINUX_MFD_S2MPS16_H */
