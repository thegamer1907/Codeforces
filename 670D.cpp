#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> a;
vector<ll> b;
ll n,k;

bool check(ll n)
{
    ll var=0;
    ll x=0;
    for(ll i=0;i<a.size();i++)
    {
        var+= max(x,((a[i]*n)-b[i]));
        if(var>k)
         return false;
    }
    return true;
}

int main() {
    ll t;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
     cin>>t,a.push_back(t);
    for(ll i=0;i<n;i++)
     cin>>t,b.push_back(t);
    ll l=0,r=3000;
    while(l<r-1)
    {
        ll mid = (l+r)/2;
        if(check(mid))
         l=mid;
        else
         r=mid;
    }
    cout<<l;
	return 0;
}