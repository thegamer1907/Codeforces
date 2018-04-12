#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

char a[5002][5002];
ll dp[5002][5002];
ll n,m;


int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int maxk = max(n,m);
    for(int i=1;i<=5001;i++)
    {
        for(int j=1;j<=5001;j++)
        {
            if(a[i][j]=='1')
            {
                dp[i][j] = (1+dp[i][j-1]+dp[i-1][j])-dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = (dp[i][j-1]+dp[i-1][j])-dp[i-1][j-1];
            }
        }
    }
    ll ans=0;
    ll finans = INT_MAX;
    for(ll k=2;k<=maxk;k++)
    {
        ans=0;
        for(int i=k;i<=n+k;i+=k)
        {
            for(int j=k;j<=m+k;j+=k)
            {
                ll ne = (dp[i][j]+dp[i-k][j-k]) - (dp[i-k][j]+dp[i][j-k]);
                ans+=min(k*k-ne,ne);
            }
        }
        finans= min(finans,ans);
    }
    cout<<finans;
}