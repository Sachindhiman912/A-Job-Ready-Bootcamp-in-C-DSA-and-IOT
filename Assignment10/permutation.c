#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
    int x,y,z;
    printf("Enter total number of items :");
    scanf("%d",&x);
    printf("Enter number of items for permutation :");
    scanf("%d",&y);
    if(x>=y)
    {
        z=comb(x,y);
        printf("Number of arrangements is %d",z);
    }
    else 
    {
        printf("Please enter correct values.....");
    }
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
int comb(int n,int r)
{
    int a;
    a=fact(n)/fact(n-r);
    return a;
}