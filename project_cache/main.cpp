#include<iostream>
#include "doubly_linked_list.h"
//#include "class-cache.h"

using namespace std;


int main()
{

//	caches imp(4000);
	doubly_linked_list obj;
	obj.create_list(10);
	obj.add_begining(9);
	obj.add_begining(8);
	obj.add_begining(7);
	obj.add_begining(6);
	obj.add_begining(5);
	obj.add_begining(4);
	obj.add_begining(3);
	obj.add_begining(2);
	obj.add_begining(1);
	
	Node * traverse = obj.start;
	
	while(traverse != NULL)
	{
	  cout<<traverse -> value<<"\n";
	  traverse = traverse -> next;
	}
	cout<< "end:" << obj.end -> value<<"\n";
	cout<< "start:" << obj.start -> value;

return 0;
}
