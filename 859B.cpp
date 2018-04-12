#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

using namespace std;

vector<int> pf;

void init()
{
    for(int i=1;i<1000001;i++)
    {
        if(floor(sqrt(i))==sqrt(i))
            pf.pb(i);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    init();
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<4;
        return 0;
    }
    else if(n==2)
    {
        cout<<6;
        return 0;
    }
    else if(n==3)
    {
        cout<<8;
        return 0;
    }
    int pos1;
    int pos = upper_bound(all(pf),n)-pf.begin();
    pos1=pos;
    pos--;
    int sq = sqrt(pf[pos]);
    int diff = n-pf[pos];
    //cout<<sq<<" "<<diff<<" " ;
    if(diff%sq==0)
    {
        cout<<sq*4+((diff/sq)*2);
    }
    else
        cout<<sq*4+((diff/sq)*2)+2;
    return 0;
}