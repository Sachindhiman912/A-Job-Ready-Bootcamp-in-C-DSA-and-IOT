#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int deno[9]={50,100,20,2,10,5,1,2000,500};
	int amount=533;
	int i,n=9;
	vector<int> ans;
	sort(deno,deno+n);
	for(i=n-1;i>=0;i--)
	{
		
		while(amount>=deno[i])
		{
			amount=amount-deno[i];
			ans.push_back(deno[i]);
		}
		if(amount==0)
		{
			break;
		}
	}
	for(i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
