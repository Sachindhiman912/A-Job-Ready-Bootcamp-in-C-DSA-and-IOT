#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	
	public:
		void set(int r,int i)
		{
			real=r;
			imag=i;
		}
		void print(complex c)
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
			cout<<c.real<<"+"<<c.imag<<"i"<<endl;
		}
		void add(complex c)
		{
			cout<<real+c.real<<"+"<<imag+c.imag<<"i";
		}
		
};

int main()
{
	int x,y;
	cout<<"enter real and imaginary value"<<endl;
	cin>>x>>y;
	
	complex c1,c2;
	c1.set(x,y);
	c2.set(8,6);
	c1.print(c2);
	c1.add(c2);
}
