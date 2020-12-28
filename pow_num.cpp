#include<iostream>


using namespace std;

int pow_num(int base, int power)
{
	if(power == 0)
	{
		return 1;	
	}
	int temp = pow_num(base, power/2);
	if((power % 2) == 0)
	{
		return temp * temp;
	}
	else
	{
		return base * temp * temp;
	}
	
}

bool is_power_of_num(int num,int base)
{
	while(num % base == 0)
	{
		num = num/base;

	}		
	if(num == 1)
	{
		return true;
	}	
	else
	{
		return false;
	}

}




int main()
{
	cout<<is_power_of_num(1024,2);		


return 0;
}

