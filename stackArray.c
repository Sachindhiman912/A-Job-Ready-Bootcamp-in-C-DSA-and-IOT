#include<stdio.h>
int choice,top=-1,a[20],n,val,i;
void push();
void pop();
void show();
int main()
{
	printf("Enter number of elements of stack :");
	scanf("%d",&n);
	while(choice!=4)
	{
	printf("Enter your choice :\n");
	printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	scanf("%d",&choice);
	

		switch(choice)
		{
			case 1:
				{
					push();
					
				}
				
				
			case 2:
				{
					pop();
					break;
				}
				
				
			case 3:
				{
					show();
					break;
				}
				
				
			case 4:
				{
					break;
				}
			default:
				{
					printf("Please enter a valid choice");
				}
		}
	}
}

void push()
{
	int val;
	
				if(top==n-1)
				{
					printf("overflow\n");
				}
				else
				{printf("enter value :");
				scanf("%d",val);
					top=top+1;
					a[top]=val;
					printf("INSERTED");
				}
}
void pop()
{
	if(top==-1)
					{
						printf("Underflow");
					}
					else
					{
						top=top-1;
					}
}
void show()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d",a[i]);
		}
	}
}
