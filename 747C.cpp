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
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n+1,-1);
    ll t,k,d;
    for(ll i=0;i<q;i++)
    {
        ll ans=0;
        cin>>t>>k>>d;
        ll c=0;
        for(ll j=1;j<=n;j++)
        {
            if(a[j]==-1 || a[j]<t)
            {
                c++;
                if(c==k)
                    break;
            }
        }
        if(c<k)
        {
            cout<<-1<<endl;
            continue;
        }
        c=0;
        for(ll j=1;j<=n;j++)
        {
            if(a[j]==-1 || a[j]<t)
            {
                a[j]=t+d;
                a[j]--;
                ans+=j;
                c++;
                if(c==k)
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}