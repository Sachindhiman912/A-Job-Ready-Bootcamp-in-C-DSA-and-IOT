#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter any number to count number of digits"<<endl;
	cin>>n;
	while(n>0)
	{
		
		n=n/10;
		count++;
	}
	cout<<count;
}
