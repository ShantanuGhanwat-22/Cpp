#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"in default of A \n";
		}
		A(int a)
		{
			cout<<"in the para of A \n";
			this->a=a;
		}
		void display()
		{
			cout<<"in the display of A \n";
			cout<<"value of a "<<a<<endl;
		}
		
};

class B : public A
{
	int b;
	public:
		B()
		{
			cout<<" int default of B \n";
		}
			B(int b) : A(10)
			{
			
			cout<<"in para of B \n";
			this ->b=b;
		
		}
		void display()
		{
			A::display();
			
				cout<<b<<endl;
			
		}
 } ;
 
 
 int main()
 {
 	B obj(20);
 	obj.display();
 	cout<<sizeof(obj);
 }
