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
    int n,m;
    cin>>n>>m;
    int a[105][105];
    int mina[n];
    for(int i=0;i<n;i++)
    {
        mina[i]=501;
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            mina[i] = min(mina[i],a[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<m;i++)
    {
        int dif = a[0][i] - mina[0];
        for(int j=0;j<n;j++)
        {
            if((a[j][i]-mina[j])!=dif)
            {
                flag=0;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(!flag)
    {
        cout<<-1;
        return 0;
    }
    int ans1=0;
    for(int i=0;i<m;i++)
    {
        ans1+=(a[0][i]-mina[0]);
    }
    for(int i=0;i<n;i++)
        ans1+=mina[i];
    int minc[m];
    for(int i=0;i<m;i++)
    {
        minc[i] = 501;
        for(int j=0;j<n;j++)
        {
            minc[i] = min(minc[i],a[j][i]);
        }
    }
    int ans2=0;
    for(int i=0;i<n;i++)
    {
        ans2+=a[i][0]-minc[0];
    }
    for(int i=0;i<m;i++)
        ans2+=minc[i];
    //cout<<ans1<<" "<<ans2<<endl;
    if(ans1<ans2)
    {
        cout<<ans1<<endl;
        for(int i=0;i<mina[0];i++)
        {
            cout<<"row "<<1<<endl;
        }
        for(int i=0;i<m;i++)
        {
            int dif = a[0][i]-mina[0];
            for(int j=0;j<dif;j++)
            {
                cout<<"col "<<i+1<<endl;
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<mina[i];j++)
            {
                cout<<"row "<<i+1<<endl;
            }
        }
    }
    else
    {
        cout<<ans2<<endl;
        for(int i=0;i<minc[0];i++)
        {
            cout<<"col "<<1<<endl;
        }
        for(int i=0;i<n;i++)
        {
            int dif = a[i][0]-minc[0];
            for(int j=0;j<dif;j++)
            {
                cout<<"row "<<i+1<<endl;
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<minc[i];j++)
            {
                cout<<"col "<<i+1<<endl;
            }
        }
    }
    return 0;
}