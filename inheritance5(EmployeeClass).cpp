#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};
employee::employee()
{
	cout<<"in default of employe";
	id=0;
}
employee::employee(int i){
	cout<<"in para of emp";
	id=1;
}
void employee::display()
{
	cout<<"id of employe is"<<id<<endl;
}
class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};
wageemployee::wageemployee::wageemployee(){
	cout<<"in default of wage";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(1)
{
	cout<<"in para of wage\n";
	hrs=h;
	rate=r;
}
int wageemployee::findsalary()
{
	return hrs*rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager()
{
	cout<<"in default of sales\n";
	sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n";
	sales=s;
	comm=c;
}
void salesmanager::display(){
	wageemployee::display();
	cout<<"sales of an employee is"<<sales<<endl;
	cout<<"comm of an emp is"<<comm<<endl;
}
int salesmanager::findsalary(){
	return (wageemployee::findsalary())+sales*comm;
}
int main()
{
	salesmanager*sm=new salesmanager(101,10,600,2000,1);
	sm->display();
//	if(sm)
//	delete[] sm;
	cout<<"salary is "<< sm->findsalary();
}