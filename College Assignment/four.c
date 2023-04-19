#include<stdio.h>
int main()
{
    int i,j,n,a[50];
    printf("enter how many values you want to enter :");
    scanf("%d",&n);
    printf("enter values :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicates are :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                printf("%d\n",a[i]);
            }
        }
    }
}