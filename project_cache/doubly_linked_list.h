#include<iostream>



using namespace std;
struct Node
{
   struct Node * next;
   struct Node * previous;
   int value;
};


class doubly_linked_list
{
		
	public:
	Node * start = NULL;
	Node * end = NULL;
	doubly_linked_list();
	bool create_list(int value);
	bool add_begining(int value);
	bool add_end(int value);
	bool add_middle(int value);
	bool delete_node(int value);
	bool search_node(int value);
	
};
