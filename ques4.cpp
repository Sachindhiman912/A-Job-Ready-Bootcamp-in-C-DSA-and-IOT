#include<iostream>
using namespace std;
class A
{
	int *x;
	public:
		A()
		{
			int i,a;
			x=new int[5];
			cout<<"enter elements :"<<endl;
			for(i=0;i<5;i++)
			{
				cin>>*(x+i);
			}
			
		}
		void print()
		{
			for(int i=0;i<5;i++)
			{
				cout<<x[i]<<" ";
			}
			cout<<endl;
		}
		~A()
		{
			cout<<"Deleted Dynamic Memory"<<endl;
			delete []x; 
			
		}
};
int main()
{
	A a;
	a.print();
}
