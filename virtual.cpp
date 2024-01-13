#include<iostream>
using namespace std;
class Base
{
	public :
		virtual void printbase()
		{
			cout<<"Base constructor called"<<endl;
		}
		
};
class Derived:public Base 
{
	public :
		void printbase()
		{
			cout<<"Modify Base constructor called"<<endl;
		}
		void printderived()
		{
			cout<<"Derived constructor called"<<endl;
		}
};
int main()
{
	 Base *b;
	 Derived *d;
	 
	 Base obj1;
	 Derived obj2;
	 
	 b=&obj1;
	 b->printbase();
	 //b->printderived();
	 
	 cout<<endl;
	 
	 d=&obj2;
	 d->printbase();
	 d->printderived();
	 cout<<endl;
	 b=&obj2;
	 b->printbase();		//compile time binding
	 //b->printderived();
}
