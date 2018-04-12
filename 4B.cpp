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
    int d,sum;
    cin>>d>>sum;
    vector<pair<int,int> > a(d);
    int can=0,done=0;
    vector<int> fin(d);
    for(int i=0;i<d;i++)
    {
        cin>>a[i].ff>>a[i].ss;
        //can+=(a[i].ss-a[i].ff);
        done+=a[i].ff;
        can+=a[i].ss;
        fin[i]=a[i].ff;
    }
    if(can<sum || done>sum)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        int req = sum-done;
        for(int i=0;i<d;i++)
        {
            if(req>(a[i].ss-a[i].ff))
            {
                fin[i] = a[i].ss;
                req-=(a[i].ss-a[i].ff);
            }
            else
            {
                fin[i]+=req;
                break;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<d;i++)
            cout<<fin[i]<<" ";
        //cout<<endl;
        //cout<<done<<endl;
        //cout<<can<<endl;
    }
    return 0;
}