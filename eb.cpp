#include<iostream>
using namespace std;
class eb
{
	public:
	int cno,pmr,cmr,type,unit,rs,choice;
	char cname[30];
	void display();
	void getdata();
	void calculate();
};
void eb :: getdata()
{
	cout<<"enter cno:"<<endl;
	cin>>cno;
	cout<<"enter pmr:"<<endl;
	cin>>pmr;
	cout<<"enter cmr:"<<endl;
	cin>>cmr;
	cout<<"is eb commercial or domestic?";
}
void eb :: calculate()

	unit=cmr-pmr;
	cout<<"the unit cost is"<<endl;
	if(choice==1)
	if (unit<=100)
	{
		rs=unit*1;
	}
	else if(unit>=101&&unit<=200)
	{
		rs=unit*2.5;
	}
	else if(unit>=201&&unit<=500)
	{
		rs=unit*4;
	}
	else
	{
		rs=unit*6;
	}
}