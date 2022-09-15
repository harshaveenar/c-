#include<iostream>
using namespace std;
class bank
{
	public:
		float I,p,t;
		void rate_of_int()
		{
			cout<<"enter simple intrest-"<<endl;
			cin>>I;
			cout<<"enter principal amount-"<<endl;
			cin>>p;
			cout<<"enter years-"<<endl;
			cin>>t;
			cout<<"rate of intrest-"<<(I*100)/(p*t)<<endl;
			
		}
};
class axis:public bank
{
	public:
		float i;
		void roi()
		{
			cout<<"enter simple intrest AXIS-"<<endl;
			cin>>i;
			cout<<"rate of interst in axis-"<<(i*100)/(p*t)<<endl;
			
		}
};
class icici:public bank
{
	public:
		float h;
		void roi1()
		{
			cout<<"enter simple intrest-ICICI"<<endl;
			cin>>h;
			cout<<"rate of imtrest in icici-"<<(h*100)/(p*t)<<endl;
		}
};
class sbi:public bank
{
	public:
		float H;
		void roi2()
		{
			cout<<"enter simple intrest SBI-"<<endl;
			cin>>H;
			cout<<"rate of intrest in sbi-"<<(H*100)/(p*t)<<endl;
		}
};
int main()
{
	sbi s;
	s.rate_of_int();
	s.roi2();
	icici a;
	a.roi1();
	axis b;
	b.roi();
	return 0;
}
