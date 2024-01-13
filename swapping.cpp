#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	cout<<"Before swapping"<<endl;
	cout<<"A="<<a<<"B="<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"After swapping"<<endl;
	cout<<"A="<<a<<"B="<<b<<endl;
}
