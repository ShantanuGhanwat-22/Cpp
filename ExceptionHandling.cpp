#include<iostream>
using namespace std;
float division(int x,int y){
if (y==0){
	throw"attempted to divide by 0";
}
	return 0;
}
int main(){
	int i=25;
	int j=0;
	float k;
	try{
		cout<<"enter the value"<<endl;
		k=division(i,j);
		cout<<k<<endl;
	}
	catch(char* e){
		cerr<<e<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}
