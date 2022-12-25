#include<iostream>
#include<string.h>
using namespace std;

class Stack
{
	public:
		int top,i;
		char n;
		char arr[100];
	void push(char n)
	{
		top++;
		arr[top]=n;
	}
	char pop()
	{
		char n;
		n=arr[top];
		top--;
		return n;
	}
	int prec(char c)
	{
		if(c=='*'||c=='/')
		{
			return 2;
		}
		else if(c=='+'||c=='-')
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	void infixtopostfix(string s)
	{
		string res;
		for(int i=0;i<s.length();i++)
		{
			if((s[i]>='a' && s[i]<='z')|| (s[i]>='A'&&s[i]<='Z'))
			{
				res	+=s[i];
			}
			else if(s[i]=='(')
			{
				push(s[i]);
			}
			else if(s[i]==')')
			{
				while(top!=-1&&arr[top]!='(')
				{
					res+=arr[top];
					pop();
				}
				if(top!=-1)
				{
					pop();
				}
			}
			else
			{
				while(top!=-1&&prec(arr[top])>prec(s[i]))
				{
					res+=arr[top];
					pop();
				}
				push(s[i]);
	    	}
		}
		while(top!=-1)
		{
	       res+=arr[top];
	       pop();
    	}	
		cout<<"The postfix string is : "<<res; 	
	}
};

int main()
{
	Stack st;
	st.top=-1;
	string s;
	cout<<"Enter Infix String : ";
	cin>>s;
	st.infixtopostfix(s);
	return 0;
}
