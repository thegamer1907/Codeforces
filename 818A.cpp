#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n,k;
    cin>>n>>k;
    ll d = n/(2*(k+1));
    ll c = k*d;
    ll nw = n-(c+d);
    cout<<d<<" "<<c<<" "<<nw;
    return 0;
}