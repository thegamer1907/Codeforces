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
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mx=0;
    for(int i=0;i<n;i++)
        mx=max(mx,a[i]);
    if(mx<=25)
        cout<<"0";
    else
        cout<<mx-25;
    return 0;
}