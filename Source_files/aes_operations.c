#include "aes_operations.h"

#define ELEMENTS_PER_BLOCK 16

void shift_row(uint8_t *plainText, int nbr_shifts)
{
    uint8_t tmp;
    for(int i=0; i<nbr_shifts; i++)
    {
        tmp = plainText[0];
        for(int j=0; j<3; j++)
        {
            plainText[j] = plainText[j+1];
        }
        plainText[3] = tmp;
    }

}

void shift_rows(uint8_t *plainText)
{
    for(int i=1; i<4; i++)
    {
        shift_row(plainText + (i*4), i);
    }
}



