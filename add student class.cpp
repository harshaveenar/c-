#include<iostream>
#include<string.h>
using namespace std;
class student{
	int no;
	string name;
	public:
		student();
		student(int,char *);
	void display();
};
student::student(){
	no=0;
	name="unknown";
}
student::student(int x,char *y){
	no=x;
	name=y;
}
void student::display(){
	cout<<"reg no:"<<no<<endl;
	cout<<"name:"<<name<<endl;
}
int main(){
	student s();
	student s1(1144,"harsha");
	s1.display();
	return 0;
}