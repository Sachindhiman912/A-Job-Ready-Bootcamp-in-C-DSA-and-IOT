#include<iostream>
using namespace std;
class complex
{
	private:
		int a;
		int b;
	
	public:

		void set(int x,int y)
		{
			a=x;
			b=y;
		}
		void print()
		{
			cout<<"real="<<a<<" "<<"imag="<<b<<endl;
			
		}
		complex operator+(complex c)			// Binary Operator Overloading
		{
			complex temp;
			temp.a=c.a+a;
			temp.b=c.b+b;
			return temp;
		}
		complex operator-()						// Unary Operator Overloading
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
		complex operator*(complex c)			// Binary Operator Overloading
		{
			complex temp;
			temp.a=c.a*a;
			temp.b=c.b*b;
			return temp;
		}
		complex operator==(complex c)						// Unary Operator Overloading
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};

int main()
{
	
	complex c1,c2,c3,c4,c5;
	c1.set(5,9);
	c2.set(8,6);
	c1.print();
	c2.print();
	c3=c1+c2;			//c3=c1.operator+(c2);
	c3.print();
	c4.set(8,5);
	c5=-c4;
	c5.print();
	c3=c1*c2;
	c3.print();
	c3=c1==c2;
	c3.print();
}
