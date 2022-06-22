//Q#3	A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//	Ask user for quantity Suppose, one unit will cost 100.Judge and print total cost for user.
#include<iostream>
using namespace std;
int main(){
	int n ;
	int total=1;
	int tcost=1;
      cout<<"Enter a quantity number"<<endl;
 	  cin>>n;
 	  total=n*100;
 	if(total>1000)
	 {
	 tcost=total-(total*10/100);
 	 cout<<"The total cost is "<<tcost;
	 }
 	else
 	 cout<<"The total cost is "<<total;
 
return 0;
}