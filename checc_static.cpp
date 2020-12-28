#include<iostream>

using namespace std;

int LCM_num(int num1,int num2)
{
   int max = (num1 > num2) ? num1 : num2;
   int i =1;
   int ret =0;int mul =0; 
   if(num1 == 0 || num2 == 0){return 0;}	
   if(max == num1)
   {
   	mul = num1;
       while(mul % num2 != 0)
       {
		 mul = num1 * i;
		cout<<mul<<"\t";
		i++;       
       }
       ret = mul;
   }	
   else
   {
   	mul = num2;
       while(mul % num1 != 0)
       {
		 mul = num2 * i;
		i++;       
       }
       ret = mul;
   
   }
 return ret;
}
   
   
 int GCF(int num1,int num2)
 {
   int i =2;
   int ret =0;
   int min = (num1 <= num2) ? num1 : num2;
   if(num1 ==0 || num2 == 0){return 0;}
    if(min == num1)
     {
     	for(;i <= num1;i++)
     	{
     		if(num1 % i ==0 && num2 % i ==0)
     		{
     			ret = i ;
     			return i;
  //   			break;
     		}
     	}
     } 
     else
     {
	for(;i <= num2;i++)
     	{
     		if(num1 % i ==0 && num2 % i ==0)
     		{
     			ret = i ;
     			return i;
//     			break;
     		}
     	}
     
     }	 

 return 1;
 }  




int main()
{
cout<<GCF(16,16);


return 0;
}
