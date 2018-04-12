#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll a[505][505];

bool chk(int n)
{
    ll re=0;
    for(int i=1;i<=n;i++)
        re+=a[1][i];
    ll te=0,te1=0;
    for(int i=1;i<=n;i++)
    {
        te=0;
        for(int j=1;j<=n;j++)
        {
            te+=a[i][j];
            if(i+j==(n+1))
                te1+=a[i][j];
        }
        if(te!=re)
            return false;
    }
    //cout<<"reo";
    for(int i=1;i<=n;i++)
    {
        te=0;
        for(int j=1;j<=n;j++)
        {
            te+=a[j][i];
        }
        if(te!=re)
            return false;
    }
    te=0;
    for(int i=1;i<=n;i++)
        te+=a[i][i];
    if(te!=re || te1!=re)
        return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    ll zr=-1;
    ll er=-1;
    ll te=0;
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        te=0;
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            te+=a[i][j];
            if(a[i][j]==0)
                flag=0;
        }
        if(flag==0 &&zr==-1)
            zr=te;
        else
        {
            if(er==-1)
                er=te;
            else if(er!=te)
            {
                cout<<-1;
                return 0;
            }
        }
    }
    if(zr>=er)
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        te=0;
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==0)
            {
                a[i][j] = (er-zr);
            }
        }
    }
    if(chk(n))
        cout<<(er-zr);
    else
        cout<<-1;
    return 0;
}