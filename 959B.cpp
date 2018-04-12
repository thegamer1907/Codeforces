/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 April 2018 (Wednesday)
* Time:        14:21
*/

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
    int n,k,m;
    cin>>n>>k>>m;
    vector<string> a(n+1);
    unordered_map<string,int> id;
    vector<int> mc(n+1);
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
    	cin>>mc[i];
    }
    for(int i=0;i<k;i++)
    {
    	int x,y;
    	cin>>x;
    	vector<int> tp(x);
    	ll ans = 1e12;
    	for(int j=0;j<x;j++)
    	{
    		cin>>tp[j];
    		ans = min(ans,(ll)mc[tp[j]]);
    	}
    	for(int j=0;j<x;j++)
    	{
    		id[a[tp[j]]] = ans;
    	}
    }
    string s;
    ll fin = 0;
    for(int i=0;i<m;i++)
    {
    	cin>>s;
    	fin+=id[s];
    }
    cout<<fin;
    return 0;
}