#include<stdio.h>
int main()
{
    int i=19;
    printf("10 odd natural numbers in reverse order");
    while(i>=1)
    {
        printf("\n%d",i);
        i=i-2;
    }
}