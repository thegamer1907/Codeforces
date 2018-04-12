#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll n,k;
	cin>>n>>k;
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	 {
	     cin>>a[i];
	 }
	 sort(a.begin(),a.end());
	 ll ans=0;
	 for(ll i=1;i<n;i++)
	 {
	     if((a[i]-a[0])%k!=0)
	     {
	         cout<<"-1";
	         return 0;
	     }
	     else
	     {
	         ans+= (a[i]-a[0])/k;
	     }
	 }
	 cout<<ans;
	return 0;
}