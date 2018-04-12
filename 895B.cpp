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
    ll n,x,k;
    cin>>n>>x>>k;
    vector<ll> a(n);
    vector<ll> pre(n),suf(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(all(a));
    for(int i=0;i<n;i++)
    {
        if(a[i]%x==0)
            pre[i] = a[i]/x;
        else
            pre[i] = ((x - (a[i]%x))+a[i])/x;
        suf[i] = (a[i] - (a[i]%x))/x;
    }
    //int i,j;
    //i=0;j=0;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        ll se = k-1+pre[i];
        int pos1 = lower_bound(suf.begin()+i,suf.end(),se)-suf.begin();
        if(pos1!=suf.size())
        {
            int pos2 = upper_bound(suf.begin()+i,suf.end(),se)-suf.begin();
            pos2--;
            cnt+=(pos2-pos1+1);
            int pos3 = upper_bound(all(a),a[i])-a.begin();
            pos3--;
            //if(pos3!=i)
            //{
                if(pos3>pos2)
                    pos3 = pos2;
                if(pos1==i)
                    pos1++;
                if(pos1<=pos3)
                    cnt+=(pos3-pos1+1);
            //}
        }
    }
    cout<<cnt;
    return 0;
}

/*
4 2 2
1 3 5 7
*/