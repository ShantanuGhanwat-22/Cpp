#include<iostream>
using namespace std;
int main()
{
	int stu, m1,m2,m3,m4,m5,sum;
	float avg;
	for(stu=1;stu<=5;stu++)
	{
		cout<<"enter 5 marks\n";
		cin>>m1>>m2>>m3>>m4>>m5;
		sum = m1+m2+m3+m4+m5;
		
		avg=(float)sum/5;
		cout<<"avg of student is\n"<<avg;
	}
};
