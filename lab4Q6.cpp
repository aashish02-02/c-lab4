//lab 4 question 6
//wap to add two object of class height using friend function
#include<iostream>
using namespace std;
class height
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter value of x and y"<<endl;
			cin>>x>>y;
		}
		void display()
		{
			cout<<"Value of x = "<<x<<endl;
			cout<<"Value of y = "<<y<<endl;
		}
		friend void sum(height h1);
};
void sum(height h1)
{
	int r;
	r=h1.x+h1.y;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	height h;
	h.getdata();
	h.display();
	sum(h);
	return 0;
}
