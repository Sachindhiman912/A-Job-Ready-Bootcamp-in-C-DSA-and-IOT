#include<stdio.h>
#include<stdlib.h>
void push();
void display();
struct node
{
	int data;
	struct node*next;
};
struct node*head;
int main()
{
	push();
	display();
}

void push()
{
	int val;
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("not able to insert");
	}
	else
	{
		printf("enter value");
		scanf("%d",&val);
		ptr->data=val;
		if(head==NULL)
		{
			
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->next=head;
			head=ptr;
		}
		printf("element inserted\n");
	}
}
void display()
{
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("empty stack");
		
	}
	else
	{
		
		while(ptr!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
	}
}
