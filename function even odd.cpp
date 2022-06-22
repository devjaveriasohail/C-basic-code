//Q#2write a c++ function to find out whether a given number is even or odd.
#include<iostream>
using namespace std;
void check(int num);
int main()
{ 
 int n;
 cout<<"Enter a number "<<endl;
 cin>>n;
 check(n);
 return 0;
 }
 void check(int num)
 {if(num%2==0)
	 cout<<"The number "<<num<<" is even.";
 	else
 	 cout<<"The number "<<num<<" is odd."; 
 	
 }
 