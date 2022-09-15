#include<stdio.h>
int fun(int);
int main()
{
    int n,s;
    printf("Enter any number :");
    scanf("%d",&n);
    s=fun(n);
    printf("%d",s);
}
int fun(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}