#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define endl "\n"

using namespace std;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,k,ans=0;
    cin>>n>>k;
    vector<ll> a(n),b(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        b[i]=b[i-1]+a[i-1];
    }
    map<ll,ll> m;
    if(k==1)
    {
        for(int i=n;i>=0;i--)
        {
            ans+=m[b[i]+1];
            m[b[i]]++;
        }

    }
    else if(k==-1)
    {
        for(int i=n;i>=0;i--)
        {
            ans+=m[b[i]+1];
            ans+=m[b[i]-1];
            m[b[i]]++;
        }
    }
    else
    {
        ll cur=1;
        for(int i=n;i>=0;i--)
        {
            cur=1;
            while(cur<1e15)
            {
                ans+=m[b[i]+cur];
                cur*=k;
            }
            m[b[i]]++;
        }
    }
    cout<<ans;
    return 0;
}