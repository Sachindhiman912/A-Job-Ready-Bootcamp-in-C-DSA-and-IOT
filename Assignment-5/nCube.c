#include<stdio.h>
int main()
{
    int i,n,pro;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pro=i*i*i;
        printf("%d\n",pro);
    }
}