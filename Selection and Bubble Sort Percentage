#include<iostream>
using namespace std;

class Sorting
{
	private:
		int i,j,n;
		float arr[10],temp;
	public:
		Sorting()
		{
			i=0;
			n=0;
			j=0;
			temp=0.0;
			float arr[10]={0.0};
		}
		void getdata()
		{
			for(i=0;i<10;i++)
			{
				cout<<"Enter Percentage of Student Number "<<i+1<<" : ";
				cin>>arr[i];
			}
		}
		void SelectionSort()
		{
			for(i=0;i<9;i++)
			{
				for(j=i+1;j<10;j++)
				{
					if(arr[j]<arr[i])
					{
						temp = arr[i];
						arr[i]=arr[j];
						arr[j]= temp;
					}
				}
			}
			cout<<"The Percentages of Top 5 Students after Sorting are :"<<endl;
			for(i=9;i>=5;i--)
			{
    			cout<<arr[i]<<" ";
			}
		}
		void BubbleSort()
		{
			int counter=1;
			while(counter<9)
			{
				for(i=0;i<10-counter;i++)
				{
					if(arr[i]>arr[i+1])
					{
						temp=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=temp;
					}
				}
				counter++;
			}
			cout<<"The Percentages of Top 5 Students after Sorting are :"<<endl;
			for(i=9;i>=5;i--)
			{
    			cout<<arr[i]<<" ";
			}
		}
};

int main()
{
	Sorting s1;
	int choice;
	s1.getdata();
	do
	{
		cout<<"\n 1. Use Selection Sort. \n 2. Use Bubble Sort. \n 3. Exit \n Enter Your Choice :";
		cin>>choice;
		switch(choice)
		{
			case 1: s1.SelectionSort();
			break;
			case 2: s1.BubbleSort();
			break;
			case 3: break;
			default: cout<<"\n Invalid Input, please Try Again.";
		}
	}
	while(choice!=3);
	return 0;	 
}
