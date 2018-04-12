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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(k==1 || k>2)
    {
        sort(all(a));
        if(k==1)
            cout<<a[0];
        else
            cout<<a[n-1];
    }
    else
    {
        vector<ll> pre(n),suff(n);
        pre[0] = a[0];
        suff[n-1]=a[n-1];
        for(ll i=1;i<n;i++)
        {
            if(a[i]<pre[i-1])
                pre[i]=a[i];
            else
                pre[i]=pre[i-1];
        }
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]<suff[i+1])
                suff[i] = a[i];
            else
                suff[i] = suff[i+1];
        }
        ll ans = -1e12;
        for(ll i=0;i<=n-2;i++)
        {
            ans = max(ans,max(pre[i],suff[i+1]));
        }
        cout<<ans;
    }
    return 0;
}