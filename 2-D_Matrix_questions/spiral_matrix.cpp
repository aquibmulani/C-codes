#include<iostream>
#include<vector>
using namespace std;

void print_spiral_matrix(vector<vector<int> > ip)
{
	int end_rows = ip.size();
	int end_cols = ip[0].size();
	
	
	int start_rows = 0;
	int start_cols = 0;
	int j;

	while((start_rows < end_rows) &&  (start_cols < end_cols))
	{
		for(j=start_cols; j < end_cols;j++)
		{
			//cout<<"h";
			cout<< ip[start_rows][j]<<"\n";
					

		}
		start_rows++;
		for(j = start_rows; j < end_rows;j++)
		{
			cout<<ip[j][end_cols-1]<<"\n";
		}
		end_cols--;
		if(start_rows < end_rows)
		{
			for(j = end_cols-1; j >= start_cols; j--)
			{
				cout<<ip[end_rows-1][j]<<"\n";
			}
			
		end_rows--;
		}
		if(start_cols < end_cols)
		{
			for(j = end_rows-1; j >= start_rows;j--)
			{
				cout<<ip[j][start_cols]<<"\n";
			}
			start_cols++;
		}
	}	
	
}

int main()
{
  vector<vector<int> > ip
		  { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
                    
	print_spiral_matrix(ip);

}
