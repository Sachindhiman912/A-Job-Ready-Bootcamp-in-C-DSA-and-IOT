#include<stdio.h>
void reverse(int);
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    reverse(x);
}
void reverse(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        reverse(n-1);
    }
}