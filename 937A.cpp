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





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int flag =0;
    set<int> s;
    int x;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	s.insert(x);
    }
    if(*s.begin() == 0)
    	cout<<s.size()-1;
    else
    	cout<<s.size();
    return 0;
}