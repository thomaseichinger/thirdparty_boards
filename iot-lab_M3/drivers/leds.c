#include <stdio.h>
#include <stddef.h>

#include "cpu.h"

#define LEDS_PORT       GPIOD

void leds_init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC , ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD , ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
    // GPIO_InitTypeDef GPIO_InitStructure;
// 
//     RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
// 
//     GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
//     GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//     GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
//     GPIO_Init(GPIOD, &GPIO_InitStructure);
}

void led_on(uint32_t LED_PIN)
{
    // LEDS_PORT->BRR = LED_PIN;
}

void led_off(uint32_t LED_PIN)
{
    // LEDS_PORT->BSRR = LED_PIN;
}

void led_toggle(uint32_t LED_PIN)
{
    // LEDS_PORT->ODR ^= LED_PIN;
}
