#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll n,t;
    cin>>n;
    map<ll,ll> mp;
    vector<pair<ll,ll> > a,ans;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back({t,i});
    }
    a.push_back({1e9+5,1e9+5});
    sort(a.begin(),a.end());
    //for(int i=0;i<n;i++)
        //cout<<a[i].first<<" "<<a[i].second<<endl;
    for(int i=0;i<n;i++)
    {
        while(mp[a[i].first]!=0)
        {
            a[i].first++;
        }
        mp[a[i].first]=1;
        a[i+1].first = max(a[i+1].first,a[i].first+1);
        ans.push_back({a[i].second,a[i].first});
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
        cout<<ans[i].second<<" ";
}