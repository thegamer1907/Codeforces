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
    int n,t;
    cin>>n>>t;
    string s1,s2;
    cin>>s1>>s2;
    if(t>n)
    {
        cout<<-1;
        return 0;
    }
    if(t==0)
    {
        if(s1==s2)
            cout<<s1;
        else
            cout<<-1;
        return 0;
    }
    int same=0;
    char ans[n];
    for(int i=0;i<n;i++)
        ans[i] = '*';
    for(int i=0;i<s1.length();i++)
        if(s1[i]==s2[i])
        {
            same++;
            ans[i] = s1[i];
        }
    int x = s1.length()-same;
    if(x==t)
    {
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
                continue;
            int vis[26] = {0};
            vis[s1[i]-'a']++;vis[s2[i]-'a']++;
            char a;
            for(int i=0;i<26;i++)
                if(!vis[i])
                {
                    a = (char)(i+'a');
                    break;
                }
            ans[i] = a;
        }
        for(int i=0;i<n;i++)
            cout<<ans[i];
    }
    else if(x<t)
    {
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
                continue;
            int vis[26] = {0};
            vis[s1[i]-'a']++;vis[s2[i]-'a']++;
            char a;
            for(int i=0;i<26;i++)
                if(!vis[i])
                {
                    a = (char)(i+'a');
                    break;
                }
            ans[i] = a;
        }
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                int vis[26] = {0};
                vis[s1[i]-'a']++;vis[s2[i]-'a']++;
                char a;
                for(int i=0;i<26;i++)
                    if(!vis[i])
                    {
                        a = (char)(i+'a');
                        break;
                    }
                ans[i] = a;
                ct++;
                if(ct==(t-x))
                    break;
            }
        }
        for(int i=0;i<n;i++)
            cout<<ans[i];
    }
    else
    {
        if(x>(2*t))
            cout<<-1;
        else
        {
            int a1 = (2*t)-x;
            //cout<<a1<<endl;
            if(a1!=0)
            {
                for(int i=0;i<n;i++)
                {
                    if(s1[i]==s2[i])
                        continue;
                    int vis[26] = {0};
                    vis[s1[i]-'a']++;vis[s2[i]-'a']++;
                    char a;
                    for(int i=0;i<26;i++)
                        if(!vis[i])
                        {
                            a = (char)(i+'a');
                            break;
                        }
                    ans[i] = a;
                    a1--;
                    if(a1==0)
                        break;
                }
            }
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(ans[i]=='*')
                {
                    if(!flag)
                    {
                        ans[i] = s1[i];
                        flag=1;
                    }
                    else
                    {
                        ans[i] = s2[i];
                        flag=0;
                    }
                }
            }
            for(int i=0;i<n;i++)
            cout<<ans[i];
        }
    }
    return 0;
}