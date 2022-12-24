#include<iostream>
using namespace std;

int main()
{
	int i,n,key;
	bool flag=false;
	cout<<"\n Enter Number of SE Students."<<endl;
	cin>>n;
	int arr[n];
	cout<<"ATTENTION : Enter Roll Numbers of Students in Sorted Order :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Roll Number of Student Number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\n Enter Roll Number to be searched : ";
	cin>>key;
	int lb=0,ub=n-1,mid;
	while(lb<n)
	{      
		mid=(ub+lb)/2;
		if(key==arr[mid])
		{
			cout<<"\n Roll Number of Student Number "<<mid+1<<" Found.";
			flag=true;
			break;
		}
		else
		{
			if(key<arr[mid])
			{
				ub=mid-1;
			}
			if(key>arr[mid])
			{
				lb=mid+1;
			}
		}
	}
	if(flag==false)
	{
		cout<<"This Roll Number Was Not Found in the Given Array.";
	}
	return 0;
}
