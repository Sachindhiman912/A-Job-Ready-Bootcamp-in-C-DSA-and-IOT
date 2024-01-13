#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter two numbers to find the max :";
	cin>>x>>y;
	if(x>y)
	{
		cout<<"max="<<x;
	}
	else if(x==y)
	{
		cout<<"Both have same value";
	}
	else
	{
		cout<<"max="<<y;
	}
}
