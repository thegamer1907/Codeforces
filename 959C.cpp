/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 April 2018 (Wednesday)
* Time:        21:40
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
    int n,n1;
    cin>>n;
    n1 = n;
    if(n < 6)
    	cout<<-1<<endl;
    else
    {
    	cout<<"1 2"<<endl;
    	cout<<"1 3"<<endl;
    	cout<<"1 4"<<endl;
    	n-=4;
    	for(int j=5;j<5+n;j++)
    	{
    		cout<<"2 "<<j<<endl;
    	}
    }
    for(int i=1;i<n1;i++)
    	cout<<i<<" "<<i+1<<endl;
    return 0;
}