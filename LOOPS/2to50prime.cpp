#include<iostream>
using namespace std;
int main(){
	int i,j,cnt=0;
	for(int i=2;i<50;i++)
	{	
	int k =1;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
			k=0;
			break;
		}

			if (k == 1) { 
            cout<<i<<endl; 
            cnt++; 
        } 
    } 
    return 0; }

		
