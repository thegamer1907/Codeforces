/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 April 2018 (Wednesday)
* Time:        11:09
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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int cnt = 1,ans = 1;
    for(int i=1;i<n;i++)
    {
    	if(a[i] >= a[i-1])
    	{
    		cnt++;
    	}
    	else
    	{
    		ans = max(ans,cnt);
    		cnt = 1;
    	}
    }
    ans = max(ans,cnt);
    cout<<ans;
    return 0;
}