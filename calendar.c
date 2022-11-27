#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,x,m;
    printf("CALENDAR OF 2023");
    printf("\n1.Janurary \n2.Feburary \n3.March \n4.April \n5.May \n6.June \n7.July \n8.August \n9.September \n10.October \n11.November \n12.December");
    printf("\nChoose any Month :");
    scanf("%d",&m);
    if(m<13)
    {

    
    printf("\nEnter any Date of Janurary 2023:");
    scanf("%d",&a);
    if(a<32)
    {
    x=a%7;
    
    switch(x)
    {
        case 0:
        printf("Saturday");
        break;
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thrusday");
        break;
        case 6:
        printf("Friday");
        break;
        
    }
    }
    
    else
    {
        printf("Please Enter a valid Date");
    }
    }
    else
    {
        printf("Please enter a valid month");
    }
}