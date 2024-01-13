#include<iostream>
using namespace std;
struct Book
{
	
	int bookid;
	char title[20];
	float price;
	
	
	void input()
	{
		cout<<"enter book id,title,price"<<endl;
		cin>>bookid;
		cin.ignore();
		cin.getline(title,20);
		cin>>price;
	}
	void display()
	{
		cout<<bookid<<" "<<title<<" "<<price<<endl;
	}
};
int main()
{
	Book b1,b3;
	Book b2={2,"sddv",54112};
	b1.input();
	b1.display();
	b2.display();
	b3.bookid=56;
	b3.display();
}
