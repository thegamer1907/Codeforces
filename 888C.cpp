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
    string s;
    cin>>s;
    vector<int> a[26];
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'a'].pb(i+1);
    }
    int ans = (s.length()/2)+1;
    for(int i=0;i<26;i++)
    {
        if(a[i].size()>1)
        {
            int temp = 0;
            temp = max(temp,a[i][0]);
            for(int j=1;j<a[i].size();j++)
            {
                temp = max(temp,a[i][j]-a[i][j-1]);
            }
            temp = max(temp,(int)s.length()-a[i][a[i].size()-1]+1);
            ans = min(ans,temp);
        }

    }
    cout<<ans;
    return 0;
}