#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i=i+2)
    {
        printf("%d\n",i);
    }
}