//Write a program that takes an input as a positive number by the user and display to the user as output,
// if user enter a negative number that should be skipped
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(num>=0)
	{cout<<"you enter a number "<<num<<endl;}
	else
	cout<<"you number is negative";
	return 0;
	}
