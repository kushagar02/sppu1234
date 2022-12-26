#include<iostream>
using namespace std;

void quick(int array[],int first,int last)
{
	int p,f,l,temp,i;
	f=first;
	l=last;
	p=first;
	if(f<l)
	{
    	while(f<l)
		{
        	while(array[f]<=array[p])
			{
            	f++;
        	}
        	while(array[l]>array[p])
			{
            	l--;
        	}
        	if(f<l)
			{
            	temp=array[f];
            	array[f]=array[l];
            	array[l]=temp;
            }
    	}
    	temp=array[l];
    	array[l]=array[p];
    	array[p]=temp;
    	quick(array,first,l-1);
    	quick(array,l+1,last);
	}
}

int main()
{
	int array[10],n,i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter Percentage of Student Number "<<i+1<<" ";
    	cin>>array[i];
	}
	quick(array,0,9);
	cout<<"The Percentages of Top 5 Students after Sorting are :"<<endl;
	for(i=9;i>=5;i--)
    {
		cout<<array[i]<<" ";
	}
}
