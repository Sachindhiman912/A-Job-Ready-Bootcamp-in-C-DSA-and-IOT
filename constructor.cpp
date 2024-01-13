#include<iostream>
using namespace std;
class Complex
{
	private: 
		int a,b;
	public:
		Complex(int x,int y)
		{
			a=x;
			b=y;
		}
		Complex(Complex &c)
		{
			a=c.a;
			b=c.b;
		}
		
		void showData()
		{
			cout<<"real="<<a<<" "<<"imag="<<b<<endl;
		}
};
int main()
{
	Complex c1(2,3);
	Complex c2=c1;
	c1.showData();
	c2.showData();
}
