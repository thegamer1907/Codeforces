#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

bool sub(string a,string b)
{
   int currpos=0,flag=1;
        for(int i=0;i<b.length();i++)
            {
            flag=0;
            for(int j=currpos;j<a.length();j++)
                {
                if(a[j]==b[i])
                    {
                    flag=1;
                    currpos=j+1;
                    break;
                }
            }
            if(flag!=1)
                {
               return false;
            }
        }
        if(flag)
            return true;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string t,p;
    cin>>t>>p;
    vector<int> a(t.length()+1);
    for(int i=1;i<=t.length();i++)
    {
        cin>>a[i];
    }
    if(t==p || (sub(t,p)==false))
    {
        cout<<0;
        return 0;
    }
    int st=0,en = t.length()-1;
    while(st<en-1)
    {
        int mid = (st+en)/2;
        int flag=1;
        string temp=t,te;
        for(int i=1;i<=mid;i++)
        {
            temp[a[i]-1] = '*';
        }
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]=='*')
                continue;
            else
                te.pb(temp[i]);
        }
        if(sub(te,p))
            st=mid;
        else
            en=mid;
    }
        string temp=t,te;
        for(int i=1;i<=st+1;i++)
        {
            temp[a[i]-1] = '*';
        }
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]=='*')
                continue;
            else
                te.pb(temp[i]);
        }
    if(sub(te,p))
        cout<<st+1<<endl;
    else
        cout<<st;
    return 0;
}