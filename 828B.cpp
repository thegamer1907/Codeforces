#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
  char a[200][200];
  int n,m,mini=200,maxi=0,minj=200,maxj=0,cb=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          cin>>a[i][j];
          if(a[i][j]=='B')
          {
              cb++;
              mini = min(mini,i);
              maxi = max(maxi,i);
              maxj = max(maxj,j);
              minj = min(minj,j);
          }
      }
  }
  if(cb==0)
    cout<<1;
  else if(cb==1)
    cout<<0;
  else
  {
      int side = max(maxi-mini+1,maxj-minj+1);
      if(side>n || side>m)
        cout<<-1;
      else
      {
          cout<<(side*side)-cb;
      }
  }

}