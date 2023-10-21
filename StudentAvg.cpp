#include<iostream>
using namespace std;
class Student{
	int rno,m1,m2;
	public:
		void get(){
			cout<<"enter rno";
			cin>>rno;
			cout<<"enter marks 1";
			cin>>m1;
			cout<<"enter marks 2";
			cin>>m2;
		}
		int set(){
			return m1+m2;
		}
};
class sport{
	int sm;
	public:
		void getsm(){
			cout<<"enter sports marks";
			cin>>sm;
		}
		int set1(){
			return sm;
		}
};
class Result:public Student,public sport{
	int total;
	float avg;
	public:
	float result(){
		total = Student::set()+sport::set1();
		avg = (float)total/3;
		return avg;
	}
};
int main(){
	Result r;
	r.get();
	r.getsm();
	r.set();
	r.set1();
	cout<<"avg of student is"<<r.result();
}
