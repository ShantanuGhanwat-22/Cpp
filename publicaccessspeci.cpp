#include<iostream>
using namespace std;
class A
{
	int c=30;
	public:	int a=10;
    protected:	int b=20;
	public:
	void display()
	{
		cout<<"in display of A\n"<<c;
				}			
};
class B:public A
{
	public:
		void show()
		{
			cout<<a<<b<<endl;
			
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
