#include<iostream>
using namespace std;
template < class T>
int swap_n(T&a,T&b)
{
	T temp;
	temp =a;
	a=b;
	b=temp;
	return T;
	
}
int main()
{
	int m,n;
	m=10;n=20;
	swap_n(m,n);
	cout<<m<<" "<<n<<endl;
	return 0;
}
