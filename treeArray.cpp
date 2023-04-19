#include<iostream>
using namespace std;
class Tree
{
	public:
	int a[20]={0};
	int size=20;
	void insert(int v,int i)
	{
		if(i==1)
		{
			a[i]=v;
		}
		else if(a[i/2]!=0 && i<size)
		{
			a[i]=v;
		}
		else
		{
			cout<<"Parent Node does not exist"<<endl;
		}
	}
	void insertLeftChild(int v,int i)
	{
		if(a[i]!=0 && (2*i)<size)
		{
			a[2*i]=v;
		}
		else
		{
			cout<<"Parent Node does not exist"<<endl;
		}
	}
	void insertRightChild(int v,int i)
	{
		if(a[i]!=0 && (2*i+1)<size)
		{
			a[2*i+1]=v;
		}
		else
		{
			cout<<"Parent Node does not exist"<<endl;
		}
	}
	
	void print()
	{
		for(int i=1;i<size;i++)
		{
			if(a[i]!=0)
			{
				cout<<a[i]<<" ";
			}
			else
			{
				cout<<" - ";
			}
		}
	}
	void deleteNode(int i)
	{
		if(a[i]!=0 && a[2*i]==0 && a[2*i+1]==0)
		{
			a[i]=0;
		}
		else
		{
			cout<<"Not able to delete"<<endl;
		}
	}
};
int main()
{
	Tree t;
	t.insert(5,1);
	t.insert(10,2);
	t.insert(20,5);
	t.print();
}
