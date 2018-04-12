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
    ll n,t,x,sum=0;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(x-sum==(n-1))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}