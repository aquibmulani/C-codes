/*Given a n*n matrix where all numbers are distinct, find the maximum length path (starting from any cell) such that all cells along the path are in increasing order with a difference of 1.

We can move in 4 directions from a given cell (i, j), i.e., we can move to (i+1, j) or (i, j+1) or (i-1, j) or (i, j-1) with the condition that the adjacent cells have a difference of 1.

Example:

Input:  mat[][] = {{1, 2, 9}
                   {5, 3, 8}
                   {4, 6, 7}}
Output: 4
The longest path is 6-7-8-9. 
*/


#include<iostream>
#include <bits/stdc++.h> 
#include <algorithm>
#define n 3

using namespace std;



int deduce_path(int i, int j, int mat[n][n], int store[n][n])
{
    if(i < 0 || i >= n || j < 0 || j>=n )
    {return 0;}
	
	if(store[i][j] != -1)
	{return store[i][j];}

	int left = 0,right = 0,up= 0,down =0;
	
	if(j < n-1  && ((mat[i][j] +1) == mat[i][j+1])) 
	{
		right = 1 + deduce_path(i,j+1, mat,store);
	}

	if(j > 0  && ((mat[i][j] +1) == mat[i][j-1])) 
	{
		left = 1 + deduce_path(i,j-1, mat,store);
	}

	if(i > 0   && ((mat[i][j] +1) == mat[i-1][j])) 
	{
		up = 1 + deduce_path(i-1,j, mat,store);
	}

	if(i < n-1  && ((mat[i][j] +1) == mat[i+1][j])) 
	{
		down = 1 + deduce_path(i+1,j, mat,store);
	}

return store[i][j] = max(left,max(right,max(up,max(down,1))));
}

int overall_longest_path(int mat[n][n])
{
	int ret_val =1;
    int store[n][n];
    memset(store,-1,sizeof(store));

	for(int i =0; i < n;i++)
	{
		for(int j =0; j < n;j++)
		{
			if(store[i][j] == -1)
				{deduce_path(i,j,mat,store);}
			ret_val = max(ret_val,store[i][j]);
		}
		
	}
	return ret_val;

}



int main()
{

int  mat[n][n] = {{1, 2, 9},
                {6, 3, 8},
                {5, 4, 7}};
cout<< overall_longest_path(mat);

return 0;
}

