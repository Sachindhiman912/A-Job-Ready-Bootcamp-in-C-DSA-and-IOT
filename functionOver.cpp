#include<iostream>
using namespace std;
int f1(int);
int f1(int,int);
int main()
{
	int x=5,y=10;
	cout<<f1(x);
	cout<<endl;
	cout<<f1(x,y);
	
}

int f1(int x)
{
	return x*x;
}
int f1(int x,int y)
{
	return x*y;
}
