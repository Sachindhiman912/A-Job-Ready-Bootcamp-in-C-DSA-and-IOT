#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head;


void beginsert(int);
void lastinsert(int);
void randominsert(int);

void begindelete();
void lastdelete();
void randomdelete();

void traverselist();

int main()
{
	int choice,item;
	do
	{
		printf("\n1.insertion at beginning \n2.insertion at last \n3.random insertion \n4.deletion at beginning \n5.deletion at last \n6.random deletion \n7.traverse \n8.exit \nenter your choice?");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1:
		printf("enter the data:");
		scanf("%d",&item);
		beginsert(item);
		break;
		
		
		
		
		case 2:
			lastinsert(item);
			
		case 4:
			randominsert(item);
		case 5:
			begindelete();
		case 6:
			lastdelete();
			case 7:
				randomdelete();
		case 8:
		traverselist();
		break;
		
		case 9:
		exit(0);
		break;
		
		default:
			cout<<"please enter valid choice";
		}
	}
	while(choice!=3);

}

