#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
//#include <bits/
using namespace std;

int main() {
     string a;
     int k;
     cin>>a;
     cin>>k;
    // cout<<a<<endl;
     if(a.length()<=k)
      {
          cout<<a.length()-1;
          return 0;
      }
      int gone=0,ck=0;
      for(int i=a.length()-1;i>=0;i--)
      {
          if(a[i]=='0')
           ck++;
           else
          gone++;
           if(ck==k)
            {
                cout<<gone;
                return 0;
            }
            if(gone>(a.length()-(k+1)))
            {
                cout<<a.length()-1;
                return 0;
            }
          
      }
	return 0;
}