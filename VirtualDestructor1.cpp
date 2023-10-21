#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"in A dest";
		}
};
class B:public A{
	public:
		B(){
			cout<<"in B dest";
		}
};
int main(){
	A*aptr = new B();
	delete aptr;
}
