#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n+1]={0};
    vector<ll> r(k);
    int pos=1,s=n;
    for(int i=0;i<k;i++)
    {
        cin>>r[i];
        r[i]%=s;
        s--;
        //cout<<r[i]<<"#"<<endl;
       for(int j=0;j<r[i];)
       {
           if(a[pos]==0)
            {
                j++;
                if(pos==n)
                 pos=1;
                else
                 pos++;
            }
        else
        {
            if(pos==n)
                pos=1;
            else
                pos++;
        }
       }
       while(a[pos]==-1)
       {
           if(pos==n)
                pos=1;
            else
                pos++;
       }
       cout<<pos<<" ";
       a[pos]=-1;
       while(a[pos]==-1)
       { 
        if(pos==n)
         pos=1;
       else
        pos++;
       }
    }
	return 0;
}