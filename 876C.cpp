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
    ll n;
    cin>>n;
    vector<ll> a;
    for(ll i=90;i>=1;i--)
    {
        if((n-i)<=0)
            continue;
        ll ch = n-i;
        ll te = ch;
        ll ans=0;
        while(te)
        {
            ans+=te%10;
            te/=10;
        }
        if(ans==i)
            a.pb(ch);
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;
    return 0;
}