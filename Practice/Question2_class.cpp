#include<iostream>
#include<string>
using namespace std;

class Employee{
	int id;
	string name;
	public:
		Employee(){
			id=0;
			cout<<"In Default Constructor of Employee"<<endl;//destructor 
		}
		
		Employee(int i){
			id=i;
			cout<<"Employee id :"<<id<<endl;
		}
			Employee(int i,string n){
		    name =n;
		    cout<<"Name of Employee: "<<name<<endl;
			id=i;
			cout<<"Employee id :"<<id<<endl;
			
		}
		
		void setdata(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter id: ";
			cin>>id;
		}
		void display(){
			cout<<"Employee name is: "<<name<<endl;
			cout<<"Employee id: "<<id<<endl;
			
		}
       
      	~Employee(){
			cout<<"In Destructor of Employee"<<endl;//destructor 
		}

};
class Developer:public Employee{
  int bonus;
	public:
		Developer(){
		    bonus=0;
			cout<<"In Default Constructor of Developer"<<endl;
		}
		Developer(int b,int i):Employee(i){
			bonus=b;
			cout<<"Bonus is:"<<bonus<<endl;
		}
		~Developer(){
			cout<<"In Destructor of Developer"<<endl;//destructor 
		}
};
class UIDeveloper:public Developer{
	int sal;
	public:
		UIDeveloper(){
			sal=0;
			cout<<"In Default Constructor of UIDeveloper"<<endl;
		}
//			UIDeveloper(UIDeveloper&){
//			cout<<"in default copy constructor of UIDeveloper"<<endl;
//		}
		
		UIDeveloper(int i,int b,int s):Developer(b,i){
			sal=s;
		
		}
		~UIDeveloper(){
			cout<<"in Destructor of UIDeveloper"<<endl; //destructor 
		}
		void display();		
};
void UIDeveloper::display(){
	cout<<"Salary is:"<<sal<<endl;
}
int main(){
	UIDeveloper u1;
	cout<<endl;
	UIDeveloper u2(1,30000,60000);
	u2.display();
	cout<<endl;
	UIDeveloper u3=u2;//defult copy constructor
	u3.display();
	cout<<endl;
	Employee e1(1);
	e1.display();
	Employee e2(6,"Shantanu");
	e2.display();
	Employee arr[3];
	for(int i=0;i<3;i++){//object array
		arr[i].setdata();
	}
	for(int i=0;i<3;i++){
		arr[i].display();
	}
	
}
