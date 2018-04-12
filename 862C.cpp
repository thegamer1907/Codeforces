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
    int n,x,y=0;
    cin>>n>>x;
    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<x;
    }
    else if(n==2)
    {
        if(x==0)
            cout<<"NO";
        else
        {
            cout<<"YES"<<endl;
            cout<<"0 "<<x;
        }
    }
    else
    {
        vector<int> a;
        a.pb(1<<17);
        a.pb(1<<18);
        int y= a[0]^a[1];
        for(int i=0;i<n-3;i++)
        {
            a.pb(i);
            y^=i;
        }
        a.pb(y^x);
        sort(all(a));
        cout<<"YES"<<endl;
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
    }

    return 0;
}