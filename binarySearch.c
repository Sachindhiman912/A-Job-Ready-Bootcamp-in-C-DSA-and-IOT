#include<stdio.h>

int main()
{	
	
	int arr[100],i,item,beg,end,mid;
    int flag=0;
	printf("enter 10 elements:");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter element that you want to search:");
	scanf("%d",&item);
	
	beg=0;
	end=9;

	
	while(beg<=end)
	{
		mid=(beg+end)/2;
		
		if(arr[mid]==item)
		{
	    flag=1;
	    break;
	    }
	    else if(arr[mid]<item)
	    {
	    beg=mid+1;
	    }
	   else if(arr[mid]>item)
	   end=mid-1;
}

if(flag==1)
{
	printf("item is found at: %d",mid+1);
	
}
else
{
	printf("element not found");
}
return 0;
}
