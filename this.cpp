#include<iostream>
using namespace std;
class complex
{
	private:
		int a;
		int b;
	
	public:

		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void print()
		{
			cout<<"real="<<a<<" "<<"imag="<<b<<endl;
			
		}
		complex sumGreater(complex c)
		{
			if((a+b)>(c.a+c.b))
			{
				return *this;
			}
			else
			{
				return c;
			}
		}
		
};


int main()
{
	complex c1,c2,c3;
	c1.set(10,20);
	c1.print();
	c2.set(4,5);
	c2.print();
	c3=c1.sumGreater(c2);
	c3.print();
}
