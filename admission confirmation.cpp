#include<iostream>
using namespace std;
class stud
{
	public:
		int rno;
		char name[30];
		void data()
		{
			cout<<"enter registration number-"<<endl;
			cin>>rno;
			cout<<"enter name-"<<endl;
			cin>>name;
		}
};
class academic:public stud
{
	public:
		int s1,s2,s3;
		void mark()
		{
			cout<<"enter mark 1-"<<endl;
			cin>>s1;
			cout<<"enter mark2-"<<endl;
			cin>>s2;
			cout<<"enter mark3-"<<endl;
			cin>>s3;
		}
};
class sports
{
	public:
		int sp;
		void sportmark()
		{
			cout<<"enter sport mark-"<<endl;
			cin>>sp;
		}
};
class results:public academic,public sports
{
	public:
		int avg;
		void total()
		{
			cout<<"total marks-"<<s1+s2+s3+sp<<endl;
		}
		void average()
		{
			avg=(s1+s2+s3+sp)/4;
			if (avg>=200)
			{
				cout<<"*****admission conformed*****"<<endl;
			}
			else
			{
				cout<<"***better luck next time****"<<endl;
			}
		}
};
int main()
{
	stud y;
	y.data();
	sports j;
	j.sportmark();
	results o;
	o.mark();
	o.total();
	o.average();
	return 0;
}
