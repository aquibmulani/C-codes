#include<iostream>
#include<cstdint>


using namespace std;

void method_1()
{
 int a = 1;
 char * point;
 point =(char *) &a;
 
 if(*point)
 {
 	cout<<"little endian";
 }
 else 
 {
	 cout<< "Big Endian";
 }
}
void method_2()
{
  union check_endian
  {
  	unsigned int my_var;	
  	struct 
  	{
  		unsigned int a : 4;
  		unsigned int b : 4;
  	}store;
  };

 union check_endian object;
 object.my_var = 0x01;
 if(object.store.a)
 {
    cout<<"Little Endian";
 }
 else
 {
 	cout<<"Big Endian";
 }
}

int main()
{
 
method_1();


return 0;
}
