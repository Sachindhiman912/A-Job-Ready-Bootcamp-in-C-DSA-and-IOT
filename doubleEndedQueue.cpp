#include<iostream>
using namespace std;
class doubleQueue
{
	int front,rear,q[100],size;
	public:
		doubleQueue()
		{
			front=-1;
			rear=-1;
			size=100;
		}
		void insertAtEnd(int v)
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
		
		void insertAtBegin(int v)
		{
			if(front==-1)
			{
				front++;
				rear++;
				q[front]=v;
			}
			else if(rear==size-1)
			{
				cout<<"OVERFLOW"<<endl;
			}
			else
			{
				for(int i=rear;i>=front;i--)
				{
					q[i+1]=q[i];
				}
				rear++;
				q[front]=v;
			}
		}
		void deleteAtFront()
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
		
		void deleteAtEnd()
		{
			if(rear==-1)
			{
				cout<<"UNDERFLOW"<<endl;
			}
			else if(front==rear)
			{
				cout<<q[rear]<<"deleted"<<endl;
				front=rear=-1;
			}
			else
			{
				cout<<q[rear]<<"delted"<<endl;
				rear--;
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
	doubleQueue dq;
	dq.insertAtEnd(10);
	dq.insertAtEnd(20);
	dq.insertAtEnd(30);
	dq.print();
	dq.insertAtBegin(5);
	dq.print();
	dq.deleteAtEnd();
	dq.print();
	dq.deleteAtFront();
	dq.print();
}
