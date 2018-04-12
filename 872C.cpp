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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1 || n==2 || n==3)
            cout<<-1<<endl;
        else
        {
            if(n%4==0)
                cout<<n/4<<endl;
            else if(n%4==1)
            {
                if((n/4)>=2)
                {
                    cout<<(n/4)-1<<endl;
                }
                else
                    cout<<-1<<endl;
            }
            else if(n%4==2)
            {
                cout<<(n/4)<<endl;
            }
            else
            {
                if((n/4)>=3)
                {
                    cout<<(n/4)-1<<endl;
                }
                else
                    cout<<-1<<endl;

            }
        }
    }
    return 0;
}