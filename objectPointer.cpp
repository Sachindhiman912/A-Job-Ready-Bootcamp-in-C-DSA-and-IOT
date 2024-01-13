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
		
};
void inputData(complex *p)
	{
		int x,y;
		cout<<"Enter real and imaginary part :"<<endl;
		cin>>x>>y;	
		p->set(x,y);
	}

int main()
{
	complex c1,c2;
	inputData(&c1);
	c1.print();
}
