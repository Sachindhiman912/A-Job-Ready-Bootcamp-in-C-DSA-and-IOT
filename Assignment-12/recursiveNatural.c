#include<stdio.h>
void nature(int);
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
   nature(x);
}
void nature(int n)
{
    if(n>0)
    {
       nature(n-1);
       printf(" %d",n);
    }
    
}