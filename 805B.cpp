#include<bits/stdc++.h>
#define ll long long int
#define pi 3.141592653
//#define m 1000000007

using namespace std;


int main()
{
    int n,f=0;
    cin>>n;
    int p=1;
    if(n&1)
     n=n-1,f=1;
    for(int i=0;i<n;i+=2)
    {
        if(p==1)
        {
         cout<<"bb";
         p=2;
        }
        else
        {
         cout<<"aa";
         p=1;
        }
    }
    if(f==1)
    {
        if(p==2)
         cout<<"a";
        else
         cout<<"b";
    }
    return 0;
}