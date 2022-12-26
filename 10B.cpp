#include<iostream>
using namespace std;

class Queue
{
	public:
		int arr[1000];
		int front,rear,size;
	Queue()
	{
		front=-1;
		rear=0;
		size=0;
		int arr[1000]={0};
	}
	void setdata()
	{
		cout<<"\n Enter the Maximum Number of Orders Accepted by Pizza Parlour : ";
		cin>>size;
		int arr[size];
	}	
	void enqueue()
	{
		int n;
		cout<<"\n Enter the Order Number to be Added :";
		cin>>n;
		if(front==(rear+1)%size)
		{
			cout<<"\n Orders Are Full.";
		}
		else
		{
			if(front==-1)
			{
				front=rear=0;
			}
			else
			{
				rear=(rear+1)%size;	
			}
			arr[rear]=n;
		}
	}
	int dequeue()
	{
		int n;
		if(front==-1)
		{
			cout<<"\n No Orders Currently.";
			return 0;
		}
		else
		{
			n = arr[front];
			if(front==rear)
			{
				front=rear=-1;	
			}
			else
			{
				front=(front+1)%size;	
			}
			cout<<"\n The Deleted Order Number Is :"<<n;
			return n;	
		}
	}
	void display()
	{
		if(front==-1)
		{
			cout<<"\n No Orders Currently. Queue is Empty.";
		}
		else
		{
			int i=front;
			while(i!=rear)
			{
				cout<<arr[i]<<" ";
				i=(i+1)%size;
			}
			cout<<arr[i]<<endl;
		}
	}
};

int main()
{
	Queue q;
	int choice;
	q.setdata();
	do
	{
		cout<<"\n 1. Add Order.\n 2. Delete Order.\n 3. Display Orders.\n 4. Exit \n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: q.enqueue();
			break;
			case 2: q.dequeue();
			break;
			case 3: q.display();
			break;
			case 4:	break;
			default : cout<<"Invalid Input. Please Try Again.";
			break;
		}
	}
	while(choice!=4);
	return 0;
}
