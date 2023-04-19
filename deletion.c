#include<stdio.h>
int main()
{

	int n,i,arr[100],loc;
	printf("enter number of elements:");
	scanf("%d",&n);
	
	printf("elements are :");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the location of the number that you want to delete:");
	scanf("%d",&loc);
	
	for(i=loc;i<=n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("final list of elements:");
	for(i=1;i<=n-1;i++)
	{
		printf("%d\n",arr[i]);
	}

}
