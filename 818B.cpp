#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> a(m),b(n+1,-1);
  vector<bool> vis(n+1,false);
  set<int> s;
  for(int i=1;i<=n;i++)
   s.insert(i);
  for(int i=0;i<m;i++)
   cin>>a[i];
   int cur,fin;
   int c=0;
  for(int i=0;i<m-1;i++)
  {
      cur = a[i];
      fin = a[i+1];
      if(fin<=cur)
      {
          c =  (n-cur)+fin;
          if(!vis[c] || (vis[c] && b[cur]==c))
          {
              vis[c]=true;
          if(b[cur]==-1)
           {b[cur]=c;s.erase(c);}
          else if(b[cur]!=c)
          {
              cout<<-1;
              return 0;
          }
          }
          else
          {
              cout<<-1;
              return 0;
          }
      }
      else if(fin>cur)
      {
          c = fin-cur;
          if(!vis[c] || (vis[c] && b[cur]==c))
          {
              vis[c]=true;
          if(b[cur]==-1)
           {b[cur]=c;s.erase(c);}
          else if(b[cur]!=c)
          {
              cout<<-1;
              return 0;
          }
          }
          else
          {
              cout<<-1;
              return 0;
          }
      }
  }
  for(int i=1;i<=n;i++)
  {
   if(b[i]!=-1)
   cout<<b[i]<<" ";
   else
   {
       cout<<*s.begin()<<" ";
       s.erase(*s.begin());
   }
  }
    return 0;
}