#include<iostream>
#include "doubly_linked_list.h"




doubly_linked_list :: doubly_linked_list()
{

}


bool doubly_linked_list:: create_list(int value)
{
	Node * temp = new Node;
	temp -> next = NULL;
	temp -> value = value;
	
	if(start == NULL)
	{
		temp -> previous = NULL;
		start = temp;
		return true;
	}
	
return false;	
}

bool doubly_linked_list :: add_begining(int value)
{
	if(start == NULL)
	{
		cerr<<"Create the initial node first";
	}
	else
	{
		Node * temp = new Node;
		temp -> previous = NULL;
		temp -> value = value;
		temp -> next = start;
		start -> previous = temp;
		start = temp;
		end = start;
		while(end -> next != NULL)
		{
			end = end -> next;
		}
		return true;
	}

return false;
}


bool doubly_linked_list :: add_end(int value)
{



return false;
}
