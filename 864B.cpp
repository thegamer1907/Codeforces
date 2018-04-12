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
    cin>>n;
    string s;
    cin>>s;
    set<char> se;
    int fin = 0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            int si = se.size();
            fin = max(fin,si);
            se.clear();
        }
        else
            se.insert(s[i]);
    }
    int si = se.size();
    fin = max(fin,si);
    cout<<fin;
    return 0;
}