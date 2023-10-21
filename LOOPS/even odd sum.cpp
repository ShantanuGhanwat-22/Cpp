 #include<iostream>
 using namespace std;
 int main(){
 	int  sum_even =0, sum_odd=0;
	 for(int i=1;i<=20;i++)
	 {
	 	if(i%2==0)
	 	{
	 		sum_even = sum_even +i;
	 		cout<<sum_even<<"\t"<<endl;
	 		
		 }
		 else
		 {
		 	sum_odd = sum_odd+i;
		 	cout<<sum_odd<<"\t"<<endl;
		 }
		} 
 }
