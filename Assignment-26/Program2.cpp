#include<iostream>
using namespace std;
class Time
{
	private:
		int h,m,s;
	public:
		void setTime(int hour,int min,int sec)
		{
			h=hour;
			m=min;
			s=sec;
		}
		
		void showTime()
		{
			cout<<"hour="<<h<<" "<<"minute="<<m<<" "<<"seconds="<<s<<" "<<endl;
		}
		
		void normalize()
		{
			cout<<"NORMALIZATION"<<endl;
			while(m>60)
			{
				m=m-60;
				h=h+1;
			}
			while(s>60)
			{
				s=s-60;
				m=m+1;
			}
		}
		Time add(Time t)
		{
			Time temp;
			temp.h=h+t.h;
			temp.m=m+t.m;
			temp.s=s+t.s;
			return temp;
		}
};
int main()
{
	Time t1,t2,t3;
	t1.setTime(10,123,125);
	t1.showTime();
	t1.normalize();
	t1.showTime();
	t2.setTime(2,5,12);
	t2.showTime();
	t3=t1.add(t2);
	t3.showTime();
}
