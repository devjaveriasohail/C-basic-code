//Q#5A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//	Ask user for their salary and year of service and print the net bonus amount.
#include<iostream>
using namespace std;
int main(){
	float salary ;
	int years;
	int bouns=1;
      cout<<"Enter your salary"<<endl;
 	  cin>>salary;
 	  cout<<"Enter your years of service"<<endl;
 	  cin>>years;
 	  
 	if(years>5)
	 {
	 bouns=salary+(salary*5/100);
 	 cout<<"Your salary with bouns is "<<bouns;
	 }
 	else
 	 cout<<"Sorry,your year of service is less.";
 
return 0;
}