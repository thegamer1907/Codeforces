#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<ll> a(n);
    bool odd=false;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]&1)
            odd=true;
    }
    if(sum&1)
        cout<<"First";
    else if(odd==false)
        cout<<"Second";
    else
        cout<<"First";
}