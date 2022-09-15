#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	void data()
	{
		cout<<"enter rollno"<<endl;
		cin>>rollno;
	}
};
class test: public student
{
	public:
		int m1,m2;
		void getdata()
		{
			cout<<"enter m1 marks"<<endl;
			cin>>m1;
			cout<<"enter m2 marks"<<endl;
			cin>>m2;
		}
};
class result :public test
{
	public:
		int total;
		void getdata1()
		{
			cout<<"the total marks are"<<m1+m2<<endl;
		}
};
int main()
{
	result k;
	k.getdata();
	k.getdata1();
	return 0;
}