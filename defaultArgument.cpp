#include<iostream>
using namespace std;
int add(int,int ,int=0);
int main()
{
	int x,y;
	cout<<"enter two numbers :";
	cin>>x>>y;
	cout<<add(x,y);
	
}

int add(int x,int y)
{
	return x+y;
}
