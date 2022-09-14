#include<iostream>
using namespace std;
class rectangle {
    int length , breadth;
  public:
  	rectangle();
  	rectangle(int,int);
  	rectangle(int);
  	int calculate(int,int);
  	void display();
};
rectangle::rectangle(){
length=4;
breadth=9;	
}
rectangle::rectangle(int l , int b){
	length = l;
	breadth = b;
}
rectangle::rectangle(int l1)
{
	length=l1;
}
rectangle::calculate(int length,int breadth)
{
	return length * breadth;
}
void rectangle::display()
{
	cout<<"length:"<<length<<endl;
	cout<<"breadth:"<<breadth<<endl;
	cout<<"area of rectangle:"<<length * breadth<<endl;
}
int main()
{
	rectangle r,r1(10,20),r2(30);
	r.display();
	r1.display();//
	r2.display();
	return 0;
}