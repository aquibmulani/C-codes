#include<stdio.h>
#include<stdint.h>

uint32_t rotate_left(uint32_t num, int num_bits)
{
	uint32_t res;
	res = (num << num_bits) | (num >> (32-num_bits));


return res;
}


uint32_t rotate_right(uint32_t num, int num_bits)
{
	uint32_t res;
	res = (num >> num_bits) | (num << (32-num_bits));


return res;
}


int main()
{

//rotate_left(127,3);
printf("%x \t",rotate_right(127,3));




return 0;
}
