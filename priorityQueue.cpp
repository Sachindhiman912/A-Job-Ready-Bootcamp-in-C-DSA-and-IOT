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
			if(front==-1)
			{
				rear++;
				front++;
				q[front]=v;
				cout<<"INSERTED"<<endl;
			}
			
			else
			{
				for(int i=front;i<=rear;i++)
				{
					if(v>q[i])
					{
						break;
					}
				}
				for(int j=i;j<=rear;j++)
				{
					q[j+1]=q[j];
				}
				q[j]=v;
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
	
	return 0;
}
