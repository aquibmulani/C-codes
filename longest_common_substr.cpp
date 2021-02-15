#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#define MAX_LIMIT 100

using namespace std;



int longest_common_subsequence(string a, string b, int m, int n, int lookup[][MAX_LIMIT])
{
	if(m == 0 || n ==0){return 0;}
	
	if(lookup[m-1][n-1] != -1 )
	{
		return lookup[m-1][n-1];
	}
	
	
		if(a[m-1] == b[n-1])
		{
			lookup[m-1][n-1] = 1 + longest_common_subsequence(a,b,m-1,n-1,lookup);
			return lookup[m-1][n-1];
		}
		else
		{
		
				lookup[m-1][n-1] =  max(longest_common_subsequence(a,b,m,n-1,lookup),longest_common_subsequence(a,b,m-1,n,lookup));
				return lookup[m-1][n-1];
		}

	


}






int main()
{
    string X = "AGGTAB"; 
    string Y = "GXTXAYB"; 
    int m = X.length(); 
    int n = Y.length(); 
  
    int dp[m][MAX_LIMIT]; 
  
    // assign -1 to all positions 
    memset(dp, -1, sizeof(dp)); 
  
    cout << "Length of LCS: " << longest_common_subsequence(X, Y, m, n, dp); 
  





return 0;
}
