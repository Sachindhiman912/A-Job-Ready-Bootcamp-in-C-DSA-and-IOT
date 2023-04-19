#include<iostream>
#include<stdlib.h>
using namespace std;

class Node
{
	public: 
		int value;
		Node *next;
		
		Node()
		{
			value=0;
			next=NULL;
		}
};

class LinkedList
{
	Node *head;
		
		public: 
			LinkedList()
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
				}
				else
				{
					Node *t=head;
					
					while(t->next!=NULL)
					{
						t=t->next;
					}
					t->next=temp;
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
				}
				else
				{
					temp->next=head;
					head=temp;
					cout<<"NODE INSERTED"<<endl;
				}
				
			}
			
			void insertInMiddle(int v,int loc)
			{
				Node *temp=new Node();
				temp->value=v;
				if(loc==1)
				{
					temp->next=head;
					head=temp;
				}
				
				else
				{
					Node *t=head;
					while(loc>2)
					{
						loc--;
						if(t->next!=NULL)
						{
							t=t->next;
						}
						else
						{
							cout<<"Position Not Exist"<<endl;
							return ;
						}
						
					}
					temp->next=t->next;
					t->next=temp;
				}
				cout<<"NODE INSERTED"<<endl;
				
			}
			
			void deletionAtBegin()
			{
				if(head==NULL)
				{
					cout<<"Linked List is empty"<<endl;
				}
				else
				{
					Node *temp=head;
					head=head->next;
					cout<<temp->value<<" deleted"<<endl;
					delete temp;
				}
			}
			
			void deletionInMiddle(int n)
			{
				if(head==NULL)
				{
					cout<<"List is empty "<<endl;
				}
				else
				{
					Node *temp=head;
					if(n==1)
					{
						head=head->next;
						cout<<temp->value<<" deleted"<<endl;
						delete temp;
					}
					else
					{
						while(n>2)
						{
							n--;
							if(temp->next->next!=NULL)
							{
								temp=temp->next;
							}
							else
							{
								cout<<"Position does not exist "<<endl;
								return;
							}
						}
						
						Node *t=temp->next;
						temp->next=t->next;
						cout<<t->value<<" deletd"<<endl;
						delete t;
					}
				}	
			
			}
			
			void deletionAtEnd()
			{
				Node *t,*temp=head;
				if(head==NULL)
				{
					cout<<"List is Empty"<<endl;
				}
				else if(head->next==NULL)
				{
					cout<<head->value<<" deleted"<<endl;
					head=NULL;
				}
				else
				{
					while(temp->next!=NULL)
					{
						t=temp;
						temp=temp->next;
					}
					t->next=NULL;
					cout<<temp->value<<" deleted"<<endl;
					delete temp;
					
				}
			}
			
			void search(int v)
			{
				Node *temp=head;
				if(head==NULL)
				{
					cout<<"List is Empty"<<endl;
				}
				else
				{
					int count=0;
					while(temp!=NULL)
					{
						count++;
						if(temp->value==v)
						{
							cout<<"Value found at "<<count<<endl;
							return;
						}
						temp=temp->next;
					}
					cout<<"Element Not Found"<<endl;
				}
			}
			
			
			void print()
			{
				Node *t=head;
				while(t!=NULL)
				{
					cout<<t->value<<" ";
					t=t->next;
				}
				cout<<endl;
			}
};

int main()
{
	int choice,n,loc;
	LinkedList ll;
	do
	{
		cout<<"*****LINKED LIST*****"<<endl;
		cout<<"1. Insertion at Beginning"<<endl;
		cout<<"2. Insertion at Particular Location"<<endl;
		cout<<"3. Insertion at End"<<endl;
		cout<<"4. Deletion at Beginning"<<endl;
		cout<<"5. Deletion at Particular Location"<<endl;
		cout<<"6. Deletion at End"<<endl;
		cout<<"7. Search Node"<<endl;
		cout<<"8. Print List"<<endl;
		cout<<"9. EXIT"<<endl;
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
					ll.deletionAtBegin();
					break;
				}
			case 5:
				{
					cout<<"enter position :"<<endl;
					cin>>n;
					ll.deletionInMiddle(n);
					break;
				}
			case 6:
				{
					ll.deletionAtEnd();
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
	while(choice!=9);
	
}
