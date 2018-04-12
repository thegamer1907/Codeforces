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
    ll a,b,ans=0;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a<=b)
        {
            ans+=(b/a);
            b%=a;
        }
        else
        {
            ans+=(a/b);
            a%=b;
        }
    }
    cout<<ans;
    return 0;
}