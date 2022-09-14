#include<iostream>
using namespace std;
int main()
{
int p,r,t,age,si;
cout<<"Enter your age:";
cin>>age;
if(age>=60)
{
cout<<"You are a senior citizen..(ROI=12%)"<<endl;
cout<<"Enter principle amount:";
cin>>p;
r=p*0.12;
cout<<"Enter time in years:";
cin>>t;
si=p*r*t/100;
cout<<"Simple interest="<<si;
}
else
{
cout<<"ROI = 10%"<<endl;
cout<<"Enter principle amount:";
cin>>p;
r=p*0.10;
cout<<"Enter time in years:";
cin>>t;
si=p*r*t/100;
cout<<"Simple interest="<<si;
}
return 0;
}