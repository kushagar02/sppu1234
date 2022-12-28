#include<iostream>
using namespace std;
class complex
{
	public:
	float real,img;
	complex()
	{
		real=0;
		img=0;
	}
	complex operator +(complex);
	complex operator *(complex);
	friend ostream &operator << (ostream&,complex&);
	friend istream &operator >> (istream&,complex&); 
}obj;

complex complex :: operator +(complex obj)
{
	complex temp;
	temp.real=(real+obj.real);
	temp.img=(img+obj.img);
	return temp;	
}

complex complex :: operator *(complex obj)
{
	complex temp;
	temp.real=(real*obj.real)-(img*obj.img);
	temp.img=(real*obj.img)+(obj.real*img);
	return temp;	
}

 istream &operator >>(istream& is,complex& obj)
 {
	is>>obj.real;
	is>>obj.img;
	return is;
}

ostream &operator <<(ostream& os,complex& obj)
{
	os<<obj.real;
	os<<"+"<<obj.img<<"i";
	return os;
}

int main()
{
	complex a,b,c,d;
	cout<<"Enter the Real and Imaginary part of First Complex Number: \n";
	cin>>a;
	cout<<"Enter the Real and Imaginary Part of Second Complex Number: \n";
	cin>>b;
	c=a+b;
	cout<<"The Addition of the 2 Complex Numbers Is : "<<c<<endl;
	d=a*b;
	cout<<"The Multiplication of the 2 Complex Numbers Is : "<<d<<endl;
}
