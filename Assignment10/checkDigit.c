#include<stdio.h>
int check(int ,int );
int main()
{
    int x,y,z;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("enter digit that you want to search :");
    scanf("%d",&y);
    z=check(x,y);
    if(z==1)
    {
        printf("Yes, digit is there");
    }
    else
    {
        printf("No, digit is not there");
    }
}
    
int check(int n,int d)
{
    int rem;
    while(n)
    {
        rem=n%10;
        if(rem==d)
        {
            return 1;
        }
        n=n/10;
    }
}