#include<iostream>
using namespace std;
class Version_1
{
	protected:
		string name;
		int price;
		int android;
	public:
	     void get_data()
		 {
		 	name = "Moto";
		 	price = 11999;
		 	android = 11;
		}
		void display()
		{
		    cout<<"Phone brand           : "<<name<<endl;
			cout<<"Phone price           : "<<price<<endl;
			cout<<"Phone Android Version : "<<android<<endl;	
		}	
};
class Version_2 : public Version_1
{
	public:
		void get_data()
		 {
		 	name = "Micromax";
		 	price = 7999;
		 	android = 7;
		}
};
int main()
{
	cout<<ends<<"Before Overriding "<<endl;
	Version_1 V1;
	V1.get_data();
	V1.display();
	Version_2 V2;
	cout<<ends<<endl<<"After Overriding "<<endl;
	V2.get_data();
	V2.display();
	return 0;
}
