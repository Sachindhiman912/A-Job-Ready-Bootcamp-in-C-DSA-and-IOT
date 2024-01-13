#include<iostream>
using namespace std;
class Mobile2;
class Mobile1
{
	private:
		int lock;
		string name;
	public:
		void get_data()
		{
			cout<<"Enter pin : ";
			cin>>lock;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<endl;
		}
	    friend class Mobile2;
	   
};
   
class Mobile2
{
    public:
	    void display(Mobile1 &obj)
		{
			cout<<"Friend device is accessing private data"<<endl;
			cout<<"Mobile lock : "<<obj.lock<<endl;
			cout<<"Name : "<<obj.name<<endl;
			}	
};
	
int main()
{   Mobile1 obj1;
	obj1.get_data();
	Mobile2 obj2;
	obj2.display(obj1);
	return 0;
}
