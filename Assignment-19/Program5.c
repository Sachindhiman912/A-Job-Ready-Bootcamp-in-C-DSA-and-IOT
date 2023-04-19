#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][30];
	int n,i;
	printf("Enter how many emails you want to enter :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
	}
	printf("Odd email addresses are :\n");
	for(i=1;i<=n;i++)
	{
		if(strchr(a[i],'@')==0)
		{
			printf("%s",a[i]);
		}
		printf("\n");
	}
}
