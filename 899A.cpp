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
    int n,x;
    cin>>n;
    int t=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            o++;
        else
            t++;
    }
    if(t && !o)
        cout<<"0";
    else if(t==0)
    {
        cout<<o/3;
    }
    else
    {
        int ans = min(t,o);
        t-=ans;
        o-=ans;
        cout<<(ans+(o/3));
    }
    return 0;
}