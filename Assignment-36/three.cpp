#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5>values{10,20,30,40,50};
	cout<<values.front()<<endl;
	cout<<values.back()<<endl;
}
