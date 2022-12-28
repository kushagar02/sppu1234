#include<iostream>
#include<string>
using namespace std;
class Publication
{
	protected:
		string title;
		float price;
	public:
		Publication()
		{
			title="";
			price=0.0;
		}
		void getdata()
		{
			cout<<"Enter the Title: ";
			cin.ignore();
			getline(cin,title);
			cout<<"Enter the Price: ";
			cin>>price;
		}
		void putdata()
		{
			cout<<endl<<"Title is: "<<title<<endl;
			cout<<"Price is: "<<price<<endl;
		}
		
};
class Book:public Publication
{
	protected:
		int pages;
	public:
		Book()
		{
			pages=0;
		}
		void get_page()
		{
			Publication::getdata();
			cout<<"Enter Number of Pages: ";
			cin>>pages;
		}
		void show_page()
		{
			Publication::putdata();
			try
			{
				if(pages<0)
 				throw pages;
			}
 			catch(int f)
 			{
 				cout<<"Error: Page Count "<<f<<" Is Invalid."<<endl;
 				pages=0;
 			}
			cout<<"Pages Count Is :"<<pages<<endl;
		}
};
class Tape:public Publication
{
	protected:
		float playtime;
	public:
		Tape()
		{
			playtime=0.0;
		}
		void get_time()
		{
			Publication::getdata();
			cout << "Enter Play Duration of the Tape : ";
 			cin >> playtime;
		}
		void show_time()
		{
			Publication::putdata();
			try
			{
				if(playtime<0.0)
				throw playtime;
			}
			catch(float r)
			{
				cout<<"Error: Playing Time "<<playtime<<" Is Invalid.";
				playtime=0.0;
			}
			cout<<"Playtime is : "<<playtime<<endl;
		}
};
int main()
{
	Book b[10];
	Tape t[10];
	int choice=0,BookCount=0,TapeCount=0;
	cout<<"----------Publication Database System----------"<<endl;
	cout<<"1.Add Information to books\n2.Add Information to Tapes\n3.Display Books Information\n4.Display Tapes Information"<<endl;
	do
	{
		cout<<endl<<"Enter Your Choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1: cout<<endl<<"Add Book: "<<endl;
 			b[BookCount].get_page();
 			BookCount++;
 			break;
			case 2: cout<<endl<<"Add Tape: "<<endl;
 			t[TapeCount].get_time();
 			TapeCount++;
 			break;
			case 3: cout<<endl<<"The Books Are : "<<endl;
 			for(int i=0;i<BookCount;i++)
 			{
 				b[i].show_page();
 			}
 			break;
			case 4:  cout<<endl<<"The Tapes Are : "<<endl;
 			for(int i=0;i<TapeCount;i++)
 			{
 				t[i].show_time();
 			}
			break;
			case 5: break;
			default: cout<<"Enter Valid Choice"<<endl;
			break;
		}
	}
	while(choice!=5);
}
