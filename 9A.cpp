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
    int x,y;
    cin>>x>>y;
    int cnt=0;
    for(int i=1;i<=6;i++)
    {
        if(i>=x && i>=y)
            cnt++;
    }
    int num = cnt,den = 6;
    int f = __gcd(num,den);
    num/=f;
    den/=f;
    cout<<num<<"/"<<den;
    return 0;
}