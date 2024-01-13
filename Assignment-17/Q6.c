#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="dhiman";
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	
	for(i=count;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
