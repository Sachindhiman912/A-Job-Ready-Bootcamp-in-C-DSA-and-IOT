#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="sachin";
	char cpy[10];
	int i;
	
	for(i=0;str[i]!='\0';i++)
	{
		cpy[i]=str[i];
	}
	for(i=0;cpy[i]!='\0';i++)
	{
		printf("%c",cpy[i]);
	}
}
