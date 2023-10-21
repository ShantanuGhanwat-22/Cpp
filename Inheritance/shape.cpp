#include<iostream>
using namespace std;
class shape{
	
	protected:
		int length,breadth;
	public:
	
		}
		shape(int l,int b){
	  	length = l;
	  	breadth = b;
		}
		void display(){
			cout<<"length is "<<length<<endl;
		}
		int area(){
			cout<<"Area from Parent class: "<<endl;
			return 0;
		}
};
class square : public shape
{
	public:
	square(int l=0,int b=0): shape(l,b)
	{
		cout<<"default square called"<<endl;
	}
	
	
	int area(){
		cout<<"Area of square"<<length*breadth<<endl;
		return (length*breadth);
	}
};
int main(){
	shape* s;
	square sq(5,5);
	s=&sq;
	s->area();
}
