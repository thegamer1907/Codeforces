#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    vector<pair<ll,ll> > p;
    bool odd=false;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        p.push_back(make_pair(b[i],i));
    }
    sort(a.rbegin(),a.rend());
    sort(p.begin(),p.end());
    vector<ll> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[p[i].second] = a[i];
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
}