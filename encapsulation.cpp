#include<iostream>
using namespace std;
struct Book
{
	private: 
		int bookid;
		char title[20];
		float price;
	
	public:
		void input()
		{
			cout<<"enter book id,title,price"<<endl;
			cin>>bookid;
			if(bookid<0)
			{
				bookid=-bookid;
			}
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
	Book b1,b2;
	b1.input();
	b1.display();
	//b2.bookid=10;
	//Book b3={2,"CPP",522};
}
