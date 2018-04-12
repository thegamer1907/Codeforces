#include<iostream>
#include<stdio.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&1)
    {
        n--;
        int k = n/2;
        cout<<k<<endl;
        for(int i=0;i<k-1;i++)
            cout<<2<<" ";
        cout<<3<<endl;
    }
    else
    {
        int k = n/2;
        cout<<k<<endl;
        for(int i=0;i<k;i++)
            cout<<2<<" ";
    }
}