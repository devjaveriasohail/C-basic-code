//Q#2 write a c++ program, to calculate sum,average,MAX,MIN from an Array.
//must use function concepts to solve them and pass an array as parameter to those function, 
//eg. sum(int arr[]), array length must be 10.
#include<iostream>
using namespace std;

int sum(int s[10]);
int average(int ave[10]);
void maxmium(int max[10]);
void minmum( int min[10]);

int main()
    {
      int arr[10];
      int i;
      for( i=0; i<10; i++)
		{
		 cout<<"Enter the number in array"<<endl;
		 cin>>arr[i];
	   }
	  cout<<"The sum of number in array is "<<sum(arr)<<endl;
	  cout<<"The average of number in array is "<<average(arr)<<endl;
	  maxmium(arr);
	  minmum(arr);
	  return 0;
   }
   int sum(int s[10])
        { int su=0;
            {
              for(int i=0; i<=10; i++)
              su=su+s[i];
            }
           	return su;
        }
  int average(int ave[10])
   {
	 
      int av;
      int su=0;
        {
         for(int i=0; i<=10; i++)
         su=su+ave[i];
         av=su/2;
       }
   	return av;
   }
void maxmium(int max[10])
   { 
      int ma=max[0];
	  for(int i=0; i<=10; i++)
	   {
	      if(max[i]>ma)
	      ma=max[i];
    	}
    	cout<<"The maxium number is "<<ma<<endl;
      
   }
void minmum( int min[10])
   { 
      int mi=min[0];
	  for(int i=0; i<=10; i++)
	   {
	      if(min[i]<mi)
	      mi=min[i];
	    }
	     cout<<"The minmum number is "<<mi<<endl;
      
   }
   
    	
    	
