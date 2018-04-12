#include<bits/stdc++.h>
#define ll long long int
#define pi 3.141592653
//#define m 1000000007

using namespace std;


int main()
{
    int n;
    cin>>n;
    if(n & 1)
     cout<<(n/2);
    else
     cout<<(n/2)-1;
    
    return 0;
}