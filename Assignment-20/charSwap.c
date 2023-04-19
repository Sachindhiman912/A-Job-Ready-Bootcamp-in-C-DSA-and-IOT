#include<stdio.h>
#include <stdlib.h>


void swap(char **p,char **q)
{
    char *t = *p ;
    *p=*q;
    *q=t;
}
int main()
{
    char *a=malloc(10),*b=malloc(10);
    printf("enter two character values a and b :");
   	gets(a);
   	gets(b);
   	
    printf("Before : %s %s\n",a,b);
    swap(&a,&b);
    printf("After : %s %s",a,b);
}
