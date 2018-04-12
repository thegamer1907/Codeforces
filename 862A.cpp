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
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(all(a));
    int j=0,ct=0;
    for(int i=0;i<x;i++)
    {
        if(find(all(a),i)==a.end())
            ct++;
    }
    if(find(all(a),x)!=a.end())
            ct++;
    cout<<ct;
    return 0;
}