#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,x;
    cin>>n>>m;
    vector<int> ord(m);
    stack<int> s1,s2;
    vector<int> vis(n+1,0);
    vector<int> w(n+1);
    for(int i=1;i<=n;i++)
        cin>>w[i];
    for(int i=0;i<m;i++)
    {
        cin>>x;
        ord[i] = x;
        if(!vis[x])
        {
            vis[x]=1;
            //cout<<x;
            s2.push(x);
        }
    }
    while(!s2.empty())
    {
        x = s2.top();
        s2.pop();
        s1.push(x);
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        while((s1.top())!=ord[i])
        {
            x = s1.top();
            ans+=w[x];
            s1.pop();
            s2.push(x);
        }
        x = s1.top();
        s1.pop();
       while(!s2.empty())
       {
        int x = s2.top();
        s2.pop();
        s1.push(x);
       }
       s1.push(x);
    }
    cout<<ans;
    return 0;
}