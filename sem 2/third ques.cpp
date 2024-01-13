#include<iostream>
using namespace std;
class Version_1
{
	protected:
		string name;
		int storage;
		int camera;
	public:
	    void get_V1()
		{
			cout<<ends<<ends<<"Version 1 Mobile Phones"<<endl;
			cout<<"Enter phone brand name         : ";
			cin>>name;
			cout<<"Enter storage capacity (in GB) : ";
			cin>>storage;
			cout<<"Enter camera's mega pixel      :  ";
			cin>>camera;
			cout<<endl;
		}	
		void dispaly_V1()
		{
		    cout<<"Phone brand name    : "<<name<<endl;
			cout<<"Storage capacity    : "<<storage<<endl;
			cout<<"Camera's mega pixel : "<<camera<<endl<<endl;	
		}
};
class Version_2 : public Version_1
{
	public:
	    void get_V2()
		{
			cout<<"Version 2 Mobile Phones"<<endl;
			cout<<"Enter phone brand name         : ";
			cin>>name;
			cout<<"Enter storage capacity (in GB) : ";
			cin>>storage;
			cout<<"Enter camera's mega pixel      :  ";
			cin>>camera;
			cout<<endl;
		}	
		void dispaly_V2()
		{
		    cout<<"Phone brand name    : "<<name<<endl;
			cout<<"Storage capacity    : "<<storage<<endl;
			cout<<"Camera's mega pixel : "<<camera<<endl<<endl;	
		}
};
class Version_3 : public Version_2
{
	public:
	    void get_V3()
		{
			cout<<ends<<ends<<"Version 3 MObile Phones"<<endl;
			cout<<"Enter phone brand name         : ";
			cin>>name;
			cout<<"Enter storage capacity (in GB) : ";
			cin>>storage;
			cout<<"Enter camera's mega pixel      :  ";
			cin>>camera;
			cout<<endl;
		}	
		void dispaly_V3()
		{
		    cout<<"Phone brand name    : "<<name<<endl;
			cout<<"Storage capacity    : "<<storage<<endl;
			cout<<"Camera's mega pixel : "<<camera<<endl<<endl;	
		}
};
int main()
{
	Version_3 Obj;
	Obj.get_V1();
	Obj.dispaly_V1();
	Obj.get_V2();
	Obj.dispaly_V2();
	Obj.get_V3();
	Obj.dispaly_V3();
	return 0;
}
