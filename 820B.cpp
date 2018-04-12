#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,b;
    cin>>n>>b;
    float x=180.0/n;
    float arr[n-2];
    for(ll i=0;i<n-2;i++)
    {
        arr[i]=(i+1)*x;
        arr[i]=abs(arr[i]-b);
    }
    float mini=arr[0];
    ll index=0;
    for(ll i=1;i<n-2;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            index=i;
        }
    }
    cout<<1<<" "<<n<<" "<<index+2;
    return 0;
}