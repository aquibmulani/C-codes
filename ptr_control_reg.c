#include<stdio.h>
#include<stdint.h>

uint32_t ctrl_reg = 0x00000078;


int main()
{


uint8_t * point = &ctrl_reg;
printf("%x  \t", point); 
(*point)&= ~(1 << 3);
(*point)&= ~(1 << 4);
(*point)&= ~(1 << 5);

(*point)|= (0x5 << 3);


printf("%x  \t", *point);


return 0;
}
