#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"in the display of A class\n";
		}
};

class B:public A
{
	
};

int main()
{
	B obj;
	obj.display();
}
