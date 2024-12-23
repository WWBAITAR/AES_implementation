#include <stdio.h>
#include "aes_operations.h"

int main()
{
    printf("Testing shiftRows function \n");

    uint8_t plaintext[16] = {0x12, 0x34, 0x56, 0x78, 
                             0x12, 0x34, 0x56, 0x78,
                             0x12, 0x34, 0x56, 0x78,
                             0x12, 0x34, 0x56, 0x78};
    
    printf("Our plainText is: \n");

    for(int i=0; i<4; i++)
    {
        printf("%x %x %x %x \n",plaintext[0 + 4*i],plaintext[1 + 4*i],plaintext[2 + 4*i],plaintext[3 + 4*i]);
    }

    shift_rows(plaintext);

    printf("Our plainText after shiftRows is: \n");

    for(int i=0; i<4; i++)
    {
        printf("%x %x %x %x \n",plaintext[0 + 4*i],plaintext[1 + 4*i],plaintext[2 + 4*i],plaintext[3 + 4*i]);
    }

    return 0;
}