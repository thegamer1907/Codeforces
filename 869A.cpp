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
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> vis(20000005,0);
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        vis[a[i]]=1;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        vis[b[i]]=1;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(vis[a[i]^a[j]])
                ans++;
        }
        for(ll j=0;j<n;j++)
        {
            if(vis[b[i]^b[j]])
                ans++;
        }
    }
    if(ans&1)
        cout<<"Koyomi";
    else
        cout<<"Karen";
    return 0;
}