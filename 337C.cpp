#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000009
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


long long int power(long long int x,long long int y,long long int m)
{
    long long int res = 1;
    x = x % m;  // Mods
    while (y > 0)
      {
        if (y & 1)
            res = (res*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll m1=m;
    m-= (n/k)*(k-1) + (n%k);
    if(m<=0)
        cout<<m1%mod;
    else
    {
        ll ans = (n/k)*(k-1) + (n%k);
        //cout<<ans;
        //cout<<m<<endl;
        ans-=(m*(k-1));
        //cout<<ans;
        //cout<<m<<endl;;
        m--;
        ll ans1=0;
        ans1 = ((ans1%mod) + (power(2,m+2,mod)%mod))%mod;
        ans1 = (ans1-2+mod)%mod;
        ans1 = ((ans1%mod)*(k%mod))%mod;
        ans = ((ans%mod)+(ans1%mod))%mod;
        cout<<ans;
    }
    return 0;
}