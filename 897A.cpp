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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--)
    {
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        l--;r--;
        for(int i=l;i<=r;i++)
        {
            if(s[i] == c1)
                s[i]=c2;
        }
    }
    cout<<s;
    return 0;
}