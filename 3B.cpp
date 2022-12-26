#include<iostream>
using namespace std;

class Queue
{
	public:
		int arr[1000],front,rear,size;
	Queue()
	{
		front =-1;
		rear=0;
		size=0;
		int arr[1000]={0};
	}
	void setdata()
	{
		cout<<"\n Enter the Size of the Queue.";
		cin>>size;
		int arr[size];
	}
	void enqueue()
	{
		int n;
		cout<<"\n Enter the Value to be Inserted into the Queue :";
		cin>>n;
		if(front==(rear+1)%size)
		{
			cout<<"\n Overflow.";
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
			cout<<"\n Underflow.";
		}
		else
		{
			n=arr[front];
			if(front==rear)
			{
				front==rear==-1;
			}
			else
			{
				front=(front+1)%size;
			}
			cout<<"The Element Deleted from the Queue is :"<<n;
			return n;
		}
	}
	void display()
	{
		if(front==-1)
		{
			cout<<"\n Queue is Empty.";
		}
		else
		{
			cout<<"The Circular Queue is : ";
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
		cout<<"\n 1. Add Element.\n 2. Delete Element.\n 3. Display Queue.\n 4. Exit \n Enter Your Choice : ";
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
