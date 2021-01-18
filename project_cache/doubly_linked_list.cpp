#include<iostream>
#include "doubly_linked_list.h"




doubly_linked_list :: doubly_linked_list()
{
	length_of_list =0;
}


bool doubly_linked_list:: create_list(int value)
{
	length_of_list++;
	Node * temp = new Node;
	temp -> next = NULL;
	temp -> value = value;
	
	if(start == NULL)
	{
		temp -> previous = NULL;
		start = temp;
		end = start;
		return true;
	}
return false;	
}

bool doubly_linked_list :: add_begining(int value)
{
	length_of_list++;

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
	length_of_list++;
	//	cout<<"Here";

	if(start == NULL)
	{
		create_list(value);
//		cerr<<"Create the initial node first";
	}
	else
	{
		Node * temp = new Node;
		temp -> value = value;
		
		end -> next = temp;
		temp -> next = NULL;
		temp -> previous = end;
		end = temp;
		return true;
	}
	
return false;
}


bool doubly_linked_list :: add_middle(int value, int element_to_be_added_after)
{
	length_of_list++;

	if(start == NULL)
	{
		cerr<<"Create the initial node first";
		return false;
	}
	else
	{
		Node * temp = new Node;
		temp -> value = value;
		Node * traverse = start;
		Node * marker;
		while(traverse -> value != element_to_be_added_after)
		{
		//	cout<< traverse -> value<<"\t";
			traverse = traverse -> next;
		}
		
		temp -> next = traverse -> next;
		marker = temp -> next;
		temp -> previous = traverse;
		traverse -> next = temp;
		marker -> previous = temp;
		return true;
	}

return false;
}


int doubly_linked_list::length_list()
{

  return length_of_list;
}

bool doubly_linked_list::delete_node(int key)
{
	length_of_list--;
	Node * temp = start;
	while(temp -> value != key)
	{
		temp = temp -> next;
	}

	if(temp -> previous == NULL)
	{
		temp = start;
		start = start -> next;			
		start -> previous = NULL;
		delete temp;
	}
	else if(temp -> next == NULL)
	{
		temp = end;
		end = end -> previous;
		end -> next = NULL;
		delete end;
	}
	else
	{
		Node * extra_ptr = temp;
		temp = temp -> previous;
		temp -> next = extra_ptr->next;
		extra_ptr = extra_ptr -> next;
		extra_ptr -> previous = temp;
	}
	return 0;
}

int doubly_linked_list::front_of_list()
{
	return start -> value;	
}           


int doubly_linked_list::end_of_list()          
{
return end -> value;
}

void doubly_linked_list::delete_front_of_list()
{
	Node * temp = start;
	start = start -> next;
	start -> previous = NULL;
	delete temp;

}

void doubly_linked_list::print_list()
{
   Node * traverse = start;
   while(traverse != NULL)
   {
	cout<<traverse -> value << "\n";
	traverse = traverse -> next;   	
   }

}
























