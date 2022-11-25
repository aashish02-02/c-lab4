#include<iostream>
using namespace std;
class B;
class A
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary"<<endl;
			cin>>real>>imag;
		}
		friend class B;
};
class B
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary"<<endl;
			cin>>real>>imag;
		}
		void sum(A m)
		{
			cout<<"Sum of complex ="<<endl;
			cout<<(m.real+real)<<"+"<<(m.imag+imag)<<"i"<<endl;
		}
};
int main()
{
	A p;
	B q;
	p.getdata();
	q.getdata();
	q.sum(p);
	return 0;
}
