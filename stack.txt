#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define MAX 100
class Stack
{
	private:
		char data[MAX],str[MAX];
		int top,length,count;
		void push(char temp)
		{
			if(top==MAX-1)
			{
				cout<<"Overflow.";
			}
			else
			{
				top++;
				data[top]=temp;
			}
		}
		char pop()
		{
			if(top==-1)
			{
				cout<<"Underflow.";
				return 0;
			}
			else
			{
				char temp=data[top];
				top--;
				return temp;
			}
		}
	public:
		Stack()
		{
			top=-1;
			length=0;
			count=0;
		}
		void getstring()
		{
			cout<<"\n Enter a String :";
			cin.getline(str,MAX);
			length=strlen(str);
		}
		void extractstring()
		{
			char temp[MAX];
			int i,j;
			for(i=0; i<length; i++)
    		{
        		temp[i]=str[i];
    		}
    		j=0;
			for(i=0;i<length;i++)
			{
				if(isalpha(temp[i]))
				{
					str[j]=tolower(temp[i]);
					j++;
				}
			}
			length=j;
			for(int i=0;i<length;i++)
			{
				cout<<str[i];
			}
		}
		void checkPalindrome()
		{
			for(int i=0;i<length;i++)
			{
				push(str[i]);
			}
			for(int i=0;i<length;i++)
			{
				if(str[i]==pop())
				count++;
			}
			if(count==length)
			{
				cout<<"\n Entered String is a Palindrome.";
			}
			else
			{
				cout<<"\n Entered String is not a Palindrome.";
			}
		}
		void displayreverse()
		{
			for(int i=length-1;i>=0;i--)
			{
				cout<<str[i];
			}
		}
		
}st;

int main()
{
	Stack st;
	st.getstring();
	cout<<"\n Extracted String Is :";
	st.extractstring();
	cout<<"\n Reverse of Extracted String Is :";
	st.displayreverse();
	st.checkPalindrome();
	return 0;
}
