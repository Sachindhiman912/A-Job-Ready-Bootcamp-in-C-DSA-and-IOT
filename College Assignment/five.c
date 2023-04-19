#include<stdio.h>
int main()
{
    int i,j,n,a[50],sum;
    printf("enter how many values you want to enter :");
    scanf("%d",&n);
    printf("enter the values :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the pair sum :");
    scanf("%d",&sum);
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("Pairs are :");
                printf("(%d,%d)\n",a[i],a[j]);
            }
            
        }
    }
    
}