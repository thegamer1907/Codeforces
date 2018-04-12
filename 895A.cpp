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
    int tot=0;
    int pre[n] = {0};
    int suf[n] = {0};
    vector<int> a(n);
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if((n&1) && s.size()==1)
    {
        cout<<a[0];
        return 0;
    }
    pre[0] = a[0];
    suf[n-1] = a[n-1];
    for(int i=1;i<n;i++)
    {
        pre[i] = pre[i-1]+a[i];
    }
    for(int i=n-2;i>=0;i--)
        suf[i] = suf[i+1] + a[i];
    int ans = pre[n-1];
    //cout<<pre[1]<<" "<<suf[2];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(j==(i+1))
                ans = min(ans,abs(pre[i]-suf[j]));
            else
                ans = min(ans,abs((pre[i]+suf[j])-(pre[j-1]-pre[i])));
        }
    }
    cout<<ans;
    return 0;
}