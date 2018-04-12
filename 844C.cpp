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
    vector<ll> a(n),b(n);
    map<ll,ll> m1,sm1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
        m1[a[i]] = i;
    }
    sort(all(a));
    for(int i=0;i<n;i++)
    {
        sm1[a[i]]=i;
    }
    int vis[n] = {0};
    vector<ll> ans[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i])
            continue;
        set<ll> s;
        ll ele = a[i];
        int j = i;
        while(1)
        {
            if(s.find(ele)==s.end())
            {
                //cout<<"inserting"<<ele<<endl;
                s.insert(ele);
                vis[j]=1;
                ele = b[j];
                j = sm1[ele];
            }
            else
                break;
        }
        //cout<<"broke with"<<ele<<endl;
        set<ll>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            ans[k].push_back(*it);
        }
        k++;
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        if(ans[i].size()<=0)
            continue;
        cout<<ans[i].size()<<" ";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<m1[ans[i][j]]+1<<" ";
        }
        cout<<endl;
    }
}