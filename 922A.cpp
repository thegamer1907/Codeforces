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
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    if((n<m-1)||m==0||(m==1&&n>=m))
    {
        cout<<"No";
    }
    else
    {
        if((n-m-1)%2==0)
            cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}