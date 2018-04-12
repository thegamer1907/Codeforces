#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a = (2*t1)+(s*v1);
    int b = (2*t2)+(s*v2);
    if(a<b)
        cout<<"First";
    else if(b<a)
        cout<<"Second";
    else
        cout<<"Friendship";
}