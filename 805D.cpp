#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<ll> twop(1000001);
void init()
{
    twop[0] = 1;
    for(int i=1;i<1000001;i++)
    {
        twop[i] = ((twop[i-1]%mod)*2)%mod;
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    init();
    string s;
    cin>>s;
    ll ans=0;
    ll cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
            cnt++;
        else
        {
            ans = ((ans%mod)+((twop[cnt]-1+mod)%mod))%mod;
        }
    }
    cout<<ans;
    return 0;
}