#include<iostream>
using namespace std;
int main()
{
	int x,y,i;
	cin>>x;
	cin>>y;
	
	cout<<"\n";
		switch(x)
		{
			case 1:
				cout<<"one\n";
			case 2:
				cout<<"two\n";
			case 3:
				cout<<"three\n";
			case 4:
				cout<<"four\n";
			case 5:
				cout<<"five\n";
			case 6:
				cout<<"six\n";
			case 7:
				cout<<"seven\n";
			case 8:
				cout<<"eight\n";
			case 9:
				cout<<"nine\n";
		
	}
	
	for(i=10;i<=y;i++)
	{
		if(i%2==0)
		{
			cout<<"even\n";
		}
		else
		{
			cout<<"odd\n";
		}
	}
}
