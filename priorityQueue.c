#include<iostream>
using namespace std;
class Queue
{
	int front,rear,q[100],size;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			size=100;
		}
		
		void enque(int v)
		{
			if(rear==-1)
			{
				rear++;
				front++;
				q[rear]=v;
				cout<<"INSERTED"<<endl;
			}
			else if(rear==size-1)
			{
				cout<<"OVERFLOW"<<endl;
			}
			else
			{
				
				q[++rear]=v;
				cout<<"INSERTED"<<endl;
			}
		}
		void deque()
		{
			if(front==-1)
			{
				cout<<"UNDERFLOW"<<endl;
			}
			else if(front==rear)
			{
				cout<<q[front]<<"deleted"<<endl;
				front=rear=-1;
			}
			else 
			{
				cout<<q[front]<<"deleted"<<endl;
				front++;
			}
		}
		
		void print()
		{
			if(front==-1)
			{
				cout<<"queue is empty"<<endl;
				return;
			}
			for(int i=front;i<=rear;i++)
			{
				cout<<q[i]<<" ";
				
			}
			cout<<endl;
			
		}
};

int main()
{
	Queue q;
	q.enque(10);
	q.enque(20);
	q.enque(30);
	q.print();
	q.deque();
	q.deque();
	q.print();
	q.deque();
	q.print();
	return 0;
}
