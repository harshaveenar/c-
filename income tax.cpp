#include<iostream>
using namespace std;
int main()
{
int tax,amt,taxamt;
cout<<"Enter the amount:"<<endl;
cin>>amt;
if(amt<=60000)
{
tax=0;
taxamt=tax+amt;
cout<<"Taxable income:"<<taxamt;
}
else if(amt>60000 && amt<=150000)
{
tax=amt*0.05;
taxamt=tax+amt;
cout<<"Taxable income:"<<taxamt;
}
else if(amt>150000 && amt<=500000)
{
tax=amt*0.1;
taxamt=tax+amt;
cout<<"Taxable income:"<<taxamt;
}
else
{
tax=amt*0.15;
taxamt=tax+amt;
cout<<"Taxable income:"<<taxamt;
cout<<"Taxable income:"<<taxamt;
}
return 0;
}