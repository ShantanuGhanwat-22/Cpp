#include<iostream>
using namespace std;
class shape{
	virtual int area()=0;
	
};
class square:public shape{
	int side;
	public:
		square(int s){
			side=s;
		}
	int area(){
		return side*side;
	}
	
};
class rectangle:public shape{
	int len,breadth;
	public:
		rectangle(int l,int b){
			len=l;
			breadth=b;
		}
	int area(){
		return len*breadth;
	}
};
int main(){
	int choice,i;
	
	
	
	    do{
	cout<<"Enter choice:";
	    cin>>choice;	
	
	switch(choice){
		case 1:
		{
			square s(5);
			cout<<s.area();
		    break;}
		case 2:
			{
			rectangle r(10,20);
			cout<<r.area();
		    break;}  
////		default:
////			cout<<"invalid choice";
////			break;

	}
	cout<<"do you want to continue press 0";
	cin>>i;
	}while(i==0);
	
return  0;
}
