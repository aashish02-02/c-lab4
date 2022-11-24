#include<iostream>
using namespace std;
class class2;
class class1
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
		friend void max(class1 m,class2 n);
};
class class2
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
		friend void max(class1 m,class2 n);
};
void max(class1 m,class2 n)
{
	if(m.x>n.y)
	{
		cout<<"Maximum = "<<m.x<<endl;
	}
	else
	{
		cout<<"Maximum = "<<n.y<<endl;
	}
}
int main()
{
	class1 p;
	class2 q;
	p.getdata();
	q.getdata();
	p.display();
	q.display();
	max(p,q);
	return 0;
}
