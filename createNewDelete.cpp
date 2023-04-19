#include<iostream>
using namespace std;

class DynamicArray
{
	int *array;
	int size;
	int count,i;
	
public:
	DynamicArray()
	{
		array=new int[1];
		size=0;
		count=1;
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
	
	void insertAt(int index,int value)
	{
		resize();
		for(i=size;i>=index;i--)
		{
			array[i]=array[i-1];
		}
		array[index]=value;
		size++;
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
		array=temp;				
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
	
	void insertByShift(int index,int value)
	{
		if(size==count)
		{
			resize();
		}
		if(index>=count || index<0)
		{
			cout<<"index not exist ";
		}
		for(i=size;i>=index;i--)
		{
			array[i]=array[i-1];
		}
		array[index]=value;
		size++;
	}
	
	void deleteA(int index)
	{
		if(index>=size)
		{
			cout<<"index does not exist";
			return;
		}
		for(i=index;i<size-1;i++)
		{
			array[i]=array[i+1];
		}
		size--;
	}
		
};

int main()
{
	DynamicArray a;
	a.insert(2);
    a.insert(4);
    a.insert(6);
    a.insert(8);
    a.insert(10);
    a.insertAt(2,5);
    a.printArray();
    a.insertByShift(2,100);
    a.printArray();
    a.deleteA(2);
    a.printArray();
    cout<<"Array Size = "<<a.getSize()<<" and count = "<<a.getCount()<<endl;
	return 0;
}
