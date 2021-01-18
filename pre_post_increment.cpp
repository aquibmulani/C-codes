#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>


using namespace std;

vector<int>  duplicate_elem(int * ip_array,int arr_size)
{
	vector<int> ret_arr;
	for(int i =0; i < arr_size;i++)
	{
		if(ip_array[abs(ip_array[i])] > 0)
		{
			ip_array[abs(ip_array[i])] = - ip_array[abs(ip_array[i])];
			cout<<"\t"<<i<<"\n";
		}
		else
		{
		
		     ret_arr.push_back(abs(ip_array[i]));
		}
	}
	return ret_arr;
}
int main()
{
	uint32_t dummy_var;
	uint16_t lower_nibble;
	uint16_t upper_nibble;
	
	dummy_var|= (0xFFFF << 16);
	//cout<< std::hex <<"Before Set:" <<dummy_var;
	lower_nibble = dummy_var & 0xFFFF;
	upper_nibble = (dummy_var >> 16) & 0xFFFF;
	
	dummy_var = (lower_nibble << 16) | upper_nibble; 
	
	//cout<< std::hex <<"Set:" <<dummy_var;
	vector<int> print_val;
	int ip_array[] = {1,2,3,1,4,4,5,6,6,100,100}; 
	print_val = duplicate_elem(ip_array,11);

	for(int i =0; i < print_val.size();i++)
	{
	
		cout<<print_val[i]<<"\n";
	}
return 0;
}
