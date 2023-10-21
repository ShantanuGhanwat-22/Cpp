#include<iostream>
using namespace std;

class A
{
		
    int a;
	public:
	 
		A(){
			cout<<"in default of A\n";
		}
		A(int );
		void display()
		{
			cout<<"in the display of A class\n"<<a<<endl;
		}
};
A::A(int p)
{
	cout<<"In the para of A \n";
	a=p;
}
class B:public A
{
	int b;
	public:
	B(int, int);
	void display(); 
};
B::B(int p, int q): A(p)
{
	cout<<"in the para of B \n";
//	a=p;  //NOT ALLOWED A IS PRIVATE
	b=q;
}
void B ::display()
{
	A::display();
	cout<<b<<endl;
}
int main()
{
	B obj(10,20);
	obj.display();
}
