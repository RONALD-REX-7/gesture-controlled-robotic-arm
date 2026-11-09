#ifndef SERVO_ANGULAR_RATE_LIMITER_H
#define SERVO_ANGULAR_RATE_LIMITER_H

#include <stdint.h>

static inline uint8_t rate_limit_angle(uint8_t current_deg, uint8_t target_deg, uint8_t max_step_deg) {
    if (target_deg > current_deg) {
        if ((target_deg - current_deg) > max_step_deg) return current_deg + max_step_deg;
        return target_deg;
    } else {
        if ((current_deg - target_deg) > max_step_deg) return current_deg - max_step_deg;
        return target_deg;
    }
}

#endif /* SERVO_ANGULAR_RATE_LIMITER_H */
