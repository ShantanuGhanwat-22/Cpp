#include<iostream>
using namespace std;
int fun();
static int count;
int main(){
	
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Count"<<count;
}
int fun(){
	static int x=0;
	cout<<x<<endl;
	x++;
	count++;
	
	return x;
	
}
