#include<iostream>
using namespace std;
class Emp
{
	private:
		char name[20];
		int age;
		char desig[20];
		
	public:
		void input()
		{
			cout<<"enter name of employee:"<<endl;
			cin>>name;
			cout<<"enter age of employee:"<<endl;
			cin>>age;
			cout<<"enter designation of employee:"<<endl;
			cin>>desig;
		}
		void display()
		{
			cout<<"Name of employee:"<<name<<endl;
			cout<<"Age of employee:"<<age<<endl;
			cout<<"Designation of employee:"<<desig<<endl;
		}
};
int main()
{
	Emp e1;
	e1.input();
	e1.display();
}
