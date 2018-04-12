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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            a[i][j]='.';
    }
    int ch=0;
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            if(ch)
                a[i][0]='#';
            else
                a[i][m-1]='#';
            ch=(ch+1)%2;
        }
        else
        {
            for(int j=0;j<m;j++)
                a[i][j]='#';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}