#include<iostream>
using namespace std;

class Sorting
{
	private:
		int i,j,n,temp,arr[10];
	public:
		Sorting()
		{
			i=0;
			n=0;
			j=0;
			temp=0;
			int arr[10]={0};
		}
		void BubbleSort(int arr[],int n)
		{
			int counter=1;
			while(counter<n-1)
			{
				for(i=0;i<n-counter;i++)
				{
					if(arr[i]>arr[i+1])
					{
						int temp=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=temp;
					}
				}
				counter++;
			}
		}
};

int main()
{
	Sorting s1;
	int arr1[10]={2,6,5,9,8,3,4,6,8,7};
	cout<<"\n First Array Before Sorting Is :";
	for(int i=0;i<10;i++)
	{
		cout<<arr1[i]<<" ";
	}
	s1.BubbleSort(arr1,10);
	cout<<"\n First Array After Sorting in Ascending Order Is :";
	for(int i=0;i<10;i++)
	{
		cout<<arr1[i]<<" ";
	}
	int arr2[10]={6,9,8,7,5,7,9,2,1,6};
	cout<<"\n Second Array Before Sorting Is :";
	for(int i=0;i<10;i++)
	{
		cout<<arr2[i]<<" ";
	}
	s1.BubbleSort(arr2,10);
	cout<<"\n Second Array After Sorting in Descending Order Is :";
	for(int i=9;i>=0;i--)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;	 
}
