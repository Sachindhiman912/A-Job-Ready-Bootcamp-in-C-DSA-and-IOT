#include<stdio.h>
void nature(int);
int main()
{
    int a;
   nature(50);
}
void nature(int n)
{
    if(n>0)
    {
       nature(n-1);
       printf(" %d",n);
    }
    
}