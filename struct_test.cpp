#include<iostream>


using namespace std;

struct st
{
	int x;
	struct st * next;
};
int main()
{
	struct st temp;
	temp.x = 10;
	temp.next = &temp;
    
	cout<< temp.next -> x <<"\t" <<sizeof(temp)<<"\t"<<sizeof(temp.next -> x);
return 0;
}
