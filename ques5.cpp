#include<iostream>
using namespace std;
class Base
{
	private:
		int hour,minute,second;
	public:
		Base()//default constructor 
		{
			hour=10;
			minute=42;
			second=36;
		}
		Base(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		void display()
		{
			cout<<"Hour :"<<hour<<" ";
			cout<<"Minute :"<<minute<<" ";
			cout<<"Second :"<<second<<" ";
			cout<<endl;
		}
};
int main()
{
	Base b;
	b.display();
	Base b1(11,46,56);
	b1.display();
	
}
