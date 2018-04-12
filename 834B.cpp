#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    vector<int> b[26];
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        b[s[i]-'A'].push_back(i);
    }
    int vis[26] = {0};
    int op;
    for(int i=0;i<s.length();i++)
    {
        op=0;
        if(i == b[s[i]-'A'][b[s[i]-'A'].size()-1])
        {
            vis[s[i]-'A'] = 0;
            if(b[s[i]-'A'].size()==1)
                op=1;
        }
        else
            vis[s[i]-'A'] = 1;
        for(int i=0;i<26;i++)
            if(vis[i])
                op++;
        //cout<<op<<" ";
        if(op>k)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}