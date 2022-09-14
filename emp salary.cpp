#include<iostream>
using namespace std;
class employee
{
 int eid;
 char ename[100];
 float basic_salary,hra,da,pf,net_salary;
 public:
 void accept_details()
 {
 cout<<"Enter Employee Id : ";
 cin>>eid;
 cout<<"\n Enter Employee Name : ";
 cin>>ename;
 cout<<"\n Enter Basic Salary : ";
 cin>>basic_salary;
 hra = 800;
 da = 0.25 * basic_salary;
 pf = 0.15 * basic_salary;
 net_salary = basic_salary + da + hra - pf;
 }
 void display_details()
 {
 cout<<"\n Employee Id : "<<eid;
 cout<<"\n Employee Name : "<<ename;
 cout<<"\n Basic Salary : "<<basic_salary;
 cout<<"\n HRA : "<<hra;
 cout<<"\n DA : "<<da;
 cout<<"\n Personal Fund : "<<pf;
 cout<<"\n Net Salary : "<<net_salary;
 }
};
int main()
{
 employee e;
 e.accept_details();
 e.display_details();
 return 0;
}