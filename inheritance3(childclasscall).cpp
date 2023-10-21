#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"in display of A\n";
		}
};
class B: public A
{
};
int main()
{
	B bobj;
	bobj.display();
}
