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
    int n,m,k,x;
    cin>>n>>m>>k;
    vector<int> a,b;
    m--;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a.pb(x);
    }
    cin>>x;
    for(int i=m+1;i<n;i++)
    {
        cin>>x;
        b.pb(x);
    }
    if(a.size())
        reverse(all(a));
    int fd=-1;
    for(int i=0;i<a.size();i++)
    {
        //cout<<"fe";
        if(a[i]<=k && a[i]!=0)
        {
            fd=i+1;
            break;
        }
    }
    int sd=-1;
    for(int i=0;i<b.size();i++)
    {
        //cout<<"fr";
        if(b[i]<=k && b[i]!=0)
        {
            //cout<<i<<" ";
            sd=i+1;
            break;
        }
    }
    //cout<<fd<<" ";
    if(fd!=-1 && sd!=-1)
    {
        cout<<min(fd*10,sd*10);
    }
    else if(sd==-1)
        cout<<fd*10;
    else
        cout<<sd*10;
    return 0;
}