#include <iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
	ll n,m;
	cin>>n;
	vector<ll>t1(n);
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
	 {
	     cin>>t1[i];
	     cin>>a[i];
	 }
	 cin>>m;
	vector<ll>b(m);
	vector<ll>t2(m);
	for(ll i=0;i<m;i++)
	{
	    cin>>b[i];
	    cin>>t2[i];
	}
	sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll ans;
    ans = b[0]-a[0];
    sort(t2.begin(),t2.end());
    sort(t1.rbegin(),t1.rend());
    if(t1[0]-t2[0]>ans)
     ans=t1[0]-t2[0];
     if(ans<0)
      cout<<"0"<<endl;
      else
      cout<<ans;
	return 0;
}