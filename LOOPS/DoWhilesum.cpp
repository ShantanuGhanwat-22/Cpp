#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	
    // cout<<"enter the count to added:";
     //cin>>n;
	do
	{
		cout<<"Enter the Number:\n";
		cin>>n;
		sum=sum+n;
		
	}while(n!=0);
	
	cout<<"sum of the the given Numbers:\n"<<sum;
	
//	return 0;
}
