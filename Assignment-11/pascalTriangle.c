#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
int main()
{
    int x;
    printf("Enter the value of N :");
    scanf("%d",&x);
    pascal(x);
    
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
    a=fact(n)/(fact(r)*fact(n-r));
    return a;
}
void pascal(int s)
{
    int i,j;
    
    for(i=0;i<=s;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}