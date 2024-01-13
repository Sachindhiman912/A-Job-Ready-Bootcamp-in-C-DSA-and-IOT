#include<iostream>
using namespace std;
int main()
{
	int x;
	int y;
	try
	{
		cout<<"Press 1 to play music : ";
		cin>>x;
		if(x != 1) throw x;
		
		   cout<<"Playlist is opened"<<endl<<endl;
    }
	catch(int x)
	{
	    cout<<"Please enter valid input."<<endl<<endl;
	} 
	try
	{
		cout<<"Press '2' to start downloading : ";
		cin>>y;
		 if(y != 2) throw x;
		  cout<<"Downloading is started"<<endl<<endl;
	 } 
	 catch(int x)
	 {
	 	cout<<"Please enter valid input."<<endl<<endl;
	 }
	
	return 0;
}
