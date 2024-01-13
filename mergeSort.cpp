#include<iostream>
using namespace std;
void merge(int a[],int s1,int e1,int s2,int e2)
	{
		int temp[50],i=s1,j=s2,k=0;
		while(i<=e1 && j<=e2)
		{
			if(a[i]<a[j])
			{
				temp[k]=a[i];
				i++;
				k++;
			}
			else
			{
				temp[k]=a[j];
				j++;
				k++;		
			}
		}
		
		while(i<=e1)
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		while(j<=e2)
		{
			temp[k]=a[j];
			j++;
			k++;
		}
		for(k=0,i=s1;i<=e2;i++,k++)
		{
			a[i]=temp[k];
		}
	}	
	void mergeSort(int a[],int i,int j)
	{
		int mid;
		mid=(i+j)/2;
		if(i<j)
		{
			mergeSort(a,i,mid);
			mergeSort(a,mid+1,j);
			merge(a,i,mid,mid+1,j);	
		}
	}
	
	
int main()
{
	int a[]={15,36,10,85,95,14,67,23};
	mergeSort(a,0,7);
	cout<<"SORTED RESULT"<<endl;
	for(int i=0;i<=7;i++)
	{
		cout<<a[i]<<endl;
	}
}

