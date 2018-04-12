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
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(all(a));
    int fin = 1e9;
    for(int i=0;i<m;i++)
    {
        int j = i+n-1;
        if(j>=m)
            break;
        fin = min(fin,a[j]-a[i]);
    }
    cout<<fin;
    return 0;
}