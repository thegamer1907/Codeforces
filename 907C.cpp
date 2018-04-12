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
    vector<int> fr(26,1);
    int n;
    cin>>n;
    int ans = 0;
    char fin = '>';
    for(int i=0;i<n;i++)
    {
        char t;
        string s;
        cin>>t>>s;
        if(fin=='>')
        {
            if(t=='!')
            {
                vector<int> te(26,0);
                vector<int> fe = fr;
                for(int i=0;i<s.length();i++)
                {
                    te[s[i]-'a']=1;
                }
                fill(all(fr),0);
                for(int i=0;i<26;i++)
                {
                    if(te[i] && fe[i])
                    {
                        fr[i]=1;
                    }
                }
            }
            else if(t=='.')
            {
                for(int i=0;i<s.length();i++)
                {
                    fr[s[i]-'a']=0;
                }
            }
            else
            {
                fr[s[0]-'a']=0;
            }
            int cnt =0;
            int pos = -1;
            for(int i=0;i<26;i++)
            {
                if(fr[i])
                {
                    pos=i;
                    cnt++;
                }
            }
            if(cnt==1)
            {
                fin = ('a' + pos);
            }
        }
        else
        {
            if(t=='!')
                ans++;
            else if(t=='?')
            {
                if(s[0]!=fin)
                    ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}