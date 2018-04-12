#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    string s;
    ll k;
    cin>>k;
    cin>>s;
    sort(s.begin(),s.end());
    ll sum=0;
    for(ll i=0;i<s.length();i++)
    {
        sum+=s[i]-'0';
    }
    if(sum>=k)
        cout<<0;
    else
    {
        //cout<<sum;
        int c=0;
        int tar = k-sum;
        for(ll i=0;i<s.length();i++)
        {
            int can = 9 - (s[i]-'0');
            tar-=can;
            c++;
            if(tar<=0)
            {
                cout<<c;
                return 0;
            }

        }
    }
}