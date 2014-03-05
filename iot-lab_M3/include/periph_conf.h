#ifndef __PERIPH_CONF_H
#define __PERIPH_CONF_H


/**
 * @brief Timer configuration
 */
#define TIMER_NUMOF         (2U)
#define TIMER_0_EN          1
#define TIMER_1_EN          1

// Timer 0 configuration
#define TIMER_0_DEV         TIM2
#define TIMER_0_CHANNELS    4
#define TIMER_0_PRESCALER   (2303U)
#define TIMER_0_MAX_VALUE   (0xffff)
#define TIMER_0_CLKEN()     RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE)
#define TIMER_0_ISR         TIM2_IRQHandler
#define TIMER_0_IRQCHAN     TIM2_IRQn
#define TIMER_0_IRQ_PRIO    1

// Timer 1 configuration
#define TIMER_1_DEV         TIM3                                                        // TODO !!!!!!!
#define TIMER_1_CHANNELS    2
#define TIMER_1_PRESCALER   (71U)
#define TIMER_1_MAX_VALUE   (0xffff)
#define TIMER_1_CLKEN()     RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE)
#define TIMER_1_ISR         TIM3_IRQHandler
#define TIMER_1_IRQCHAN     TIM3_IRQn
#define TIMER_1_IRQ_PRIO    1

#endif /* __PERIPH_CONF_H */