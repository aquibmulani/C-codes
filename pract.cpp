#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
//    string h,k;
    for(int i=0;i<t;i++)
    {
        string ar;
        cin>>ar;
        for(int i=0;i<ar.length();i++)
        {
            if(i%2==0)
            {
                cout<<ar[i];                
            }
        }
   cout<<" ";
            for(int i=0;i<ar.length();i++)
        {
            if(i%2!=0)
            {
                cout<<ar[i];                
            }
               
        }
             cout<<endl;
}
            
   
    return 0;
        
        
}
