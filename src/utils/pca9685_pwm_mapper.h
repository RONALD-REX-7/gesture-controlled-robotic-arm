#ifndef PCA9685_PWM_MAPPER_H
#define PCA9685_PWM_MAPPER_H

#include <stdint.h>

#define SERVO_MIN_PULSE_US 500
#define SERVO_MAX_PULSE_US 2500
#define PWM_PERIOD_US 20000UL /* 50 Hz PWM period */

static inline uint16_t angle_to_pca9685_ticks(uint8_t angle_deg) {
    if (angle_deg > 180) angle_deg = 180;
    uint32_t pulse_us = SERVO_MIN_PULSE_US + (((uint32_t)angle_deg * (SERVO_MAX_PULSE_US - SERVO_MIN_PULSE_US)) / 180UL);
    return (uint16_t)((pulse_us * 4096UL) / PWM_PERIOD_US);
}

#endif /* PCA9685_PWM_MAPPER_H */
