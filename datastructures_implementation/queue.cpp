#include<iostream>

using namespace std;

class my_queue
{
	private:
			int * queue_array;
			int front;
			int rear;
			int queue_size;
			int current_length;
    public:
    	    my_queue(int queue_size)
    	    {
    	    	this -> queue_size = queue_size;
				front =0;
				rear = -1;
				queue_array = new int[queue_size];
				current_length = 0;
    	    }
			~my_queue()
			{
				delete 	[]queue_array;	
			
			}
			bool enqueue(int ip)
			{
				if(is_queue_full())
				{
				
					cerr<< "Queue is full \n";
					return false;
				}
				rear = (rear+1) % queue_size;
				queue_array[rear] = ip;
				current_length++;
				return true;
			}
			
	
			int dequeue()
			{
				int ret_val =0;			
				if(is_queue_empty())
				{
					cerr<<"Queue is empty \n";		
					return -1;			
				}
				ret_val = queue_array[front];
				front = (front+1) % queue_size;
				queue_size--;
				
				return ret_val;
			}
			
			int size()
			{
			
				return current_length;			
			
			}
			
			bool is_queue_empty()
			{
				if(size() == 0)
				{
					return true;
					
				}
			return false;
			}
			
			bool is_queue_full()
			{
				if(size() == queue_size)
				{
					return true;				
				}
				return false;
			
			}
			
			int top()
			{
				if(is_queue_empty())
				{
					cerr<< "Queue is empty \n";
					return -1;
				
				}			
				return queue_array[front];
			
			}


};

int main()
{
	
	my_queue first_queue(5);
	first_queue.enqueue(2);
	first_queue.enqueue(3);
	first_queue.enqueue(4);
	first_queue.enqueue(5);	
	first_queue.enqueue(6);
	first_queue.enqueue(7);
	cout<<first_queue.top()<< endl;
	first_queue.dequeue();
	cout<<first_queue.top()<< endl;
	first_queue.enqueue(7);
	cout<<first_queue.top()<< endl;
	


return 0;
}
