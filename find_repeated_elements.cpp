#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int> x = {1,2,3,4,8,1,2,3,7,8,9};
	int count =0;
	for(int  i=0; i < x.size();i++)
	{
		count++;
		for(int j = i+1; j < x.size();j++)
		{
			if(x[i] == x[j])
			{   
			    x[j] =-1;
				count++;
			}			
		}

		if(x[i] >= 0)
		{
			cout<<x[i]<<" is repeated  " << count << " times "<<endl; 
			
		}
		count =0;

	
	}



return 0;
}
