#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


ll chk(vector<ll> a,vector<ll> b)
{


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<m;i++)
        cin>>b[i];
    vector<ll> ans;
    for(int i=0;i<n;i++)
    {
        ll maxx = -1000000000000000000;
        for(int k=0;k<n;k++)
        {
            if(k==i)
                continue;
            for(int j=0;j<m;j++)
            {
                maxx = max(maxx,a[k]*b[j]);
            }
        }
        ans.pb(maxx);
    }
    sort(all(ans));
    cout<<ans[0];
    return 0;
}