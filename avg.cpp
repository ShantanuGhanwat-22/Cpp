#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"enter marks ";
	cin>>a>>b>>c>>d>>e;
	int sum = a+b+c+d+e;
	float avg =(float) sum/5;
	cout<<"Average Marks of Student is "<<avg;
}
