#include<stdio.h>

int main()
{
	int i,flag=0;
	char u[10],p[10];
	char a[3][2][10]={{"Sachin22","22"},{"Praveen95","95"},{"Shobhit91","91"}};
	printf("enter a username :");
	gets(u);
	
	printf("enter password :");
	gets(p);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(u,a[i][0])==0 && strcmp(p,a[i][1])==0)
		{
			printf("you are a valid user ");
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("you are not a valid user");
	}
}
