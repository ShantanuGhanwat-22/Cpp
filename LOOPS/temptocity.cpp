#include<iostream>
using namespace std;

int main()
{
	
	int i,j;
	int temp [2][7];
	
	
	for(i=1;i<=2; i++)
	{
	    	cout<<"Enter the temp of city ";
		for(j=0; j<=6; j++)
		{
			
			cin>>temp[i][j];
		}
	}
	
	for(int k=1; k<=2; k++)
	{
		cout<<"Temp of 2 city ";
		for(int l=0;l<=6; l++)
		{
			cout<<temp[k][l]<<endl;
		}
	}
	
	
}
