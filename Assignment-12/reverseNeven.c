#include<stdio.h>
void even(int);
int main()
{
    int x;
    printf("Enter how many even numbers you want to print :");
    scanf("%d",&x);
    x=2*x;
    even(x);
}
void even(int n)
{
    if(n>0)
    {
        printf(" %d",n);
       even(n-2);
    }
    
}