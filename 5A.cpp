#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	string name;
	file.open("demo.txt",ios::out);
	if(!file)
	{
		cout<<"Error In Opening file!!"<<endl;
		return 0;
	}
	cout<<"\nFILE CREATED SUCCESSFULLY"<<endl;
	cout<<"\nEnter Your First Name : ";
	cin>>name;
	file<<name;
	cout<<endl;
	file.close();
	file.open("demo.txt",ios::in);
	if(!file)
	{
		cout<<"Error In Opening file!!"<<endl;
		return 0;
	}
	string ch;
	cout<<"\nFILE CONTENT IS : "<<endl;
	while(!file.eof())
	{
		file>>ch;
		cout<<ch;
		cout<<endl;
	}
	file.close();
	return 0;
}
