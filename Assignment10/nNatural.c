#include<stdio.h>
int nature(int);
int main()
{
    int n;
    printf("Enter how many natural numbers you want to print :");
    scanf("%d",&n);
    nature(n);
}
int nature(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
}