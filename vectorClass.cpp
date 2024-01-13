#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector <int>v;
	for(int i=0;i<5;i++)
	{
		v.push_back(i);
	}
	for(int i=0;i<5;i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<endl;
	cout<<"SIZE="<<v.size()<<endl;
	cout<<"CAPACITY="<<v.capacity()<<endl;
	
	v.resize(4);
	cout<<"SIZE="<<v.size()<<endl;
	cout<<"CAPACITY="<<v.capacity()<<endl;
	
	//v.shrink_to_fit();
	cout<<"SIZE="<<v.size()<<endl;
	cout<<"CAPACITY="<<v.capacity()<<endl;
	
	if(v.empty())
	{
		cout<<"vector is empty"<<endl;
	}
	else
	{
		cout<<"vector is not empty"<<endl;
	}
	vector<int>::iterator x;
	
	//APPROACH 1
	for(x=v.begin();x!=v.end();x++)
	{
		cout<<*x<<" ";
	}
	cout<<endl;
	//APPROACH 2
	x=v.begin();
	for(int i=0;i<v.size();i++)
	{
		cout<<*(x+i)<<" ";
	}
	cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
	vector<int>v3;
	v3.assign(5,10);  //it will assign 10 ,5 times
	v3.insert(v3.begin(),15);
	for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i]<<" ";
	}
    return 0;
}
