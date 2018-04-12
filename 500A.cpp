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
    int n,t;
    cin>>n>>t;
    vector<int> a(n+1);
    for(int i=1;i<=n-1;i++)
        cin>>a[i];
    a[n]=0;
    int pos;
    if(pos==1 || pos==n)
    {
        cout<<"YES";
        return 0;
    }
    pos=1;
    while(pos!=t && pos!=n)
    {
        pos = pos+a[pos];
    }
    if(pos==t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}