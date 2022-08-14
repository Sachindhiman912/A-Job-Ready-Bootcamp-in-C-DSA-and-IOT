#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<=x;i=i+2)
    {
        printf("%d\n",i);
    }
}