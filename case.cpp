#include<iostream>
using namespace std;
class add
{
	int x,y; 
	public:
	void input();
	void display();
};
void add::input()
{
	cout<<"enter value of x and y";
	cin>>x>>y;
}
void add::display()
{
	cout<<"sum of 2 nos"<<x+y;
}
int main()
{
	add a;
	a.input();
	a.display();
	return 0;
}