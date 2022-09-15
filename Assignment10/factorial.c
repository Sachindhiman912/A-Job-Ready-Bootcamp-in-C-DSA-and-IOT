#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("Enter any number :");
    scanf("%d",&n);
    s=fact(n);
    printf("Factorial of %d is %d",n,s);
}
int fact(int a)
{
    int i,f=1;
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        for(i=a;i>=1;i--)
        {
            f=f*i;
            
        }
        return f;
    }
}