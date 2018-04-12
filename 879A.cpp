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
    int n,x;
    cin>>n;
    int ans;
    vector<pair<int,int> > p(n);
    cin>>ans;
    cin>>x;
    for(int i=1;i<n;i++)
    {
        cin>>p[i].ff>>p[i].ss;
        while(p[i].ff<=ans)
            p[i].ff+=p[i].ss;
        ans = p[i].ff;
    }
    cout<<ans;
    return 0;
}