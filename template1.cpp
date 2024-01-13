#include<iostream>
using namespace std;
template <class T,class F,class P> 			//	class/typename
P add(T a,F b)
{
	return a+b;
}
int main()
{
	float sum=add<float,int,float>(2.5,2);
	cout<<sum<<endl;
	
	int sum1=add<int,int,int>(5,8);
	cout<<sum1<<endl;
}
