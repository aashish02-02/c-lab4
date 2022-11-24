// lab 4 question 4
//largest among 4 integer should have 3 class and each class have one integer
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
	int d;
	cout<<"Enter value of d = "<<endl;
	cin>>d;
	if(m.x>n.y&&m.x>o.z&&m.x>d)
	{
		cout<<"Greatest = "<<m.x<<endl;
	}
	else if(n.y>o.z&&n.y>d)
	{
		cout<<"Greatest = "<<n.y<<endl;
	}
	else if(o.z>d)
	{
		cout<<"Greatest = "<<o.z<<endl;
	}
	else 
	{
		cout<<"Greatest = "<<d<<endl;
	}
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
