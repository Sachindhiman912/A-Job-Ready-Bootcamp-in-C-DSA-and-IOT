#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void print()
		{
			cout<<"Android Phones are better"<<endl;
		}
};
class Derived : public Base
{
	public:
		void print()
		{
			cout<<"IOS is best in term of security"<<endl;
		}
};
int main()
{
	Base *b;
	Derived d;
	b=&d;
	b->print();
}
