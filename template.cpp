#include<iostream>
using namespace std;
template < class T>
T add (T&a,T&b)
{
	T result =a+b;
	return result;
	
}
int main()
{
	int i=2,j=3;
	float m=2.3,n=1.2;
	cout<<"Addition of i and j "<<add(i,j)<<endl;
	//out<<n;
	cout<<"Addition of m and n "<<add(m,n)<<endl;
	return 0;
}
