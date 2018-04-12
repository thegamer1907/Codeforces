#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<ll> len;

void init()
{
    len.pb(75);
    for(int i=1;i<100001;i++)
    {
        ll p = 2*len[i-1] + 34+32+2;
        len.pb(p);
    }
}

char first(ll k)
{
    string s = "What are you doing while sending \"";
    return s[k-1];
}

char second(ll k)
{
    string s = "\"? Are you busy? Will you send \"";
    return s[k-1];
}

char third(ll k)
{
    string s = "\"?";
    return s[k-1];
}



char cal(ll n,ll k)
{
    if(n==0)
    {
        string s = "What are you doing at the end of the world? Are you busy? Will you save us?";
        return s[k-1];
    }
    if(k<=34)
        first(k);
    else if(k > 34 && k <= (len[n-1]+34))
        cal(n-1,k-34);
    else if(k > (34+len[n-1]) && k <= (len[n-1]+34+32) )
        second(k-34-len[n-1]);
    else if(k > (len[n-1]+34+32) && k <= (2*len[n-1]+34+32))
        cal(n-1,k-(len[n-1]+34+32));
    else
        third(k-(2*len[n-1]+34+32));
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(len[n]<k)
            cout<<".";
        else
            cout<<cal(n,k);
    }
    return 0;
}