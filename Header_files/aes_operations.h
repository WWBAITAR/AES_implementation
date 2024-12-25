#include <stdio.h>
#include <stdint.h>

enum key_size
{
    key128bits = 128,
    key192bits = 192,
    key256bits = 256
};


void sub_bytes(uint8_t* plainText);

void shift_rows(uint8_t *plainText);

void mix_columns(uint8_t* plainText);

