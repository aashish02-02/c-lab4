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
		
		friend void addcomplex(A m,B n);
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
		friend void addcomplex(A m,B n);
};
void addcomplex(A m,B n)
{
	int r,i;
	r=m.real+n.real;
	i=m.imag+n.imag;
	cout<<"sum of two complex = "<<r<<"+"<<i<<"i"<<endl;
}
int main()
{
	A p;
	B q;
	cout<<"For first complex"<<endl;
	p.getdata();
	cout<<"For second complex "<<endl;
	q.getdata();
	addcomplex(p,q);
	return 0;
}

