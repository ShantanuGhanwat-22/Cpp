#include<iostream>
using namespace std;



void display()
{
    for(int i =0;i<11;i++)
    {
    	cout<<"-";
	}

}
int main(){

display();
cout<<"\n Datatype"<<" Size of DT"<<endl;
display();
cout<<"\n INT"<<"    "<<sizeof(int)<<endl;
display();
cout<<"\n FLOAT"<<"   "<<sizeof(float)<<endl;
display();
cout<<"\n CHAR"<<"   "<<sizeof(char)<<endl;
display();
cout<<"\n DOUBLE"<<"   "<<sizeof(double)<<endl;
display();
}
