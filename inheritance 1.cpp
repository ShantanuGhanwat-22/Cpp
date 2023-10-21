#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"in default of A\n";
		}
		void display()
		{
			cout<<"im display of A class\n";
		
		}
};
class B: public A
{
	public:
		B()
		{
			cout<<" in default of B\n";
		}
		void display()
		{
			cout<<"in default of B class\n";
			
		}
};
int main()
{
	B bobj;
	bobj.display();
	
}
