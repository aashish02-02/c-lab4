//lab 4 question 5
//wap to swap the content of two variable of 2 different classes using friend function
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
		friend void swap(A &m,B &n);
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
		friend void swap(A &m,B &n);
 };
 void swap(A &m,B &n)
 {
 	int temp;
 	temp=m.x;
 	m.x=n.y;
 	n.y=temp;
 }
 int main()
 {
 	A p;
 	B q;
 	p.getdata();
 	q.getdata();
 	cout<<"Value before swaping = "<<endl;
 	p.display();
 	q.display();
 	swap(p,q);
 	cout<<"Value after swapping = "<<endl;
 	p.display();
 	q.display();
 	return 0;
 }
 
