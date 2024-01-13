#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="aeiou";
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
	}
	printf("vowels occurence=%d",count);
}
