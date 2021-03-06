/*
 * Driver header file for pin controller driver
 *
 * Copyright (C) 2015 Spreadtrum
 * Baolin Wang <baolin.wang@spreadtrum.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __SC9850_PINS_H__
#define __SC9850_PINS_H__

#include <dt-bindings/pinctrl/sc9850_pinctrl.h>
#include <linux/pinctrl/pinctrl.h>

#define PINCTRL_REG_MISC_OFFSET 0x4020

struct sprd_pin_data {
	const char *name;
	unsigned int num;
	/* 1 means control pins, 0 means common pins */
	unsigned int mode;
	/* for control pins configuration */
	unsigned long bit_offset;
	unsigned long bit_width;
	unsigned int reg;
};

static const struct sprd_pin_data sprd_soc_pin_info[] = {
	SPRD_PINCTRL_PIN(SC9850_VIO28_0_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO_SD2_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO_SD0_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM2_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM1_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM0_IRTE),
	SPRD_PINCTRL_PIN(SC9850_VIO28_0_MS),
	SPRD_PINCTRL_PIN(SC9850_VIO_SD2_MS),
	SPRD_PINCTRL_PIN(SC9850_VIO_SD0_MS),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM2_MS),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM1_MS),
	SPRD_PINCTRL_PIN(SC9850_VIO_SIM0_MS),
	SPRD_PINCTRL_PIN(SC9850_SPSPI_PIN_IN_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART1_USB30_PHY_SEL),
	SPRD_PINCTRL_PIN(SC9850_USB30_PHY_DM_OE),
	SPRD_PINCTRL_PIN(SC9850_USB30_PHY_DP_OE),
	SPRD_PINCTRL_PIN(SC9850_UART5_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_ORP_URXD_PIN_IN_SEL),
	SPRD_PINCTRL_PIN(SC9850_SIM2_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_SIM1_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_SIM0_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_CLK26MHZ_BUF_OUT_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART4_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART3_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART2_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART1_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART0_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART24_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART23_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART14_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_UART13_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS3_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS2_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS1_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS0_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS23_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS13_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS12_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS03_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS02_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS01_LOOP_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS6_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS5_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_IIS4_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_I2C_INF6_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_I2C_INF4_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_I2C_INF2_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_I2C_INF1_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_I2C_INF0_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF7_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF6_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF5_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF4_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF3_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF2_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF1_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_GPIO_INF0_SYS_SEL),
	SPRD_PINCTRL_PIN(SC9850_WDRST_OUT_SEL),
	SPRD_PINCTRL_PIN(SC9850_ADI_SYNC_PIN_OUT_SEL),
	SPRD_PINCTRL_PIN(SC9850_CMRST_SEL),
	SPRD_PINCTRL_PIN(SC9850_CMPD_SEL),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE11),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE10),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE9),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE8),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE7),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE6),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE5),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE4),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE3),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE2),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE1),
	SPRD_PINCTRL_PIN(SC9850_TEST_DBG_MODE0),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD3_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD2_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD1_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD0_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD7_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD6_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD5_SEL),
	SPRD_PINCTRL_PIN(SC9850_SP_EIC_DPAD4_SEL),
	SPRD_PINCTRL_PIN(SC9850_RFCTL20),
	SPRD_PINCTRL_PIN(SC9850_RFCTL21),
	SPRD_PINCTRL_PIN(SC9850_RFCTL30),
	SPRD_PINCTRL_PIN(SC9850_RFCTL31),
	SPRD_PINCTRL_PIN(SC9850_RFCTL32),
	SPRD_PINCTRL_PIN(SC9850_RFCTL33),
	SPRD_PINCTRL_PIN(SC9850_RFCTL34),
	SPRD_PINCTRL_PIN(SC9850_RFCTL35),
	SPRD_PINCTRL_PIN(SC9850_RFCTL36),
	SPRD_PINCTRL_PIN(SC9850_RFCTL37),
	SPRD_PINCTRL_PIN(SC9850_RFCTL22),
	SPRD_PINCTRL_PIN(SC9850_RFCTL23),
	SPRD_PINCTRL_PIN(SC9850_RFCTL24),
	SPRD_PINCTRL_PIN(SC9850_RFCTL25),
	SPRD_PINCTRL_PIN(SC9850_RFCTL26),
	SPRD_PINCTRL_PIN(SC9850_RFCTL27),
	SPRD_PINCTRL_PIN(SC9850_RFCTL28),
	SPRD_PINCTRL_PIN(SC9850_RFCTL29),
	SPRD_PINCTRL_PIN(SC9850_SCL2),
	SPRD_PINCTRL_PIN(SC9850_SDA2),
	SPRD_PINCTRL_PIN(SC9850_MTCK_ARM),
	SPRD_PINCTRL_PIN(SC9850_MTMS_ARM),
	SPRD_PINCTRL_PIN(SC9850_XTL_EN0),
	SPRD_PINCTRL_PIN(SC9850_PTEST),
	SPRD_PINCTRL_PIN(SC9850_AUD_DAD1),
	SPRD_PINCTRL_PIN(SC9850_AUD_ADD0),
	SPRD_PINCTRL_PIN(SC9850_AUD_ADSYNC),
	SPRD_PINCTRL_PIN(SC9850_AUD_SCLK),
	SPRD_PINCTRL_PIN(SC9850_CHIP_SLEEP),
	SPRD_PINCTRL_PIN(SC9850_CLK_32K),
	SPRD_PINCTRL_PIN(SC9850_DCDC_ARM_EN),
	SPRD_PINCTRL_PIN(SC9850_EXT_RST_B),
	SPRD_PINCTRL_PIN(SC9850_ADI_D),
	SPRD_PINCTRL_PIN(SC9850_ADI_SCLK),
	SPRD_PINCTRL_PIN(SC9850_XTL_EN1),
	SPRD_PINCTRL_PIN(SC9850_ANA_INT),
	SPRD_PINCTRL_PIN(SC9850_AUD_DAD0),
	SPRD_PINCTRL_PIN(SC9850_AUD_DASYNC),
	SPRD_PINCTRL_PIN(SC9850_LCM_RSTN),
	SPRD_PINCTRL_PIN(SC9850_DSI_TE),
	SPRD_PINCTRL_PIN(SC9850_PWMA),
	SPRD_PINCTRL_PIN(SC9850_EXTINT0),
	SPRD_PINCTRL_PIN(SC9850_EXTINT1),
	SPRD_PINCTRL_PIN(SC9850_SDA1),
	SPRD_PINCTRL_PIN(SC9850_SCL1),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK2),
	SPRD_PINCTRL_PIN(SC9850_SIMDA2),
	SPRD_PINCTRL_PIN(SC9850_SIMRST2),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK1),
	SPRD_PINCTRL_PIN(SC9850_SIMDA1),
	SPRD_PINCTRL_PIN(SC9850_SIMRST1),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK0),
	SPRD_PINCTRL_PIN(SC9850_SIMDA0),
	SPRD_PINCTRL_PIN(SC9850_SIMRST0),
	SPRD_PINCTRL_PIN(SC9850_SD2_CMD),
	SPRD_PINCTRL_PIN(SC9850_SD2_D0),
	SPRD_PINCTRL_PIN(SC9850_SD2_D1),
	SPRD_PINCTRL_PIN(SC9850_SD2_CLK),
	SPRD_PINCTRL_PIN(SC9850_SD2_D2),
	SPRD_PINCTRL_PIN(SC9850_SD2_D3),
	SPRD_PINCTRL_PIN(SC9850_SD0_D3),
	SPRD_PINCTRL_PIN(SC9850_SD0_D2),
	SPRD_PINCTRL_PIN(SC9850_SD0_CMD),
	SPRD_PINCTRL_PIN(SC9850_SD0_D0),
	SPRD_PINCTRL_PIN(SC9850_SD0_D1),
	SPRD_PINCTRL_PIN(SC9850_SD0_CLK),
	SPRD_PINCTRL_PIN(SC9850_EMMC_CMD),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D6),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D7),
	SPRD_PINCTRL_PIN(SC9850_EMMC_CLK),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D5),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D4),
	SPRD_PINCTRL_PIN(SC9850_EMMC_DS),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D3),
	SPRD_PINCTRL_PIN(SC9850_EMMC_RST),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D1),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D2),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D0),
	SPRD_PINCTRL_PIN(SC9850_IIS0DI),
	SPRD_PINCTRL_PIN(SC9850_IIS0DO),
	SPRD_PINCTRL_PIN(SC9850_IIS0CLK),
	SPRD_PINCTRL_PIN(SC9850_IIS0LRCK),
	SPRD_PINCTRL_PIN(SC9850_SD1_CLK),
	SPRD_PINCTRL_PIN(SC9850_SD1_CMD),
	SPRD_PINCTRL_PIN(SC9850_SD1_D0),
	SPRD_PINCTRL_PIN(SC9850_SD1_D1),
	SPRD_PINCTRL_PIN(SC9850_SD1_D2),
	SPRD_PINCTRL_PIN(SC9850_SD1_D3),
	SPRD_PINCTRL_PIN(SC9850_CLK_AUX0),
	SPRD_PINCTRL_PIN(SC9850_WIFI_COEXIST),
	SPRD_PINCTRL_PIN(SC9850_BEIDOU_COEXIST),
	SPRD_PINCTRL_PIN(SC9850_U3TXD),
	SPRD_PINCTRL_PIN(SC9850_U3RXD),
	SPRD_PINCTRL_PIN(SC9850_U3CTS),
	SPRD_PINCTRL_PIN(SC9850_U3RTS),
	SPRD_PINCTRL_PIN(SC9850_U0TXD),
	SPRD_PINCTRL_PIN(SC9850_U0RXD),
	SPRD_PINCTRL_PIN(SC9850_U0CTS),
	SPRD_PINCTRL_PIN(SC9850_U0RTS),
	SPRD_PINCTRL_PIN(SC9850_IIS1DI),
	SPRD_PINCTRL_PIN(SC9850_IIS1DO),
	SPRD_PINCTRL_PIN(SC9850_IIS1CLK),
	SPRD_PINCTRL_PIN(SC9850_IIS1LRCK),
	SPRD_PINCTRL_PIN(SC9850_SPI0_CSN),
	SPRD_PINCTRL_PIN(SC9850_SPI0_DO),
	SPRD_PINCTRL_PIN(SC9850_SPI0_DI),
	SPRD_PINCTRL_PIN(SC9850_SPI0_CLK),
	SPRD_PINCTRL_PIN(SC9850_U2TXD),
	SPRD_PINCTRL_PIN(SC9850_U2RXD),
	SPRD_PINCTRL_PIN(SC9850_U4TXD),
	SPRD_PINCTRL_PIN(SC9850_U4RXD),
	SPRD_PINCTRL_PIN(SC9850_CMMCLK1),
	SPRD_PINCTRL_PIN(SC9850_CMRST1),
	SPRD_PINCTRL_PIN(SC9850_CMMCLK0),
	SPRD_PINCTRL_PIN(SC9850_CMRST0),
	SPRD_PINCTRL_PIN(SC9850_CMPD0),
	SPRD_PINCTRL_PIN(SC9850_CMPD1),
	SPRD_PINCTRL_PIN(SC9850_SCL0),
	SPRD_PINCTRL_PIN(SC9850_SDA0),
	SPRD_PINCTRL_PIN(SC9850_SDA6),
	SPRD_PINCTRL_PIN(SC9850_SCL6),
	SPRD_PINCTRL_PIN(SC9850_U1TXD),
	SPRD_PINCTRL_PIN(SC9850_U1RXD),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT0),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT1),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT2),
	SPRD_PINCTRL_PIN(SC9850_KEYIN0),
	SPRD_PINCTRL_PIN(SC9850_KEYIN1),
	SPRD_PINCTRL_PIN(SC9850_KEYIN2),
	SPRD_PINCTRL_PIN(SC9850_IIS3DI),
	SPRD_PINCTRL_PIN(SC9850_IIS3DO),
	SPRD_PINCTRL_PIN(SC9850_IIS3CLK),
	SPRD_PINCTRL_PIN(SC9850_IIS3LRCK),
	SPRD_PINCTRL_PIN(SC9850_RFCTL0),
	SPRD_PINCTRL_PIN(SC9850_RFCTL1),
	SPRD_PINCTRL_PIN(SC9850_RFCTL10),
	SPRD_PINCTRL_PIN(SC9850_RFCTL11),
	SPRD_PINCTRL_PIN(SC9850_RFCTL12),
	SPRD_PINCTRL_PIN(SC9850_RFCTL13),
	SPRD_PINCTRL_PIN(SC9850_RFCTL14),
	SPRD_PINCTRL_PIN(SC9850_RFCTL15),
	SPRD_PINCTRL_PIN(SC9850_RFCTL16),
	SPRD_PINCTRL_PIN(SC9850_RFCTL17),
	SPRD_PINCTRL_PIN(SC9850_RFCTL18),
	SPRD_PINCTRL_PIN(SC9850_RFCTL19),
	SPRD_PINCTRL_PIN(SC9850_RFCTL2),
	SPRD_PINCTRL_PIN(SC9850_EXTINT5),
	SPRD_PINCTRL_PIN(SC9850_EXTINT6),
	SPRD_PINCTRL_PIN(SC9850_EXTINT7),
	SPRD_PINCTRL_PIN(SC9850_GPIO30),
	SPRD_PINCTRL_PIN(SC9850_GPIO31),
	SPRD_PINCTRL_PIN(SC9850_GPIO32),
	SPRD_PINCTRL_PIN(SC9850_GPIO33),
	SPRD_PINCTRL_PIN(SC9850_GPIO34),
	SPRD_PINCTRL_PIN(SC9850_RFCTL3),
	SPRD_PINCTRL_PIN(SC9850_RFCTL4),
	SPRD_PINCTRL_PIN(SC9850_RFCTL5),
	SPRD_PINCTRL_PIN(SC9850_RFCTL6),
	SPRD_PINCTRL_PIN(SC9850_RFCTL7),
	SPRD_PINCTRL_PIN(SC9850_RFCTL8),
	SPRD_PINCTRL_PIN(SC9850_RFCTL9),
	SPRD_PINCTRL_PIN(SC9850_RFFE0_SCK0),
	SPRD_PINCTRL_PIN(SC9850_GPIO38),
	SPRD_PINCTRL_PIN(SC9850_RFFE0_SDA0),
	SPRD_PINCTRL_PIN(SC9850_GPIO39),
	SPRD_PINCTRL_PIN(SC9850_RFFE1_SCK0),
	SPRD_PINCTRL_PIN(SC9850_GPIO181),
	SPRD_PINCTRL_PIN(SC9850_RFFE1_SDA0),
	SPRD_PINCTRL_PIN(SC9850_GPIO182),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS0_ADC_ON),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS0_DAC_ON),
	SPRD_PINCTRL_PIN(SC9850_RFSCK0),
	SPRD_PINCTRL_PIN(SC9850_RFSDA0),
	SPRD_PINCTRL_PIN(SC9850_RFSEN0),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS1_ADC_ON),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS1_DAC_ON),
	SPRD_PINCTRL_PIN(SC9850_RFSCK1),
	SPRD_PINCTRL_PIN(SC9850_RFSDA1),
	SPRD_PINCTRL_PIN(SC9850_RFSEN1),
	SPRD_PINCTRL_PIN(SC9850_RFCTL38),
	SPRD_PINCTRL_PIN(SC9850_RFCTL39),
	SPRD_PINCTRL_PIN(SC9850_RFCTL20_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL21_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL30_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL31_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL32_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL33_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL34_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL35_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL36_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL37_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL22_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL23_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL24_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL25_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL26_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL27_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL28_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL29_MISC),
	SPRD_PINCTRL_PIN(SC9850_SCL2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SDA2_MISC),
	SPRD_PINCTRL_PIN(SC9850_MTCK_ARM_MISC),
	SPRD_PINCTRL_PIN(SC9850_MTMS_ARM_MISC),
	SPRD_PINCTRL_PIN(SC9850_XTL_EN0_MISC),
	SPRD_PINCTRL_PIN(SC9850_PTEST_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_DAD1_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_ADD0_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_ADSYNC_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_SCLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_CHIP_SLEEP_MISC),
	SPRD_PINCTRL_PIN(SC9850_CLK_32K_MISC),
	SPRD_PINCTRL_PIN(SC9850_DCDC_ARM_EN_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXT_RST_B_MISC),
	SPRD_PINCTRL_PIN(SC9850_ADI_D_MISC),
	SPRD_PINCTRL_PIN(SC9850_ADI_SCLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_XTL_EN1_MISC),
	SPRD_PINCTRL_PIN(SC9850_ANA_INT_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_DAD0_MISC),
	SPRD_PINCTRL_PIN(SC9850_AUD_DASYNC_MISC),
	SPRD_PINCTRL_PIN(SC9850_LCM_RSTN_MISC),
	SPRD_PINCTRL_PIN(SC9850_DSI_TE_MISC),
	SPRD_PINCTRL_PIN(SC9850_PWMA_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXTINT0_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXTINT1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SDA1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SCL1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMDA2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMRST2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMDA1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMRST1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMCLK0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMDA0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SIMRST0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_CMD_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_D0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_D1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_D2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD2_D3_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_D3_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_D2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_CMD_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_D0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_D1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD0_CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_CMD_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D6_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D7_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D5_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D4_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_DS_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D3_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_RST_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D1_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D2_MISC),
	SPRD_PINCTRL_PIN(SC9850_EMMC_D0_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS0DI_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS0DO_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS0CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS0LRCK_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_CMD_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_D0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_D1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_D2_MISC),
	SPRD_PINCTRL_PIN(SC9850_SD1_D3_MISC),
	SPRD_PINCTRL_PIN(SC9850_CLK_AUX0_MISC),
	SPRD_PINCTRL_PIN(SC9850_WIFI_COEXIST_MISC),
	SPRD_PINCTRL_PIN(SC9850_BEIDOU_COEXIST_MISC),
	SPRD_PINCTRL_PIN(SC9850_U3TXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U3RXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U3CTS_MISC),
	SPRD_PINCTRL_PIN(SC9850_U3RTS_MISC),
	SPRD_PINCTRL_PIN(SC9850_U0TXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U0RXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U0CTS_MISC),
	SPRD_PINCTRL_PIN(SC9850_U0RTS_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS1DI_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS1DO_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS1CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS1LRCK_MISC),
	SPRD_PINCTRL_PIN(SC9850_SPI0_CSN_MISC),
	SPRD_PINCTRL_PIN(SC9850_SPI0_DO_MISC),
	SPRD_PINCTRL_PIN(SC9850_SPI0_DI_MISC),
	SPRD_PINCTRL_PIN(SC9850_SPI0_CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_U2TXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U2RXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U4TXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U4RXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMMCLK1_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMRST1_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMMCLK0_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMRST0_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMPD0_MISC),
	SPRD_PINCTRL_PIN(SC9850_CMPD1_MISC),
	SPRD_PINCTRL_PIN(SC9850_SCL0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SDA0_MISC),
	SPRD_PINCTRL_PIN(SC9850_SDA6_MISC),
	SPRD_PINCTRL_PIN(SC9850_SCL6_MISC),
	SPRD_PINCTRL_PIN(SC9850_U1TXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_U1RXD_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT0_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT1_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYOUT2_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYIN0_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYIN1_MISC),
	SPRD_PINCTRL_PIN(SC9850_KEYIN2_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS3DI_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS3DO_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS3CLK_MISC),
	SPRD_PINCTRL_PIN(SC9850_IIS3LRCK_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL0_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL1_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL10_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL11_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL12_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL13_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL14_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL15_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL16_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL17_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL18_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL19_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL2_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXTINT5_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXTINT6_MISC),
	SPRD_PINCTRL_PIN(SC9850_EXTINT7_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO30_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO31_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO32_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO33_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO34_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL3_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL4_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL5_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL6_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL7_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL8_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL9_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFFE0_SCK0_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO38_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFFE0_SDA0_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO39_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFFE1_SCK0_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO181_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFFE1_SDA0_MISC),
	SPRD_PINCTRL_PIN(SC9850_GPIO182_MISC),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS0_ADC_ON_MISC),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS0_DAC_ON_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSCK0_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSDA0_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSEN0_MISC),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS1_ADC_ON_MISC),
	SPRD_PINCTRL_PIN(SC9850_RF_LVDS1_DAC_ON_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSCK1_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSDA1_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFSEN1_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL38_MISC),
	SPRD_PINCTRL_PIN(SC9850_RFCTL39_MISC),
};

#endif /* __SC9830_PINS_H__ */
