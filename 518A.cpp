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
    string a,b;
    cin>>a>>b;
    for(int i=a.length()-1;i>=0;i--)
    {
        if(a[i]!='z')
        {
            a[i]++;
            break;
        }
        else
            a[i] = 'a';
    }
    int flag = 0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
            continue;
        else if(a[i] < b[i])
        {
            flag = 1;
            break;
        }
        else
            break;
    }
    if(flag)
        cout<<a;
    else
        cout<<"No such string";
    return 0;
}