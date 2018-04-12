#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll n,t=0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    sort(a.begin(),a.end());
    int i=0;
    if(t&1)
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                t-=a[i];
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<t;
        else
            cout<<0;
    }
    else
        cout<<t;
}