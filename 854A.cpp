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
    int n;
    cin>>n;
    if(n&1)
    {
        cout<<(n/2)<<" "<<(n/2)+1;
    }
    else
    {
        if((n/2)%2==0)
            cout<<(n/2)-1<<" "<<(n/2)+1;
        else
            cout<<(n/2)-2<<" "<<(n/2)+2;
    }
    return 0;
}