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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int x,s = 1e9 + 2;
    map<int,vector<int> > m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s= min(s,x);
        m[x].pb(i);
    }
    int ans = 1e7;
    for(int i=0;i<m[s].size()-1;i++)
        ans = min(ans,m[s][i+1]-m[s][i]);
    cout<<ans;
    return 0;
}