#include<iostream>
#include<string.h>
using namespace std;


class student
{
	
		int rollNo;
	char name[20];
	double fee;
	
	public:
		
	student(int p , char na[] , double q)
	{
		
		rollNo = p;
        strcpy(name,na);

		fee = q;
		
	}
	
	void display()
	{
		cout << "Roll no "<<rollNo << "\t" <<"Name "<<name<<"\t"<<"fee"<<fee;
	}
	
};

int main()
{
	
	
	student s(10, "Shantanu",100000);
	s.display();
	
}





