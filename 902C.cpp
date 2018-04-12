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
    n++;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int in = -1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i] > 1 && a[i+1] > 1)
        {
            in = i;
            break;
        }
    }
    if(in==-1)
        cout<<"perfect";
    else
    {
        cout<<"ambiguous"<<endl;
        int cum=1;
        cout<<"0 ";
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<a[i];j++)
            {
                cout<<cum<<" ";
            }
            cum+=a[i];
        }
        cout<<endl;
        cum=1;
        cout<<"0 ";
        for(int i=1;i<n;i++)
        {
            if(i==(in+1))
            {
                for(int j=0;j<a[i]-1;j++)
                {
                    cout<<cum<<" ";
                }
                cout<<cum-1<<" ";
            }
            else
            {
                for(int j=0;j<a[i];j++)
                {
                    cout<<cum<<" ";
                }
            }
            cum+=a[i];
        }
        cout<<endl;
    }
    return 0;
}