#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="sac22@@";
	int i,a=0,n=0,s=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>'A' || str[i]>'a') && (str[i]<'Z' || str[i]<'z'))
		{
			a++;
		}
		else if(str[i]>'0' && str[i]<'9')
		{
			n++;
		}
		else
		{
			s++;
		}
	}
	printf("Characters:%d\n",a);
	printf("numbers:%d\n",n);
	printf("special:%d\n",s);
}
