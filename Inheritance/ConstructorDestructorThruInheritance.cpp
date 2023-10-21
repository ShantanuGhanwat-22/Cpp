#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A constructor called"<<endl;
		}
		~A(){
			cout<<"A desstructor called"<<endl;
		}
};
class B : public A{
public:
		B(){
			cout<<"B constructor called"<<endl;
		}
		~B(){
			cout<<"B desstructor called"<<endl;
		}
	
};
class C : public A{
public:
		C(){
			cout<<"C constructor called"<<endl;
		}
		~C(){
			cout<<"C desstructor called"<<endl;
		}
	
};
int main(){
	B bobj;
	C cobj;
	
}

