//Q#4 C++ program that takes input base and height of a triangle from the user, calcuales the area 
//of a trianlge and display it to the user... by using functions, function name must be "Area"
#include<iostream>
using namespace std;
float area(float b ,float h);
int main()
{ 
float base;
float height;
   cout<<"Enter the height of triangle "<<endl;
   cin>>height;
cout<<"Enter the base of triangle "<<endl;
cin>>base;
   area(base,height);
   cout<<"The area of triangle is "<<area(base,height);
 
 return 0;
 }
 float area(float b ,float h)
 {
  float a=1;
  a=0.5*b*h;
  
  return a;
 	
 }
 