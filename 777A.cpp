#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
     int n,k,ans;
     cin>>n;
     cin>>k;
     n=n%6;
     //cout<<n;
     if(n==0)
      {cout<<k;
      return 0;}
      switch(n)
      {
          case 1:
          if(k==0)
           ans=1;
           else if(k==1)
            ans=0;
            else
            ans=2;
            break;
          case 2:if(k==0)
           ans=1;
           else if(k==1)
            ans=2;
            else
            ans=0;
            break;
          case 3:if(k==0)
           ans=2;
           else if(k==1)
            ans=1;
            else
            ans=0;
            break;
          case 4:if(k==0)
           ans=2;
           else if(k==1)
            ans=0;
            else
            ans=1;
            break;
          case 5:if(k==0)
           ans=0;
           else if(k==1)
            ans=2;
            else
            ans=1;
            break;
      }
      cout<<ans;
	return 0;
}