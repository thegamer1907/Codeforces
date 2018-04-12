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
    string s;
    cin>>s;
    if(s.length()<7)
    {
        cout<<"no";
        return 0;
    }
    int st = 0;
    while(s[st]=='0' && st<s.length())
        st++;
    if(st==s.length())
    {
        cout<<"no";
        return 0;
    }
    int ct=0;
    for(int j=st;j<s.length();j++)
    {
        if(s[j]=='0')
            ct++;
    }
    if(ct>=6)
    {
        cout<<"yes";
    }
    else
        cout<<"no";
    return 0;
}