#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="sachindhiman";
	int i,count=0;
	char c='i';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}
	printf("count occurence=%d",count);
}
