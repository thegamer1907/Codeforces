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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    if(n==1 && k==1)
        cout<<"yes";
    else if(n==1 && k==2)
        cout<<"yes";
    else if(k >=n || k > 100000)
        cout<<"no";
    else
    {
        int flag = 1;
        set<ll> s;
        for(int i=1;i<=k;i++)
        {
            ll x = n%i;
            if(s.count(x))
            {
                flag =0;
                break;
            }
            else
                s.insert(x);
        }
        if(flag)
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}