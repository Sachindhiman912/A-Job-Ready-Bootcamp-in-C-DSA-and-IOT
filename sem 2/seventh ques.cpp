#include<iostream>
using namespace std;
class Mobile
{
	private:
		int ram;
		int price;
		int battery;
	public:
	    void get()
		{
			cout<<"Enter RAM :  ";
			cin>>ram;
			cout<<"Enter price : ";
			cin>>price;
			cout<<"Enter battery capacity : ";
			cin>>battery;
		}	

void operator ==(Mobile &M1)
{
	if(ram == M1.ram && price == M1.price && battery == M1.battery)
	 cout<<"Both mobiles equally efficent. "<<endl;
	else
	 cout<<"Not equally efficient "<<endl<<"Now check for which phone is more efficent"<<endl; 
}
void operator <(Mobile &M2)
{
	if(price < M2.price || price > M2.price)
	 {
	 	if(ram > M2.ram && battery > M2.battery)
	 	{
	 		cout<<"Mobile 1 is more efficient than Mobile 2"<<endl;
		 }
		 else
		 {
		 	cout<<"Mobile 2 is more efficent than Mobile 1"<<endl;
		 }
	 }
	 
}
};

int main()
{
	Mobile M1 , M2;
	cout<<"Enter specifications of mobile 1 "<<endl;
	M1.get();
	cout<<endl<<"Enter specifications of mobile 2 "<<endl;
	M2.get();
	cout<<endl<<endl;
	M1==M2;
	M1<M2;
	return 0;
}

