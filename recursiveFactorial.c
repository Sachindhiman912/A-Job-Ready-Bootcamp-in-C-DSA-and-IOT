#include<stdio.h>
int fact(int);
int main()
{
    int x;
    x=fact(5);
    printf("%d",x);
}
int fact(int n)
{
    int a;
    if(n==0 || n==1)
    {
        return 1;
    }
    a=n*fact(n-1);
    return a;
}