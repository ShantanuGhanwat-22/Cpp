#include<iostream>
using namespace std;

class employee
{
    int id=0;
    public:
        employee(){
            cout<<"default EMPLOYEE";
            
        }
        employee(int i){
            id = i;
        }
        void display(){
            cout<<"id of employee"<<id<<endl;
        }
        
        int findSalary(){
            return 0;
        }
};

class wadgeEmployee : public employee
{
    
    int hrs;
    int rate;
    
    public:
        wadgeEmployee(){
            cout<<"default wadgeEmployee\n";
            hrs = 0;
            rate =0;
        }
        
        wadgeEmployee(int i , int h , int r):employee(i)
        {
            hrs = h;
            rate = r;
            
        }
       int findSalary()
       {
           return hrs*rate;
       }
       
       void display()
       {
         employee::display();
         cout<<hrs <<" "<<rate<<endl;    
   }
    
    
    
};

class salesManager : public wadgeEmployee
{
    int sale;
    int com;
    public :
        salesManager(){
            cout<<"default salesManager\n";
             sale = 0;
             com = 0;  
        }
        
        salesManager(int i , int h , int r , int s , int c):wadgeEmployee(i , h ,r)
        {
            sale = s;
            com = c;
        }
        
        int findSalary(){
            return wadgeEmployee::findSalary() + sale*com;
        }
        void display(){
            wadgeEmployee::display();
            cout<<"sales ="<< sale<<endl;
            cout<<"commision ="<< com<<endl;
        }
};
int main(){
    employee* ptr ;
    employee e1(12);
    ptr = &e1;
    cout<<ptr->findSalary()<<endl; 
    
    
    wadgeEmployee we1(11,12,13);
    ptr = &we1;
    cout<<ptr->findSalary()<<endl;
    
    salesManager sm;
    ptr = &sm;
    cout<<ptr->findSalary();
}





