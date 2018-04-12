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
    vector<int> g1,g2;
    if(n==2)
    {
        cout<<"1"<<endl;
        cout<<"1 1"<<endl;
    }
    else if(n==3)
    {
        cout<<"0"<<endl;
        cout<<"1 3"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
            a[i] = i+1;
        if(n%4==0)
        {
            for(int i=0,j=n-1;i<n/2;i++,j--)
            {
                if(i%2==0)
                {
                    g1.pb(a[i]);
                    g1.pb(a[j]);
                }
                else
                {
                    g2.pb(a[i]);
                    g2.pb(a[j]);
                }
            }
            cout<<"0"<<endl;
            cout<<g1.size()<<" ";
            for(int i=0;i<g1.size();i++)
                cout<<g1[i]<<" ";
        }
        else if(n%2==0)
        {
            for(int i=0,j=n-1;i<n/2;i++,j--)
            {
                if(i%2==0)
                {
                    g1.pb(a[i]);
                    g1.pb(a[j]);
                }
                else
                {
                    g2.pb(a[i]);
                    g2.pb(a[j]);
                }
            }
            cout<<"1"<<endl;
            g1.pop_back();
            cout<<g1.size()<<" ";
            for(int i=0;i<g1.size();i++)
                cout<<g1[i]<<" ";
        }
        else if(n%2==1)
        {
            vector<int> a(n-1);
            for(int i=0;i<n-1;i++)
                a[i] = i+2;
            for(int i=0,j=n-2;i<(n-1)/2;i++,j--)
            {
                if(i%2==0)
                {
                    g1.pb(a[i]);
                    g1.pb(a[j]);
                }
                else
                {
                    g2.pb(a[i]);
                    g2.pb(a[j]);
                }
            }
            if((n-1)%4==0)
            {
                cout<<"1"<<endl;
                cout<<g1.size()<<" ";
                for(int i=0;i<g1.size();i++)
                    cout<<g1[i]<<" ";
            }
            else
            {
                cout<<"0"<<endl;
                g1.pop_back();
                g1.pb(1);
                cout<<g1.size()<<" ";
                for(int i=0;i<g1.size();i++)
                    cout<<g1[i]<<" ";
            }
        }
    }
    return 0;
}