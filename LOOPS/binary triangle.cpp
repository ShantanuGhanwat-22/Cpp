#include<iostream>
using namespace std;
int main()
{
	int row,col,num=1;
	for( row=1;row<10;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col==1||col==row)
			cout<<"1";
		else
			cout<<"0";
		}
		cout<<"\n";
	}
}
