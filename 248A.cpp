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
    int n;
    cin>>n;
    int l1 = 0,r1 = 0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        l1+=x;
        r1+=y;
    }
    cout<<min(l1,n-l1) + min(r1,n-r1);
    return 0;
}