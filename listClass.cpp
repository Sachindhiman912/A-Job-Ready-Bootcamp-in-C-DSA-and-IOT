#include<iostream>
#include<iterator>
#include<list>
using namespace std;
int main()
{
	list<int>l1;
	for(int i=0;i<5;i++)
	{
		l1.push_back(i*100);
	}
	list<int>::iterator x;
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
	cout<<endl;
	l1.reverse();
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
	cout<<endl;
	l1.pop_front();
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
	cout<<endl;
	l1.pop_back();
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
	cout<<endl;
	l1.remove(200);
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
}

