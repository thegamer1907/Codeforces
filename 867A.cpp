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
    int nouse;
    cin>>nouse;
    string s;
    cin>>s;
    int sf=0,fs=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            sf++;
        else if(s[i]=='F' && s[i+1]=='S')
            fs++;
    }
    if(sf>fs)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}