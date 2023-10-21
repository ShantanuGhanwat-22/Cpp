#include<iostream>
using namespace std;

class faculty{
	int id;
	char name[100];
	public: 
		void setf(){
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"faculty enter name"<<endl;
			cin>>name;
		}
		void display1(){
			cout<<"faculty name : "<<name<<endl<<"faculty id : "<<id<<endl;
		}
};
class student : public faculty{

	int rollno,fee;
	char course[100],sname[100];
	public: 
		void sets()
			{
				setf();
					cout<<"student enter name : "<<endl;
					cin>>sname;
					cout<<"enter roll no. : "<<endl;
					cin>>rollno;
					cout<<"enter course : "<<endl;
					cin>>course;
			}
		
		void display(){
			faculty::display1();
			cout<<"student name : "<<sname<<endl<<"student Roll No. : "<<rollno<<endl<<"student course : "<<course<<endl;
			
		}
};
int main(){
//	student* ptr =new student();
//	ptr->sets();
//	ptr->display() ;
student s;
s.sets();
s.display();
	


	
}
