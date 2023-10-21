#include<iostream>
using namespace std;
int main(){
	int num,fact=1,i=1;
	cout<<"enter no.";
	cin>>num;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	cout<<"Factorial of given number is "<<fact<<"\t";
}
