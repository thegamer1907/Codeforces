#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n,a,b,t,ob=0,ans=0;
    cin>>n>>a>>b;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            if(a>0)
                a--;
            else if(b>0)
            {
                b--;
                ob++;
            }
            else if(ob>0)
                {
                    ob--;
                }
            else
                ans++;
        }
        else
        {
            if(b>0)
                b--;
            else
                ans+=2;
        }
    }
    cout<<ans;
}