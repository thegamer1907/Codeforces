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
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n<=2)
        cout<<0;
    else
    {
        int cnt=0;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
                cnt++;
            else if(a[i]<a[i-1] && a[i]<a[i+1])
                cnt++;
        }
        cout<<cnt;
    }

    return 0;
}