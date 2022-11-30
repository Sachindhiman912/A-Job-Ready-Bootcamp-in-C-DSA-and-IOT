#include<stdio.h>
void prime(int);
int main()
{
    int a;
    printf("enter any number :");
    scanf("%d",&a);
    prime(a);
    
}
void prime(int x)
{
    int i;
    if(x==0)
    {
        printf("Enter a valid number");
        exit (0);
    }
    printf("Prime Factors of %d are\n",x);
    for(i=2;x!=1;i++)
    {
        
        while(x%i==0)
        {
            x=x/i;
            printf("%d\n",i);
        }
    }
}