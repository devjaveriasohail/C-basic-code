//Q#6 Write a program to print absolute value of a number entered by user
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	double num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<"The absolute value is "<<abs(num);
	return 0;
}