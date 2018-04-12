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
    double d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    printf("%.9Lf",(l-d)/(v1+v2));
    return 0;
}