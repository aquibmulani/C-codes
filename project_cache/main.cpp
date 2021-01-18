#include<iostream>
//#include "doubly_linked_list.h"
#include "class-cache.h"

using namespace std;


int main()
{
	caches my_cache_1(10);
	my_cache_1.put(1,9);
	my_cache_1.put(2,10);
	my_cache_1.put(3,100);
	my_cache_1.put(4,1000);
	my_cache_1.put(5,90);
	my_cache_1.put(6,970);
	my_cache_1.put(7,900);
	my_cache_1.put(8,880);
	my_cache_1.put(9,780);
	my_cache_1.put(10,680);

	cout<<endl;
	my_cache_1.print_cache();

	my_cache_1.put(1,9);
	my_cache_1.put(1,9);
	my_cache_1.put(1,9);
	my_cache_1.put(1,9);

	my_cache_1.put(33,10000000);
	my_cache_1.put(34,10000000);
	my_cache_1.put(35,10000000);
	my_cache_1.put(33,10000100);
	my_cache_1.put(34,10000000);

	cout<<endl;
	my_cache_1.print_cache();
	
	cout<<endl;
	cout<<my_cache_1.get(5);	










/*
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
	obj.add_end(11);
	obj.add_middle(400,6);
//	cout<<"list size: "<< obj.length_list() <<"\n";
	
	Node * traverse = obj.start;
	while(traverse != NULL)
	{
	  cout<<traverse -> value<<"\t";
	  traverse = traverse -> next;
	}	
	
	cout<<endl;	
		
	//obj.delete_node(11);	
	obj.delete_front_of_list();	
	obj.delete_front_of_list();	
	obj.delete_front_of_list();	


//	cout<<"list size 2: "<< obj.length_list() <<"\t";
	traverse = obj.start;
	cout<<"start : " << obj.front_of_list()<<"\n";
	cout<<"end : " << obj.end_of_list()<<"\n";


	while(traverse != NULL)
	{
	  cout<<traverse -> value<<"\t";
	  traverse = traverse -> next;
	}
	//cout<< "end:" << obj.end -> value<<"\n";
	//cout<< "start:" << obj.start -> value; 
	*/

return 0;
}
