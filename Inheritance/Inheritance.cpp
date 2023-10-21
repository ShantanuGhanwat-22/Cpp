#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"in the Default of A\n";
		}
		void display()
		{
			cout<<"in the Display of A class \n";
			
		}

};

class B:public A
{
	public:
		B()
		{
			cout<<"in the Default of B\n";
		}
		void display()
		{
			cout<<"in the display of B class\n";
		}
	
};

int main()
{
	B bobj;
	bobj.display();
}
