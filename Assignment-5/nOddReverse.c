#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
    {

    
    for(i=x;i>=1;i=i-2)
    {
        printf("%d\n",i);
    }
    }
}