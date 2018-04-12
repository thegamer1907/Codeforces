#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<int> a[10005];
vector<int> b[10005];
int vis[10000];
vector<int> col(10005);
int ans;

void bfs()
{
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto u : a[x])
        {
            if(col[u]!=col[x])
                ans++;
            q.push(u);
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int v;
    for(int i=2;i<=n;i++)
    {
        cin>>v;
        a[v].pb(i);
        b[i].pb(v);
    }
    for(int i=1;i<=n;i++)
        cin>>col[i];
    bfs();
    cout<<ans+1;
    return 0;
}