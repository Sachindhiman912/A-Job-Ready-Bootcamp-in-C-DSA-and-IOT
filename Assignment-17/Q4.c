#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char c[]="sachin";
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='a' && c[i]<='z')
		{
			c[i]=c[i]-32;
		}
	}
	printf("%s",c);
}
