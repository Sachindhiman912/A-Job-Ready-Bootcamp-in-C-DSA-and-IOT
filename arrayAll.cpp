#include<iostream>
using namespace std;
class Array
{
	public:
		int a[20],size=0,i;
		void insert(int index,int value)
		{
			a[index]=value;
			size++;
		}
		
		int get(int index)
		{
			return a[index];
		}
		
		int getSize()
		{
			return size;
		}
		
		int search(int value)
		{
			for(i=0;i<size;i++)
			{
				if(a[i]==value)
				{
					return i;
				}
			}
			return -1;
		}
		
		void del(int index)
		{
			for(i=index;i<size-1;i++)
			{
				a[i]=a[i+1];
			}
			a[size-1]=0;
			size--;
		}
		
		void print()
		{
			for(i=0;i<size;i++)
    		{
    		cout<<a[i]<<" ";
			}
		}
		
		void insertLoc(int index)
		{
			for(i=index;i<size;i++)
			{
				a[index+1]=a[index];
			}
		}
};
int main()
{
	int n,i,x,s,index,d;
	Array a;
    cout<<"enter a number :";
    cin>>n;
    cout<<"enter "<<n<<" elements :";
    
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	a.insert(i,x);
	}
	a.print();
	cout<<endl;
	cout<<"enter element that you want to search :";
	cin>>s;
	index=a.search(s);
	if(index!=-1)
	{
		cout<<"Element found at index "<<index<<endl;
	}
	else
	{
		cout<<"element not found "<<endl;
	}
	cout<<"which index you want to delete :";
	cin>>index;
	if(index<n)
	{
		a.del(index);
		a.print();
	}
	else
	{
		cout<<"please enter valid choice";
		
	}
	cout<<endl;
	cout<<"enter location where you want to insert element :";
	cin>>index;
	cout<<"enter value :";
	cin>>x;
	a.insertLoc(index);
	a.insert(index,x);
	a.print();
}
