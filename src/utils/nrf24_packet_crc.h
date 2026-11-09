#ifndef NRF24_PACKET_CRC_H
#define NRF24_PACKET_CRC_H

#include <stdint.h>
#include <stddef.h>

static inline uint8_t compute_xor_checksum(const uint8_t *data, size_t len) {
    uint8_t c = 0xAA;
    for (size_t i = 0; i < len; i++) {
        c ^= data[i];
    }
    return c;
}

#endif /* NRF24_PACKET_CRC_H */
