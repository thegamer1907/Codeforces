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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    int visa[10] = {0};
    int visb[10] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        visa[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        visb[b[i]]++;
    }
    for(int i=1;i<=9;i++)
    {
        if(visa[i] && visb[i])
        {
            cout<<i;
            return 0;
        }
    }
    sort(all(a));
    sort(all(b));
    if(a[0]<b[0])
        cout<<a[0]<<b[0];
    else
        cout<<b[0]<<a[0];
    return 0;
}