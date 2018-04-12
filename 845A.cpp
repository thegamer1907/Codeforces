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
    int n;
    cin>>n;
    n*=2;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int flag=1;
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        if(a[i]==a[j])
            flag=0;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}