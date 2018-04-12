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
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a = 1023;
    ll b = 0;
    ll n;
    cin>>n;
    char op;int x;
    for(ll i=0;i<n;i++)
    {
        cin>>op>>x;
        if(op == '&')
        {
            a&=x;
            b&=x;
        }
        else if(op == '|')
        {
            a|=x;
            b|=x;
        }
        else
        {
            a^=x;
            b^=x;
        }
    }
    ll or1 = 0,xor1=0;
    for(int i=0;i<10;i++)
    {
        int f = a%2;
        int s = b%2;
        a/=2;b/=2;
        if(f==1 && s==0)
            continue;
        else if(f==0 && s==1)
        {
            xor1+= (ll)pow(2,i);
        }
        else if(f==1 && s==1)
            or1+=(ll)pow(2,i);
        else
        {
            xor1+=(ll)pow(2,i);
            or1+=(ll)pow(2,i);
        }
    }
    cout<<2<<endl;
    cout<<"| "<<or1<<endl;
    cout<<"^ "<<xor1<<endl;
    return 0;
}