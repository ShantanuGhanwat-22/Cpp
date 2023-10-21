#include<iostream>
using namespace std;

int main(){
	

	int m,n;
	float avg;
	cout<<"Enter the number of subject\n";
	cin>>m;
	cout<<"Enter the number of charectar\n";
	cin>>n;
		int* mark = new int[m];
	    char* name= new char[n+1];
	  cout<<"Enter the marks"<<endl;
	for(int i =0;i<m;i++){
		cin>>mark[i];
		int sum = sum+mark[i];
	  avg = (float)sum/m;
	}
	cout<<"Enter name of student";
	cin>>name;
	cout<<"name is :"<<name<<endl;
	cout<<"avg is : "<<avg<<endl;
	
	delete[] mark;
	delete[] name;
}
