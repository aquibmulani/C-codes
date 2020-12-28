#include<iostream>
#include<string>
#include<stack>
using namespace std;


void addfromstrin(const char* ip_array[],const int ip_size);
stack<int> store_digits;


int main()
{
const char *give_ip[] ={"A","1","2","+","9","/","*","8","-",NULL}; //"ABCDEF";

addfromstrin(give_ip,9);

cout<<store_digits.top()<<"\n";

return 0;
}



void addfromstrin(const char* ip_array[],const int ip_size)
{
	
	int store =  ip_size;
	char ** src= NULL;
	src = (char**)ip_array;
	for(int i =0; i < ip_size;i++)
	{
		if(isdigit(**ip_array))
		{
			store_digits.push((int)**ip_array - '0');
	//		cout<<"here\n";		
		}
		else if(**ip_array == '+' || **ip_array == '-' || **ip_array == '*' || **ip_array == '/')
		{
			
			int val1 = store_digits.top();
			store_digits.pop();
			int val2 = store_digits.top();
			store_digits.pop();
			
			if(**ip_array == '+')
			{	
				int sum = val1 + val2;
				store_digits.push(sum);
			}			

			if(**ip_array == '-')
			{	int sum = val2 - val1;
				store_digits.push(sum);
				}
			if(**ip_array == '*')
			{
				int sum = val1 * val2;
				store_digits.push(sum);
			
			}
			if(**ip_array == '/')
			{
				if(val2 == 0)
				{
				cerr<<"denominator 0 for division \n";
				}	
				else{
				int sum = val1/val2;
				store_digits.push(sum);}
			}

		}
		*ip_array++;
		//cout<<src[i]<<"\n";
		//*src++;
		
	}  
}


