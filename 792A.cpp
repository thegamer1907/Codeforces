#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b;
    for(ll i=0;i<n;i++)
     cin>>a[i];
    sort(a.begin(),a.end());
    ll diff = LLONG_MAX;
   ll c=1;
   for (ll i=0; i<n-1; i++)
   {
      if (abs(a[i+1] - a[i]) < diff)
      {
          diff=abs(a[i+1] - a[i]);
          c=1;
      }
      else if(abs(a[i+1] - a[i])== diff)
       c++;
    }
    cout<<diff<<" "<<c;
	return 0;
}