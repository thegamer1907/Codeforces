#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll der[10005];
void init(ll n = 10000)
{
    der[0] = 1;
    der[1] = 0;
    der[2] = 1;
    for (ll i=3; i<=n; ++i)
        der[i] = (i-1)*(der[i-1] + der[i-2]);
}


ll f[2001][2001];

void init1()
{
	f[1][0] = f[1][1] = 1;
	for (ll i = 2; i <= 2000; i++)
	{
		f[i][0] = f[i][i] = 1;
		for (ll j = 1; j < i; j++)
			f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]);
	}
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    init1();
    ll n,k;
    cin>>n>>k;
    ll ans = 0;
    for(int i=n-k;i<=n;i++)
    {
        ll te = f[n][i]*der[n-i];
        ans+=te;
    }
    cout<<ans<<endl;
    //cout<<f[1000][1]<<" "<<f[1000][2]<<" "<<f[1000][3]<<" "<<f[1000][4];
    return 0;
}