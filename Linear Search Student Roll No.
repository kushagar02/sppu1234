#include<iostream>
using namespace std;

int main()
{
	int i,n,key;
	bool flag=false;
	cout<<"\n Enter Number of SE Students."<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter Roll Number of Student Number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\n Enter Roll Number to be searched :";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
		cout<<"\n Roll Number of Student Number "<<i+1<<" Found.";
		flag=true;
		break;
		}
	}
	    if(flag==false)
	    {
	    	cout<<"This Roll Number Was Not Found in the Given Array.";
		}
	    return 0;
}
