#include<iostream>

using namespace std;

int pow(int base, int power)
{
	if(power == 0)
	{
		return 1;
	}
	int ret_val = pow(base, power/2);
	
	if((power % base) == 0)
	{
		return ret_val * ret_val;
	}
	else
	{
		
	return base * ret_val * ret_val;	
	}

}


int dec_to_binary(int ip)
{
	int i =0; 
	unsigned long long ret_val,c =0;
	
	while(ip)
	{
		int remainder = ip % 2;
		 c = pow(10,i);
		ret_val = ret_val +remainder * c;
		ip = ip/2;
		i++;
	}
 return ret_val;

}

int main()
{
//	cout<<pow(10,2);
	cout<<dec_to_binary(15);
	return 0;
}
