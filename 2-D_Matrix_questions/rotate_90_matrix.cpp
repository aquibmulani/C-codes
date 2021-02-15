#include<iostream>
#include<stdio.h>

#define N 3
//#define ROWS 3
//#define COLS 3


using namespace std;


void shift_90_matrix(int ip[][N])
{
	int rows = N;
	int cols = N;
	for(int i =0; i < rows;i++)
	{
		for(int j =i+1; j < cols;j++)
		{
			
			int temp = ip[i][j];
			ip[i][j] = ip[j][i];
			ip[j][i] = temp;
		}
	}

	for(int i =0; i < rows;i++)
	{
		for(int j =0, k = cols-1; j <= k;j++,k--)
		{
			int temp = ip[i][k];
			ip[i][k] = ip[i][j];
			ip[i][j] = temp;
		}
	}

}


int main()
{

int ip[N][N] = 
{
	{1,2,3},
	{4,5,6},
	{7,8,9}

};

shift_90_matrix(ip);

for(int i =0; i < 3;i++)
{
	for(int j =0; j < 3;j++)
	{
	
		cout<<ip[i][j]<<"\t";
	}
	cout<<"\n";
}


return 0;
}
