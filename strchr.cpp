#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[10]="SACHIN";
	char ch='A';
	char *ptr;
	
	ptr=strchr(s,ch);
	cout<<ptr;
}
