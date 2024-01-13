#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int sum=add<int>(50,10);
	float sum1=add<float>(1.3,5.6);
	cout<<"sum is "<<sum<<endl;
	cout<<"sum is "<<sum1<<endl;
}
