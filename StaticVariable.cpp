#include<iostream>
using namespace std;
int fun();
int main(){
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Final Value ="<<fun()<<endl;
	cout<<"Final Value ="<<fun()<<endl;
}
int fun(){
 static	int x=0;
	cout<<x<<endl;
	x++;
	return x;
}
