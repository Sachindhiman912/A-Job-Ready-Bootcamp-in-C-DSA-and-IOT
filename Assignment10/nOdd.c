#include<stdio.h>
void nature(int);
int main()
{
    int n;
    printf("Enter how many odd natural numbers you want to print :");
    scanf("%d",&n);
    nature(2*n-1);
}
void nature(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
        i++;
    }
}