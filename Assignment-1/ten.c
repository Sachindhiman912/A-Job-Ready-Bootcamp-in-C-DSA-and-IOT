#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0;
	char str[10];
	
	printf("enter date of birth");
	for(i=0;i<10;i++)
	{
		scanf("%c",&str[i]);
	}
	
	printf("Day-%c%c ",str[0],str[1]);
	printf("Month-%c%c ",str[3],str[4]);
	printf("Year-%c%c%c%c ",str[6],str[7],str[8],str[9]);
	
	
}
