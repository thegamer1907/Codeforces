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
    if(888888888888888888LL > 1e18)
        cout<<"dqd";
    int k;
    cin>>k;
    if(k > 36)
    {
        cout<<-1;
    }
    else
    {
        if(k==1)
            cout<<'6';
        else if(k&1)
        {
            for(int i=0;i<k/2;i++)
                cout<<'8';
            cout<<'0';
        }
        else
        {
            for(int i=0;i<k/2;i++)
                cout<<'8';
        }
    }

    return 0;
}