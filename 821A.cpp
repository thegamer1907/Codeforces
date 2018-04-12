#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main() {
    int n,tf,flag;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
       cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
       {
          if(a[i][j]!=1)
          {
            int flag=0;
            for(int k=0;k<n;k++)
            {
              if(k==j || a[i][k]>a[i][j])
               continue;
              tf = a[i][j] - a[i][k];
              for(int h=0;h<n;h++)
               {
                 if(h==i)
                  continue;
                 if(a[h][j]==tf)
                  flag=1;
               }
            }
            if(flag==0)
             {
               cout<<"No";
               return 0;
             }
          }
       }
    }
    cout<<"Yes"<<endl;
	return 0;
}