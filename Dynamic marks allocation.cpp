#include<iostream>
using namespace std;
int main(){
	int m,n,i,sum;
	cout<<"enter no. of subjects ";
	cin>>m;
	cout<<"enter no. of characters ";
	cin>>n;
	int* marks_m=new int[m];
	char* name_n=new char[n+i];
	for(i=0;i<m;i++)
	{
		cin>> marks_m[i];
		int sum = sum + marks_m[i];
	  
	 float avg=(float) sum/m;
	 cout<<"enter name of student";
	 cin>>name_n;
	 cout<<"name is"<<name_n;
	 cout<<"avg is"<<avg;}
	 delete[]marks_m;
	 delete[]name_n;
}
