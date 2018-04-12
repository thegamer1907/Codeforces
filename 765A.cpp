#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
   int n,c=0,flag=0;
   cin>>n;
   string home;
   cin>>home;
   vector <string> a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       flag=1;
       for(int j=0;j<3;j++)
       {
           if(!(home[j]==a[i][j]))
             flag=0;
       }
       if(flag)
        c++;
        flag=1;
       for(int j=5;j<8;j++)
       {
           if(!(home[j-5]==a[i][j]))
             flag=0;
       }
       if(flag)
        c--;
   }
   if(!c)
    cout<<"home";
   else
    cout<<"contest";
   return 0;
}