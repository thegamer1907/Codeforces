#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    if(n==1)
        cout<<0<<" "<<0;
    else if(m==1)
       cout<<(n*(n-1))/2<<" "<<((n*(n-1))/2);
    else
    {
        ll ma;
        ma = ((n-m+1)*(n-m))/2;
        ll sa = n/m;
        ll t = (n%m)*(((sa+1)*(sa))/2);
        t+= (m-(n%m))*(((sa)*(sa-1))/2);
        cout<<t<<" "<<ma;

    }
    return 0;
}