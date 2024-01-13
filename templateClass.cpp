#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
class Multi
{
	public:
		T1 x;
		T2 y;
		
		T3 multiplication()
		{
			return x*y;
		}
};
int main()
{
	Multi <int,int,float>m;
	m.x=10;
	m.y=20;
	cout<<m.multiplication();
}
