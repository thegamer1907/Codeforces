#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

char adj[302][302];
vector<int> a(302);
int n;
vector<int> b,c;
int vis[302] = {0};

void dfs(int x)
{
    vis[x]=1;
    c.pb(x);
    b.pb(a[x]);
    for(int i=0;i<n;i++)
    {
        if(adj[x][i]=='1')
        {
            if(!vis[i])
                dfs(i);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>adj[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            b.clear();
            c.clear();
            dfs(i);
            sort(all(b));
            sort(all(c));
            for(int j=0;j<b.size();j++)
            {
                ans[c[j]] = b[j];
            }
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}