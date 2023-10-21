

#include<iostream>
using namespace std;

class A
{
	int c =10;

public:
	int a= 6;
protected:
	int b=9;
public:
	void display()
	{
		cout<<" in display of A \n" ;
	}
};

class B : protected A
{
	public:
		void show()
		{
			cout<<a<<b;//becomes protected in derieved class
		}
};
class C : protected B
{
	public:
		void show()
		{
		cout<<a<<b;//becomes protected in derieved class
	}
};

int main()
{
	B bobj;
	bobj.show();
//	bobj.display(); error not accesible in private and protected
    C obj;
   obj.show();
}
