#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bits_to_flip(int num1, int num2)
{
   int count =0;
	int xor_1_2 = num1 ^ num2;
	while(xor_1_2)
	{
		xor_1_2 =  xor_1_2 & (xor_1_2-1);
		count++;
	}
return count;
}


int num_of_ones(int num)
{
   int count =0;
   while(num)
   {
   		num = num & (num-1);
   		count++;
   
   }
   
 return count;
}
int fisr_bit_set(int num)
{
	int count =0;
	 int new_num = num &	 ~(num-1);
     //new_num = new_num & (new_num-1);
		while(new_num)
		{
		count++;	
		new_num>>=1;	
		}
	 return count;
}

int main()
{
	cout<<fisr_bit_set(16);			


return 0;
}
