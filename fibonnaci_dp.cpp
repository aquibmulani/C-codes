#include<iostream>
#define MAX_VAL 100
using namespace std;


int fibonnaci_dp(int n, int lookup[MAX_VAL])
{
	if(lookup[n] == -1)
	{
		
		if(lookup[n] == 1 || lookup[n] == 0)
		{
			lookup[n] = n;
		}
		else
		{
			
			lookup[n] = fibonnaci_dp(n-1,lookup) + fibonnaci_dp(n-2,lookup); 
			
		}
		
	}

return lookup[n];


}




int main()
{
  int lookup[MAX_VAL];
  for(int i =0; i < MAX_VAL;i++)
  {
  	lookup[i] =-1;
  }
  
cout<< fibonnaci_dp(5,lookup)<<"\t";

return 0;
}
