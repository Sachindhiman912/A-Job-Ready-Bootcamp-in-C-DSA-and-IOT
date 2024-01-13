#include<iostream>
#include<algorithm>
using namespace std;

struct event
{
	//public: 
		int start;
		int end;
};
bool compare(event e1,event e2)
{
	return (e1.end<e2.end);
}
int main()
{
	event e[]={{6,11},{5,7},{1,4},{8,12},{3,6},{8,9}};
	int n=6,current=0;
	sort(e,e+n,compare);
	cout<<e[0].start<<" "<<e[0].end<<endl;
	
	for(int next=1;next<n;next++)
	{
		if(e[current].end<=e[next].start)
		{
			cout<<e[next].start<<" "<<e[next].end<<endl;
			current=next;
		}
	}
}
