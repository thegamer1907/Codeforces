#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    if((n/k)&1)
        cout<<"YES";
    else
        cout<<"NO";
}