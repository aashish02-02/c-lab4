//lab 4 question 3
//add three class
#include<iostream>
using namespace std;
class C;
class B;
class A
{
	int x;
	public:
		void getdata()
		{
			cout<<"Enter value of x"<<endl;
			cin>>x;
		}
		void display()
		{
			cout<<"Value of x = "<<x<<endl;
		}
		friend void add(A m,B n,C o);
};
class C;
class B
{
	int y;
	public:
		void getdata()
		{
			cout<<"Enter value of y"<<endl;
			cin>>y;
		}
		void display()
		{
			cout<<"Value of y = "<<y<<endl;
		}
		friend void add(A m,B n,C o);
};
class C
{
	int z;
	public:
		void getdata()
		{
			cout<<"Enter value of z"<<endl;
			cin>>z;
		}
		void display()
		{
			cout<<"Value of z = "<<z<<endl;
		}
		friend void add(A m,B n,C o);
};
void add(A m,B n,C o)
{
	int r;
	r=m.x+n.y+o.z;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	A p;
	B q;
	C r;
	p.getdata();
	q.getdata();
	r.getdata();
	add(p,q,r);
	return 0;
}
