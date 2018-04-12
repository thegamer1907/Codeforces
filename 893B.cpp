#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

using namespace std;

vector<ll> fin;
void init()
{
    fin.pb(1);
    for(int i=1;i<9;i++)
    {
        int st = i;
        ll te = 0;
        for(int j=0;j<i+1;j++)
        {
            te+=(ll)pow(2,st);
            st++;
        }
        fin.pb(te);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    init();
    ll n;
    cin>>n;
    for(int i=fin.size()-1;i>=0;i--)
    {
        if(n%fin[i]==0)
        {
            cout<<fin[i];
            break;
        }
    }
}