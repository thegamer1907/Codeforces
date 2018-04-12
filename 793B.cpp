#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;
 
char a[1005][1005];
 
void shortest_path(int sa,int sb,int xy,int xx,int xn,int xm)
{
    std::vector<std::vector<bool> >vis;
    vis.resize(1005, std::vector<bool> (1005,false));
    priority_queue<pair<int,pair<pair<int,int>, char> >, vector<pair<int,pair<pair<int,int>, char> > >, greater<pair<int,pair<pair<int,int>, char> > > >  pq;
    vector<std::vector<int> >dist;
    dist.resize(1005, std::vector<int> (1005,INT_MAX));
    dist[sa][sb] = 0;
    pq.push(mp(dist[sa][sb],mp(mp(sa,sb),'S')));
    while (!pq.empty()) {
       pair<int,pair<pair<int,int>, char> > p;
        p = pq.top();
        pq.pop();
        int u,v;
        u = p.ss.ff.ff;
        v = p.ss.ff.ss;
        if(!vis[u][v])
        {
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                if((i==0 && j==0) || (i==1 && j==-1) || (i==1 && j==1) || (i==-1 && j==1) || (i==-1 && j==-1) || (u+i)>(xn-1) || (v+j)>(xm-1) || (u+i)<0 || (v+j)<0)
                {
                    continue;
                }
                if(vis[u+i][v+j])
                    continue;
                if(a[u+i][v+j]=='*')
                    continue;
                char d,pd;
                if(i==0 && j==1)
                    d='R';
                else if(i==0 && j==-1)
                    d='L';
                else if(i==1 && j==0)
                    d='D';
                else if(i==-1 && j==0)
                    d='U';
                pd = p.ss.ss;
                int w = pd==d?0:1;
                if(pd=='S')
                    w=0;
                if(dist[u+i][v+j]>dist[u][v]+w)
                {
                    dist[u+i][v+j] = dist[u][v]+w;
                    pq.push(mp(dist[u+i][v+j],mp(mp(u+i,v+j),d)));
                }
            }
        }
        vis[u][v] = true;
        }
    }
    if(dist[xy][xx]==INT_MAX || dist[xy][xx] > 2)
        cout<<"NO";
    else
        cout<<"YES";
}
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int sx,sy,ex,ey;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                sx=i;
                sy=j;
            }
            else if(a[i][j]=='T')
            {
                ex=i;
                ey=j;
            }
        }
    }
    shortest_path(sx,sy,ex,ey,n,m);
}