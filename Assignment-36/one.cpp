#include<array>
#include<iostream>
using namespace std;


int main()
{
	array<int,5>values{10,20,30,40,50};
	
	for(int i:values)
	{
		cout<<i<<endl;
	}
}
