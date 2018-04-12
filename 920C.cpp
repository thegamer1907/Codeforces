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
    vector<int> a(n+1);
    for(int i=0;i<n;i++)
        cin>>a[i];
    string s;
    cin>>s;
    s.pb('0');
    int pos = -1;
    for(int i=0;i<n;i++)
    {
        if(s[i] - '0')
        {
            if(pos==-1)
                pos = i;
        }
        else
        {
            if(pos==-1)
                continue;
            sort(a.begin() + pos,a.begin() + i+1);
            pos=-1;
        }
    }
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=(i+1))
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}