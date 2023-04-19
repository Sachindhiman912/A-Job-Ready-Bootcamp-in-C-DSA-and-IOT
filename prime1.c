#include<stdio.h>
int main()
{
    int n,temp=1,i;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            temp++;
        }
    }
    if(temp==1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }

}