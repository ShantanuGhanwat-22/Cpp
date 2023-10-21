#include<iostream>
using namespace std;
class complex{
	int r,i;
	public: static const int cnt;
	private: static const int cnt1;
	public:
		complex(){
			cout<<"default is invoked"<<endl;
			r=5;
			i=5;
			
		}
		
		
		static int getcnt(){
			return cnt1;}
		
};
const int complex::cnt=5;
const int complex::cnt1=10;
int main(){
	complex c1;
	cout<<"no. of object created "<<complex::getcnt()<<endl;
	cout<<"Size of Object "<<sizeof(c1)<<endl;
	cout<<"no. of object created "<<complex::cnt<<endl;
}
