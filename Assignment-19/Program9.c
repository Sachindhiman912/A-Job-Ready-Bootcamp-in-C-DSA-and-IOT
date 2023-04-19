#include<stdio.h>
int fact(int);
int main()
{
	int i,count=0;
	char s[10];
	char ar[5][10]={"Sachin22","Parveen14","Shobhit85","Vivek65","Jwahar92"};
	printf("enter a username :");
	gets(s);
	for(i=0;i<5;i++)
	{
		
		if(strcmp(ar[i],s)==0)
		{
			count++;
			int n;
			printf("YOU ARE A VALID USER....\n");
			printf("enter a number :");
			scanf("%d",&n);
			printf("%d",fact(n));
			break;
		}
		
		
	}
	if(count==0)
	{
		printf("YOU ARE NOT A VALID USER....");
	}
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n>0)
	{
		return n*fact(n-1);
		
	}
}
