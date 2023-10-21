#include<iostream>
using namespace std;
class cDate{
	int Day,Month,Year;
	public:
		cDate(){
			Day=10;
			Month=9;
			Year=2023;
		}
		cDate(int d,int m,int y){
			cout<<"in Date Constructor";
			Day=d;
			Month=m;
			Year=y;
		}
		void Display(){
			cout<<"day"<<Day<<endl;
			cout<<"day"<<Month<<endl;
			cout<<"day"<<Year<<endl;
		}
};
class cEmployee{
	int Id;
	int BasicSal;
	cDate date;
	public:
		cEmployee(){
			Id=1;
			BasicSal=1000;
			date=cDate();
		}
			cEmployee (int,int,int,int,int);
			void Display();
		
};
cEmployee::cEmployee(int i,int sal,int d,int n,int y):date(d,n,y){
	cout<<"In emp constructor";
	Id=i;
	BasicSal=sal;
}
void cEmployee::Display(){
	cout<<"Id: "<<Id<<endl;
	cout<<"Salary: "<<BasicSal<<endl;
	date.Display();
}
int main(){
	cEmployee e1(2,10000,10,9,2023);
	e1.Display();
	return 0;
}
