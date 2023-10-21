#include<iostream>
using namespace std;
void display(char='x',int=3);
int main(){
	cout<<"no. of args passed ";
	display();
	cout<<"first args passed ";
	display('#');
	cout<<"both args passed ";
	display('x',5);
}
void display(char c,int count)
	{
		for (int i=1;i<count;++i)
		{
			cout<<c;
		}
		cout<<endl;
	}

