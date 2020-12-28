#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trace_path(vector<vector<int> > &inputs,vector<vector<int> > &trace, int i, int j )
{
	if(i < 0 || j < 0 || i >= inputs.size() || j >= inputs[0].size())
	{
		return 0;
	}
	if(trace[i][j] != -1)
	{
		return trace[i][j];
	}
    int left =0; int right =0; int up =0; int down =0;
    
    if(j < (inputs[0].size()-1) && ((inputs[i][j] +1) == inputs[i][j+1]))
    {
    	right = 1 + trace_path(inputs,trace,i,j+1);
    }
    if(i < (inputs.size()-1) && ((inputs[i][j] +1) == inputs[i+1][j]))
    {
    	down = 1 + trace_path(inputs,trace,i+1,j);
    }
    if(j > 0 && (inputs[i][j] +1) == inputs[i][j-1])
    {
    	left = 1 + trace_path(inputs,trace,i,j-1);
    }
    if(i > 0 && (inputs[i][j] +1) == inputs[i-1][j])
    {
    	up = 1 + trace_path(inputs,trace,i-1,j);
    }
trace[i][j] =  max(right,max(left,max(up,max(down,1))));
return trace[i][j];
}


int longest_path(vector<vector<int> > &inputs)
{
     int return_value =1;
     int length_vector =  inputs.size();
     int width_vector = inputs[0].size();
     
     vector<vector<int> > temp_path(length_vector,vector<int>(width_vector,-1));
	 for(int i =0; i < length_vector;i++)
	 {
	 	for(int j =0; j < width_vector;j++)
	 	{
	 		if(temp_path[i][j] == -1)
	 		{
	 			trace_path(inputs, temp_path,i,j);
	 		}
	 		return_value = max(return_value, temp_path[i][j]);
	 	}
	 }

return return_value;
}






int main()
{
vector<vector<int>> give_ip = 
{				   {1, 2, 9},
                   {5, 3, 8},
                   {4, 6, 7}};

cout<<longest_path(give_ip);

	return 0;
}
