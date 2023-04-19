#include<stdio.h>
int main()
{
	int x,y,n;
	printf("Enter any number :");
	scanf("%d",&x);
	y=x%10;
	printf("last digit of your number is :%d",y);
	
	x=x/10;
	printf("\nfirst digit of your numbers is :%d",x);
}
