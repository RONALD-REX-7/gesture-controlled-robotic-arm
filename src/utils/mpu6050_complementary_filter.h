#ifndef MPU6050_COMPLEMENTARY_FILTER_H
#define MPU6050_COMPLEMENTARY_FILTER_H

static inline float compute_complementary_pitch(float accel_pitch, float gyro_rate_dps, float dt_s, float alpha) {
    return (alpha * (accel_pitch + (gyro_rate_dps * dt_s))) + ((1.0f - alpha) * accel_pitch);
}

#endif /* MPU6050_COMPLEMENTARY_FILTER_H */
