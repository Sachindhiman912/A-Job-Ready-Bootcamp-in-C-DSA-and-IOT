#include<iostream>
using namespace std;
int main()
{
	int ar[10]={1,2,3,4,5},d,temp,i,j;
	cout<<"enter no of rotation :";
	cin>>d;
	
	
	for(i=0;i<d;i++)
	{	
		temp=ar[0];
		for(j=0;j<5;j++)
		{
			ar[j]=ar[j+1];
		}
		ar[4]=temp;
	}
	for(i=0;i<5;i++)
	{
		cout<<ar[i]<<",";
	}
}
