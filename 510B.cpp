#include<bits/stdc++.h>

using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool vis[100][100];
char a[100][100];
int n,m,u,v;
int cycle;
void dfs(int x,int y,int i,int j,int c)
{
    if(x>n || x<1 || y>m || y<1)
        return ;
    if(a[x][y]!=c)
        return ;
    if(vis[x][y]==true)
    {
        cycle=1;
        return ;
    }
    vis[x][y]=true;
    for(int k=0;k<4;k++)
    {
        int nx = x+dx[k];
        int ny = y+dy[k];
        if(nx==i && ny==j)
            continue;
        dfs(nx,ny,x,y,c);
    }
    return ;
}

int main()
{
    cin>>n>>m;
    cycle=0;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
            vis[i][j]=false;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            vis[i][j]=false;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(!vis[i][j])
            {
                dfs(i,j,-1,-1,a[i][j]);
            }
        }
    }
    if(cycle==1)
        cout<<"Yes";
    else
        cout<<"No";
}