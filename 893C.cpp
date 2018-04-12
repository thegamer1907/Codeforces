#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

int vis[100005] = {0};
vector<ll> a[100005];
vector<ll> b;
vector<ll> g(100005);
void dfs(int s)
{
    vis[s] = 1;
    b.pb(g[s]);
    for(ll u: a[s])
    {
        if(!vis[u])
            dfs(u);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,u,v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>g[i];
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        a[u-1].pb(v-1);
        a[v-1].pb(u-1);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            b.clear();
            dfs(i);
            sort(all(b));
            ans+=b[0];
        }
    }
    cout<<ans;
    return 0;
}