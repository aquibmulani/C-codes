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
	int length_of_list;
		
	public:
	Node * start = NULL;
	Node * end = NULL;
	doubly_linked_list();
	bool create_list(int value);
	bool add_begining(int value);
	bool add_end(int value);
	bool add_middle(int value,int element_to_be_added_after);
	bool delete_node(int value); 
	bool search_node(int value); //still_to_be_done
	int length_list();
	int front_of_list();           
	int end_of_list();            
	void delete_front_of_list(); 
	void print_list();
	
};
