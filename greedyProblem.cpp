#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,max=0,min=0,i,j;
	cout<<"enter how many numbers you want to enter :";
	cin>>n;
	vector<int>a(n);
	cout<<"enter elements :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	j=n-1;
	for(i=0;i<n/2;i++)
	{
			max=max+abs(a[i]-a[j]);
			min=min+abs(a[2*i]-a[2*i+1]);
			j--;
	}
	cout<<"max="<<max<<endl<<"min="<<min;
}
