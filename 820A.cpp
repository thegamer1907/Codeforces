#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
  int c,v2,v1,a,l;
  cin>>c>>v2>>v1>>a>>l;
  ll ans=1;
  int v0=v2;
  while(v0<c)
  {
      ans++;
      if(v2+a<v1)
       v0+=(v2+a),v2+=a;
      else
       v0+=v1;
      v0-=l;
  }
  cout<<ans;
  return 0;
}