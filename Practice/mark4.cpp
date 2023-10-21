#include<iostream>
using namespace std;

class employee{
	int id;
	float sal;
	public: 
		employee(){
			id=sal=0;
		}
		employee(int i,float s){
			id=i;
			sal=s;
		}
		int getid(){
			cout<<"enter Id";
			cin>>id;}
		int setid(){
//			cin>>id;
			return id;
		}
		float getsal(){
			cout<<"enter salary";
			cin>>sal;}
		float setsal(){
//			cin>>sal;
			return sal;
		}
		void display(){
			
		//	cout<<"Employee Id : "<<id<<endl<<"Employee Salary"<<sal<<endl;
		}
};

class manager: virtual public employee{
	float bonus;
	public:
		manager(){
			bonus=0;
		}
		manager(int i,float s,float b):employee(i,s){
			bonus=b;
		}
		float getbonus(){
			cout<<"enter bonus";
			cin>>bonus;
		}
		float setbonus(float){
			return bonus;
		}
		void display(){
			employee::display();
			getbonus();
			employee::getid();
			employee::getsal();
			cout<<"Bonus received"<<bonus<<endl;
		}
		
};
class salesman: virtual public employee{
	float comm;
	public:
		salesman(){
			comm=0;
		}
		salesman(float c){
			comm=c;
		}
		float getcomm(){
			cout<<"Enter commision";
			cin>>comm;
		}
		float setcomm(){
			return comm;
		}
		void display(){
			employee::display();
			getcomm();
//			employee::getid();
//			employee::getsal();
			cout<<"commision received"<<comm<<endl;
		}
};
class smanager: public salesman, public manager{
		public:
			smanager();
			smanager(int i,float s,float b, float c):manager(i,s,b),salesman(c){		
				
			}
			void display(){
				employee::display();
				salesman::display();
				manager::display();
				cout<<"manager called"<<endl;
			}
};
int main(){
	employee e;
//	e.display();
//	manager m;
//	m.display();
//	salesman sm;
//	sm.display();
	smanager sm1(1,1000.0f,100.0f,10.0f);
	sm1.display();
}
