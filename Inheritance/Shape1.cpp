#include<iostream>
using namespace std;

class shape{
	
	public:
	virtual	int area()
		{
			return 0;
		}
		virtual void display()
		{
			cout<<"shape of Area:=0"<<endl;
		}
};

class square : public shape{
	
	int side;
	public:
		square(int s){
			
			side = s;
		}
	int area()
	{
		return side*side;
	}
	void display(){
		cout<<"side"<<side<<endl;
	}
};
class rectangle : public shape
{
	int length, bredth;
	public:
		rectangle(int l,int b)
		{
			length =l;
			bredth=b;
		}
		int area()
		{
			return length*bredth;
		}
		void display()
	{
		cout<<"length & bredth"<<length<<bredth<<endl;
	}
};

int main()
{
	shape* s = new shape();
	cout<<s->area()<<endl;
	
	
	s=new square(5);
	cout<<s->area()<<endl;

	
	s=new rectangle(4,8);
	cout<<s->area();

	
}
