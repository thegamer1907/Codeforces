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
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    map<char,int>:: iterator it;
    int a[4] = {0};
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->ff=='L')
            a[0] = it->ss;
        else if(it->ff=='R')
            a[1] = it->ss;
        else if(it->ff=='U')
            a[2] = it->ss;
        else if(it->ff=='D')
            a[3] = it->ss;
    }
    cout<<min(a[0],a[1])*2+min(a[2],a[3])*2;
    return 0;
}