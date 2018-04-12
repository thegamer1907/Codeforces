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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        cout<<1;
    }
    else
    {
        cout<<2*(n-1)<<" "<<2<<endl;
        cout<<1<<" "<<2;
    }
    return 0;
}