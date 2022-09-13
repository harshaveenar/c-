#include<iostream>
using namespace std;
class sr
{
	public:
	int regno,m1,m2,m3,total,avg;
	char name[50];
	void getdata ();
	void getcalculate();
	void display();
};
void sr :: getdata()
{
	cout<<"enterr reg no"<<endl;
	cin>>regno;
	cout<<"enterr name"<<endl;
	cin>>name;
	cout<<"enter m1"<<endl;
	cin>>m1;
	cout<<"enter m2"<<endl;
	cin>>m2;
	cout<<"enter m3"<<endl;
	cin>>m3;
}
void sr :: getcalculate()
{
	total=m1+m2+m3;
	avg=total/3;
}
void sr :: display()
{
	cout<<"the regno is"<<regno<<endl;
	cout<<"the name is"<<name<<endl;
	cout<<"the m1 is"<<m1<<endl;
	cout<<"the m2 is"<<m2<<endl;
	cout<<"the m3 is"<<m3<<endl;
	cout<<"the total is"<<total<<endl;
	cout<<"the avg is"<<avg<<endl;
}
int main()
{
	sr r;
	r.getdata();
	r.getcalculate();
	r.display();
	return 0;
}
