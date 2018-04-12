#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
#define endl '\n'
using namespace std;

int main()
{
	ll x=0;
	ll y=0;
	ll a;
	cin>>a;
	x+=a;
	cin>>a;
	x+=a;
	cin>>a;
	x+=a;
	cin>>a;
	y+=a;
	cin>>a;
	y+=a;
	cin>>a;
	y+=a;
	cin>>a;
	ll ans=0;
	ans+=x/5;
	if(x%5!=0)
	ans++;
	ans+=y/10;
	if(y%10!=0)
	ans++;
	if(ans<=a)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}