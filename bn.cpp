#include<iostream>
using namespace std;
class a1
{    
    public:
	int a,b;
	void getdata()
	{
		cout<<"enter value of a"<<endl;
		cin>>a;
		cout<<"enter value of b"<<endl;
		cin>>b;
		
	}
			
};
class b1: public a1
{
	public:
		void cal()
		{
	cout<<"sum="<<a+b<<endl;
		cout<<"the product of the nos is"<<a*b<<endl;
	}
};

int main()
{
	b1 p;
	p.getdata();
	p.cal();
	return 0;
}
    