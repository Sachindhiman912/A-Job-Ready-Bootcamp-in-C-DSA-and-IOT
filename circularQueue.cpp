#include<iostream>
using namespace std;
class Queue
{
	int front,rear,q[5],size;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			size=5;
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
			else if((rear+1)%size==front)
			{
				cout<<"OVERFLOW"<<endl;
			}
			else
			{
				
				rear=(rear+1)%size;
				q[rear]=v;
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
				front=(front+1)%size;
			}
		}
		
		void print()
		{
			if(front==-1)
			{
				cout<<"queue is empty"<<endl;
				return;
			}
			int i=front;
			while(1)
			{
				cout<<q[i]<<" ";
				if(i==rear)
				{
					break;
				}
				i=(i+1)%size;
				
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
	q.enque(40);
	q.enque(50);
	
	q.print();
	q.deque();
	q.deque();
	q.print();
	q.enque(564);
	q.print();
	return 0;
}
