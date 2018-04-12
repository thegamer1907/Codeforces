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
    string a,b;
    cin>>a>>b;
    vector<string> fin;
    for(int i=0;i<a.length();i++)
    {
        string te;
        for(int k=0;k<=i;k++)
            te.pb(a[k]);
        for(int j=0;j<b.length();j++)
        {
            for(int k=0;k<=j;k++)
                te.pb(b[k]);
            fin.pb(te);
            for(int k=0;k<=j;k++)
                te.pop_back();
        }
    }
    sort(all(fin));
    cout<<fin[0];
    return 0;
}