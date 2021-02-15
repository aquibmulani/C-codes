#include<iostream>

using namespace std;

struct Node
{
  struct Node * next;
  int value;
};

Node * merge_sorted_lists(Node* head1, Node * head2)
{
	Node * my_head = NULL;
	if(head1 == NULL){return head2;}	
	if(head2 == NULL){return head1;}	
	
	if(head1 -> value <= head2 -> value)
	{
		my_head = head1;
		my_head -> next = merge_sorted_lists(head1 -> next , head2);
		
	}
	else
	{
		my_head = head2;
		my_head -> next = merge_sorted_lists(head1, head2 -> next);
	
	}
return my_head;

}

int main()
{

 Node * head = new Node();
 Node * second = new Node();
 Node * third = new Node();
 Node * fourth = new Node();
 
 head -> value = 1;
 head -> next = second;
 
 second -> value = 2;
 second -> next = third;

 third -> value = 3;
 third -> next = fourth;

 fourth -> value = 4;
 fourth -> next = NULL;
  

 Node * head2 = new Node();
 Node * second2 = new Node();
 Node * third2 = new Node();
 Node * fourth2 = new Node();
 
 head2 -> value = 1;
 head2 -> next = second2;
 
 second2 -> value = 4;
 second2 -> next = third2;

 third2 -> value = 9;
 third2 -> next = fourth2;

 fourth2 -> value = 10;
 fourth2 -> next = NULL;


Node * ret_head = merge_sorted_lists(head,head2);
Node * new_head = ret_head;
 while(new_head != NULL)
  {
     cout<<new_head -> value<<"\n";
     new_head = new_head -> next;
  
  }

return 0;
}
