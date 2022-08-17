#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter how many odd numbers you want to print :");
    scanf("%d",&x);
    x=2*x-1;
    odd(x);
}
void odd(int n)
{
    if(n>0)
    {
       odd(n-2);
       printf(" %d",n);
    }
    
}