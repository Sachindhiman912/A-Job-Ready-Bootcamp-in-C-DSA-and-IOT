#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void description()   
		{
			cout<<"Redmi is a good company "<<endl;
			cout<<"Redmi company makes android phones"<<endl;
		}
};
class Derived : public Base
{
	public:
		void description()    
		{
			cout<<"Calling from derived class"<<endl;
			cout<<"Apple is an american company."<<endl;
			cout<<"It makes costly mobile phones."<<endl;
		}
};
int main()
{
	Base *b;
	Derived d;
	b = &d;
	b -> description();
	return 0;
}
