#include<stdio.h>
#include<string.h>

int main()
{
	char ip[]="123.96.46.71";
	char *a=strtok(ip,".");
	
	while(a!=NULL)
	{
		int x=atoi(a);
		if(x>=0 && x<=255)
		{
			printf("%d ",x);
		}
		a=strtok(NULL,".");
	}
	
}
