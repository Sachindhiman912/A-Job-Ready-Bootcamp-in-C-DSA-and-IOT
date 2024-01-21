#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="sachindhiman";
	int freq[150]={0};
	int i=0;
	
	while(str[i]!='\0')
	{
		freq[str[i]]++;
		i++;
	}
	
	for(i=0;i<150;i++)
	{
		if(freq[i]!=0)
		{
			printf("%c=>%d\n",i,freq[i]);
		}
	}
	
}
