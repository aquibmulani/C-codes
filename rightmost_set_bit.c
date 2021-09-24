#include<stdio.h>

int right_most_set_bit(int ip_num)
{	
	int ret_val = 0;
	ret_val = ip_num ^ (ip_num & (ip_num-1));

	int count =0;
	while(ret_val)
	{
		ret_val = ret_val >> 1;
		count++;
	
	}
	
	return count;

}


int main()
{
	
	printf("%d \n",right_most_set_bit(4)); 


return 0;
}

