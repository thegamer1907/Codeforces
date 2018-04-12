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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    ll n,a,b;
    cin>>n>>a>>b;
    if(n%(__gcd(a,b)) != 0)
    {
        cout<<-1;
        return 0;
    }
    ll x=0,y=0;
    for(ll i=0;i<=n;i++)
    {
        if(((n-(i*a)))%b==0 && ((n-(i*a))) >= 0)
        {
            y = (n-(i*a))/b;
            x = i;
            break;
        }
    }
    //cout<<x<<" "<<y<<endl;
    if(x==0 && y==0)
    {
        cout<<-1;
        return 0;
    }
    vector<ll> ans(n);
    for(ll i=0;i<n;i++)
        ans[i] = i+1;
    for(ll i=0;i<x;i++)
    {
        int stpos = i*a;
        int endpos = stpos+a;
        rotate(ans.begin()+stpos,ans.begin()+stpos+1,ans.begin()+endpos);
    }
    for(ll i=0;i<y;i++)
    {
        int stpos = i*b + x*a;
        int endpos = stpos+b;
        rotate(ans.begin()+stpos,ans.begin()+stpos+1,ans.begin()+endpos);
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}