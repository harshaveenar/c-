#include<iostream>
using namespace std;
class eb
{
	int cno,pmr,cmr,type,unit,rs;
	char cname[30];
	public:
		void domm();
		void comm();
		void display();
};
void eb :: domm()
{
	cout<<"enter cno:"<<endl;
	cin>>cno;
	cout<<"enter cname:"<<endl;
	cin>>cname;
	cout<<"enter pmr:"<<endl;
	cin>>pmr;
	cout<<"enter cmr:"<<endl;
	cin>>cmr;
	unit=cmr-pmr;
	cout<<"units is"<<unit<<endl;
	if (unit<=100)
	{
		rs=unit*1;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>=101&&unit<=200)
	{
		rs=unit*2.5;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>=201&&unit<=500)
	{
		rs=unit*4;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>500)
	{
		rs=unit*6;
		cout<<"amount is"<<rs<<endl;
	}
else
{
		printf("invalid ");
	}
}
void eb::comm() 
{
	cout<<"enter cno:"<<endl;
	cin>>cno;
	cout<<"enter cname:"<<endl;
	cin>>cname;
	cout<<"enter pmr:"<<endl;
	cin>>pmr;
	cout<<"enter cmr:"<<endl;
	cin>>cmr;
	unit=cmr-pmr;
	cout<<"units is"<<unit<<endl;
	if (unit<=100)
		{
		rs=unit*2;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>=101&&unit<=200)
	{
		rs=unit*4.5;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>=201&&unit<=500)
	{
		rs=unit*6;
		cout<<"amount is"<<rs<<endl;
	}
	else if(unit>500)
	{
		rs=unit*7;
		cout<<"amount is"<<rs<<endl;
	}
	else{
		printf("invalid ");
	}
}
	void eb ::display()
	{
			cout<<"enter cno:"<<endl;
	cin>>cno;
	cout<<"enter cname:"<<endl;
	cin>>cname;
	cout<<"enter pmr:"<<endl;
	cin>>pmr;
	cout<<"enter cmr:"<<endl;
	cin>>cmr;
	unit=cmr-pmr;
	cout<<"units"<<unit<<endl;	
	}
	int main()
	{
		int choice;
		cout<<"enter choice domestic(1) or commercial (2)"<<endl;
		cin>>choice;
		eb a;
		switch(choice)
		{
			case 1:
			a.domm();
			break;
			case 2:
			a.comm();
			break;
			default:
				cout<<"enter valid input"<<endl;
		}
		return 0;
	}

