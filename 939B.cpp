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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    if(n==0)
    {
        cout<<1<<" "<<0;
        return 0;
    }
    vector<ll> a(k);
    ll ty = 0;ll ans = n,pr = 0;
    for(ll i=0;i<k;i++)
    {
        cin>>a[i];
        if(n%a[i] < ans)
        {
            ty = i;
            ans = n%a[i];
            pr = n/a[i];
        }
    }
    cout<<ty+1<<" "<<pr;
    return 0;
}