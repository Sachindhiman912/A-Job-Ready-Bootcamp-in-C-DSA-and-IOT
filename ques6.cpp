#include<iostream>
using namespace std;
class copyCons
{
	public:
		int id;
		double salary;
		
		copyCons(int a,int b)
		{
			id=a;
			salary=b;
		}
		copyCons(copyCons &c)
		{
			id=c.id;
			salary=c.salary;
		}
		void print()
		{
			cout<<"Employee id="<<id<<endl;
			cout<<"Employee salary="<<salary<<endl;
		}
};
int main()
{
	copyCons c(10,23000);
	c.print();
	copyCons c1(c);
	c1.print();
}
