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
    vector<int> a;
    for(int i=1;i<n;i+=2)
        a.pb(i);
    for(int i=0;i<n;i+=2)
        a.pb(i);
    for(int i=1;i<n;i+=2)
        a.pb(i);
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]+1<<" ";
    return 0;
}