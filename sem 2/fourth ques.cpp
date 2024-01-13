#include<iostream>
using namespace std;
class Version_1
{
    protected:
	   string name;
	   int price;
	public:
	    void get_V1()
		{
		   cout<<"Enter brand name : ";
		   getline(cin,name);
		   cout<<"Enter price      :";
		   cin>>price;
		   cout<<endl;	
		}    	
};
class Version_2 : public Version_1
{
	protected:
		string dis;
		int version;
	public:
	    void get_V2()
		{
			cout<<"Enter display type    :";
			cin>>dis;
			cout<<"Enter android version :";
			cin>>version;
			cout<<endl;
		}	
};
class Version_3
{
	protected:
		int storage;
		int camera;
	public:
	    void get_V3()
		{
			cout<<"Enter storage capacity (in GB)   : ";
			cin>>storage;
			cout<<"Enter camera's mega pixel :";
			cin>>camera;
			cout<<endl;
			}	
};
class Version_4 : public Version_2 , public Version_3
{
	private:
		string color;
		string ram;
	public:
	    void get_V4()
		{
			cout<<"Enter phone color        : ";
			cin>>color;
			cout<<"Enter phone RAM capacity :";
			cin>>ram;
			cout<<endl;
		}
		void display()
		{
			cout<<endl<<endl;
			cout<<"Phone brand name          : "<<name<<endl;
			cout<<"Phone price               : "<<price<<endl;
			cout<<"Phone display type        : "<<dis<<endl;
			cout<<"Phone Android Version     : "<<version<<endl;
			cout<<"Phone storage capacity    : "<<storage<<endl;
			cout<<"Phone camera's mega pixel : "<<camera<<endl;
			cout<<"Phone color               : "<<color<<endl;
			cout<<"Phone RAM                 : "<<ram<<endl;
			
		}
			
};
int main()
{
   Version_4 Obj;
   Obj.get_V1();
   Obj.get_V2();
   Obj.get_V3();
   Obj.get_V4();
   Obj.display();
   return 0;	
}
