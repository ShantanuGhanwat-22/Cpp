#include<iostream>
using namespace std;
class A
{
	int c;
	public:	int a;
    protected:	int b;
	public:
	void display()
	{
		cout<<"in display of A\n";
				}			
};
class B:public A
{
	public:
		void show()
		{
			cout<<a<<b;
		}
};
class C:public B
{
	public: void show ()
		{
			cout<<a<<b;
		}
};
int main()
{
	B bobj;
	bobj.show();
    C cobj;
    cobj.show();
    bobj.display();
}
