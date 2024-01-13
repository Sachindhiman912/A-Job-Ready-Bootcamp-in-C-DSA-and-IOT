#include<iostream>
using namespace std;
int main()
{
	int *a[3];
	int b=3;
	int ack[3];
	int n;
	for(int i=0;i<3;i++)
	{
		cout<<"enter the number of columns:"<<endl;
		cin>>n;
		ack[i]=n;
		int z[n];
		a[i]=z;
	}
	for(int i=0;i<3;i++)
	cout<<sizeof(a[i])/sizeof(a[0]);
	/*for(int i=0;i<3;i++)
	{
		int index=ack[i];
		
		for(int j=0;j<index;j++)
		{
			cout<<"enter the elements";
			cin>>a[i][j];
			cout<<"("<<i<<","<<j<<")";
			cout<<"entered element is:";
			cout<<a[i][j];	
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		int index=ack[i];
		for(int j=0;j<index;j++)
		{
			cout<<a[i][j];
			cout<<"("<<i<<","<<j<<")";	
		}
		
		cout<<endl;
	}*/
	return 0;
}
