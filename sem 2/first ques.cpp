#include<iostream>
using namespace std;
 class Initial      //Base Class
 {
 	protected:
		    string brand;
		    string color;
		    int price;
	public:
		    void get()
		    {
		      cout<<"Enter phone brand name :  ";
		      getline(cin,brand);
		      cout<<"Enter color : ";
		      getline(cin,color);
		      cout<<"Enter price : ";
		      cin>>price;
		    }
	           
 };
 class Latest : public Initial     //Derived Class
 {
   private:
          float size;
   public:
          void get_detail()
		  {
		  	cout<<"Enter phone size(in inch) : ";
		  	cin>>size;
		  	cout<<endl<<endl;
		  }	
		  void display()
			{
			  cout<<"Brand : "<<brand<<endl;
			  cout<<"Color : "<<color<<endl;
			  cout<<"Price : "<<price<<endl;
			  cout<<"Size  : "<<size<<endl;
			}	 	   	
 };
 int main()
 {
 	Latest L1;
 	L1.get();
 	L1.get_detail();
 	L1.display();
 	return 0;
 }
