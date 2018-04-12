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
    char a[200005];
    char b[200005];
    ll dp1[200005];
    dp1[0] = 0;
    string s,s1;
    cin>>s>>s1;
    for(int i=1;i<s.length()+1;i++)
    {
        if((s[i-1]-'0')==1)
        {
            dp1[i] = 1+dp1[i-1];
        }
        else
            dp1[i] = dp1[i-1];
    }
    for(int i=1;i<s1.length()+1;i++)
        b[i] = s1[i-1];
    int endpos = s1.length()-s.length()+1;
    ll ans=0;
    //cout<<endpos<<endl;
    int slen = s.length();
    int seen=0;
    for(int i=1;i<endpos;i++)
    {
        seen++;
        int mpos = min(slen,i);
        int n1 = dp1[mpos] - dp1[0];
        if((b[i]-'0')==1)
        {
            ans+=(mpos-n1);
        }
        else
            ans+=(n1);
    }
    for(int i=endpos,j=1;i<=s1.length();i++,j++)
    {
        int mpos = min(slen,j+seen);
        int n1 = dp1[mpos] - dp1[j-1];
        int tot  = (mpos-j)+1;
        if((b[i]-'0')==1)
        {
            ans+=(tot-n1);
        }
        else
            ans+=(n1);
    }
    cout<<ans;
    return 0;
}