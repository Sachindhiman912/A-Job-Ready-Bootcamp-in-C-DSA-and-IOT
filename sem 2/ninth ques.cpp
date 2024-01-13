#include<iostream>
using namespace std;
template <class T>
void display(T t1)
{
	cout<<t1<<endl;
}
template <class T>
void display(T t1 , T t2)
{
	cout<<t1<<" and "<<t2<<" Phones"<<endl;
}
int main()
{
	display("Motorola Phones");
	display("oppo" , "vivo");
	display("Samsung Phones");
	return 0;
}
