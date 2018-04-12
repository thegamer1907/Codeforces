#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n==2)
        cout<<2;
    else if(n==3)
        cout<<6;
    else
    {
        if(n&1)
            cout<<n*(n-1)*(n-2);
        else
        {
            if(n%3==0)
                cout<<(n-1)*(n-2)*(n-3);
            else
                cout<<(n)*(n-1)*(n-3);
        }

        /*for(int i = n-2;i>=1;i--)
        {
            if(__gcd(pr,(ll)i)==1)
            {
                cout<<pr*i;
                return 0;
            }
        }*/
    }
    return 0;
}