#include<iostream>
using namespace std;


class Date1
{

int dd , mm, yyyy;

public:
	
	void getDate()
	{
	   cout<<"Give Date ";
	   cin>>dd;
	}
	
	void getMonth()
	{
	   cout<<"Give Month ";
	   cin>>mm;
	}
	
	void getYear()
	{
	   cout<<"Give Year ";
	   cin>>yyyy;
	}
	
	void setDate(int d)
	{
		dd = d;
	}
	
	void setMonth(int m)
	{
		mm = m;
	}
	
	void setYear(int y)
	{
		yyyy = y;
	}
	
	void display()
	{
		cout<<"DATE : "<<dd << "/"<<mm<<"/"<<yyyy;
	}
	

};


int main()
{
  Date1 D;
  D.getDate();
  D.getMonth();
  D.getYear();
  D.display();
  cout<<endl;
  
   cout<< " Set Different Date";
  int k ;
  cin>> k;
  D.setDate(k);
  D.display();	
   cout<< " Set Different Month";
   int p ;
  cin>> p;
  D.setDate(p);
  D.display();
   cout<< " Set Different Year";
   int q ;
  cin>> q;
  D.setDate(q);
  D.display();
}


