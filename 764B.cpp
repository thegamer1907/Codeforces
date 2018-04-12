#include <iostream>
using namespace std;


int main() {
 
 long long int n,i,j,temp;
 cin>>n;
 long long int a[n];
 for(long long int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 if(n%2==0)
 {
 for(i=0,j=n-1;i<=(n/2)-1;i+=2,j-=2)
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          
      }
	
 }
 else
 {
     for(i=0,j=n-1;i<=(n-1)/2;i+=2,j-=2)
     {
         temp=a[i];
          a[i]=a[j];
          a[j]=temp;
     }
 }
 for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}