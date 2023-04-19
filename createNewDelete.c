#include<iostream.h>
using namespace std;
class DynammicArray
{
	int *array;
	int size;
	int count,i;
	
public:
	DynamicArray()
	{
		array=new int[1];
		size=1;
		count=0;
	}
	
	~DynamicArray()
	{
		delete []array;
		size=0;
		count=0;
	}
	
	void insert(int a)
	{
		if(size==count)
		{
			resize();
		}
		size++;
		array[size-1]=a;
	}
	
	int get(int i)
	{
		if(i>size)
		{
			cout<<"Index not exist"<<endl;
		}
		return array[i];
	}
	void resize()
	{
		int *temp=new int[2*size];
		for(i=0;i<size;i++)
		{
			temp[i]=array[i];
		}
		count=2*size;
		delete []array;
		array=temp;				//$$
	}
	void printArray()
	{
		for(i=0;i<size;i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	int getSize()
	{
		return size;
	}
	int getCount()
	{
		return count;
	}
		
};

int main()
{
	DynamicArray a;
	a.insert(5);
	a.printArray();
	
}
