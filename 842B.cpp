#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

using namespace std;

double fun(int x1,int y1)
{
    return sqrt(pow(x1,2)+pow(y1,2));
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r,d;
    cin>>r>>d;
    int n;
    cin>>n;
    int a,b,s;
    int ans=0;
    while(n--)
    {
        cin>>a>>b>>s;
        bool a1 = (r-d) <= fun(a,b)-s;
        bool a2 = (r) >= fun(a,b)+(s);
        if(a1&&a2)
            ans++;
    }
    cout<<ans;
}