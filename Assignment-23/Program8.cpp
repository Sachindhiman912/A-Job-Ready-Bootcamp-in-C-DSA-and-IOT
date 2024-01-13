#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter A :";
	cin>>a;
	cout<<"enter B :";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"A= "<<a<<endl<<"B= "<<b;
}
