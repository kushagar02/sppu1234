#include<iostream>
using namespace std;

int n;
template<class T>
void SelectionSort(T arr[100])
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(arr[j]<arr[i])
 			{
 				temp=arr[i];
 				arr[i]=arr[j];
 				arr[j]=temp;
			}
 		}
 	}
	cout<<"\n The Sorted Array Is : ";
 	for(i=0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
 	}
}

int main()
{
	int choice;
 	int A[100];
 	float B[100];
	int i;
	cout<<"\n Type 1 for Integer Array. \n Type 2 for Float Array. \n Type 3 to Exit."; 
 	do
 	{
 		cout<<endl<<"\n Enter Choice : ";
 		cin>>choice;
 		switch(choice)
 		{
 			case 1: cout<<"\n Enter Total Number Of Integer Elements : ";
 			cin>>n;
 			cout<<"\n Enter Integer Array Elements : "<<endl;
 			for(i=0;i<n;i++)
 			{
 				cin>>A[i];
 			}
 			SelectionSort(A);
			break;
 			case 2: cout<<"\nEnter Total Number Of Float Elements : ";
 			cin>>n;
 			cout<<"\n Enter Float Array Elememts : ";
 			for(i=0;i<n;i++)
 			{
 				cin>>B[i];
 			}
			SelectionSort(B);
			break;
 			case 3: cout<<"Program Exited Successfully !!"<<endl;
 			break;
			default: cout<<"\n Invalid Input. Please Try Again";
 		}
 	}
 	while(choice!=3);
}
