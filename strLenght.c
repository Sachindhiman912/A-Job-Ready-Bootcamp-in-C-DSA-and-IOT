#include<stdio.h>
int main()
{
    int i,count=0;
    char str[10]="BHOPAL";
    for(i=0;str[i];i++)
    {
        count++;
    }
    printf("Lenght of string is %d",count);
}