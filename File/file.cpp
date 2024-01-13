#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("F:/C-C++_Programs/File/abc.txt",ios::trunc);
	string line;
	if(!fout)
	{
		cout<<"file not created and not able to open the file "<<endl;
	}
	else
	{
		cout<<"Type content in the file"<<endl;
		while(fout)
		{
			getline(cin,line);
			
			if(line=="-1")
			{
				break;
			}
			fout<<line;
		}
		
		fout<<"HELLO! SACHIN DHIMAN"<<endl;
		cout<<"file created successfully"<<endl;
	}
	fout.close();
	
	ifstream fin;
	fin.open("F:/C-C++_Programs/File/abc.txt");
	while(fin)
	{
		getline(fin,line);
		cout<<line;
	}
	fin.close();
}
