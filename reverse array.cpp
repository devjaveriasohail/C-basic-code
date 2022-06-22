//Q#3:write a cpp function to revese the order of an array, array length must be 10
#include<iostream>
using namespace std;
int main()
{
int arr[10];
 cout<<"Enter the number in array"<<endl;
 for(int i=0;i<10; i++)
 cin>>arr[i];



cout<<"The number in reverse order is"<<endl;
for(int i=9;i>=0; i--)
cout<<arr[i]<<endl;
	
}