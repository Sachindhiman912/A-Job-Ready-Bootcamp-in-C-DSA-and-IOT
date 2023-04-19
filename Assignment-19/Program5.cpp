#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[10][30];
	char a='@';
	int n,i;
	cout<<"enter how many email addresses you want to enter :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		gets(s[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(strchr(s[i],a)!=0)
		{
			cout<<s[i];
		}
		
	}
	
}
