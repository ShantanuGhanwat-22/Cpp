#include<iostream>
using namespace std;
int main()
{
	int row,col;
	for( row=0;row<10;row++)
	{
		for(col=1;col<=row;col++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
