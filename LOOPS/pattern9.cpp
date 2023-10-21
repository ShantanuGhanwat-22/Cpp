#include<iostream>
using namespace std;

int main()
{


int k;
	k=4;
	for(int i =1; i<k; i++)
	{
		
		for(int j=1; j<k; j++)
		{
			if (j >= k)
                cout << "* ";
            else
                cout << " ";
		
		
	}
	k--;
	cout<<endl;
}
	
}
