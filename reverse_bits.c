#include<stdio.h>
#include<stdint.h>
uint8_t reverse_bits(uint8_t num)
{
	uint8_t ret_val;
	while(num)
	{
		ret_val = (ret_val<<1) | (num & 0x1);
		num = num>>1;
	}
return ret_val;


}



int main()
{
	printf("%d \t",reverse_bits(11));




return 0;
}
