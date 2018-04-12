#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

bool chk(int n)
{
    if(n <0)
      return true;
    if(sqrt(n) == floor(sqrt(n)))
        return false;
    else
        return true;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(all(a));
    for(int i=n-1;i>=0;i--)
    {
        if(chk(a[i]))
        {
            cout<<a[i];
            break;
        }
    }
    return 0;
}