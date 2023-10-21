#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0,originalno;
	cout<<"enter no.\n";
	cin>>num;
	originalno=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum= sum + rem*rem*rem;
		
	}
	if (sum==originalno)
	{
		cout<<"amstromg";}
	else
		cout<<"not amstrong";	
}
