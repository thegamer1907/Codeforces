#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

bool is(char c)
{
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':return true;
    }
    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin>>a;
    string b;
    int cnt=0;
    set<char> s;
    for(int i=0;i<a.length();i++)
    {
        if(is(a[i]))
        {
            cnt=0;
            b.pb(a[i]);
        }
        else
        {
            cnt++;
            if(cnt==3)
            {
                if(a[i]==a[i-1] && a[i]==a[i-2])
                {
                    cnt--;
                }
                else
                {
                    b.pb(' ');
                    cnt=1;
                }
            }
            b.pb(a[i]);
        }
    }
    cout<<b;
    return 0;
}