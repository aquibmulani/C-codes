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
	bool create_list(int value);  // creates initial node of linked List
	bool add_begining(int value); // Adds a node before the first node of linked list
	bool add_end(int value);      // Adds a node after the end node of linked list 
	bool add_middle(int value,int element_to_be_added_after);  // Adds a node in the middle of the linked list
	bool delete_node(int value);  // deletes the node in the linked list
	int length_list();            // returns the length of the linked list
	int front_of_list();          // returns front node of the linked list
	int end_of_list();            // returns end node of the linked list
	void delete_front_of_list();  // delete front node of the linked list
	void print_list();            // prints all the nodes of linked list    
	
};
