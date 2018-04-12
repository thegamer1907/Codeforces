#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


ll num(string s)
{
    ll x = stoll(s);
    return x;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n<=9)
        cout<<1;
    else
    {
        int ct=0;
        ll n1=n;
        while(n1)
        {
            ct++;
            n1/=10;
        }
        int fin=0;
        for(int i=1;i<=ct;i++)
        {
            string t;
            for(int j=0;j<ct-i;j++)
                t.pb('0');
            for(int j=0;j<i;j++)
                t.pb('1');
            do
            {
                if(num(t)<=n)
                    fin++;
            }while(next_permutation(all(t)));
        }
        cout<<fin;
    }
    return 0;
}