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
		void print()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
			
		}
		complex add(complex c)
		{
			complex temp;
			temp.real=c.real+real;
			temp.imag=c.imag+imag;
			return temp;
		}
		
};

int main()
{
	
	complex c1,c2,c3;
	c1.set(5,9);
	c2.set(8,6);
	c3=c1.add(c2);
	c3.print();
}
