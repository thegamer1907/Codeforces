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
    vector<pair<int,int> > p(3);
    int x,y;
    for(int i=0;i<3;i++)
    {
        cin>>x>>y;
        p[i]=mp(x,y);
    }
    cout<<3<<endl;
    cout<<p[0].ff+p[2].ff-p[1].ff<<" "<<p[0].ss+p[2].ss-p[1].ss<<endl;
    cout<<p[1].ff+p[2].ff-p[0].ff<<" "<<p[1].ss+p[2].ss-p[0].ss<<endl;
    cout<<p[0].ff+p[1].ff-p[2].ff<<" "<<p[0].ss+p[1].ss-p[2].ss<<endl;

}