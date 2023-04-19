#include<stdio.h>
int main()
{
    int a[10],even=0,odd=0,i;
    printf("enter any 10 numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    printf("Even sum is :%d\n",even);
    printf("Odd sum is :%d",odd);
}