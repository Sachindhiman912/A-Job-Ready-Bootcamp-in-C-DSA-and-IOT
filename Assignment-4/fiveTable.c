#include<stdio.h>
int main()
{
    int i,x;
    printf("TABLE OF FIVE");
    for(i=1;i<=10;i++)
    {
        x=5*i;
        printf("\n5*%d=%d",i,x);
    }
}