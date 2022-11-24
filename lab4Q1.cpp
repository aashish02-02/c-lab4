//lab 4 question 1
// wap to create rational with data member using friend function
#include<iostream>
using namespace std;
class rational
{
	int nume,deno;
	public:
		void getdata()
		{
			cout<<"Enter numerator = "<<endl;
			cin>>nume;
			cout<<"Enter denominator = "<<endl;
			cin>>deno;
		}
	friend void great(rational r);
};
void great(rational r)
{
	if(r.nume>r.deno)
	{
		cout<<"Greatest number = "<<r.nume<<endl;
	}
	else 
	{
		cout<<"Greatest number = "<<r.deno<<endl;
	}
}
int main()
{
	rational r;
	r.getdata();
	great(r);
	return 0;
}
