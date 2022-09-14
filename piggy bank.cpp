#include<iostream>
using namespace std;
class addamount
{
	char*name;
	int amount,b;
	public:
		addamount();
		addamount(int);
		void display();
};
addamount::addamount()
{
	amount=50;
}
addamount::addamount(int x)
{
	amount=x;
}
void addamount::display()
{
	b=50;
	cout<<"the amount is:"<<amount+b;
	
}
int main()
{
	addamount();
	addamount a1(300);
	a1.display();
	return 0;
	
}
