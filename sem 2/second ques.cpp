#include<iostream>
using namespace std;
class Mobile
{
   private:
          string brand;
		  string color;
		  int ram;
		  int battery;
    public:
	      Mobile()     // Default Constructor
 		  {
		  	brand="Motorola";
		  	color="Jet Black";
		  	ram=10;
			battery = 5000; 
	      };
	      
	      void display()
	      {
	      	cout<<"Brand name         : "<<brand<<endl;
	      	cout<<"Color              : "<<color<<endl;
	      	cout<<"RAM		   : "<<ram<<"gb"<<endl;
	      	cout<<"Battery capacity   : "<<battery<<"mAh"<<endl;
		  }
};
int main()
{
	Mobile M;
	M.display();
	return 0;
	
}
