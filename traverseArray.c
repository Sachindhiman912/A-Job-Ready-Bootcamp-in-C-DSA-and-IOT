#include<stdio.h>
int main()
{
	int ar[100],n,i;
	printf("Please enter the size of array :");
	scanf("%d",&n);
	printf("enter %d numbers :\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Numbers that you entered are :");
	for(i=1;i<=n;i++)
	{
		printf(" %d ",ar[i]);
	}
	return 0;
}
