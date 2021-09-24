#include<iostream>

using namespace std;

struct Node
{
  struct Node * next;
  int value;
};

Node *reverse_linked_list(Node * head)
{
	
   Node * mid = head;
   Node * tail = nullptr;
   Node * front = head;
   
   while(front != NULL)
   {
   		front = front -> next;
   		mid -> next = tail;
   		tail = mid;
   		mid = front;
//		cout<<tail->value;
   }
   head = tail;
      return head;
}



Node *reverse_linked_list_recursive(Node * head)
{
	if(head == NULL || head -> next == NULL)
	{
		return head;
	}
	
	Node * temp = reverse_linked_list_recursive(head -> next);
	head -> next -> next = head;
	head -> next = NULL;
	
	return temp;


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
  
  Node * new_head = NULL;
  new_head = reverse_linked_list_recursive(head);//reverse_linked_list(head);
 
  while(new_head != NULL)
  {
     cout<<new_head -> value<<"\n";
     new_head = new_head -> next;
  
  }

return 0;
}
