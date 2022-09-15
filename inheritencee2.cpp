#include<iostream>
using namespace std;
class emp
{
	public :
		int empid,empsal,bss;
		char empname[30];
	
		void getdata()
		{
			cout<<"enter empno"<<empid<<endl;
			cin>>empid;
			cout<<"enter empname"<<empname<<endl;
			cin>>empname;
			cout<<"enter basic salary"<<bss<<endl;
			cin>>bss;
		}
};
class calculate : public emp
{
	int hra,da,pf,cf,gs,ded,ns;
	public:
	void cal()
	{
		hra=bss*10/100;
		da=bss*97/100;
		pf=bss*12/100;
		cf=bss*0.1/100;
		gs=bss+hra+da;
		ded=pf+cf;
		ns=gs-ded;
		cout<<"the gross salaryis"<<gs;
		cout<<"the net salary is"<<ns;
	}
};
int main()
{
	calculate s;
	s.getdata();
	s.cal();
	return 0;

}
