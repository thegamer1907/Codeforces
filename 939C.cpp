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
    int n;
    cin>>n;
    vector<int> a(2*n+2);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[n+i] = a[i];
    }
    vector<int> dp(2*n+2);
    dp[0] = 0;
    for(int i=1;i<=2*n;i++)
    {
        dp[i] = a[i] + dp[i-1];
    }
    int s,f;
    cin>>s>>f;
    f--;
    int ans = 0;
    int pr;
    //pr = (s-i+1+n)%n;
    for(int i=1;i<=n;i++)
    {
        if(s > 0 && f > 0)
        {
            if(dp[f] - dp[s-1] > ans)
            {
                ans = dp[f] - dp[s-1];
                pr = i;
            }
        }
        if(s<=0 && f > 0)
        {
            int st = (s+n)%n;
            st = st == 0 ? n : st;
            if(dp[f] + dp[n] - dp[st-1] > ans)
            {
                ans = dp[f] + dp[n] - dp[st-1];
                pr = i;
            }
        }
        if(s<=0 && f<=0)
        {
            int st = (s+n);
            int fg = (f+n);
            if(dp[fg]  - dp[st-1] > ans)
            {
                ans = dp[fg]  - dp[st-1];
                pr = i;
            }
        }
        s--;f--;
    }
    cout<<pr;
    return 0;
}