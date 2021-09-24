#include<stdio.h>

int toggle_kth_bit(int num, int pos)
{
 
  num = num ^ (1 << pos);
  return num;	
}



int main()
{
	
printf("%d \n",toggle_kth_bit(7,1));

return 0;
}
