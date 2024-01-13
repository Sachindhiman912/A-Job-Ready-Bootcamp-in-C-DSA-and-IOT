#include<iostream>
#include<string.h>
using namespace std;

class version1
{
	private:
		int lenght;
		int breadth;
		char color[10];
		char brand[10];
		
	public:
		version1(int l,int b,char c[],char br[])
		{
			cout<<"VERSION 1"<<endl;
			lenght=l;
			breadth=b;
			strcpy(color,c);
			strcpy(brand,br);
		}
		void mobile()
		{
			cout<<"VERSION1 BEST MOBILES......"<<endl;
		}
		void display()
		{
			cout<<"lenght of phone :"<<lenght<<endl;
			cout<<"breadht of phone :"<<breadth<<endl;
			cout<<"color of phone :"<<color<<endl;
			cout<<"brand of phone :"<<brand<<endl;
		}
		friend void show();
		
};
class version2
{
	private:
		int lenght;
		int breadth;
		char color[10];
		char brand[10];
		
	public:
		version2(int l,int b,char c[],char br[])
		{
			cout<<"VERSION 2"<<endl;
			lenght=l;
			breadth=b;
			strcpy(color,c);
			strcpy(brand,br);
		}
		void mobile()
		{
			cout<<"VERSION2 FLIP PHONES......"<<endl;
		}
		void display()
		{
			cout<<"lenght of phone :"<<lenght<<endl;
			cout<<"breadht of phone :"<<breadth<<endl;
			cout<<"color of phone :"<<color<<endl;
			cout<<"brand of phone :"<<brand<<endl;
		}
		
		void show()
		{
			cout<<"lenght of phone :"<<lenght<<endl;
			cout<<"breadht of phone :"<<breadth<<endl;
			cout<<"color of phone :"<<color<<endl;
			cout<<"brand of phone :"<<brand<<endl;
		}
};
class version3:public version1,public version2
{
	public:
		void mobile()
		{
			cout<<"VERSION3 SMART PHONES"<<endl;
		}
};

int main()
{
	version1 v1(2,3,"Blue","Realme");
	v1.display();
	version2 v2(5,6,"RED","Spice");
	v2.display();
	v2.show();
}
