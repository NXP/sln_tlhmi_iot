/*
 * Copyright 2020-2022 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software
 */

#ifndef _SLN_FLASH_CONFIG_H_
#define _SLN_FLASH_CONFIG_H_

#include "board.h"

#if ((TARGET_BOARD) && (TARGET_BOARD == BOARD_SMART_TLHMI))
#include "sln_flash_config_w25q256jvs.h"
#elif(TARGET_BOARD == BOARD_1170EVK)
#include "sln_flash_config_evk.h"
#endif /* TARGET_BOARD */

#endif /* _SLN_FLASH_CONFIG_H_ */
