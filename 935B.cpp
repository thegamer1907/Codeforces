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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    if(s.length()==0)
    {
        cout<<0;
        return 0;
    }
    int x=0,y=0;
    if(s[0] == 'R')
        x+=1;
    else
        y+=1;
    int pos;
    if(y < x)
        pos = -1;
    else if(y > x)
        pos = 1;
    //cout<<pos<<endl;
    for(int i=1;i<s.length();i++)
    {
        if(s[i] == 'R')
            x+=1;
        else
            y+=1;
        if(y < x)
        {
            if(pos == 1)
            {
                ans++;
                pos = -1;
            }
        }
        else if(y > x)
        {
            if(pos == -1)
            {
                ans++;
                pos = 1;
            }
        }
    }
    //cout<<x<<" "<<y<<endl;
    cout<<ans;
    return 0;
}