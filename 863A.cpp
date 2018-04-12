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
    string s;
    cin>>s;
    int en=s.length()-1,cen=0;
    while(s[en]=='0' && en>=0)
        en--,cen++;
    int flag=1;
    for(int i=0,j=en;i<(en+1)/2;j--,i++)
    {
        if(s[i]!=s[j])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}