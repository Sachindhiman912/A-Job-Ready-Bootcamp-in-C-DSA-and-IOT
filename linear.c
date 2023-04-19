#include<stdio.h>

int main()
{
	int arr[5],i,item;
	printf("enter five elements:");
	
	for(i=1;i<=5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element that you want to search:");
	scanf("%d",&item);
	
	for(i=1;i<=5;i++)
	{
		if(arr[i]==item)
		{
			printf("element is found at: %d",i);
			break;
		}
		else if(arr[i]!=item && i==5)
		{
			printf("element not found ");

		}
	}
}
