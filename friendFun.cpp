#include<iostream>
using namespace std;
class Item
{
	private:
		int a,b;
	public:
		friend void f1(Item);
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
};

void f1(Item i)
{
	cout<<"Sum of a and b is "<<i.a+i.b;
}

int main()
{
	Item i1;
	i1.set(10,20);
	f1(i1);
	
	int a=5;
	cout<<a--;
}
