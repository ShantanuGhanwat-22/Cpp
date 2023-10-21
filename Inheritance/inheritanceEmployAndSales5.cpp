#include<iostream>
using namespace std;

class emp
{
	int id;
	public:
		emp();
		emp(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};

	emp::emp()
		{	
	cout<<"in the default of emp\n";
	id=0;
		}
	emp::emp(int i)
	{
	cout<<"in para of emp\n";
		}
	
	void emp::display()
	{
		cout<<"id of an emp if"<<id<<endl;
	}
	
	class wageEmp :public emp
	{
		int hrs,rate;
		public:
			wageEmp();
			wageEmp(int,int,int);
			void display();
			int findsalary();
	};
	
	wageEmp::wageEmp()
	{
		cout<<"in default of wage\n";
		hrs=0;
		rate=0;
	}
	wageEmp::wageEmp(int i,int h,int r):emp(i)
	{
		cout<<"in the para of wage\n";
		hrs=h;
		rate=r;
	}
	
	int wageEmp::findsalary()
	{
		return hrs*rate;
	}
	void wageEmp::display()
	{
		emp::display();
		cout<<hrs<<endl;
		cout<<rate<<endl;
	}
	
	class salesmanager:public wageEmp
	{
		int sales,com;
		public:
			salesmanager();
			salesmanager(int,int,int,int,int);
			void display();
			int findsalary();
	};
	
	salesmanager::salesmanager()
	{
		cout<<"in default of sales\n";
		sales=com=0;
	}
	
	salesmanager::salesmanager(int i,int h,int r,int s,int c)
	{
		cout<<"in the para of sales\n";
		sales=s;
		com=c;
		
	}
	void salesmanager::display()
	{
		wageEmp::display();
		cout<<"sales of an emp is:"<<sales<<endl;
		cout<<"sales of an emp is:"<<com<<endl;
	}
	
	int salesmanager::findsalary()
	{
		return (wageEmp::findsalary()) + sales*com;
	}
	
	int main()
	{
		salesmanager *sn=new salesmanager(101,10,500,2000,1);
		sn->display();
		if(sn)
	    delete sn;
		cout<<"salary is :\n "<<sn->findsalary();
	
	
	
	}
