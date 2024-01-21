#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="sachindhiman";
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				char c;
				c=str[i];
				str[i]=str[j];
				str[j]=c;
			}
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
}
