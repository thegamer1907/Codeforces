/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 April 2018 (Wednesday)
* Time:        10:52
*/

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<int> cat(100005);
vector<int> a[100005];
vector<int> vis(100005);
int ans,m;

void dfs(int par,int s,int till)
{
	vis[s] = 1;
	if(cat[s])
	{
		till++;
		if(till > m)
			return;
	}
	else
		till = 0;
	if(a[s].size() == 1 && s!=1)
		ans++;
	for(auto u : a[s])
	{
		if(!vis[u])
		{
			dfs(s,u,till);
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    	cin>>cat[i];
    for(int i=0;i<n-1;i++)
    {
    	cin>>x>>y;
    	a[x].pb(y);
    	a[y].pb(x);
    }
    dfs(-1,1,0);
    cout<<ans;
    return 0;
}