#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    ll n,x,y;
    cin>>n;
    vector<pair<ll,ll> > a;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        a.pb({x,1});
        a.pb({y+1,-1});
    }
    sort(a.begin(),a.end());
    ll f=0;
    for(ll i=0;i<a.size();i++)
    {
        f+=a[i].second;
        if(f>=3)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}