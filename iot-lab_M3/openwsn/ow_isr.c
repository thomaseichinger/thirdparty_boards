/**
 * Copyright (C) 2014 Thomas Eichinger <thomas.eichinger@fu-berlin.de>
 *
 * This file subject to the terms and conditions of the GNU Lesser General
 * Public License. See the file LICENSE in the top level directory for more
 * details.
 *
 * @file    ow_isr.c
 * @brief   Additional IRQ handlers needed by openWSN stack. 
 *          Will be replaced by dedicated drivers in the future.
 * @author  Thomas Eichinger <thomas.eichinger@fu-berlin.de>
 */

#define ENABLE_DEBUG (1)
#include "debug.h"

extern void rtc_handler(void);
extern void rtcalarm_handler(void);
extern void spi1_handler(void);
extern void exti4_handler(void);

#warning "called?!"

void RTC_IRQHandler(void)
{
    DEBUG("%s\n",__PRETTY_FUNCTION__);
    rtc_handler();
}

void RTCAlarm_IRQHandler(void)
{
    DEBUG("%s\n",__PRETTY_FUNCTION__);
    rtcalarm_handler();
}

void SPI1_IRQHandler(void)
{
    DEBUG("%s\n",__PRETTY_FUNCTION__);
    spi1_handler();
}

void EXTI4_IRQHandler(void)
{
    DEBUG("%s\n",__PRETTY_FUNCTION__);
    exti4_handler();
}
