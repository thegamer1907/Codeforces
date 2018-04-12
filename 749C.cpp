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
    queue<int> d,r;
    ll n;
    cin>>n;
    char c;
    for(ll i=0;i<n;i++)
    {
        cin>>c;
        if(c=='D')
            d.push(i);
        else
            r.push(i);
    }
    while(!d.empty() && !r.empty())
    {
       // cout<<d.front()<<" "<<r.front()<<endl;
        if(d.front()<r.front())
        {
            int c = d.front();
            d.pop();
            d.push(c+n);
            r.pop();
        }
        else
        {
            int c = r.front();
            r.pop();
            r.push(c+n);
            d.pop();
        }
    }
    if(d.empty())
        cout<<"R";
    else
        cout<<"D";
}