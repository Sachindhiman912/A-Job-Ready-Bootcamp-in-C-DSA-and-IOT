#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"constructor of class A"<<endl;
	}
	~A()
	{
		cout<<"Destructor of class A"<<endl;
	}
};
class AV2:public A
{
	public:
	AV2():A()
	{
		cout<<"constructor of class AV2"<<endl;
	}
	~AV2()
	{
		cout<<"Destructor of class AV2"<<endl;
	}
};
int main()
{
	AV2 a;
	
}
