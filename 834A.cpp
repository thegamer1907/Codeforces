#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    char start,end1;
    cin>>start>>end1;
    ll n,i;
    cin>>n;
    n%=4;
    if(n==2||n==0)
    {
        cout<<"undefined";
        return 0;
    }
    char arr1[4]={'v','<','^','>'};
    for(i=0;i<4;i++)
    {
        if(arr1[i]==start)
            break;
    }
    ll t1=n,t2=n,cw=i,ccw=i;
    while(t1--)
    {
        if(cw==3)
            cw=0;
        else cw++;
    }
    while(t2--)
    {
        if(ccw==0)
            ccw=3;
        else ccw--;
    }
    if(arr1[cw]==end1&&arr1[ccw]!=end1)
    {
        cout<<"cw";
        return 0;
    }
    else if(arr1[ccw]==end1&&arr1[cw]!=end1)
    {
        cout<<"ccw";
        return 0;
    }
    else
        cout<<"undefined";
    return 0;
}