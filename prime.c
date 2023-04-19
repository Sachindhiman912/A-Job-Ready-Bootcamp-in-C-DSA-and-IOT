#include<stdio.h>
int main()
{
    int n,i;
    printf("enter any nuber :");
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("%d is neither prime not composite",n);
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("numbers is not prime");
            break;
        }
        if(n%i!=0)
        {
            printf("number is prime");
            break;
        }
    }
}