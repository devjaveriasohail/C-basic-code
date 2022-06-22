//Q#1 Write a program to print the circumference and area of a circle of radius
// entered by user by defining your own function
#include<iostream>
using namespace std;

void circle(float r)
{ float cirum,area;
     area= r*r*3.141;
     cirum=2*3.141*r;
  cout<<"The area of circle is "<<area<<endl;
  cout<<"The circumference of circle is "<<cirum;
}

int main()
{ 
 float r;
 
 cout<<"Enter the radius of circle "<<endl;
 cin>>r;
 circle(r);
 
  return 0;
}


	