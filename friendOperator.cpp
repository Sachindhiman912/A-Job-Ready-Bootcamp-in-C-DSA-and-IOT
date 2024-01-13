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
		friend complex operator+(complex,complex);
		friend complex operator-(complex);
		complex operator+(int k)
		{
			complex temp;
			temp.a=a+k;
			temp.b=b;
			return temp;
		}
		friend complex operator+(int ,complex);
};

	complex operator+(complex x,complex y)			// Binary Operator Overloading
	{
		complex temp;
		temp.a=x.a+y.a;
		temp.b=x.b+y.b;
		return temp;
	}
	complex operator-(complex x)					// Unary Operator Overloading
	{
		complex temp;
		temp.a=-x.a;
		temp.b=-x.b;
		return temp;
	}
	complex operator+(int k,complex x)
	{
		complex temp;
		temp.a=k+x.a;
		temp.b=x.b;
		return temp;
	}
int main()
{
	
	complex c1,c2,c3,c4,c5;
	c1.set(5,9);
	c2.set(8,6);
	c1.print();
	c2.print();
	c3=c1+c2;			//c3=operator+(c1,c2);
	c3.print();
	c4.set(8,5);
	c5=-c4;				//c5=operator-(c4);
	c5.print();
	c3=c1+5;			
	c3.print();
	c3=5+c1;       		//c3=operator+(5,c1);
	c3.print();
}
