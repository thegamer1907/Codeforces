#include<bits/stdc++.h>
#define ll unsigned long long int
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
    ll l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    for(ll i=x;i<=y;i++)
    {
        if((i*k)>=l && (i*k)<=r)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}