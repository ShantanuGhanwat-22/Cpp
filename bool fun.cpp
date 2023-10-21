#include<iostream>
using namespace std;
void function (int a,bool flag=true)
{
	if (flag=true)
	{
		cout<<"flag is true.a="<<a;
	}
	else
	{
		cout<<"flag is false.a="<<a;
	}
}
int main()
{
	function(200,false);
}
