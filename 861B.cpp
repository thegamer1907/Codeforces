#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

/*
8 3
7 2
6 2
1 1
*/


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> fl[101];
    vector<pair<int,int> > p;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        p.pb(mp(x,y));
    }
    int ans=-1;
    for(int i=1;i<=100;i++)
    {
        int flag=1;
        for(int j=0;j<p.size();j++)
        {
            if((int)ceil((float)p[j].ff/i)!=p[j].ss)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            if(ans!=-1)
            {
                if((int)ceil((float)n/i)!=ans)
                {
                    cout<<-1;
                    return 0;
                }
            }
            else
            {
                ans = (int)ceil((float)n/i);
            }
        }
    }
    cout<<ans;
    return 0;
}