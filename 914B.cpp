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
    sort(all(a));
    int cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[n-1])
            cnt++;
    }
    if(cnt & 1)
        cout<<"Conan";
    else
    {
        map<int,int> m;
        for(int i=0;i<n;i++)
            m[a[i]]++;
        map<int,int>:: iterator it;
        bool flag = 0;
        for(it = m.begin();it!=m.end();it++)
        {
            if(it->ss & 1)
            {
                flag = 1;
            }
        }
        if(flag)
            cout<<"Conan";
        else
            cout<<"Agasa";
    }
    return 0;
}