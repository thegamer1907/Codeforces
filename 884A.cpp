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
    int n,t,x;
    cin>>n>>t;
    int ans;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans+=(86400-x);
        if(ans>=t)
        {
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}