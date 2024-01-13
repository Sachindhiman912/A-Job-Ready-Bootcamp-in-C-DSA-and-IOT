#include<iostream>
using namespace std;
int main()
{
	int a[5]={100,50,20,10,2};
	int amount=533;
	int i;
	for(i=0;i<5;i++)
	{
		
		while(amount>=a[i])
		{
			cout<<a[i]<<endl;
			amount=amount-a[i];
		}
		
	}
}
