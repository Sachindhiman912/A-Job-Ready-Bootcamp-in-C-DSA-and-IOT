#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char c[]="SACHIN";
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='A' && c[i]<='Z')
		{
			c[i]=c[i]+32;
		}
		
	}
	printf("%s",c);
}
