#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll dp[10][1000005];

vector<ll> mem(1e7,-1);

ll compute(ll n)
{
    if(mem[n]!=-1)
        return mem[n];
    if(n < 10)
        return n;
    ll as = 1;
    while(n)
    {
        if(n%10)
            as*=(n%10);
        n/=10;
    }
    return compute(as);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(ll i=1;i<=1000004;i++)
    {
        mem[i] = compute(i);
    }
    int q;
    cin>>q;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=1000002;j++)
        {
            if(mem[j] == i)
                dp[i][j] = 1;

            dp[i][j]+=dp[i][j-1];
        }
    }
    int l,r,k;
    while(q--)
    {
        cin>>l>>r>>k;
        cout<<dp[k][r] - dp[k][l-1]<<endl;
    }
    return 0;
}