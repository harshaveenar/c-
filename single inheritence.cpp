#include<iostream>
using namespace std;
class p
{
	int x=10;
	public:
		void getdata()
		{
		cout<<"enter x value"<<x<<endl;	
		}
};
class c:public p
{
	int y=5;
	public:
	void getdata1()
	{
		cout<<"enter y value"<<y<<endl;
	}
};
	int main()
	{
		c c;
		c.getdata();
		c.getdata1();
		return 0;
	}
