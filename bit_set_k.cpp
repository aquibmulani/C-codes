#include<iostream>

using namespace std;
//Set n bits of a number starting from bit position K
int set_bits(int num, int n, int k)
{
       
   for(int i =0; i < n;i++) 
   {
    num = ((1<<(k-i)) | num);
    //cout<<std::hex<<num<<"\t";
   }
  
  return num;
}
//1011
int main()
{
  int num = 8, n= 2 ,k=1;
  
  cout<<std::hex<<set_bits(num,n,k);
//  set_bits(num,n,k);
  return 0;
}
