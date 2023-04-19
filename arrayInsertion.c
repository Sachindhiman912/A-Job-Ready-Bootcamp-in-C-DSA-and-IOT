#include<stdio.h>
int main()
{
	int ar[100],loc,n,i,v;
	printf("Please enter the size of array :");
	scanf("%d",&n);
	printf("enter %d numbers :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Numbers that you entered are :");
	for(i=0;i<n;i++)
	{
		printf(" %d ",ar[i]);
	}
	printf("\nenter location where you want to insert number :");
	scanf("%d",&loc);
	printf("enter number :");
	scanf("%d",&v);
	n++;
	for(i=n-1;i>=loc;i--)
	{
		ar[i]=ar[i-1];
	}
	ar[loc-1]=v;
	printf("Numbers that you entered are :");
	for(i=0;i<n;i++)
	{
		printf(" %d ",ar[i]);
	}
}
