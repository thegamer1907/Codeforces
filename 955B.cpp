/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        24 March 2018 (Saturday)
* Time:        10:29
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
    string s;
    cin>>s;
    int fr[26]  = {0};
    for(int i=0;i<s.length();i++)
    	fr[s[i] - 'a']++;
    vector<int> a;
    for(int i=0;i<26;i++)
    {
    	if(fr[i])
    	{
    		a.pb(fr[i]);
    	}
    }
    if(a.size()==1 || a.size() > 4)
    	cout<<"No";
    else
    {
    	if(a.size() == 2)
    	{
    		if(a[0] > 1 && a[1]>1)
    			cout<<"Yes";
    		else
    			cout<<"No";
    	}
    	else if(a.size()==3)
    	{
    		if(a[0]>1 || a[1]>1 || a[2]>1)
    			cout<<"Yes";
    		else
    			cout<<"No";
    	}
    	else
    	{
    		cout<<"Yes";
    	}
    }
    return 0;
}