/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        02 March 2018 (Friday)
* Time:        13:31
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
    string m[12];
    m[2] = "2";
    m[3] = "3";
    m[4] = "322";
    m[5] = "5";
    m[6] = "53";
    m[7] = "7";
    m[8] = "7222";
    m[9] = "7233";
    string ans;
    int n1;
    cin>>n1;
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
    	if(n[i] - '0' > 1)
    	{
    		ans+=m[n[i] - '0'];
    	}
    }
    sort(all(ans));
    reverse(all(ans));
    cout<<ans;
    return 0;
}