// public data member in derieved class


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

class B : public A
{
	public:
		void show()
		{
			cout<<a<<b;//becomes public in derieved class
		}
};
class C :public B
{
	public:
		void show()
		{
		cout<<a<<b;//becomes public in derieved class
	}
};

int main()
{
	B bobj;
	bobj.show();
	bobj.display(); 
    C obj;
   obj.show();
}
