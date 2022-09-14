#include<iostream>
using namespace std;
class printnumber
{
	int n1;
	char* p ;
	float n2;
	double n3;
    long int n4;
    public:
    	printnumber(int );
    	printnumber(char*);
    	printnumber(float );
    	printnumber(double );
    	printnumber(long int );
};
printnumber::printnumber(int a)
{
	n1=a;
	cout<<"enter a number:"<<n1;
}
printnumber::printnumber(char * b)
{
	p=b;
	cout<<"enter a number:"<<p;
	
}
printnumber::printnumber(float c)
{
	n2=c;
	cout<<"enter a number:"<<n2;
	
}
printnumber::printnumber(double d)
{
	n3=d;
	cout<<"enter a number:"<<n3;
}
printnumber::printnumber(long int e)
{
	n4=e;
	cout<<"enter a number:"<<n4;
	
}
int main()
{

      printnumber p1(50),p2("hello"),p3(12345);
      return 0;
      
}

