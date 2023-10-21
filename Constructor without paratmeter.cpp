#include<iostream>
using namespace std;
class student{
	int rollNo;
	char name[20];
	double fee;
	public:
		student(){
			cout<<"enter roll no.";
			cin>>rollNo;
			cout<<"enter name";
			cin>>name;
			cout<<"enter fee";
			cin>>fee;
		}
		void display(){
			cout<<endl<<rollNo<<"\t"<<name<<"\t"<<fee;
		}
};
int main()
{
	student s;
	s.display();
}


