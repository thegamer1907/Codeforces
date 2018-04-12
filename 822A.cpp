#include<bits/stdc++.h>
#define ll long long int

using namespace std;



int main()
{
    ll a,b;
    cin>>a>>b;
    ll f = min(a,b);
    ll ans =1;
    for(ll i=f;i>=1;i--)
        ans*=i;
    cout<<ans;
}