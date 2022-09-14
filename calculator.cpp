#include<iostream>
using namespace std;
int main()
{
int n1,n2,choice;
cout<<"Enter the choice:"<<endl;
cout<<"Press 1 for Addition:\n";
cout<<"Press 2 for Subtraction:\n";
cout<<"Press 3 for Multiplication:\n";
cout<<"Press 4 for Division:\n";
cout<<"Press 5 for Modulus:\n";
cin>>choice;
cout<<"Enter two numbers:"<<endl;
cin>>n1>>n2;
int Addition,Subtraction,Multiplication,Division,Modulus;
switch(choice)
{
case 1:
Addition=n1+n2;
cout<<"Addition result = "<<Addition;
break;
case 2:
 Subtraction=n1-n2;
cout<<"Subtraction result = "<<Subtraction;
break;
case 3:
 Multiplication=n1*n2;
cout<<"Multiplication result = "<<Multiplication;
break;
case 4:
 Division=n1/n2;
cout<<"Division result = "<<Division;
break;
case 5:
 Modulus=n1%n2;
cout<<"Modulus = "<<Modulus;
break;
}
return 0;
}