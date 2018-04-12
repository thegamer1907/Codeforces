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
    cin>>n;
    map<ll,ll> m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    sort(all(a));
    reverse(all(a));
    for(ll i=0;i<n;i++)
    {
        while(m[a[i]]!=0)
        {
            a[i]--;
            if(a[i]==0)
                break;
        }
        m[a[i]]=1;
        ans+=a[i];
    }
    cout<<ans;
    return 0;
}