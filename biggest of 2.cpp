#include<iostream>
using namespace std;
class biggest
{
	int x,y; 
	public:
	void input();
	void display();
};
void biggest::input()
{
	cout<<"enter value of x and y\n";
	cin>>x>>y;}
void biggest::display()

{
		if(x>y){
	cout<<"x is the greater no\n"<<x<<endl;	
	}
else
{
    cout<<"y is the greater no\n"<<y<<endl;
}
}
int main()
{
    biggest b;
	b.input();
	b.display();
	return 0;
}