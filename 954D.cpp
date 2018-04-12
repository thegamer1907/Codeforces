#include <bits/stdc++.h>
using namespace std;

vector<int> a[1005];
vector<int> vis(1005);
int ad[1005][1005];
vector<int> dist_s(1005,INT_MAX);
vector<int> dist_t(1005,INT_MAX);
void bfs1(int s)
{
    dist_s[s] = 0;
    queue<int> q;
    q.push(s);
    vis[s] =1;
    while(!q.empty())
    {
        auto u = q.front();
        q.pop();
        for(auto v : a[u])
        {
            if(!vis[v])
            {
                vis[v] = 1;
                dist_s[v] = dist_s[u] + 1;
                q.push(v);
            }
        }
        //vis[u] = 1;
    }
}

void bfs2(int s)
{
    fill(vis.begin(),vis.end(),0);
    dist_t[s] = 0;
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty())
    {
        auto u = q.front();
        q.pop();
        for(auto v : a[u])
        {
            if(!vis[v])
            {
                vis[v] = 1;
                dist_t[v] = dist_t[u] + 1;
                q.push(v);
            }
        }
        //vis[u] = 1;
    }
}


int main() {
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	int u,v;
	int ans = 0;
	for(int i=0;i<m;i++)
	{
	    cin>>u>>v;
	    a[u].push_back(v);
	    a[v].push_back(u);
	    ad[u][v] = 1;
	    ad[v][u] = 1;
	}
	bfs1(s);
	bfs2(t);
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(ad[i][j] || (i==j))
	            continue;
	        int cmp = min(dist_s[i]+dist_t[j]+1,dist_t[i] + dist_s[j] +1);
	        if(cmp >= dist_s[t])
	        {
	            ans++;
	            ad[i][j] = 1;
	            ad[j][i] = 1;
	        }
	    }
	}
	cout<<ans;
	return 0;
}