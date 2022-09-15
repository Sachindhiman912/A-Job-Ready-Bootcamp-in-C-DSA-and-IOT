#include<stdio.h>
float area(float);
int main()
{
     float a,c;
    printf("Enter the radius of the circle :");
    scanf("%f",&a);
    c=area(a);
    printf("Area os circle is %f",c);
}
float area(float r)
{
    float s;
    s=3.14*r*r;
    return s;
}