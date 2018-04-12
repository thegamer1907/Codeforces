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
    ll n,k,x,maxp=-1;
    cin>>n>>k;
    queue<ll> a;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        maxp = max(x,maxp);
        a.push(x);
    }
    //int win[501] = {0};
    if(k>=n)
    {
        cout<<maxp;
        return 0;
    }
    ll c = 1;ll y,cur;
    x = a.front();
    a.pop();
    y = a.front();
    a.pop();
    cur = max(x,y);
    while(1)
    {
        x = a.front();
        a.pop();
        if(x<cur)
        {
            c++;
            if(c==k)
            {
                break;
            }
            a.push(x);
        }
        else
        {
            c=1;
            a.push(cur);
            cur = x;
        }
    }
    cout<<cur;
    return 0;
}