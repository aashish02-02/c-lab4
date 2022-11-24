//lab 4 question 2
//two different class add
#include<iostream>
using namespace std;
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
		friend void add(A m,B n);	
};
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
		friend void add(A m,B n);
};
void add(A m,B n)
{
	int r;
	r=m.x+n.y;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	A p;
	B q;
	p.getdata();
	q.getdata();
	p.display();
	q.display();
	add(p,q);
	return 0;
}
