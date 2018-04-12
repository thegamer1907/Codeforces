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
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<1<<" ";
    int last=n;
    int vis[n+1] = {0};
    for(int i=1;i<=n;i++)
    {
        vis[a[i]]=1;
        if(a[i]==last)
        {
            while(vis[last])
                last--;
        }
        cout<<(i+1)-(n-last)<<" ";
    }
    return 0;
}