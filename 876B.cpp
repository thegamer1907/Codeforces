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
    ll n,k,m;
    cin>>n>>k>>m;
    vector<ll> a(n);
    map<ll,ll> f;
    ll ans = -1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[a[i]%m]++;
        if(f[a[i]%m]>=k)
        {
            ans=a[i]%m;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes"<<endl;
        ll co=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%m==ans)
            {
                cout<<a[i]<<" ";
                co++;
            }
            if(co==k)
                break;
        }
    }
    return 0;
}