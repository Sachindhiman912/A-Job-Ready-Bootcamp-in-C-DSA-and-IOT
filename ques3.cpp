#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the size of array :";
	cin>>n;
	int *a=new int[n];
	cout<<"enter elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"elements that you entered are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
