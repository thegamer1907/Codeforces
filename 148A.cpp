#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int vis[d+1]={0};
    for(int i=k;i<=d;i+=k)
        vis[i]=1;
    for(int i=l;i<=d;i+=l)
        vis[i]=1;
    for(int i=m;i<=d;i+=m)
        vis[i]=1;
    for(int i=n;i<=d;i+=n)
        vis[i]=1;
    int ans=0;
    for(int i=1;i<=d;i++)
        if(vis[i]==1)
          ans++;
    cout<<ans;
    return 0;
}