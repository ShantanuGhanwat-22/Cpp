#include<iostream>
using namespace std;

class Account
{
	char name[10]; 
	static int roi;
	int accno;
	
	public:
		
		void getData()
		{
			cout<<"enter the name"<<endl;
			cin>>name;
			cout<<" account no ="<<endl;
			cin>>accno;	
		}
		
		void display()
		{
			cout<<"the name= "<<name<<"account no = "<<accno<<"rate of interest= "<<roi<<endl;
		}
	
};

int Account::roi=9;

int main()
{
	Account a1;
	a1.getData();
	Account a2;
	a2.getData();
	
	a1.display();
	a2.display();
	
}
