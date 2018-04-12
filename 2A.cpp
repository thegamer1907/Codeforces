#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    map<string,int> mp;
    map<string,int> mp1;
    int n;
    cin>>n;
    string name;
    vector<pair<string,int> > data;
    vector<string> namel;
    int mx=INT_MIN;
    while(n--)
    {
        string s;
        int sc;
        cin>>s>>sc;
        data.push_back({s,sc});
        if(mp.find(s) == mp.end())
        {
            namel.push_back(s);
            mp[s]=sc;
            mp1[s]=0;
        }
        else
        {
            mp[s]+=sc;
        }
    }
    vector<string> mxn;
    for(int i=0;i<namel.size();i++)
    {
        if(mp[namel[i]]>mx)
            mx=mp[namel[i]];
    }
    for(int i=0;i<namel.size();i++)
    {
        if(mp[namel[i]]==mx)
            mxn.push_back(namel[i]);
    }
    if(mxn.size()==1)
    {
        cout<<mxn[0];
        return 0;
    }
    int sc;
    string s;
    for(int i=0;i<data.size();i++)
    {
        s=data[i].first;
        sc=data[i].second;
        mp1[s]+=sc;
        if(mp1[s]>=mx && mp[s]==mx)
        {
            cout<<s;
            return 0;
        }
    }
}