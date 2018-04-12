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
    int n;
    cin>>n;
    n*=2;
    int fin = INT_MAX,tp;
    vector<int> a,b;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            tp=0;
            for(int h=0;h<n;h++)
                b[h]=a[h];
            b[i]=INT_MAX;
            b[j]=INT_MAX;
            sort(all(b));
            for(int k=0;k<n-3;k+=2)
            {
                tp+=(b[k+1]-b[k]);
            }
            fin = min(tp,fin);
        }
    }
    cout<<fin;
    return 0;
}