#include<iostream>;
using namespace std;
class B;
class A
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real part = "<<endl;
			cin>>real;
			cout<<"Enter imaginary part = "<<endl;
			cin>>imag;
		}
		void display()
		{
			cout<<"Real part = "<<real<<endl;
			cout<<"Imaginary part = "<<imag<<endl;
		}
		friend void complex(A m)
};
class B
{
		int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real part = "<<endl;
			cin>>real;
			cout<<"Enter imaginary part = "<<endl;
			cin>>imag;
		}
		void display()
		{
			cout<<"Real part = "<<real<<endl;
			cout<<"Imaginary part = "<<imag<<endl;
};
