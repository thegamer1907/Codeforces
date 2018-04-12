/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        26 February 2018 (Monday)
* Time:        01:23
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


int prime(long long n,ll p)
{
	if(n==1)
	return 0;

	if(n==2)
	return 1;

	if(n%2==0)
	return 0;
	ll g = sqrt(n);
	for(long long i=3;i<=min(g,p);i+=2)
	{
	    if(n%i==0)
	    return 0;
	}
	return 1;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll p,y;
    cin>>p>>y;
    for(ll i = y;i>p;i--)
    {
    	if(prime(i,p))
    	{
    		cout<<i;
    		return 0;
    	}
    }
    cout<<-1;
    return 0;
}