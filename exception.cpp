#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter two numbers :"<<endl;
	cin>>a>>b;
	try
	{
		
		if(b==0)
		{
			throw "divide by 0 is invalid";
		}
		if(b==1)
		{
			throw b;
		}
		if(b==2)
		{
			throw exception();
		}
		c=a/b;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	catch(int a)
	{
		cout<<"Mere marzi!"<<endl;
	}
	catch(...)
	{
		//exception();
	}
	cout<<"result is "<<c<<endl;
}
