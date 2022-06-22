//Q#3write function to find out if number is prime or not.
#include<iostream>
using namespace std;
void prime(int num)
{ int i, m=0, flag=0;
  
   if(num==0 || num==1)
   cout<<"The Number "<<num<<"is not Prime."<<endl; 
   else
   { 
        m=num/2;  
        for(i = 2; i <= m; i++)  
            {  
             if(num % i == 0)  
                {
	              cout<<"The Number "<<num<<" is not Prime."<<endl;  
                  flag=1;  
                  break;  
                }  
           }  
        if (flag==0)  
        cout << "The Number "<<num<<" is Prime."<<endl;
   }
}
int main()
{ 
 int n;
 cout<<"Enter a number "<<endl;
 cin>>n;
 prime(n);
 return 0;
 }