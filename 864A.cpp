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
    int n,x;
    map<int,int> m;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
        s.insert(x);
    }
    if(s.size()==2)
    {
        set<int>::iterator it = s.begin();
        vector<int> f;
        for(;it!=s.end();it++)
            f.pb(*it);
        if(m[f[0]]==m[f[1]])
        {
            cout<<"YES"<<endl;
            cout<<f[0]<<" "<<f[1];
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}