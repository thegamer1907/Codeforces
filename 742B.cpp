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
    ll n,x;
    cin>>n>>x;
    map<ll,ll> m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+= m[a[i]^x];
        if((a[i]^x)==a[i])
            ans--;
    }
    cout<<ans/2;
    return 0;
}