#include<iostream>
#include<algorithm>
using namespace std;
struct item
{
	public:
		int value;
		int weight;
};
bool compare(item i1,item i2)
{
	float p1=i1.value/i1.weight;
	float p2=i2.value/i2.weight;
	return p1>p2;
}
int main()
{
	item a[]={{21,7},{24,4},{12,6},{40,5},{30,6}};
	int wt=20,amount=0,n=5,i;
	sort(a,a+n,compare);
	
	for(i=0;i<n;i++)
	{
		if(a[i].weight<=wt)
		{
			wt=wt-a[i].weight;
			amount=amount+a[i].value;
		}
		else
		{
			amount=amount+(a[i].value/a[i].weight)*wt;
			break;
		}
	}
	cout<<"Amount="<<amount<<endl;
}
