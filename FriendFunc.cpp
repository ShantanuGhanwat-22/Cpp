#include<iostream>
using namespace std;
class temp{
	int x;
	public:
		void get();
		void show();
		friend void add(temp&);
};
void temp::show()
	{
			cout<<"value of x is"<<x;
	}
	void add(temp &t1){
		cout<<"in friend func";
		t1.x=t1.x+6;
}
void temp::get(){
	cout<<"accept x";
	cin>>x;
}
int main(){
	temp t;
	t.get();
	add (t);
	t.show();
}
