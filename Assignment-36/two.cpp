#include<array>
#include<iostream>
using namespace std;


int main()
{
	int count=0;
	array<int,5>values{10,20,30,40,50};
	
	for(int i:values)
	{
		count++;
	}
	
	cout<<"total number of array elements:"<<count;
}
