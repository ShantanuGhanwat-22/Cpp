#include<iostream>
using namespace std;
class complex{
	int r,i;
	static int cnt;
	public:
		complex(){
			cout<<"default is invoked"<<endl;
			r=5;
			i=5;
			cnt++;
		}
		complex(int r,int i){
			cout<<"parameterized is invoked"<<endl;
			this->i=i;
			this->r=r;
			cnt++;
		}
		static int getcnt(){
			return cnt;
		}
};
int complex::cnt=0;
int main(){
	complex c1;
	complex c2(10,10);
	cout<<"no. of object created "<<complex::getcnt()<<endl;
	cout<<"Size of Object "<<sizeof(c1)<<endl;
}
