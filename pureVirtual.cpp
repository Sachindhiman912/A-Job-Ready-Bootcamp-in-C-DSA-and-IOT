#include<iostream>
using namespace std;
class A
{
	public:
	virtual void show()=0;
};
class B:public A
{
	public:
	void show()
	{
		cout<<"HOR KIDA"<<endl;
	}
};
int main()
{
	A *a;
	B b;
	
	a=&b;
	a->show();
}
