#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("enter any number till you want to print squares :");
    scanf("%d",&n);
    square(n);
}
void square(int x)
{
    if(x>1)
    {
        square(x-1);
    }
    printf("%d ",x*x);
}