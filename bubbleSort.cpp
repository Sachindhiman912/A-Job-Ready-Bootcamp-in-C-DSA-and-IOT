#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int a[]={1,2,3,4,5,6,7,8};
	int size=8,flag=0,iteration=0;
	for(int i=size-1;i>=0;i--)
		{
			flag=0;
			
			for(int j=0;j<i;j++)
			{
				if(a[j]>a[j+1])
				{
					int x;
					flag=1;
					x=a[j];
					a[j]=a[j+1];
					a[j+1]=x;
				}
			}
			iteration++;
			if(flag==0)
			{
				break;
			}
		}
	cout<<"SORTED ARRAY"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"total iterations :"<<iteration<<endl;
}

