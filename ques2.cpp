#include<iostream>
using namespace std;
int main()
{
	int *p,x;
	cout<<"enter a number"<<endl;
	cin>>x;
	p=&x;
	cout<<"address of variable x is "<<p<<endl;
	cout<<"value of x variable is "<<*p<<endl;
}
