#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int n;
    cin>>n;
    int vis[n+1] = {0};
    int t;
    int ans=0,finans=0;;
    for(int i=0;i<2*n;i++)
    {
        cin>>t;
        if(vis[t])
        {
            ans--;
        }
        else
        {
            ans++;
            vis[t]=1;
        }
        finans=max(finans,ans);
    }
    cout<<finans;
}