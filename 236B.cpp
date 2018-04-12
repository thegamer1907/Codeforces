#include<bits/stdc++.h>
#define ll long long int
#define mod 1073741824
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define MAX_SIZE 1000000
using namespace std;

vector<ll> div1(1e6+2);
vector<ll> fac[1000001];
vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);

void init(int N = MAX_SIZE)
{
	isprime[0] = isprime[1] = false ;
	for (long long int i=2; i<N ; i++)
	{
		if (isprime[i])
		{
			prime.push_back(i);
            fac[i].pb(i);
			SPF[i] = i;
		}
		for (long long int j=0;
			j < (int)prime.size() &&
			i*prime[j] < N && prime[j] <= SPF[i];
			j++)
		{
			isprime[i*prime[j]]=false;
            fac[i*prime[j]].pb(prime[j]);
			SPF[i*prime[j]] = prime[j] ;
		}
	}
}

void init1()
{

    ll cnt=1;
    ll fin=0;
    ll n1;
    for(int i=1;i<=1e6+1;++i)
    {
        n1 =i;
        cnt=1;
        for(int j=0;prime[j]*prime[j]<=n1;++j)
        {
            int te=0;
            while(n1%prime[j]==0)
            {
                te++;
                n1/=prime[j];
            }
            cnt*=(te+1);
        }
        if(n1>=2)
            cnt*=2;
        div1[i] = cnt;
    }
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    init1();
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = 0;
    for(int i = 1;i<=a;i++)
    {
        for(int j = 1;j<=b;j++)
        {
            for(int k = 1;k<=c;k++)
            {
                ans = ((ans) + (div1[i*j*k]%mod))%mod;
            }
        }
    }
    cout<<ans;
    return 0;
}