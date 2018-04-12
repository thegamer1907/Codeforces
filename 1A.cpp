#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll c1,c2;
    if(n%a==0)
        c1=n/a;
    else
        c1 = (n/a)+1;
    if(m%a==0)
        c2=m/a;
    else
        c2 = (m/a)+1;
    cout<<(c1*c2);
}