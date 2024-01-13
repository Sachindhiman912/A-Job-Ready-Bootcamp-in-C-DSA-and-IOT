#include <iostream>
using namespace std;
 
int main()
{
	try
	{
		throw 'a';
	}
	catch(int param)
	{
		cout<<"int exception";
	}
	catch(...)
	{
		cout<<"default exception";
	}
	cout<<"after excetion";
}
