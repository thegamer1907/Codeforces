#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define endl "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s,m;
    cin>>n;
    cin>>s>>m;
    int vis[10] = {0};
    int vis1[10] = {0};
    for(int i=0;i<m.length();i++)
    {
        vis[m[i]-'0']++;
        vis1[m[i]-'0']++;
    }
    int ma=0;
    for(int i=0;i<s.length();i++)
    {
        int x = s[i]-'0';
        for(int j=x+1;j<10;j++)
        {
            if(vis[j]!=0)
            {
                vis[j]--;
                ma++;
                break;
            }
        }
    }
    int mi = 0;
    for(int i=0;i<s.length();i++)
    {
        int x = s[i]-'0';
        for(int j=x;j<10;j++)
        {
            if(vis1[j]!=0)
            {
                vis1[j]--;
                mi++;
                break;
            }
        }
    }
    cout<<n-mi<<endl;
    cout<<ma;
    return 0;
}