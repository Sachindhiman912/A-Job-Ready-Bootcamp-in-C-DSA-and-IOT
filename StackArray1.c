#include <stdio.h>   
int stack[50],i,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
int main ()  
{  
      
    printf("Enter the number of elements in the stack :");   
    scanf("%d",&n);  
      
    while(choice != 4)  
    {  
        printf("Choose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
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
                printf("END");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }
    } 
	
}   
  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf(" Overflow\n");   
    else   
    {  
        printf("Enter the value :");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;  
		printf("inserted...\n"); 
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;  
	printf("deleted...\n");
}   
void show()  
{  
	if(top == -1)   
    {  
        printf("Stack is empty\n");  
    } 
    else
    {
    	for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    } 
	}

     
     
}
