#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define endl "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,f,k;
    cin>>a>>b>>f>>k;
    ll rem = b;
    ll ans=0;
    ll pos = a;
    if(b<f || (a-f)>b)
    {
        cout<<-1;
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        if(i==k-1)
        {
            if(rem<a)
            {
                ans++;
            }
            break;
        }
        if(pos==a)
        {
            rem-=f;
            if((a-f)*2>b)
            {
                cout<<-1;
                return 0;
            }
            if((a-f)*2>rem)
            {
                rem=b;ans++;
            }
            rem-=(a-f);
            pos=0;
        }
        else
        {
            rem-=(a-f);
            if((2*f)>b)
            {
                cout<<-1;
                return 0;
            }
            if(f*2>rem)
            {
                ans++;
                rem=b;
            }
            rem-=(f);
            pos=a;
        }
    }
    cout<<ans;
    return 0;
}