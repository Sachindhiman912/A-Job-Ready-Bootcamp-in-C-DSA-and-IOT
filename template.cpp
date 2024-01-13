#include<iostream>
using namespace std;
template <class x>
	x big(x a,x b)
	{
		if(a>b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
int main()
{
	cout<<big<int>(4,5)<<endl;
	cout<<big(8.3,9.3);
}
