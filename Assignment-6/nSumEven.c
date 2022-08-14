#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter how many even natural numbers you want to add: ");
    scanf("%d",&n);

    for(i=2;i<=2*n;i=i+2)
    {
        sum=sum+i;
        
    }
    printf("Sum of %d even natural number is %d",n,sum);
}