#include<iostream>
using namespace std;
class Stack
{
	int s[100],top;
	public: 
		Stack()
		{
			top=-1;
		}
		~Stack()
		{
			top=-1;
		}
		
		void push(int value)
		{
			if(isStackFull())
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				top++;
				s[top]=value;
			}
		}
		
		int pop()
		{
			if(isStackEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return -1;
			}
			else
			{
				top--;	
				return s[top+1];
			}
		}
		int isStackEmpty()
		{
			if(top==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int isStackFull()
		{
			if(top==99)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int Top()
		{
			if(isStackEmpty())
			{
				cout<<"Stack Undersflow"<<endl;
				return 0;
			}
			else
			{
				return s[top];
			}
		}
		
		int size()
		{
			return top+1;
		}
};
int main()
{
	int choice;
	Stack s;
	
	while(choice!=5)
	{
	
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Get Top"<<endl;
		cout<<"4. Get Size"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"enter your choice :"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					int value;
					cout<<"enter element :"<<endl;
					cin>>value;
					s.push(value);
					break;
				}
			case 2:
				{
					cout<<"Deleted value is "<<s.pop()<<endl;
					break;
				}
			case 3:
				{
					cout<<"top value is "<<s.Top()<<endl;
					break;
				}
			case 4:
				{
					cout<<"size of the Stack is "<<s.size()<<endl;
					break;
				}
			case 5:
				{
					exit(0);
				}
		}
	}
	
}
