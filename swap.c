#include<stdio.h>
void swap(int ,int);
int main()
{
    int a=8,b=6;
    swap(a,b);
    printf("%d%d",a,b);
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
