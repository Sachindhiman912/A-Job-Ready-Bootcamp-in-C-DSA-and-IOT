#include<iostream>
using namespace std;
int main()
{
	int n,a,sum=1,i,total=0,count=0,r;
	cout<<"enter any number to check weather it is Armstrong or not"<<endl;
	cin>>n;
	a=n;
	while(n>0)
	{
		
		n=n/10;
		count++;
	}
	while(a>0)
	{
		r=a%10;
		for(i=0;i<count;i++)
		{
			sum=sum*r;
		}
		total=total+sum;
		sum=1;
		a=a/10;
	}
	
	cout<<total;
}
