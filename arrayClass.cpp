#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
	array <int,10>ar={1,2,3,4,5,6,7,8,9,10};
	array <int,10>ar1={35,2,3,43,56,6,8,79,10};
	for(int i=0;i<ar.size();i++)
	{
		cout<<ar.at(i)<<endl;
	}
	cout<<endl;
	for(int i=0;i<ar.size();i++)
	{
		cout<<ar[i]<<endl;
	}
	cout<<endl;
	cout<<get<1>(ar);		//using get<constant>(object)	it is overloaded from class tuple
	
	ar.swap(ar1);
	for(int i=0;i<ar.size();i++)
	{
		cout<<ar.at(i)<<endl;
	}
	for(int i=0;i<ar.size();i++)
	{
		cout<<ar1.at(i)<<endl;
	}
}
