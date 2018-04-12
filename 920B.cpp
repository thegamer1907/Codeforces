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
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n;
        map<int,int> m;
        vector<pair<int,int> > a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>l>>r;
            m[i] = r;
            a[i] = mp(l,i);
        }
        sort(a.begin()+1,a.end());
        vector<int> ans(n+1,0);
        int ti = 0;
        for(int i=1;i<=n;i++)
        {
            if(ti < a[i].ff)
            {
                ti = a[i].ff;
            }
            if(m[a[i].ss] >= ti)
            {
                ans[a[i].ss] = ti;
                ti++;
            }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}