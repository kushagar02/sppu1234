#include<iostream>
using namespace std;

class Sorting
{
		public:
		int i,j,n;
		float arr[10],temp;
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
		void InsertionSort()
		{
			float current;
			for(i=1;i<10;i++)
			{
				current=arr[i];
				j=i-1;
				while(arr[j]>current&&j>=0)
				{
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=current;
			}
			cout<<"The Percentages of Top 5 Students after Sorting are :"<<endl;
			for(i=9;i>=5;i--)
			{
    			cout<<arr[i]<<" ";
			}
		}
		void ShellSort(float arr[],int n)
		{
			for(int gap = n/2; gap > 0; gap /= 2)
			{
    			for (int j = gap; j < n; j += 1)
				{
					float temp = arr[j];
					int i;
					for (i = j; i >= gap && arr[i - gap] > temp; i -= gap)
					{
        				arr[i] = arr[i - gap];
					}
      				arr[i] = temp;
    			}
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
		cout<<"\n 1. Use Insertion Sort. \n 2. Use Shell Sort. \n 3. Exit \n Enter Your Choice :";
		cin>>choice;
		switch(choice)
		{
			case 1: s1.InsertionSort();
			break;
			case 2: s1.ShellSort(s1.arr,10);
			break;
			case 3: break;
			default: cout<<"\n Invalid Input, please Try Again.";
		}
	}
	while(choice!=3);
	return 0;	 
}
