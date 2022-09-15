#include<stdio.h>
float simple(float,float,float);
int main()
{
    int p;
    float r,t,interest; 
    printf("Enter Principal Value :");
    scanf("%d",&p);
    printf("Enter Rate of Interest :");
    scanf("%d",&r);
    printf("Enter Time Period :");
    scanf("%d",&t);
    interest=simple(p,r,t);
    printf("%f",interest);
}
float simple(float a,float b,float c)
{
    float s;
    s=(a*b*c)/100;
    return s;
}