#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mulptiply_with_bits(int num1, int num2)
{
	int product =0;
	int i =0;
	while(num2)
	{
		int check_bit = num2 & 0x1;
		if(check_bit)
		{
			product = product + (num1<<i);
			
		}
		num2 = num2 >> 1;
		i++;
	}
	return product;
}




int main()
{
	cout<<mulptiply_with_bits(10,0);


return 0;
}
