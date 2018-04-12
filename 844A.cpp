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
    int n;
    string s;
    set<char> se;
    cin>>s;
    for(int i=0;i<s.length();i++)
        se.insert(s[i]);
    cin>>n;
    if(n>s.length())
        cout<<"impossible";
    else if(n>se.size())
     cout<<n-se.size();
    else
        cout<<0;
}