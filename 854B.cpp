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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    if(k==0 || n==1 || n==k)
        cout<<0<<" "<<0;
    else
    {
        cout<<1<<" ";
	int a =n/3;
	int r = n%3;
	if(r>0)
        a++;
    if(k>=a)
        cout<<n-k;
    else
        cout<<2*k;
    }
    return 0;
}