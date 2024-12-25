#include <stdio.h>
#include "aes_operations.h"

int main()
{
    printf("Testing addroundkey function \n");

    uint8_t plaintext[16] = {0x87, 0xF2, 0x4D, 0x97, 
                             0x6E, 0x4C, 0x90, 0xEC,
                             0x46, 0xE7, 0x4A, 0xC3,
                             0xA6, 0x8C, 0xD8, 0x95};

    uint8_t key[16] = {0x01, 0x01, 0x01, 0x01, 
                             0x01, 0x01, 0x01, 0x01,
                             0x01, 0x01, 0x01, 0x01,
                             0x01, 0x01, 0x01, 0x01};
    
    printf("Our plainText is: \n");

    for(int i=0; i<4; i++)
    {
        printf("%x %x %x %x \n",plaintext[0 + 4*i],plaintext[1 + 4*i],plaintext[2 + 4*i],plaintext[3 + 4*i]);
    }

    add_round_key(plaintext, key);

    printf("Our plainText after addroundkey is: \n");

    for(int i=0; i<4; i++)
    {
        printf("%x %x %x %x \n",plaintext[0 + 4*i],plaintext[1 + 4*i],plaintext[2 + 4*i],plaintext[3 + 4*i]);
    }    

    return 0;
}