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
    string s;
    cin>>s;
    vector<ll> d(n);
    for(ll i=0;i<n;i++)
        cin>>d[i];
    map<ll,ll> m;
    ll pos=0;
    while(1)
    {
        m[pos]=1;
        if(s[pos]=='>')
        {
            if(pos+d[pos]>(n-1))
            {
                cout<<"FINITE";
                return 0;
            }
            if(m[pos+d[pos]]==1)
            {
                cout<<"INFINITE";
                return 0;
            }
            pos = pos+d[pos];
        }
        else
        {
            if(pos-d[pos]<0)
            {
                cout<<"FINITE";
                return 0;
            }
            if(m[pos+d[pos]]==1)
            {
                cout<<"INFINITE";
                return 0;
            }
            pos = pos-d[pos];
        }
    }
    return 0;
}