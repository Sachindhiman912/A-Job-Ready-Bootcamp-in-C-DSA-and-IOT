#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter two values a and b :");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    
    
    printf("%d\n%d",a,b);
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
