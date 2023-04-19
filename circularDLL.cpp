#include<iostream>
#include<stdlib.h>
using namespace std;

class Node
{
	public: 
		int value;
		Node *next,*prev;
		
		Node()
		{
			value=0;
			next=NULL;
			prev=NULL;
		}
};

class doublyLL
{
	Node *head;
	public:
		doublyLL()
		{
			head=NULL;
		}
		
		void insertAtEnd(int v)
		{
			Node *temp=new Node();
			temp->value=v;
			if(head==NULL)
			{
				head=temp;
				temp->next=temp;
				temp->prev=temp;
				
			}
			else
			{
				temp->next=head;
				temp->prev=head->prev;
				head->prev->next=temp;
				head->prev=temp;
			}
			cout<<"NODE INSERTED"<<endl;
		}
		
		void insertAtBegin(int v)
		{
			Node *temp=new Node();
			temp->value=v;
			if(head==NULL)
			{
				head=temp;
				
				temp->prev=temp;
				temp->next=temp;
			}
			else
			{
				temp->next=head;
				temp->prev=head->prev;
				head=temp;
				temp->next->prev=temp;
				temp->prev->next=temp;
			}
			cout<<"NODE INSERTED"<<endl;
		}
		
		void insertInMiddle(int v,int loc)
		{
			Node *temp=new Node();
			temp->value=v;
			Node *t=head;
			
			if(loc==1 && head!=NULL)
			{
				this->insertAtBegin(v);
				return;
			}
			if(head==NULL && loc>0)
			{
				cout<<"Position not found"<<endl;
				return;
			}
			while(loc>2)
			{
				loc--;
				if(t==NULL)
				{
					cout<<"Position not found"<<endl;
					return;    //break;
				}
				else
				{
					t=t->next;
				}
			}
			temp->next=t->next;
			temp->prev=t;
			if(t->next!=NULL)
			{
				temp->next->prev=temp;
			}
			t->next=temp;
			cout<<"NODE INSERTDED"<<endl;
		}
		
		void deletionAtBegin()
		{
			if(head==NULL)
			{
				cout<<"List is empty"<<endl;
			}
			else
			{
				Node *t=head;
				head=t->next;
				head->prev=t->prev;;
				t->prev->next=head;
				cout<<t->value<<" deleted"<<endl;
				delete t;
			}
		}
		void deletionAll(int loc)
		{
			Node *t=head;
			if(head==NULL)
			{
				cout<<"Position Not Exist"<<endl;
				return;
			}
			if(loc==1)
			{
				head=t->next;
				head->prev=NULL;
				cout<<t->value<<"deleted"<<endl;
				delete t;
				return;
			}
			else
			{
				while(loc>1)
				{
					loc--;
					if(t->next==NULL)
					{
						cout<<"Postion not Exist"<<endl;
						return;
					}
					t=t->next;
				}
				t->prev->next=t->next;
				if(t->next != NULL)
            	{
            		t->next->prev = t->prev;
				}
                cout<<t->value<<" deleted"<<endl;
                delete t;
			}
		}
		void deleteAtEnd()
		{
			
				if(head==NULL)
				{
					cout<<"List is Empty"<<endl;
				}
				else if(head->next==head)
				{
					cout<<head->value<<" deleted"<<endl;
					head=NULL;
				}
				else
				{
					Node *temp=head->prev;
					temp->prev->next=head;
					head->prev=temp->prev;
					cout<<temp->value<<"deleted"<<endl;
					delete temp;
				}
		}
		void search(int v)
		{
			int count=0;;
			Node *t=head;
			if(head==NULL)
			{
				cout<<"List is empty"<<endl;
				return;
			}
			else
			{
				
				while(t->next!=head)
				
				{
					count++;
					if(t->value==v)
					{
						cout<<"node found at"<<count<<endl;
						return ;
					}
					t=t->next;
				}
				cout<<"NODE NOT FOUND"<<endl;
			}
		}
		void print()
		{
			Node *t=head;
			if(head==NULL)
			{
				cout<<"List is empty"<<endl;
			}
			else
			{
				while(t->next!=head)
				{
					cout<<t->value<<" ";
					t=t->next;
				}
				cout<<endl;
			}
		}
		
};

int main()
{
	int choice,n,loc;
	doublyLL ll;

	do
	{
		cout<<"*****DOUBLY LINKED LIST*****"<<endl;
		cout<<"1. Insertion at Beginning"<<endl;
		cout<<"2. Insertion at Particular Location"<<endl;
		cout<<"3. Insertion at End"<<endl;
		cout<<"4. Deletion at Particular Location"<<endl;
		cout<<"5. Deletion from Beginning"<<endl;
		cout<<"6. Deletion from End"<<endl;
		cout<<"7. Search"<<endl;
		cout<<"8. Print"<<endl;
		cout<<"9. Exit"<<endl;
		cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"enter value :"<<endl;
					cin>>n;
					ll.insertAtBegin(n);
					break;
				}
			case 2:
				{
					cout<<"enter position :"<<endl;
					cin>>loc;
					cout<<"enter value :"<<endl;
					cin>>n;
					ll.insertInMiddle(n,loc);
					break;
				}
			case 3:
				{
					cout<<"enter value :"<<endl;
					cin>>n;
					ll.insertAtEnd(n);
					break;
				}
			
			case 4:
				{
					cout<<"enter position :"<<endl;
					cin>>n;
					ll.deletionAll(n);
					break;
				}
			case 5:
				{
					ll.deletionAtBegin();
					break;
				}
			case 6:
				{
					ll.deleteAtEnd();
					break;
				}
			case 7:
				{
					cout<<"Enter element which you want to search"<<endl;
					cin>>n;
					ll.search(n);
					break;
				}
			case 8:
				{
					ll.print();
					break;
				}
			case 9:
				{
					exit(0);
					break;
				}
			default: 
			{
				cout<<"## PLEASE ENTER A VALID CHOICE ##"<<endl;
				
			}
		}
	}
	while(choice!=7);
	return 0;
}
