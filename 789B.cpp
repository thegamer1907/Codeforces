#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main() {
	// your code goes here
	ll b,q,l,m,in;
	cin>>b>>q>>l>>m;
	vector<ll> a;
	for(ll i=0;i<m;i++)
	 {cin>>in;
	 a.push_back(in);
	 }
	 sort(a.begin(),a.end());
	if(b==0)
	{
	    if(binary_search(a.begin(),a.end(),b,myfunction))
	     cout<<"0";
	    else
	     cout<<"inf";
	    return 0;
	}
	if(q==-1)
	{
	    if(abs(b)<=l)
	    {
	        if(binary_search(a.begin(),a.end(),b,myfunction) && binary_search(a.begin(),a.end(),(-1)*b,myfunction))
	         cout<<"0";
	        else
	         cout<<"inf";
	    }
	    else
	     cout<<"0";
	    return 0;
	    
	}
	else if(q==1)
	{
	    if(abs(b)<=l)
	    {
	        if(binary_search(a.begin(),a.end(),b,myfunction))
	         cout<<"0";
	        else
	         cout<<"inf";
	    }
	    else
	    {
	        cout<<"0";
	    }
	    return 0;
	}
	else if(q==0)
	{
	    if(b==0)
	    {
	        if(binary_search(a.begin(),a.end(),0,myfunction))
	         cout<<"0";
	        else
	         cout<<"inf";
	    }
	    else
	    {
	        if(abs(b)<=l)
	         {
	             if(binary_search(a.begin(),a.end(),b,myfunction) && binary_search(a.begin(),a.end(),0,myfunction) )
	              cout<<"0";
	             else if(binary_search(a.begin(),a.end(),b,myfunction))
	               cout<<"inf";
	             else if(binary_search(a.begin(),a.end(),0,myfunction))
	              cout<<"1";
	             else
	              cout<<"inf";
	         }
	         else
	         {
	             cout<<"0";
	         }
	    }
	    return 0;
	}
	vector<ll> g;
	ll temp=b;
	while(abs(temp)<=l)
	{
	    g.push_back(temp);
	    temp*=q;
	}
	ll count=0;
    for(ll i=0;i<g.size();i++)
    {
        if(binary_search(a.begin(),a.end(),g[i],myfunction))
         {}
        else
         count++;
    }
    cout<<count;

	return 0;
}