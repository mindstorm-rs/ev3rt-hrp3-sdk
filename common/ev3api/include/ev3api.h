#pragma once

/**
 * TOPPERS API
 */
#include <kernel.h>
#include <t_syslog.h>
#include <t_stdlib.h>
#include "syssvc/serial.h"
#include "target_syssvc.h"

/**
 * Newlib
 */
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * EV3 API
 */
#include "../src/ev3api_button.h"
#include "../src/ev3api_fs.h"
#include "../src/ev3api_lcd.h"
#include "../src/ev3api_led.h"
#include "../src/ev3api_motor.h"
#include "../src/ev3api_sensor.h"
#include "../src/ev3api_speaker.h"
#include "../src/ev3api_battery.h"

/**
 * Kernel object ID
 */
#if !defined(TOPPERS_CFG1_OUT)
#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "kernel_cfg.h"
#endif
#endif

/**
 * Application initialize task
 */
extern void _app_init_task(intptr_t unused);

// System call wrappers (for ev3rt-rs)
extern void ev3_exit_task();
extern HRTCNT ev3_fch_hrt();
extern ER ev3_sleep(int ms);

#ifdef __cplusplus
}
#endif

